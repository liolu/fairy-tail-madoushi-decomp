/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02092cfc;
extern M2C_UNK data_02092d04;

s16 func_0201efe8(s16 arg0, s32 arg1) {
    s16 var_r0;

    var_r0 = arg0;
    switch (var_r0) {                               /* irregular */
        case 32:
            var_r0 = *((u16 *) ((s8 *) &data_02092d04 + (arg1 * 0xA)));
        /* fallthrough */
        default:
            return var_r0;
        case 0:
            return 4;
        case 16:
            return *((u16 *) ((s8 *) &data_02092cfc + (arg1 * 0xA)));
    }
}
