#include "m2c.h"
#include "engine.h"

void func_02022548(M2C_UNK);

extern M2C_UNK data_0214d67c;

void func_02022584(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_0214d67c, s32 *, 0);
    if ((s32) M2C_FIELD(&data_0214d67c, s32 *, 4) <= 0) {
        return;
    }
    do {
        func_02022548(var_r5);
        var_r6 += 1;
        var_r5 += 0x2C;
    } while (var_r6 < (s32) M2C_FIELD(&data_0214d67c, s32 *, 4));
}
