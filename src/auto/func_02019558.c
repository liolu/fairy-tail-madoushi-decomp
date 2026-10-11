#include "m2c.h"

extern M2C_UNK data_02142518;

void func_02019558(s32 arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(&data_02142518, s32 *, 0x4C) == 0) {
        return;
    }
    if (arg0 == 0) {
        M2C_FIELD(&data_02142518, s32 *, 0x60) = arg1;
        M2C_FIELD(&data_02142518, s32 *, 0x64) = arg2;
        return;
    }
    M2C_FIELD(&data_02142518, s32 *, 0x68) = arg1;
    M2C_FIELD(&data_02142518, s32 *, 0x6C) = arg2;
}
