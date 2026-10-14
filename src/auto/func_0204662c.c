#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0215a1a8;

s32 func_0204662c(void) {
    s32 temp_r0;

    temp_r0                                = M2C_FIELD(&data_0215a1a8, s32 *, 0x18) + 1;
    M2C_FIELD(&data_0215a1a8, s32 *, 0x18) = temp_r0;
    return temp_r0;
}
