#include "m2c.h"

M2C_UNK func_0204b350();                            /* extern */
s32 func_0204b7b4(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_0204b3d4;

s32 func_0204b818(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0204b7b4(arg0, &func_0204b3d4, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0204b350();
    return sp0;
}
