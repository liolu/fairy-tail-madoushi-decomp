/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_020997bc;
extern M2C_UNK data_020997c0;

s32 func_0201f3fc(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 != 0) {
        if (var_r0 == 0x10) {
            var_r0 = *((M2C_UNK *) ((s8 *) &data_020997c0 + (arg1 * 0x70)));
        }
        return var_r0;
    }
    return *((M2C_UNK *) ((s8 *) &data_020997bc + (arg1 * 0x70)));
}
