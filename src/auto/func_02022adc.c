#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a02c0;

s32 func_02022adc(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_020a02c0 + (arg0 * 8)));
}
