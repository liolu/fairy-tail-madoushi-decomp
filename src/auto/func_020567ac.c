#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020567ac(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02056814
    cmn ip, r3, lsl #0x1
    bhs L_02056828
L_020567c0:
    orrs ip, r3, r1
    bmi L_020567f0
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_020567dc:
    mov r0, #0x0
    mrs ip, cpsr
    bic ip, ip, #0x40000000
    msr cpsr_f, ip
    bx lr
L_020567f0:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
L_02056814:
    bne L_020567dc
    cmp r0, #0x0
    bhi L_020567dc
    cmn ip, r3, lsl #0x1
    blo L_020567c0
L_02056828:
    bne L_020567dc
    cmp r2, #0x0
    bhi L_020567dc
    b L_020567c0
}
// clang-format on
