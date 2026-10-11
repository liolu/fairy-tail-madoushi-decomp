#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a55f4;

void func_0200d7c0(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_020a55f4 + (arg0 * 0x164))) = arg1;
}
