#include "m2c.h"
#include "engine.h"

void func_020274c4(M2C_UNK);

extern M2C_UNK data_0214e020;

void func_020274e4(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_0214e020, s32 *, 0x28);
    if ((s32) M2C_FIELD(&data_0214e020, s32 *, 0x24) <= 0) {
        return;
    }
    do {
        func_020274c4(var_r5);
        var_r6 += 1;
        var_r5 += 0x18;
    } while (var_r6 < (s32) M2C_FIELD(&data_0214e020, s32 *, 0x24));
}
