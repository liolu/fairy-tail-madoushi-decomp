#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02141b9c;

s32 func_0201669c(s32 arg0) {
    M2C_FIELD(&data_02141b9c, s32 *, 0x18) = arg0;
    return arg0;
}
