// Copyright 2012 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "sandbox/win/src/service_resolver.h"

#include <stddef.h>

#include <memory>

#include "sandbox/win/src/sandbox_nt_util.h"
#include "sandbox/win/src/win_utils.h"

// win-arm32 service resolver. Structurally identical to service_resolver_64.cc
// (the common ServiceResolverThunk methods write an InternalThunk jump directly
// over the target entry; there is no x86-style trampoline / relative_jump), with
// two ARM-specific ntdll syscall-stub layouts recognized by IsAnyService:
//
//  (1) native Windows-on-Arm32 (e.g. Windows RT), disassembled from
//      System32\ntdll.dll on device:
//        mov.w r12, #svcid   f04f 0cXX
//        svc   #1            df01
//        bx    lr            4770
//
//  (2) WoW64 arm32-on-arm64 (e.g. Windows 11 ARM64), disassembled from
//      SysArm32\ntdll.dll on device:
//        push  {r0-r3}       b40f
//        mov.w r12, #svcid   f04f 0cXX
//        udf   #0xf8         def8      ; the WoW64 arm32->arm64 syscall trap
//        add   sp, #0x10     b004
//        bx    lr            4770
//
// Both stubs are position-independent and re-executable, so the interceptor can
// invoke the real service through the saved copy in ServiceFullThunk::original.
// On both device classes interception.cc selects Win8ResolverThunk
// (base::win::OSInfo::IsWowX86OnAMD64() is false for a kARM32 / kDisabled
// process), so Win8ResolverThunk::IsFunctionAService recognizes BOTH stubs; the
// x86-WoW64 variants (Wow64/Wow64W8/Wow64W10ResolverThunk) are unreachable on
// arm and are defined as NOTREACHED, exactly as service_resolver_64.cc does for
// Wow64ResolverThunk on arm64/x64.

