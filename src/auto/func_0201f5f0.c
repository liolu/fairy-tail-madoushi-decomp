#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020997c8;

s32 func_0201f5f0(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020997c8 + (arg0 * 0x70)));
}
