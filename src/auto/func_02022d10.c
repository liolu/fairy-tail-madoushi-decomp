#include "m2c.h"

extern M2C_UNK data_0214c738;

s32 func_02022d10(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    switch (M2C_FIELD(&data_0214c738, s32 *, 0x2D0)) { /* irregular */
        case 1:
        case 2:
            var_r0 = 1;
        /* fallthrough */
        default:
            return var_r0;
        case 0:
            return 1;
    }
}
