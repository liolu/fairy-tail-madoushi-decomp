/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

extern M2C_UNK data_020a1b5c;

void func_02005440(void) {
    s32 var_r3;
    void *temp_r2;

    var_r3 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_020a1b5c + (var_r3 * 8))) = 0;
        temp_r2                                               = (M2C_UNK *) ((s8 *) &data_020a1b5c + (var_r3 * 8));
        var_r3 += 1;
        M2C_FIELD(temp_r2, s32 *, 4) = 0;
    } while (var_r3 < 2);
}
