#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a54fc;

void func_0200fe78(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_020a54fc + (arg0 * 4))) = arg1;
}
