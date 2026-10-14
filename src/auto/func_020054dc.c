#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a1b5c;

void func_020054dc(s32 arg0, s32 arg1, s32 arg2) {
    *((M2C_UNK *) ((s8 *) &data_020a1b5c + (arg0 * 8)))                     = arg1;
    M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020a1b5c + (arg0 * 8))), s32 *, 4) = arg2;
}
