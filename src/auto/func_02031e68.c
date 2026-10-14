#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021572e0;

void func_02031e68(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021572e0 + (arg0 * 0x24))) = arg1;
}
