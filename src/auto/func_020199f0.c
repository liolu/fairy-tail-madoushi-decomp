#include "m2c.h"

M2C_UNK func_0201994c();                            /* extern */
extern M2C_UNK data_02142518;

void func_020199f0(s32 arg0) {
    if (M2C_FIELD(&data_02142518, s32 *, 0x4C) != 0) {
        return;
    }
    M2C_FIELD(&data_02142518, s32 *, 0x4C) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0201994c();
}
