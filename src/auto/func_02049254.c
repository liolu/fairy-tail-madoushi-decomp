#include "m2c.h"

s32 func_020491e4(M2C_UNK, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_020497f8();                            /* extern */
extern M2C_UNK data_0215a5c4;
extern M2C_UNK func_020497e8;

s32 func_02049254(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020491e4(arg0, &func_020497e8, 0);
    M2C_FIELD(&data_0215a5c4, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_020497f8();
    }
    return M2C_FIELD(&data_0215a5c4, s32 *, 0x24);
}
