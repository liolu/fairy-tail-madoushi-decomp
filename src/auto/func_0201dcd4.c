#include "m2c.h"

s32 func_02011908(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0201d850(M2C_UNK, M2C_UNK);            /* extern */

s32 func_0201dcd4(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02011908(0, arg0);
    func_0201d850(0x20, -1);
    return temp_r4;
}
