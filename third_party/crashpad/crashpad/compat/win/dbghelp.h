// Copyright 2026 The Crashpad Authors
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef CRASHPAD_COMPAT_WIN_DBGHELP_H_
#define CRASHPAD_COMPAT_WIN_DBGHELP_H_

// llvm-mingw's <dbghelp.h> (via psdk_inc/_dbg_common.h) stops at MINIDUMP_MISC_INFO_2
// (2013-era) and has no MINIDUMP_THREAD_NAME; crashpad's minidump writers use
// MINIDUMP_MISC_INFO_3/_4/_5, MINIDUMP_MISC_INFO_N, the MINIDUMP_MISC3_*/MISC4_/MISC5_ flags,
// XSTATE_CONFIG_FEATURE_MSC_INFO, and MINIDUMP_THREAD_NAME/_LIST. This compat header — sibling
// to the port's mingw fixups in compat/win/{time,winnt,winbase,winternl}.h, and only on
// crashpad's own -I include path (not a global toolchain override) — pulls mingw's real
// dbghelp.h and appends the missing declarations VERBATIM from the Windows SDK
// minidumpapiset.h.
//
// A minidump is a serialized on-disk format, so these MUST match the SDK layout exactly:
// the SDK defines them inside <pshpack4.h> (#pragma pack(4)), so this header does the same
// with the #pragma pack(push, 4)/pack(pop) those headers expand to (written directly: clang's
// -Wpragma-pack reports a pack state changed by an #include from a non-system header),
// and the static_asserts below pin every size to the SDK's (the values crashpad's own
// cross-platform reader in compat/non_win/dbghelp.h expects: those structs are
// __attribute__((packed, aligned(4)))). Appending at default alignment would 8-align
// XSTATE_CONFIG_FEATURE_MSC_INFO / RVA64 and emit MINIDUMP_MISC_INFO_5=1368 and
// MINIDUMP_THREAD_NAME=16 into the .dmp — unreadable by WinDbg and by crashpad itself.
#if defined(__MINGW32__)
#include_next <dbghelp.h>
#else
#include <../um/dbghelp.h>
#endif

#if defined(__MINGW32__) && !defined(MINIDUMP_MISC_INFO_5)

#pragma pack(push, 4)

#ifndef MINIDUMP_MISC3_PROCESS_INTEGRITY
#define MINIDUMP_MISC3_PROCESS_INTEGRITY 0x00000010
#endif
#ifndef MINIDUMP_MISC3_PROCESS_EXECUTE_FLAGS
#define MINIDUMP_MISC3_PROCESS_EXECUTE_FLAGS 0x00000020
#endif
#ifndef MINIDUMP_MISC3_TIMEZONE
#define MINIDUMP_MISC3_TIMEZONE 0x00000040
#endif
#ifndef MINIDUMP_MISC3_PROTECTED_PROCESS
#define MINIDUMP_MISC3_PROTECTED_PROCESS 0x00000080
#endif
#ifndef MINIDUMP_MISC4_BUILDSTRING
#define MINIDUMP_MISC4_BUILDSTRING 0x00000100
#endif
#ifndef MINIDUMP_MISC5_PROCESS_COOKIE
#define MINIDUMP_MISC5_PROCESS_COOKIE 0x00000200
#endif

typedef struct _XSTATE_CONFIG_FEATURE_MSC_INFO {
  ULONG32 SizeOfInfo;
  ULONG32 ContextSize;
  ULONG64 EnabledFeatures;
  XSTATE_FEATURE Features[MAXIMUM_XSTATE_FEATURES];
} XSTATE_CONFIG_FEATURE_MSC_INFO, *PXSTATE_CONFIG_FEATURE_MSC_INFO;

typedef struct _MINIDUMP_MISC_INFO_3 {
  ULONG32 SizeOfInfo;
  ULONG32 Flags1;
  ULONG32 ProcessId;
  ULONG32 ProcessCreateTime;
  ULONG32 ProcessUserTime;
  ULONG32 ProcessKernelTime;
  ULONG32 ProcessorMaxMhz;
  ULONG32 ProcessorCurrentMhz;
  ULONG32 ProcessorMhzLimit;
  ULONG32 ProcessorMaxIdleState;
  ULONG32 ProcessorCurrentIdleState;
  ULONG32 ProcessIntegrityLevel;
  ULONG32 ProcessExecuteFlags;
  ULONG32 ProtectedProcess;
  ULONG32 TimeZoneId;
  TIME_ZONE_INFORMATION TimeZone;
} MINIDUMP_MISC_INFO_3, *PMINIDUMP_MISC_INFO_3;

