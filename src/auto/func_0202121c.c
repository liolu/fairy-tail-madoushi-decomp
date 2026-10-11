#include "m2c.h"

M2C_UNK func_020201e4();                            /* extern */
M2C_UNK func_02020294(M2C_UNK);                     /* extern */
M2C_UNK func_0202037c(M2C_UNK);                     /* extern */
M2C_UNK func_02020398(M2C_UNK);                     /* extern */
M2C_UNK func_020207d0(M2C_UNK);                     /* extern */
s32 func_020208a8(M2C_UNK, s32);                    /* extern */
M2C_UNK func_02020968(M2C_UNK);                     /* extern */
M2C_UNK func_020209d0(M2C_UNK);                     /* extern */
M2C_UNK func_02020c88(M2C_UNK);                     /* extern */
M2C_UNK func_02020ebc(M2C_UNK);                     /* extern */
M2C_UNK func_02020fc8(M2C_UNK, s32, s32);           /* extern */

void func_0202121c(M2C_UNK arg0) {
    s32 var_r5;

    func_020201e4();
    func_02020294(arg0);
    func_0202037c(arg0);
    func_02020398(arg0);
    func_020207d0(arg0);
    func_02020968(arg0);
    func_020209d0(arg0);
    func_02020c88(arg0);
    func_02020ebc(arg0);
    var_r5 = 0;
    do {
        if (func_020208a8(arg0, var_r5) != 0) {
            func_02020fc8(arg0, var_r5, 0);
        }
        var_r5 += 1;
    } while (var_r5 < 0x1B);
}
