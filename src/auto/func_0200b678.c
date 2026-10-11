#include "m2c.h"
#include "engine.h"

void func_0200b678(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r0;

    temp_r0 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    M2C_FIELD(temp_r0, s32 *, 0x74) = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x78) = arg3;
}
