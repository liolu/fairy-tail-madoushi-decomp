#include "engine.h"
#include "m2c.h"

void func_020191dc(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02019228(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 >= 1) {
        var_r1 -= 1;
    }
    if (var_r1 != 0) {
        return;
    }
    func_020191dc(arg0, var_r1, 1);
}