namespace {
// pack(1): arm32 Thumb-2 instructions are 2-byte-granular, so these stub structs
// must overlay the byte stream with NO alignment padding (as service_resolver_32.cc
// does for x86). The natural-alignment pack(4) that service_resolver_64.cc uses is
// only correct for all-4-byte A64 stubs -- static_asserts below pin every field to
// its documented stub offset.
#pragma pack(push, 1)

const USHORT kSvc1 = 0xdf01;      // svc #1
const USHORT kBxLr = 0x4770;      // bx lr
const USHORT kPushR0R3 = 0xb40f;  // push {r0, r1, r2, r3}
const USHORT kUdfF8 = 0xdef8;     // udf #0xf8
const USHORT kAddSp16 = 0xb004;   // add sp, #0x10

// True if |op| (a 32-bit Thumb-2 instruction, first halfword in the low 16 bits)
// is a `mov.w r12, #imm` / `movw r12, #imm16` -- the service-number load that
// starts every arm32 ntdll syscall stub. Rd (hw2 bits 11:8) must be r12; the
// first halfword is either the MOV.W modified-immediate T2 form (0xF04F, Rn=PC)
// or the MOVW imm16 T3 form (0xF24x), so service numbers above 0xff also match.
bool IsMovwR12(ULONG op) {
  const USHORT hw1 = static_cast<USHORT>(op & 0xffff);
  const USHORT hw2 = static_cast<USHORT>(op >> 16);
  const bool rd_is_r12 = ((hw2 >> 8) & 0x0f) == 0x0c;
  const bool mov_w_t2 = (hw1 & 0xfbef) == 0xf04f;
  const bool movw_t3 = (hw1 & 0xfbf0) == 0xf240;
  return rd_is_r12 && (mov_w_t2 || movw_t3);
}

// Native WoA32 service stub (8 bytes).
struct ServiceEntry {
  ULONG mov_w_r12;  // f04f 0cXX  mov.w r12, #svcid
  USHORT svc;       // df01       svc #1
  USHORT bx_lr;     // 4770       bx lr
};

// WoW64 arm32-on-arm64 service stub (12 bytes).
struct ServiceEntryWow {
  USHORT push_r0_r3;  // b40f       push {r0-r3}
  ULONG mov_w_r12;    // f04f 0cXX  mov.w r12, #svcid
  USHORT udf_f8;      // def8       udf #0xf8
  USHORT add_sp_16;   // b004       add sp, #0x10
  USHORT bx_lr;       // 4770       bx lr
};

struct ServiceFullThunk {
  union {
    ServiceEntry original;
    ServiceEntryWow original_wow;
  };
};

// Pin each field to the exact byte offset of the device-disassembled stub, so a
// mispacked struct can never silently make IsService/IsServiceWow dead code.
static_assert(sizeof(ServiceEntry) == 8, "native arm32 stub is 8 bytes");
static_assert(offsetof(ServiceEntry, mov_w_r12) == 0, "");
static_assert(offsetof(ServiceEntry, svc) == 4, "");
static_assert(offsetof(ServiceEntry, bx_lr) == 6, "");
static_assert(sizeof(ServiceEntryWow) == 12, "wow64 arm32 stub is 12 bytes");
static_assert(offsetof(ServiceEntryWow, push_r0_r3) == 0, "");
static_assert(offsetof(ServiceEntryWow, mov_w_r12) == 2, "");
static_assert(offsetof(ServiceEntryWow, udf_f8) == 6, "");
static_assert(offsetof(ServiceEntryWow, add_sp_16) == 8, "");
static_assert(offsetof(ServiceEntryWow, bx_lr) == 10, "");

#pragma pack(pop)

bool IsService(const void* source) {
  const ServiceEntry* service = reinterpret_cast<const ServiceEntry*>(source);
  return IsMovwR12(service->mov_w_r12) && kSvc1 == service->svc &&
         kBxLr == service->bx_lr;
}

bool IsServiceWow(const void* source) {
  const ServiceEntryWow* service =
      reinterpret_cast<const ServiceEntryWow*>(source);
  return kPushR0R3 == service->push_r0_r3 && IsMovwR12(service->mov_w_r12) &&
         kUdfF8 == service->udf_f8 && kAddSp16 == service->add_sp_16 &&
         kBxLr == service->bx_lr;
}

bool IsAnyService(const void* source) {
  return IsService(source) || IsServiceWow(source);
}

// win-arm32: target_ comes from PEImage::GetProcAddress (ResolveTarget), which on
// ARMNT returns the odd Thumb-bit-set entry address (device-observed, e.g.
// NtQuerySystemTime @ 0x77E646F1). Every memory ACCESS to the stub -- reads for
// recognition and the in-place patch write -- must use the real even byte address;
// the Thumb bit is only for branching, not addressing. (arm64/x64 GetProcAddress
// returns even, which is why service_resolver_64.cc needs no mask.)
void* CodeAddr(void* p) {
  return reinterpret_cast<void*>(reinterpret_cast<uintptr_t>(p) &
                                 ~static_cast<uintptr_t>(1));
}

}  // namespace

