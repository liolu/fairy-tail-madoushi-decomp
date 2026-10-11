#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02047588(void) {
    mov ip, #0x0
    mov r1, #0x0
L_02047590:
    mov r0, #0x0
L_02047594:
    orr r2, r1, r0
    mcr p15, 0, ip, c7, c10, 4
    mcr p15, 0, r2, c7, c14, 2
    add r0, r0, #0x20
    cmp r0, #0x400
    blt L_02047594
    add r1, r1, #0x40000000
    cmp r1, #0x0
    bne L_02047590
    bx lr
}
// clang-format on
