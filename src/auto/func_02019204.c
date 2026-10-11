#include "m2c.h"
#include "engine.h"

void func_020191dc(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02019204(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 >= 1) {
        var_r1 -= 1;
    }
    if ((arg2 == 0) && (var_r1 == 0)) {
        func_020191dc(arg0, var_r1, 0);
    }
}
