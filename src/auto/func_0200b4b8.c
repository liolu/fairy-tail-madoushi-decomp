#include "engine.h"
#include "m2c.h"

void func_0200b4b8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0                         = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    M2C_FIELD(temp_r0, s32 *, 0x2C) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x30) = arg3;
}
