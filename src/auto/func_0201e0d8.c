#include "m2c.h"

extern M2C_UNK data_0207c60e;

s8 func_0201e0d8(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 == 0x20) {
        var_r0 = 0;
    }
    return ((s8 *) &data_0207c60e)[var_r0];
}
