#include "m2c.h"

s32 func_0204a510(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s8 data_02154a54;
extern M2C_UNK data_02154aa0;

s32 func_02031ca8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r0;

    if ((s32) data_02154a54 < 0) {
        var_r0 = 0;
    } else {
        var_r0 = (data_02154a54 * 0x11E0) + (s32) &data_02154aa0;
    }
    if (var_r0 == 0) {
        return 0;
    }
    return func_0204a510(var_r0, arg0, arg1);
}
