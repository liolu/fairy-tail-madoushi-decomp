/* compiler: 2.0/sp1p5 -flag no-opt_rebuildconditionals */
#include "m2c.h"

M2C_UNK func_02004268(M2C_UNK);                     /* extern */
s32 func_020042dc(M2C_UNK);                         /* extern */
M2C_UNK func_02004330(M2C_UNK);                     /* extern */

s32 func_02017b30(s32 arg0, M2C_UNK arg1) {
    s32 var_r0;

    switch (arg0) {                                 /* irregular */
        default:
            return arg0;
        case 0:
            func_02004268(arg1);
            return 0;
        case 1:
            if (func_020042dc(arg1) == 0) {
                var_r0 = 0;
            } else {
                var_r0 = 1;
            }
            return var_r0;
        case 2:
            func_02004330(arg1);
            return 0;
    }
}
