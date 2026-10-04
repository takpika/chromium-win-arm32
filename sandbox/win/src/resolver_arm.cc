// Copyright 2006-2010 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "sandbox/win/src/resolver.h"

#include <stddef.h>

// For placement new. This file must not depend on the CRT at runtime, but
// placement operator new is inline.
#include <new>

#include "sandbox/win/src/sandbox_nt_util.h"

namespace {

// win-arm32 counterpart of resolver_64.cc: the InternalThunk is just an
// unconditional jump to the interceptor. Like arm64/x64, win-arm32 uses the
// g_originals model (interceptors.h/interception.h route arm32 to the Target*64
// interceptors, which recover the original function from g_originals[] rather
// than receiving it as an argument), so the thunk does NOT thread
// original_function through -- the args in r0-r3 reach the interceptor unchanged.
// (The x86 resolver_32.cc instead inserts original_function as the interceptor's
// first stack argument; that stack-insertion trick is impossible on AAPCS, where
// the first four args are in registers and inserting one would require shifting a
// variable-length stack-argument block -- which is exactly why arm32 adopts the
// g_originals model instead.)
#pragma pack(push, 4)
struct InternalThunk {
  // 00: f8df f000   ldr.w pc, [pc]   ; PC reads as (this+4), so this loads the
  //                                  ; word at offset 4 into PC. LDR-to-PC does
  //                                  ; BXWritePC on ARMv7 -> it interworks on
  //                                  ; bit0, and Windows/Thumb function pointers
  //                                  ; carry bit0=1, so it enters the
  //                                  ; interceptor in Thumb state.
  // 04: interceptor_function          ; the (Thumb, bit0=1) interceptor address
  //
  // The 4-byte instruction + 4-byte literal require 4-byte alignment so that
  // Align(PC,4) lands exactly on interceptor_function; the thunk storage is
  // page-granular and this struct is pack(4), matching resolver_64.cc.
  InternalThunk() {
    ldr_pc_pc = kLdrPcPc;
    interceptor_function = 0;
  }
  // Encoding of `ldr.w pc, [pc, #0]` (T2 LDR literal, Rt=PC). Assembling it with
  // llvm-mingw armv7 clang and dumping the raw .text BYTES (llvm-objdump -s)
  // gives `df f8 00 f0`, i.e. a little-endian ULONG of 0xF000F8DF. (objdump's
  // disassembly prints the two HALFWORDS as "f8df f000"; byte-reversing that text
  // into a word yields the wrong 0x00f0dff8, whose low halfword 0xdff8 decodes as
  // `svc #0xf8` -- a trap, not a branch. The value below is the real byte stream.)
  static const ULONG kLdrPcPc = 0xF000F8DF;
  ULONG ldr_pc_pc;
  ULONG_PTR interceptor_function;
};
#pragma pack(pop)

}  // namespace

namespace sandbox {

size_t ResolverThunk::GetInternalThunkSize() const {
  return sizeof(InternalThunk);
}

bool ResolverThunk::SetInternalThunk(void* storage,
                                     size_t storage_bytes,
                                     const void* original_function,
                                     const void* interceptor) {
  if (storage_bytes < sizeof(InternalThunk))
    return false;

  InternalThunk* thunk = new (storage) InternalThunk;
  // Force the Thumb bit: `ldr pc, [literal]` does BXWritePC, which selects the
  // instruction set from bit0 of the loaded value. All win-arm32 code is Thumb,
  // so the interceptor must be entered with bit0=1. The interceptor address
  // (a &Target*64 function pointer) normally already carries bit0=1, but ORing
  // it in is idempotent there and repairs the address should it ever arrive as a
  // bit0-clear export RVA (ResolveInterceptor -> PEImage::GetProcAddress).
  thunk->interceptor_function = reinterpret_cast<ULONG_PTR>(interceptor) | 1u;

  return true;
}

NTSTATUS ResolverThunk::ResolveTarget(const void* module,
                                      const char* function_name,
                                      void** address) {
  // We don't support sidestep & co. (matches resolver_64.cc).
  return STATUS_NOT_IMPLEMENTED;
}

}  // namespace sandbox