namespace sandbox {

NTSTATUS ServiceResolverThunk::Setup(const void* target_module,
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

  size_t thunk_bytes = GetThunkSize();
  std::unique_ptr<char[]> thunk_buffer(new char[thunk_bytes]);
  ServiceFullThunk* thunk =
      reinterpret_cast<ServiceFullThunk*>(thunk_buffer.get());

  if (!IsFunctionAService(&thunk->original))
    return STATUS_OBJECT_NAME_COLLISION;

  ret = PerformPatch(thunk, thunk_storage);

  if (storage_used)
    *storage_used = thunk_bytes;

  return ret;
}

size_t ServiceResolverThunk::GetThunkSize() const {
  return sizeof(ServiceFullThunk);
}

NTSTATUS ServiceResolverThunk::CopyThunk(const void* target_module,
                                         const char* target_name,
                                         BYTE* thunk_storage,
                                         size_t storage_bytes,
                                         size_t* storage_used) {
  NTSTATUS ret = ResolveTarget(target_module, target_name, &target_);
  if (!NT_SUCCESS(ret))
    return ret;

  size_t thunk_bytes = GetThunkSize();
  if (storage_bytes < thunk_bytes)
    return STATUS_UNSUCCESSFUL;

  ServiceFullThunk* thunk = reinterpret_cast<ServiceFullThunk*>(thunk_storage);

  if (!IsFunctionAService(&thunk->original))
    return STATUS_OBJECT_NAME_COLLISION;

  if (storage_used)
    *storage_used = thunk_bytes;

  return ret;
}

bool ServiceResolverThunk::IsFunctionAService(void* local_thunk) const {
  ServiceFullThunk function_code;
  SIZE_T read;
  if (!::ReadProcessMemory(process_, CodeAddr(target_), &function_code,
                           sizeof(function_code), &read))
    return false;

  if (sizeof(function_code) != read)
    return false;

  if (!IsAnyService(&function_code))
    return false;

  // Save the verified code.
  memcpy(local_thunk, &function_code, sizeof(function_code));

  return true;
}

NTSTATUS ServiceResolverThunk::PerformPatch(void* local_thunk,
                                            void* remote_thunk) {
  // Patch the original code, replacing the syscall stub's entry with the
  // InternalThunk jump-to-interceptor (8 bytes: `ldr.w pc, [pc]` + literal).
  ServiceEntry local_service;
  DCHECK_NT(GetInternalThunkSize() <= sizeof(local_service));
  if (!SetInternalThunk(&local_service, sizeof(local_service), nullptr,
                        interceptor_))
    return STATUS_UNSUCCESSFUL;

  // Copy the local thunk buffer (with the saved original) to the child.
  SIZE_T actual;
  if (!::WriteProcessMemory(process_, remote_thunk, local_thunk,
                            sizeof(ServiceFullThunk), &actual))
    return STATUS_UNSUCCESSFUL;

  if (sizeof(ServiceFullThunk) != actual)
    return STATUS_UNSUCCESSFUL;

  // And now change the function to intercept, on the child.
  if (ntdll_base_) {
    // Running a unit test.
    if (!::WriteProcessMemory(process_, CodeAddr(target_), &local_service,
                              sizeof(local_service), &actual))
      return STATUS_UNSUCCESSFUL;
  } else {
    if (!WriteProtectedChildMemory(process_, CodeAddr(target_), &local_service,
                                   sizeof(local_service)))
      return STATUS_UNSUCCESSFUL;
  }

  return STATUS_SUCCESS;
}

bool Win8ResolverThunk::IsFunctionAService(void* local_thunk) const {
  // Both native and WoW64 arm32 Win8+ ntdll use the stubs recognized by
  // IsAnyService (there is no distinct Win8-only arm stub the way x86 has a
  // sysenter thunk). Self-contained, like every x86 subclass override --
  // ServiceResolverThunk::IsFunctionAService is private and cannot be delegated
  // to from a subclass.
  ServiceFullThunk function_code;
  SIZE_T read;
  if (!::ReadProcessMemory(process_, CodeAddr(target_), &function_code,
                           sizeof(function_code), &read))
    return false;

  if (sizeof(function_code) != read)
    return false;

  if (!IsAnyService(&function_code))
    return false;

  // Save the verified code.
  memcpy(local_thunk, &function_code, sizeof(function_code));

  return true;
}

bool Wow64ResolverThunk::IsFunctionAService(void* local_thunk) const {
  NOTREACHED_NT();
  return false;
}

bool Wow64W8ResolverThunk::IsFunctionAService(void* local_thunk) const {
  NOTREACHED_NT();
  return false;
}

bool Wow64W10ResolverThunk::IsFunctionAService(void* local_thunk) const {
  NOTREACHED_NT();
  return false;
}

}  // namespace sandbox
