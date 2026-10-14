#include "engine.h"
#include "m2c.h"

M2C_UNK func_020051ac(void);
void func_02005228(M2C_UNK);

void func_0200535c(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r2;

    var_r0 = arg0;
    if ((var_r0 >= 0) && (var_r0 < 0x64)) {
        var_r0 = func_020051ac();
    }
    if (var_r0 == 0) {
        return;
    }
    var_r2 = 0;
    if (arg2 != 0) {
        var_r2 = 1;
    } else {
        temp_r1 = M2C_FIELD(var_r0, s32 *, 0xC);
        if (temp_r1 != 0) {
            M2C_FIELD(var_r0, s32 *, 0xC) = (s32) (temp_r1 - 1);
        }
        if (M2C_FIELD(var_r0, s32 *, 0xC) == 0) {
            var_r2 = 1;
        }
    }
    if (var_r2 == 0) {
        return;
    }
    func_02005228(var_r0);
}
