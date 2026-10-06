// Copyright 2015 The Crashpad Authors
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

#ifndef CRASHPAD_COMPAT_WIN_TIME_H_
#define CRASHPAD_COMPAT_WIN_TIME_H_

// This is intended to be roughly equivalent to #include_next.
// The original `#include <../ucrt/time.h>` assumes the MSVC Windows SDK layout
// (um/ and ucrt/ siblings) and pulls the MSVC-style UCRT header, which is not
// clang/mingw-parseable (SAL macros, angled <corecrt_wtime.h>). Under the
// llvm-mingw toolchain use the real #include_next to get mingw's system time.h.
#if defined(__MINGW32__)
#include_next <time.h>
#else
#include <../ucrt/time.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif

struct tm* gmtime_r(const time_t* timep, struct tm* result);

struct tm* localtime_r(const time_t* timep, struct tm* result);

const char* strptime(const char* buf, const char* format, struct tm* tm);

time_t timegm(struct tm* tm);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif  // CRASHPAD_COMPAT_WIN_TIME_H_
