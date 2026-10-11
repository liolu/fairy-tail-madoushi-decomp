#include "m2c.h"

u32 func_020132a8();                                /* extern */
extern M2C_UNK data_021405e0;
extern M2C_UNK data_02140630;

s32 func_020134a0(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (M2C_FIELD(&data_021405e0, s32 *, 0x14) == 0) {
        if (arg0 == -1) {
            var_r4 = 1;
        } else if (func_020132a8() >= 3U) {
            var_r4 = 1;
        }
    } else if (arg0 == -1) {
        var_r4 = 1;
    } else if (*((M2C_UNK *)((s8 *)&data_02140630 + (arg0 * 4))) != 0) {
        var_r4 = 1;
    }
    return var_r4;
}
