#include "m2c.h"
#include "engine.h"

extern void *data_021578b0;

void func_020335dc(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_021578b0, s32 *, 0x90) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
