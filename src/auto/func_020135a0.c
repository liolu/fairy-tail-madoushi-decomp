#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02140630;

s32 func_020135a0(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_02140630 + (arg0 * 4)));
}
