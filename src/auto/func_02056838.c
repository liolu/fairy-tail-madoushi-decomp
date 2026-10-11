#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02056838(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_020568a0
    cmn ip, r3, lsl #0x1
    bhs L_020568b4
L_0205684c:
    orrs ip, r3, r1
    bmi L_0205687c
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_02056868:
    mov r0, #0x1
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_0205687c:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_020568a0:
    bne L_02056868
    cmp r0, #0x0
    bhi L_02056868
    cmn ip, r3, lsl #0x1
    blo L_0205684c
L_020568b4:
    bne L_02056868
    cmp r2, #0x0
    bhi L_02056868
    b L_0205684c
}
// clang-format on
