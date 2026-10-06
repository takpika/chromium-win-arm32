// Copyright 2013 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "base/process/memory.h"

#include <windows.h>  // Must be in front of other Windows header files.

#include <new.h>
#include <psapi.h>
#include <stddef.h>
#include <stdlib.h>

#include <new>

#if defined(__clang__)
// This global constructor is trivial and non-racy (per being const).
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wglobal-constructors"
#endif

// malloc_unchecked is required to implement UncheckedMalloc properly.
// It's provided by allocator_shim_win.cc but since that's not always present,
// we provide a default that falls back to regular malloc.
typedef void* (*MallocFn)(size_t);
extern "C" void* (*const malloc_unchecked)(size_t);
extern "C" void* (*const malloc_default)(size_t) = &malloc;

#if defined(__clang__)
#pragma clang diagnostic pop  // -Wglobal-constructors
#endif

#if defined(_M_IX86)
#pragma comment(linker, "/alternatename:_malloc_unchecked=_malloc_default")
#elif defined(_M_X64) || defined(_M_ARM) || defined(_M_ARM64)
#pragma comment(linker, "/alternatename:malloc_unchecked=malloc_default")
#else
#error Unsupported platform
#endif

namespace base {

namespace {

#if defined(_LIBCPP_ABI_VCRUNTIME)
// Return a non-0 value to retry the allocation.
int ReleaseReservationOrTerminate(size_t size) {
  constexpr int kRetryAllocation = 1;
  if (internal::ReleaseAddressSpaceReservation())
    return kRetryAllocation;
  TerminateBecauseOutOfMemory(size);
  return 0;
}
#else
// Without vcruntime (libc++ over the Itanium C++ ABI's libc++abi, as in a
// *-windows-gnu build) std::set_new_handler() does not reach the CRT's
// _set_new_handler() slot; there the C++ new handler is the only one, and the
// allocator shim calls it (winheap_stubs_win.cc), as on Linux.
void ReleaseReservationOrTerminate() {
  if (internal::ReleaseAddressSpaceReservation())
    return;
  TerminateBecauseOutOfMemory(0);
}
#endif

}  // namespace

void EnableTerminationOnHeapCorruption() {
  // Ignore the result code. Supported on XP SP3 and Vista.
  HeapSetInformation(NULL, HeapEnableTerminationOnCorruption, NULL, 0);
}

void EnableTerminationOnOutOfMemory() {
  constexpr int kCallNewHandlerOnAllocationFailure = 1;
#if defined(_LIBCPP_ABI_VCRUNTIME)
  _set_new_handler(&ReleaseReservationOrTerminate);
#else
  std::set_new_handler(&ReleaseReservationOrTerminate);
#endif
  _set_new_mode(kCallNewHandlerOnAllocationFailure);
}

// Implemented using a weak symbol.
bool UncheckedMalloc(size_t size, void** result) {
  *result = malloc_unchecked(size);
  return *result != NULL;
}

void UncheckedFree(void* ptr) {
  free(ptr);
}

}  // namespace base
