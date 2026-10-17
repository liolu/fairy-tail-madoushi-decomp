#include "m2c.h"

extern s32 data_02143eac;

s32 func_0201d060(void) {
    s32 *var_r1;
    s32 var_r2;

    var_r1 = &data_02143eac;
    var_r2 = 0;
loop_1:
    if (*var_r1 != 0) {
        return 1;
    }
    var_r2 += 1;
    var_r1 = (s32 *) ((s8 *) var_r1 + 0x110);
    if (var_r2 >= 0x80) {
        return 0;
    }
    goto loop_1;
}
