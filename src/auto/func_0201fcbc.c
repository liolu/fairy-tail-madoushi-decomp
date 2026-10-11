#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02096a9c;

s32 func_0201fcbc(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_02096a9c + (arg0 * 0x30)));
}
