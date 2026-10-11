#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02056710(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_02056788
    cmn ip, r3, lsl #0x1
    bhs L_0205679c
L_02056724:
    orrs ip, r3, r1
    bmi L_02056754
    cmp r1, r3
    cmpeq r0, r2
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_02056740:
    mov r0, #0x0
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bx lr
L_02056754:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bne L_02056774
    mrs ip, cpsr
    orr ip, ip, #0x20000000
    msr cpsr_f, ip
    bxeq lr
L_02056774:
    cmp r3, r1
    cmpeq r2, r0
    movlo r0, #0x1
    movhs r0, #0x0
    bx lr
L_02056788:
    bne L_02056740
    cmp r0, #0x0
    bhi L_02056740
    cmn ip, r3, lsl #0x1
    blo L_02056724
L_0205679c:
    bne L_02056740
    cmp r2, #0x0
    bhi L_02056740
    b L_02056724
}
// clang-format on
