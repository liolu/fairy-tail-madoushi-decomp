#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a5600;

void func_0200d820(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020a5600 + (arg0 * 0x164))) = arg1;
}
