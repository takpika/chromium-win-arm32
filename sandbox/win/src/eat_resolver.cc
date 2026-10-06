// Copyright 2006-2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "sandbox/win/src/eat_resolver.h"

#include <stddef.h>

#include "base/win/pe_image.h"
#include "sandbox/win/src/sandbox_nt_util.h"

namespace sandbox {

NTSTATUS EatResolverThunk::Setup(const void* target_module,
                                 const void* interceptor_module,
                                 const char* target_name,
                                 const char* interceptor_name,
                                 const void* interceptor_entry_point,
                                 void* thunk_storage,
                                 size_t storage_bytes,
                                 size_t* storage_used) {
  NTSTATUS ret =
      Init(target_module, interceptor_module, target_name, interceptor_name,
           interceptor_entry_point, thunk_storage, storage_bytes);
  if (!NT_SUCCESS(ret))
    return ret;

  if (!eat_entry_)
    return STATUS_INVALID_PARAMETER;

// win-arm32 (__arm__) uses the same g_originals model as the 64-bit targets, so
// it needs the two-thunk EAT layout too: thunk[0] is the return path (a bare jump
// to target_) that g_originals[id] points at, thunk[1] is the forward path to the
// interceptor. Without this, arm32 would take the x86 single-thunk #else branch
// and g_originals[id] would point at the FORWARD thunk -> the interceptor calling
// the "original" would re-enter itself (infinite recursion). See resolver_arm.cc.
#if defined(_WIN64) || defined(_M_ARM) || defined(__arm__)
  // We have two thunks, in order: the return path and the forward path.
  if (!SetInternalThunk(thunk_storage, storage_bytes, nullptr, target_))
    return STATUS_BUFFER_TOO_SMALL;

  size_t thunk_bytes = GetInternalThunkSize();
  storage_bytes -= thunk_bytes;
  thunk_storage = reinterpret_cast<char*>(thunk_storage) + thunk_bytes;
#endif

  if (!SetInternalThunk(thunk_storage, storage_bytes, target_, interceptor_))
    return STATUS_BUFFER_TOO_SMALL;

  AutoProtectMemory memory;
  ret = memory.ChangeProtection(eat_entry_, sizeof(DWORD), PAGE_READWRITE);
  if (!NT_SUCCESS(ret))
    return ret;

  // Perform the patch.
  DWORD forward_rva =
      static_cast<DWORD>(reinterpret_cast<uintptr_t>(thunk_storage)) -
      static_cast<DWORD>(reinterpret_cast<uintptr_t>(target_module));
#if defined(_M_ARM) || defined(__arm__)
  // win-arm32: the EAT stores function RVAs; a consumer resolves one to
  // module_base + rva and BLXes it. All win-arm32 code is Thumb, so the resolved
  // address (and hence the RVA) must carry bit0=1, or the caller switches to A32
  // and runs the forward thunk's `ldr.w pc,[pc]` as ARM. The forward thunk sits in
  // the 4-byte-aligned ThunkData, so bit0 is free to set. (Same Thumb-bit reason
  // as g_originals in interception.cc / the InternalThunk literal in resolver_arm.cc.)
  forward_rva |= 1u;
#endif
  *eat_entry_ = forward_rva;

  if (storage_used)
    *storage_used = GetThunkSize();

  return ret;
}

NTSTATUS EatResolverThunk::ResolveTarget(const void* module,
                                         const char* function_name,
                                         void** address) {
  DCHECK_NT(address);
  if (!module)
    return STATUS_INVALID_PARAMETER;

  base::win::PEImage pe(module);
  if (!pe.VerifyMagic())
    return STATUS_INVALID_IMAGE_FORMAT;

  eat_entry_ = pe.GetExportEntry(function_name);

  if (!eat_entry_)
    return STATUS_PROCEDURE_NOT_FOUND;

  *address = pe.RVAToAddr(*eat_entry_);

  return STATUS_SUCCESS;
}

size_t EatResolverThunk::GetThunkSize() const {
#if defined(_WIN64) || defined(_M_ARM) || defined(__arm__)
  // Two thunks (return path + forward path) on the g_originals-model targets.
  return GetInternalThunkSize() * 2;
#else
  return GetInternalThunkSize();
#endif
}

}  // namespace sandbox
