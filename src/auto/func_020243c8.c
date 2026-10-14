#include "engine.h"
#include "m2c.h"

void func_02024258(M2C_UNK);

extern M2C_UNK data_0214df00;

void func_020243c8(void) {
    s32 var_r4;

    if (M2C_FIELD(&data_0214df00, s32 *, 0xC) == 0) {
        return;
    }
    var_r4 = 1;
    do {
        func_02024258(var_r4);
        var_r4 += 1;
    } while (var_r4 <= 7);
}
