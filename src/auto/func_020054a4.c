/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020a1b5c;

void func_020054a4(void) {
    M2C_UNK (*temp_r1)(s32);
    s32 var_r5;

    var_r5 = 0;
    do {
        temp_r1 = M2C_FIELD(((M2C_UNK *) ((s8 *) &data_020a1b5c + (var_r5 * 8))), M2C_UNK(**)(s32), 4);
        if (temp_r1 != NULL) {
            temp_r1(var_r5);
        }
        var_r5 += 1;
    } while (var_r5 < 2);
}
