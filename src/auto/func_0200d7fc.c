#include "m2c.h"

extern M2C_UNK data_020a5604;
extern M2C_UNK data_020a5608;

void func_0200d7fc(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip                                          = arg0 * 0x164;
    *((M2C_UNK *) ((s8 *) &data_020a5604 + temp_ip)) = arg1;
    *((M2C_UNK *) ((s8 *) &data_020a5608 + temp_ip)) = arg2;
}
