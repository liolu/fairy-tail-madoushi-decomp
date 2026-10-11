#include "m2c.h"
#include "engine.h"

void func_02027f6c(M2C_UNK);

extern M2C_UNK data_0214e020;

void func_02027f88(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_0214e020, s32 *, 0x40);
    if ((s32) M2C_FIELD(&data_0214e020, s32 *, 0x3C) <= 0) {
        return;
    }
    do {
        func_02027f6c(var_r5);
        var_r6 += 1;
        var_r5 += 0x14;
    } while (var_r6 < (s32) M2C_FIELD(&data_0214e020, s32 *, 0x3C));
}
