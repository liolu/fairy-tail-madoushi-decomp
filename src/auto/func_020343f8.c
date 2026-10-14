#include "m2c.h"

void *func_0203315c(s32);                           /* extern */
s32 func_020344c0(M2C_UNK, u8, u16, u8, void *, s32); /* extern */

s32 func_020343f8(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = func_0203315c(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_020344c0(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0,
                         arg1);
}
