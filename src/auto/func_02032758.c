#include "m2c.h"

s32 func_02031d38(s32);                             /* extern */

s32 func_02032758(void *arg0, s32 arg1, s32 arg2) {
    s32 var_ip;
    s32 var_r4;
    u8 temp_r3;
    void *temp_r1;

    var_r4 = 0;
    var_ip = 0;
    if (arg1 > 0) {
        do {
            temp_r3 = *(s8 *) (arg2 + var_ip);
            temp_r1 = arg0 + var_ip;
            var_ip += 1;
            M2C_FIELD(temp_r1, u8 *, 0x54) = temp_r3;
            var_r4 |= 1 << temp_r3;
        } while (var_ip < arg1);
    }
    if (func_02031d38(var_r4) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s32 *, 0x50) = arg1;
    M2C_FIELD(arg0, s32 *, 0x4C) = var_r4;
    return 1;
}