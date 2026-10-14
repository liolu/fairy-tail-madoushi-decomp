#include "engine.h"
#include "m2c.h"

void func_02028828(M2C_UNK);

extern M2C_UNK data_0214e0f0;

void func_0202884c(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_0214e0f0, s32 *, 0);
    if ((s32) M2C_FIELD(&data_0214e0f0, s32 *, 4) <= 0) {
        return;
    }
    do {
        func_02028828(var_r5);
        var_r6 += 1;
        var_r5 += 0x20;
    } while (var_r6 < (s32) M2C_FIELD(&data_0214e0f0, s32 *, 4));
}
