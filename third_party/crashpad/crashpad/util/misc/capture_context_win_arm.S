// Copyright 2026 The Crashpad Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// win-arm32 implementation of crashpad::CaptureContext(CONTEXT*).
//
// Follows the upstream in-tree ARM body capture_context_linux.S
// (#elif defined(__arm__)) in APPROACH — atomic stm of r1-r12, an MRS for the
// PSR, and every scratch register saved-and-restored so the function modifies no
// register (capture_context.h contract) — re-pointed at the Windows ARM _CONTEXT
// offsets (winnt.h): ContextFlags@0x00, R0@0x04..R12@0x34, Sp@0x38, Lr@0x3c,
// Pc@0x40, Cpsr@0x44, Fpscr@0x48, D[0..31]@0x50. It DIFFERS from the linux body
// where Windows requires it (each justified inline below): Thumb (not ARM)
// encodings; Pc = `bic lr,#1` (Windows stores an even instruction address, with
// Thumb-ness in Cpsr.T) whereas linux stores raw LR to both; a masked+synthesized
// well-formed Cpsr (User|Thumb + defined flags) instead of a raw CPSR; a push/pop
// scratch (r2) for the Cpsr mask; and full FP/NEON capture (Fpscr + D0..D31, like
// the x86/x64 siblings). The original R0 cannot be recovered (it held the incoming
// CONTEXT* argument).

  .syntax unified
  .thumb
  .text
  .globl _ZN8crashpad14CaptureContextEP8_CONTEXT
  .thumb_func
_ZN8crashpad14CaptureContextEP8_CONTEXT:
  // r0 = CONTEXT* context. The original r0 can't be recovered (it is the arg).
  str r0, [r0, #0x04]        // R0 (holds the incoming pointer)

  // Atomically save r1-r12 into CONTEXT.R1..R12 (contiguous from 0x08).
  add r0, r0, #0x08
  stm r0, {r1-r12}
  sub r0, r0, #0x08

  // Control registers. sp cannot be an stm/str source in Thumb-2; route via r1
  // (its captured value is already stored and is restored at the end).
  mov r1, sp
  str r1, [r0, #0x38]        // Sp (unchanged: leaf function)
  str lr, [r0, #0x3c]        // Lr (the raw r14 value, Thumb bit included)

  // Pc = the resume (return) address. CONTEXT.Pc is consumed as an instruction
  // address (context_wrappers.h ProgramCounterFromCONTEXT / unwind-entry
  // lookup / symbolization), so clear the Thumb state bit; Thumb-ness is
  // recorded in Cpsr.T, set below.
  bic r1, lr, #1
  str r1, [r0, #0x40]        // Pc

  // Cpsr. In Thumb, `mrs Rd,APSR` and `mrs Rd,CPSR` assemble to the identical
  // encoding (f3ef 8x00 = MRS Rd,CPSR); a User-mode MRS returns the defined flag
  // bits NZCVQ (31:27) + GE (19:16), while the mode M[4:0], IT, and E bits are
  // ARCHITECTURALLY UNKNOWN. crashpad does NOT read this field — it is passed
  // through verbatim into MinidumpContextARM.cpsr and decoded by external minidump
  // debuggers, which DO interpret M[4:0]/T. Leaving the unknown bits (e.g. M=0, an
  // invalid ARM mode) would ship a malformed CPSR. So mask to the defined flag
  // bits and set a well-formed User+Thumb PSR: keep NZCVQ|GE (0xF80F0000), then set
  // M[4:0]=User(0x10) | T(0x20). r2 is used as a scratch for the (non-encodable)
  // mask and push/pop-preserved so the "modifies no registers" contract still
  // holds; the push is after the Sp capture above, so Sp is unaffected.
  push {r2}
  mrs r1, APSR
  movw r2, #0x0000
  movt r2, #0xF80F           // r2 = 0xF80F0000 = NZCVQ | GE (the defined APSR bits)
  and r1, r1, r2             // drop the architecturally-unknown mode/IT/E bits
  orr r1, r1, #0x30          // M[4:0] = User (0x10) | T = Thumb (0x20)
  pop {r2}
  str r1, [r0, #0x44]        // Cpsr

  // Floating-point / NEON: Fpscr@0x48 and the D0..D31 bank@0x50 (CONTEXT.D[32],
  // 32x8 bytes). Windows-on-ARM32 mandates VFPv3-D32 + NEON as the platform
  // baseline (the WoW64 AArch32 CONTEXT reserves all 32 D-regs), so `vstm
  // {d16-d31}` is architecturally valid on every supported win-arm32 device — this
  // is NOT the D16-only hazard of a bare-metal Cortex-A. Capturing FP is why
  // CaptureContext exists ("as accurately and completely as possible",
  // capture_context.h) and matches the x86/x64 siblings; the vmrs/vstm are pure
  // reads, so no integer/vector register is modified (contract preserved). r1 is
  // used as the store cursor and restored below.
  vmrs r1, FPSCR
  str r1, [r0, #0x48]        // Fpscr
  add r1, r0, #0x50
  vstmia r1!, {d0-d15}       // D0..D15  -> 0x50..0xD0
  vstmia r1, {d16-d31}       // D16..D31 -> 0xD0..0x150

  // ContextFlags = CONTEXT_ARM (0x00200000) | CONTROL (0x1) | INTEGER (0x2) |
  //                FLOATING_POINT (0x4)  ==  0x00200007
  movw r1, #0x0007
  movt r1, #0x0020
  str r1, [r0, #0x00]

  // Restore r1 from its captured slot so no register is modified on return.
  ldr r1, [r0, #0x08]
  bx lr
