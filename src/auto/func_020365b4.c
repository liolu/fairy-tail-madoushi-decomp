/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

M2C_UNK func_02048d44();                            /* extern */
extern M2C_UNK data_02057efc;

M2C_UNK *func_020365b4(s32 arg0) {
    M2C_UNK *var_r4;
    s32 var_r1;

    var_r4 = NULL;
    if (arg0 & 0x10) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if ((u32) (arg0 & ~0x10) <= 3U) {
        if (var_r1 == 0) {
            var_r4 = &data_02057efc;
        } else {
            func_02048d44();
        }
    }
    return var_r4;
}
