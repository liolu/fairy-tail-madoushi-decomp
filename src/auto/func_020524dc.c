#include "m2c.h"

M2C_UNK func_020464d8();                            /* extern */
M2C_UNK func_02048ad4(s32);                         /* extern */

void func_020524dc(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_020464d8(arg0);
    }
    func_02048ad4(M2C_FIELD(arg1, s32 *, 4));
}
