#include "m2c.h"

s32 func_020053bc(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0200fcd4(M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_0200fde8(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5) {
    func_0200fcd4(arg0, arg1, arg2, func_020053bc(arg3, arg4) + 8, arg5);
}
