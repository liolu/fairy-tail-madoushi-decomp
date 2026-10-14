#include "m2c.h"

M2C_UNK func_0202c654(void *, s32);                 /* extern */
s32 func_0202ca8c(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02033808();                            /* extern */

s32 func_0203384c(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_0202ca8c(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02033808();
    func_0202c654(((s8 *) arg0 + 4), temp_r0);
    return 1;
}
