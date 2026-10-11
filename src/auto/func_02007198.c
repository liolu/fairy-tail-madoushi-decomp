#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a1da8;

void func_02007198(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_020a1da8 + (arg0 * 8))) = arg1;
}
