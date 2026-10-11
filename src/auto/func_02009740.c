#include "m2c.h"

s32 func_02009740(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 temp_r3_2;
    s32 var_r1;
    void *temp_r3;

    var_r1 = arg1;
    temp_r3_2 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r3_2 == 0) {
        return 0;
    }
    temp_r3 = temp_r3_2 + M2C_FIELD((temp_r3_2 + (M2C_FIELD(arg0, s16 *, 0x1C) * 4)), s32 *, 8);
    temp_r2 = M2C_FIELD(temp_r3, s16 *, 2) - 1;
    if (var_r1 > temp_r2) {
        var_r1 = temp_r2;
    }
    return M2C_FIELD(((var_r1 * M2C_FIELD(arg0, s8 *, 0x29)) + (s32) temp_r3), s16 *, 8) << 0xC;
}
