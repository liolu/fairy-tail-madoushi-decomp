#include "m2c.h"

M2C_UNK func_020120e4();                            /* extern */
u32 func_0202a9f8();                                /* extern */
M2C_UNK func_0202aebc(M2C_UNK, u16, u16);           /* extern */
extern M2C_UNK data_021405e0;

s32 func_02001230(void) {
    s32 var_r4;
    u32 temp_r0;

    var_r4 = 0;
    temp_r0 = func_0202a9f8();
    switch (temp_r0) {
    default:
        break;
    case 1:
        func_020120e4();
        func_0202aebc(4, (u16) (M2C_FIELD(&data_021405e0, u16 *, 0x1C) + 1), M2C_FIELD(&data_021405e0, u16 *, 0x1E));
        break;
    case 4:
    case 5:
    case 6:
        var_r4 = 1;
        break;
    }
    return var_r4;
}
