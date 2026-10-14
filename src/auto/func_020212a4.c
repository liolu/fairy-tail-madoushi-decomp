#include "engine.h"
#include "m2c.h"

void func_02020ef0(M2C_UNK, M2C_UNK);

void func_020212a4(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_02020ef0(arg0, var_r4);
        var_r4 += 1;
    } while (var_r4 < 3);
}
