#include "engine.h"
#include "m2c.h"

s32 func_020065ac(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = arg0 + arg1;
    if (var_r0 >= 0x168000) {
        do {
            var_r0 -= 0x168000;
        } while (var_r0 >= 0x168000);
    }
    if (var_r0 >= 0) {
        return var_r0;
    }
    do {
        var_r0 += 0x168000;
    } while (var_r0 < 0);
    return var_r0;
}
