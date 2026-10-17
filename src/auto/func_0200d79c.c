#include "m2c.h"

extern M2C_UNK data_020a55ec;
extern M2C_UNK data_020a55f0;

void func_0200d79c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip                                          = arg0 * 0x164;
    *((M2C_UNK *) ((s8 *) &data_020a55ec + temp_ip)) = arg1;
    *((M2C_UNK *) ((s8 *) &data_020a55f0 + temp_ip)) = arg2;
}
