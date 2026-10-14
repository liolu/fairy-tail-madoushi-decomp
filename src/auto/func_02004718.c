#include "m2c.h"

M2C_UNK func_02004538();             /* extern */
M2C_UNK func_02038c00();                      /* extern */

s32 func_02004718(void *arg0) {
    M2C_UNK saved_reg_r5;
    s32 temp_r1;
    s32 var_r0;
    s32 var_r5;

    var_r5 = saved_reg_r5;
    if (M2C_FIELD(arg0, s32 *, 0x18) & 1) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        func_02004538(1, arg0 + 0xC);
    }
    if (M2C_FIELD(arg0, s32 *, 8) == 1) {
        return 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 4);
    switch (temp_r1) {                              /* irregular */
        case 1:
            func_02038c00(arg0 + 0xC);
            M2C_FIELD(arg0, s32 *, 8) = 1;
            var_r5                    = 0;
            break;
        case -1:
            var_r5 = -1;
            break;
        case 0:
            var_r5 = 1;
            break;
    }
    return var_r5;
}
