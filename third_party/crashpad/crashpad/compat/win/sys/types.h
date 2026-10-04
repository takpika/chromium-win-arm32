// Copyright 2014 The Crashpad Authors
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

#ifndef CRASHPAD_COMPAT_WIN_SYS_TYPES_H_
#define CRASHPAD_COMPAT_WIN_SYS_TYPES_H_

// This is intended to be roughly equivalent to #include_next.
// The original `#include <../ucrt/sys/types.h>` assumes the MSVC Windows SDK layout
// (um/ and ucrt/ siblings) and pulls xwin's ucrt sys/types.h, which sets _OFF_T_DEFINED +
// _off_t but NOT the mingw-only _off64_t; mingw's own <stdio.h> then fails "unknown type
// name '_off64_t'". Under llvm-mingw use the real #include_next to get mingw's system
// sys/types.h -> full <_mingw_off_t.h> (_off_t/_off64_t/off32_t/off64_t/off_t). Same idiom as
// the sibling compat/win/time.h / winternl.h / winnt.h / winbase.h.
#if defined(__MINGW32__)
#include_next <sys/types.h>
#else
#include <../ucrt/sys/types.h>
#endif

#include <stdint.h>

#endif  // CRASHPAD_COMPAT_WIN_SYS_TYPES_H_
