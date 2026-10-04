// Copyright 2017 The Crashpad Authors
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

#ifndef CRASHPAD_COMPAT_WIN_WINBASE_H_
#define CRASHPAD_COMPAT_WIN_WINBASE_H_

// include_next <winbase.h>
#if defined(__MINGW32__)
// llvm-mingw: chain to mingw's real <winbase.h> (the `../um/` form assumes the MSVC
// SDK layout and pulls MSVC/xwin headers that are not clang-parseable and,
// mixed into an otherwise-mingw TU, drag in un-no-op'd SAL/kernel annotation
// macros. Matches the existing compat/win/winternl.h + time.h fix.)
#include_next <winbase.h>
#else
#include <../um/winbase.h>
#endif

// 10.0.15063.0 SDK

#ifndef SYMBOLIC_LINK_FLAG_ALLOW_UNPRIVILEGED_CREATE
#define SYMBOLIC_LINK_FLAG_ALLOW_UNPRIVILEGED_CREATE (0x2)
#endif

#endif  // CRASHPAD_COMPAT_WIN_WINBASE_H_
