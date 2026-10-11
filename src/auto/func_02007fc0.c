#include "m2c.h"

s32 func_020053bc(M2C_UNK, s32);                    /* extern */
M2C_UNK func_02007e0c(M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_02007fc0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 temp_r4;

    temp_r4 = func_020053bc(arg2, arg3);
    func_02007e0c(arg0, arg1, temp_r4, func_020053bc(arg2, arg4), arg5);
}
