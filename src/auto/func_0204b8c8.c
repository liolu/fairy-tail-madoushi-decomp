#include "m2c.h"

M2C_UNK func_0204b350();                            /* extern */
s32 func_0204b840(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_0204b3d4;

s32 func_0204b8c8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0204b840(arg0, arg1, &func_0204b3d4, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204b350();
    return sp0;
}
