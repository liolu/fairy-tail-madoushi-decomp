#include "m2c.h"

M2C_UNK func_0203fc7c(s32, s32, M2C_UNK);           /* extern */
s32 func_02040d9c();                                /* extern */
extern s32 data_0215a0a0;

void func_0203fc30(s32 arg0, s32 arg1, M2C_UNK arg2) {
    if (func_02040d9c() != 0) {
        M2C_FIELD((data_0215a0a0 + ((arg0 - 1) * 4)), s32 *, 0x14E8) = arg1;
    }
    func_0203fc7c(arg0, arg1, arg2);
}
