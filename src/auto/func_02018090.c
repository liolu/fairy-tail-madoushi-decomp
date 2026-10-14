#include "engine.h"
#include "m2c.h"

void func_02018060(M2C_UNK);

extern M2C_UNK data_02142504;

void func_02018090(void) {
    s32 var_r5;
    s32 var_r6;

    var_r6 = 0;
    var_r5 = M2C_FIELD(&data_02142504, s32 *, 0);
    if ((s32) M2C_FIELD(&data_02142504, s32 *, 4) <= 0) {
        return;
    }
    do {
        func_02018060(var_r5);
        var_r6 += 1;
        var_r5 += 0x38;
    } while (var_r6 < (s32) M2C_FIELD(&data_02142504, s32 *, 4));
}
