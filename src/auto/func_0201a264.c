/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

M2C_UNK func_020054dc(s32, s32, s32);               /* extern */
M2C_UNK func_0201b404(s32);                         /* extern */
M2C_UNK func_0201b8c0(s32);                         /* extern */
M2C_UNK func_0201bbf8(s32);                         /* extern */
M2C_UNK func_0201cbac();                            /* extern */
extern M2C_UNK data_021425c8;

void func_0201a264(void) {
    s32 var_r6;

    var_r6 = 0;
    do {
        *((M2C_UNK *) ((s8 *) &data_021425c8 + (var_r6 * 4))) = 0;
        func_020054dc(var_r6, 0, 0);
        func_0201b404(var_r6);
        func_0201b8c0(var_r6);
        func_0201bbf8(var_r6);
        var_r6 += 1;
    } while (var_r6 < 2);
    func_0201cbac();
}
