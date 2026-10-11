#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a2520;

void func_02003f24(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = (arg0 * 0x18) + (s32) &data_020a2520;
    M2C_FIELD(temp_r2, s32 *, 8) = arg1;
    M2C_FIELD(temp_r2, s32 *, 0xC) = 0;
}
