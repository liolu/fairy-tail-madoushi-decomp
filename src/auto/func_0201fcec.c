#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02096aa4;

s32 func_0201fcec(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_02096aa4 + (arg0 * 0x30)));
}
