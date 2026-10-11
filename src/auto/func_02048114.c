#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02047e4c();
extern void func_02047e5c();
extern char data_0215a448[];
extern char data_0215a44c[];
extern char data_0215a454[];
extern char data_0215a478[];
// clang-format off
asm void func_02048114(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_0215a448
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mrs r2, cpsr
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov r1, sp
    mov sp, r0
    stmfd sp!, {r1, r2}
    bl func_02047e4c
    ldr r0, =data_0215a478
    ldr r1, =data_0215a44c
    ldr r1, [r1, #0x0]
    ldr ip, =data_0215a454
    ldr ip, [ip, #0x0]
    ldr lr, =0x2048164
    bx ip
    bl func_02047e5c
    ldmfd sp!, {r1, r2}
    mov sp, r1
    msr cpsr_fsxc, r2
    ldmfd sp!, {r3, pc}
}
// clang-format on
