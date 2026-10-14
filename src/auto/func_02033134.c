#include "engine.h"
#include "m2c.h"

extern s32 data_021578b0;

s32 func_02033134(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_021578b0;
    data_021578b0 = arg0;
    return temp_r2;
}
