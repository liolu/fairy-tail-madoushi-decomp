#include "m2c.h"
#include "engine.h"

void func_0200b6d8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    void *temp_r1;

    temp_r1 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x70) + (arg2 * 8);
    M2C_FIELD(temp_r1, s32 *, 0x98) = arg3;
    M2C_FIELD(temp_r1, s32 *, 0x9C) = arg4;
}
