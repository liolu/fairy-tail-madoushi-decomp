#include "m2c.h"
#include "engine.h"

void func_0200b6b0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, u8 arg5) {
    void *temp_r2;

    temp_r2 = M2C_FIELD((arg0 + (arg1 * 4)), s32 *, 0x70) + (arg2 * 3);
    M2C_FIELD(temp_r2, s8 *, 0x8C) = (s8) arg3;
    M2C_FIELD(temp_r2, u8 *, 0x8D) = arg4;
    M2C_FIELD(temp_r2, u8 *, 0x8E) = arg5;
}
