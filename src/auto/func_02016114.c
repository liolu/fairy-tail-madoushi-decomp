#include "engine.h"
#include "m2c.h"

M2C_UNK func_02015aac(M2C_UNK);
M2C_UNK func_02015ae0(M2C_UNK, M2C_UNK);
M2C_UNK func_02015b28(M2C_UNK);
M2C_UNK func_02015b38(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02141b6c;

s32 func_02016114(s32 arg0, s32 arg1) {
    s32 temp_r7;
    s32 temp_r7_2;
    s32 var_r4;

    var_r4  = 0;
    temp_r7 = func_02015aac(arg1);
    if (func_02015b38(arg0, M2C_FIELD(&data_02141b6c, s32 *, 0x18)) != 0) {
        var_r4 = 1;
    } else if (M2C_FIELD(arg0, s32 *, 8) != M2C_FIELD((arg0 + temp_r7), s32 *, -4)) {
        var_r4 = 2;
    } else {
        temp_r7_2 = func_02015b28(arg0);
        if (temp_r7_2 != func_02015ae0(arg1, arg0)) {
            var_r4 = 3;
        }
    }
    M2C_FIELD(&data_02141b6c, M2C_UNK(**)(s32, s32, s32), 0x1C)(arg0 + 0x10, arg1, var_r4);
    return var_r4;
}
