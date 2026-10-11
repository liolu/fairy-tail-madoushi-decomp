#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02048b18(void) {
    mrs r0, cpsr
    and r0, r0, #0x80
    bx lr
}
// clang-format on
