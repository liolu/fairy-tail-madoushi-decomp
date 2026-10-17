#include "m2c.h"

M2C_UNK func_02023b8c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0214df60;

void func_02023bb0(void) {
    M2C_UNK *var_r4;
    s32 var_r5;

    var_r4 = &data_0214df60;
    var_r5 = 0;
    do {
        func_02023b8c(var_r4);
        var_r5 += 1;
        var_r4 = (M2C_UNK *) ((s8 *) var_r4 + 0x18);
    } while (var_r5 < 8);
}