typedef struct _MINIDUMP_MISC_INFO_4 {
  ULONG32 SizeOfInfo;
  ULONG32 Flags1;
  ULONG32 ProcessId;
  ULONG32 ProcessCreateTime;
  ULONG32 ProcessUserTime;
  ULONG32 ProcessKernelTime;
  ULONG32 ProcessorMaxMhz;
  ULONG32 ProcessorCurrentMhz;
  ULONG32 ProcessorMhzLimit;
  ULONG32 ProcessorMaxIdleState;
  ULONG32 ProcessorCurrentIdleState;
  ULONG32 ProcessIntegrityLevel;
  ULONG32 ProcessExecuteFlags;
  ULONG32 ProtectedProcess;
  ULONG32 TimeZoneId;
  TIME_ZONE_INFORMATION TimeZone;
  WCHAR BuildString[MAX_PATH];
  WCHAR DbgBldStr[40];
} MINIDUMP_MISC_INFO_4, *PMINIDUMP_MISC_INFO_4;

typedef struct _MINIDUMP_MISC_INFO_5 {
  ULONG32 SizeOfInfo;
  ULONG32 Flags1;
  ULONG32 ProcessId;
  ULONG32 ProcessCreateTime;
  ULONG32 ProcessUserTime;
  ULONG32 ProcessKernelTime;
  ULONG32 ProcessorMaxMhz;
  ULONG32 ProcessorCurrentMhz;
  ULONG32 ProcessorMhzLimit;
  ULONG32 ProcessorMaxIdleState;
  ULONG32 ProcessorCurrentIdleState;
  ULONG32 ProcessIntegrityLevel;
  ULONG32 ProcessExecuteFlags;
  ULONG32 ProtectedProcess;
  ULONG32 TimeZoneId;
  TIME_ZONE_INFORMATION TimeZone;
  WCHAR BuildString[MAX_PATH];
  WCHAR DbgBldStr[40];
  XSTATE_CONFIG_FEATURE_MSC_INFO XStateData;
  ULONG32 ProcessCookie;
} MINIDUMP_MISC_INFO_5, *PMINIDUMP_MISC_INFO_5;

typedef MINIDUMP_MISC_INFO_5 MINIDUMP_MISC_INFO_N;
typedef MINIDUMP_MISC_INFO_N* PMINIDUMP_MISC_INFO_N;

typedef struct _MINIDUMP_THREAD_NAME {
  ULONG ThreadId;
  RVA64 RvaOfThreadName;
} MINIDUMP_THREAD_NAME, *PMINIDUMP_THREAD_NAME;

typedef struct _MINIDUMP_THREAD_NAME_LIST {
  ULONG NumberOfThreadNames;
  MINIDUMP_THREAD_NAME ThreadNames[0];
} MINIDUMP_THREAD_NAME_LIST, *PMINIDUMP_THREAD_NAME_LIST;

#pragma pack(pop)

// Pin the serialized layout to the Windows SDK's (pack(4)) values. These are the exact sizes
// crashpad's cross-platform reader (compat/non_win/dbghelp.h, packed/aligned(4)) parses, so
// equality here IS on-the-wire correctness. A default-alignment regression (e.g. MISC_INFO_5
// == 1368, THREAD_NAME == 16) fails to compile here rather than silently corrupting dumps.
#ifdef __cplusplus
static_assert(sizeof(XSTATE_CONFIG_FEATURE_MSC_INFO) == 528, "XSTATE_CONFIG size");
static_assert(__alignof(XSTATE_CONFIG_FEATURE_MSC_INFO) == 4, "XSTATE_CONFIG align");
static_assert(sizeof(MINIDUMP_MISC_INFO_3) == 232, "MISC_INFO_3 size");
static_assert(sizeof(MINIDUMP_MISC_INFO_4) == 832, "MISC_INFO_4 size");
static_assert(sizeof(MINIDUMP_MISC_INFO_5) == 1364, "MISC_INFO_5 size");
static_assert(sizeof(MINIDUMP_THREAD_NAME) == 12, "THREAD_NAME size");
#endif

#endif  // __MINGW32__ && !MINIDUMP_MISC_INFO_5

#endif  // CRASHPAD_COMPAT_WIN_DBGHELP_H_
