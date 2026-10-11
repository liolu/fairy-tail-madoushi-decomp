#include "m2c.h"
#include "engine.h"

void func_020194d0(M2C_UNK);

extern M2C_UNK data_02142518;

void func_02019500(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_02142518, s32 *, 0x54);
    if ((s32) M2C_FIELD(&data_02142518, s32 *, 0x50) <= 0) {
        return;
    }
    do {
        func_020194d0(var_r5);
        var_r6 += 1;
        var_r5 += 0x2C;
    } while (var_r6 < (s32) M2C_FIELD(&data_02142518, s32 *, 0x50));
}
