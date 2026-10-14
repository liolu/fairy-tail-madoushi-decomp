#include "m2c.h"

extern M2C_UNK data_020a1d94;
extern M2C_UNK data_020a1dac;

s32 func_02007164(void) {
    return *((M2C_UNK *) ((s8 *) &data_020a1dac + (M2C_FIELD(&data_020a1d94, s32 *, 0x10) * 8)));
}
