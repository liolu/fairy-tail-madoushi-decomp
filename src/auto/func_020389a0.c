#include "m2c.h"

s32 func_020388d8(s32, s32);                        /* extern */
s32 func_0204c3c0();                                /* extern */

s32 func_020389a0(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    u8 temp_r1;

    var_r4  = func_0204c3c0();
    temp_r0 = func_020388d8(arg0, var_r4);
    if (temp_r0 >= 0) {
        temp_r1 = *(s8 *) (arg0 + temp_r0);
        if ((temp_r1 != 0x2F) && (temp_r1 != 0x5C)) {

        } else {
            var_r4                   = temp_r0;
            *(s8 *) (arg0 + temp_r0) = 0;
        }
    }
    return var_r4;
}