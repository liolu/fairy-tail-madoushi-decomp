#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02096aa0;

s32 func_0201fcd4(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_02096aa0 + (arg0 * 0x30)));
}
