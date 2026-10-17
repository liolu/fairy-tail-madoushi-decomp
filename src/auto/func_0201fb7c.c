/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02094ba4;
extern M2C_UNK data_02094ba6;

s32 func_0201fb7c(s32 arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = 0;
    if (arg0 == 0) {
        var_r2 = *((s16 *) ((s8 *) &data_02094ba4 + (arg1 * 0x28))) << 0xC;
    } else if (arg0 == 1) {
        var_r2 = *((s16 *) ((s8 *) &data_02094ba6 + (arg1 * 0x28))) << 0xC;
    }
    return var_r2;
}
