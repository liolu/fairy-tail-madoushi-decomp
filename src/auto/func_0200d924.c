#include "m2c.h"

extern M2C_UNK data_020a564c;
extern M2C_UNK data_020a5650;

void func_0200d924(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip                                          = arg0 * 0x164;
    *((M2C_UNK *) ((s8 *) &data_020a564c + temp_ip)) = arg1;
    *((M2C_UNK *) ((s8 *) &data_020a5650 + temp_ip)) = arg2;
}
