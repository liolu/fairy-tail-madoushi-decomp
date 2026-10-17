#include "m2c.h"

s32 func_02038668(void *);                          /* extern */
s32 func_02048ac0();                                /* extern */
M2C_UNK func_02048ad4(s32);                         /* extern */
s32 func_0204c444(s32, M2C_UNK, s32);               /* extern */
extern void *data_02159cec;

void *func_0203809c(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r6;
    s32 var_r0;
    void *var_r7;

    temp_r6 = func_02048ac0();
    var_r7  = data_02159cec;
    if (var_r7 != NULL) {
    loop_2:
        if (M2C_FIELD(var_r7, s32 *, 0x14) & 2) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        if ((var_r0 != 0) && (temp_r0 = func_02038668(var_r7), (func_0204c444(temp_r0, arg0, arg1) == 0)) &&
            (*(s8 *) (arg1 + temp_r0) == 0)) {

        } else {
            var_r7 = M2C_FIELD(var_r7, void **, 4);
            if (var_r7 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02048ad4(temp_r6);
    return var_r7;
}