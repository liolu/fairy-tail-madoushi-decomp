#include "m2c.h"

extern M2C_UNK data_020a5520;

void func_0200ca58(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r2;
    s32 temp_r3;

    if (arg2 == 0) {
        temp_r2                                          = arg0 * 0x164;
        *((M2C_UNK *) ((s8 *) &data_020a5520 + temp_r2)) = *((M2C_UNK *) ((s8 *) &data_020a5520 + temp_r2)) & ~(1 << arg1);
        return;
    }
    temp_r3                                          = arg0 * 0x164;
    *((M2C_UNK *) ((s8 *) &data_020a5520 + temp_r3)) = *((M2C_UNK *) ((s8 *) &data_020a5520 + temp_r3)) | (1 << arg1);
}
