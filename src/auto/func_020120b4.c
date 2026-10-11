#include "m2c.h"

s32 func_020035e0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02003644(s32);                         /* extern */

s32 func_020120b4(s32 arg0, M2C_UNK arg1, s32 arg2) {
    if (arg2 == 0) {
        return func_020035e0(2, 0x20, arg1);
    }
    func_02003644(arg2);
    return 0;
}
