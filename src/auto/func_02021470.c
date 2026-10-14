/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0214c930;
extern M2C_UNK data_0214c934;
extern M2C_UNK data_0214c938;

s32 func_02021470(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0;
    switch (var_r0) {                               /* irregular */
        case 2:
            var_r0 = *((M2C_UNK *) ((s8 *) &data_0214c938 + (arg1 * 0xC)));
        /* fallthrough */
        default:
            return var_r0;
        case 0:
            return *((M2C_UNK *) ((s8 *) &data_0214c930 + (arg1 * 0xC)));
        case 1:
            return *((M2C_UNK *) ((s8 *) &data_0214c934 + (arg1 * 0xC)));
    }
}
