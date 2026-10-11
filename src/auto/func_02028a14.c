#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214e0f0;

void func_02028a14(s32 arg0) {
    M2C_FIELD(&data_0214e0f0, s32 *, 0xC) = arg0;
    M2C_FIELD(&data_0214e0f0, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0214e0f0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_0214e0f0, s32 *, 0x18) = 1;
}
