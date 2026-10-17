#include "m2c.h"

extern M2C_UNK data_0209394c;

s16 func_0201e044(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 == 0x20) {
        var_r0 = 0;
    }
    if ((u32) (var_r0 - 0x15) <= 1U) {
        var_r0 = 0x17;
    }
    return *((u16 *) ((s8 *) &data_0209394c + (var_r0 * 0x28)));
}
