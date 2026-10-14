#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021406f8;

s32 func_020135b0(s32 arg0) {
    return (0xC0 * arg0) + (s32) &data_021406f8;
}
