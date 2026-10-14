#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214e120;

void func_0202998c(s32 arg0) {
    if ((u32) (M2C_FIELD(&data_0214e120, s32 *, 0x18) - 9) > 1U) {
        M2C_FIELD(&data_0214e120, s32 *, 0x1C) = arg0;
    }
}
