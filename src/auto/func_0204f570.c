#include "m2c.h"

s32 func_02036130();                                /* extern */
M2C_UNK func_02038cf0(s32, u32, M2C_UNK);           /* extern */
M2C_UNK func_02038d1c(s32, M2C_UNK, u32);           /* extern */
M2C_UNK func_020454c4(M2C_UNK, M2C_UNK, u32);       /* extern */
M2C_UNK func_02045558(s32, M2C_UNK, u32);           /* extern */

u32 func_0204f570(s32 arg0, M2C_UNK arg1, u32 arg2, u32 arg3) {
    s32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r1;
    u32 var_r4;
    u32 var_r5;
    u32 var_r6;

    var_r6 = arg2;
    var_r5 = arg3;
    if (var_r6 < 8U) {
        temp_r0 = func_02036130();
        temp_r1 = 0x160 - var_r6;
        if (var_r5 > temp_r1) {
            var_r5 = temp_r1;
        }
        func_02045558(temp_r0 + var_r6, arg1, var_r5);
    } else {
        if (var_r6 < 0x8000U) {
            temp_r0_2 = 0x8000 - var_r6;
            var_r4    = var_r5;
            if (var_r5 > temp_r0_2) {
                var_r4 = temp_r0_2;
            }
            func_020454c4(arg1, 0, var_r5);
            var_r6 += var_r4;
            var_r5 -= var_r4;
        }
        if (var_r5 != 0) {
            func_02038cf0(arg0 + 0x10, var_r6, 0);
            func_02038d1c(arg0 + 0x10, arg1, var_r5);
        }
    }
    return var_r5;
}
