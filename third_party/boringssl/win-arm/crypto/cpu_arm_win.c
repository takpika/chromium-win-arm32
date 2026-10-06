/* Copyright (c) 2018, Google Inc.
 * Copyright (c) 2020, Arm Ltd.
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
 * SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN ACTION
 * OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF OR IN
 * CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE. */

/* win-arm32 |OPENSSL_cpuid_setup|: the 32-bit-ARM analogue of
 * cpu_aarch64_win.c. Placed in win-arm/ (not src/crypto/, where the sibling
 * cpu_*.c live); like them it is listed in crypto_sources and compiles to
 * nothing outside win-arm32 because of the #if guard below.
 * Unlike AArch64 (which always has NEON), a 32-bit ARM Windows part need not,
 * so gate ARMV7_NEON on PF_ARM_NEON as well. */

#include "../../src/crypto/internal.h"

#if defined(OPENSSL_ARM) && defined(OPENSSL_WINDOWS) && \
    !defined(OPENSSL_STATIC_ARMCAP)

#include <windows.h>

#include <openssl/arm_arch.h>

extern uint32_t OPENSSL_armcap_P;

void OPENSSL_cpuid_setup(void) {
  if (IsProcessorFeaturePresent(PF_ARM_NEON_INSTRUCTIONS_AVAILABLE)) {
    OPENSSL_armcap_P |= ARMV7_NEON;

    // Matching cpu_arm_linux.c (and upstream OpenSSL): only report the ARMv8
    // crypto extensions if NEON is present. This nesting is load-bearing on
    // arm32 (unlike AArch64 where NEON is architectural): every arm32 ARMv8
    // codepath these bits select -- aesv8/ghashv8 and the sha1/sha256 LARMv8
    // blocks -- uses NEON q-registers, so ARMV8_* with ARMV7_NEON clear would
    // dispatch a NEON instruction on a CPU with no NEON unit and SIGILL.
    if (IsProcessorFeaturePresent(PF_ARM_V8_CRYPTO_INSTRUCTIONS_AVAILABLE)) {
      // As on AArch64/Windows, one Windows feature bit covers the whole ARMv8
      // crypto extension set.
      OPENSSL_armcap_P |= ARMV8_AES;
      OPENSSL_armcap_P |= ARMV8_PMULL;
      OPENSSL_armcap_P |= ARMV8_SHA1;
      OPENSSL_armcap_P |= ARMV8_SHA256;
    }
  }
}

#endif  // OPENSSL_ARM && OPENSSL_WINDOWS && !OPENSSL_STATIC_ARMCAP
