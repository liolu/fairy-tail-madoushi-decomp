#include "m2c.h"

extern M2C_UNK data_0214df18;

void func_02024c98(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0214df18, s32 *, 0) == 0) {
        return;
    }
    if (arg0 == 0) {
        M2C_FIELD(&data_0214df18, s32 *, 0x2C) = arg1;
        return;
    }
    M2C_FIELD(&data_0214df18, s32 *, 0x30) = arg1;
}
