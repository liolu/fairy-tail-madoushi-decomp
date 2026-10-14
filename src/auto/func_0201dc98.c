#include "m2c.h"

s32 func_0201171c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_0201d850(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0201dc98(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK var_r0;
    s32 temp_r4;

    temp_r4 = func_0201171c(0, arg0, arg1);
    var_r0  = 0x10;
    if (arg2 != 0) {
        var_r0 = 0x11;
    }
    func_0201d850(var_r0, -1);
    return temp_r4;
}
