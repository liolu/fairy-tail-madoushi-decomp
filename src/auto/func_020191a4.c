#include "m2c.h"

s32 func_02019058(s32, s32, M2C_UNK, M2C_UNK);      /* extern */
s32 func_02021208(M2C_UNK);                         /* extern */

s32 func_020191a4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    return (arg0 + func_02019058(arg0, func_02021208(0) + 0xAEC, 0x24, arg2)) - arg0;
}
