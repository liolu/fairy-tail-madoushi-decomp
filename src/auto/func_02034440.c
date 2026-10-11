#include "m2c.h"

s32 *func_020331c0(s32);                            /* extern */
s32 func_020335b4(s32);                             /* extern */
s32 func_020345c4(M2C_UNK, u8, u16, u8, void *, s32, s32, s32); /* extern */
void *func_02035e8c(s32, s32);                      /* extern */

s32 func_02034440(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 *temp_r0_3;
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0_3 = func_020331c0(arg1);
    if (temp_r0_3 == NULL) {
        return 0;
    }
    temp_r0_2 = func_020335b4(*temp_r0_3);
    if (temp_r0_2 == 0) {
        return 0;
    }
    temp_r0 = func_02035e8c(temp_r0_2, arg2);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_020345c4(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0, temp_r0_2, arg1, arg2);
}
