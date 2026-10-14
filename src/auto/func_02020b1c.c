#include "engine.h"
#include "m2c.h"

void func_02020b1c(s32 arg0, s32 arg1, s32 arg2) {
    s32 var_r2;

    var_r2 = arg2;
    if (var_r2 > 0x63) {
        var_r2 = 0x63;
    }
    M2C_FIELD((arg0 + arg1), s8 *, 0x7D5) = (s8) var_r2;
}
