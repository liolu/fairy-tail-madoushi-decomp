#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a560c;

void func_0200d838(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_020a560c + (arg0 * 0x164))) = arg1;
}
