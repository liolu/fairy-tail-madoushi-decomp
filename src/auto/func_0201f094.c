#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0207c9a8;

s32 func_0201f094(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0207c9a8 + (arg0 * 4)));
}
