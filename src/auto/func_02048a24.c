#include "m2c.h"
#include "engine.h"

s32 func_02048a24(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r2;

    temp_r1 = arg1 - M2C_FIELD(arg0, s32 *, 0xC);
    var_r2 = arg2 - M2C_FIELD(arg0, s16 *, 0x10);
    if ((temp_r1 < 0) || ((temp_r1 == 0) && (var_r2 < 0))) {
        return 0;
    }
    if (var_r2 < 0) {
        var_r2 += 0x107;
    }
    if (var_r2 <= (s32) M2C_FIELD(arg0, s16 *, 0x12)) {
        return 1;
    }
    return 2;
}
