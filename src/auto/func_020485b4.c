
extern void func_020485c4();
// clang-format on

/* func_0200e4a0 from projets/rayman-rr/src/auto/func_0200e4a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_020485b4(void) {
    stmfd sp!, {r0, lr}
    bl func_020485c4
    ldmfd sp!, {r0, lr}
    bx lr
}
