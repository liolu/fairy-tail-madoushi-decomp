#include "engine.h"
#include "m2c.h"

void func_02020ec8(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    }
    if (var_r1 >= 0x1869F) {
        var_r1 = 0x1869F;
    }
    M2C_FIELD(arg0, s32 *, 0xAE8) = var_r1;
}
