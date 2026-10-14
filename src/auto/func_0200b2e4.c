#include "m2c.h"

s32 func_02009740(void *, M2C_UNK);                 /* extern */
M2C_UNK func_02009784(void *);                      /* extern */

void func_0200b2e4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r4;

    temp_r4                      = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    M2C_FIELD(temp_r4, s32 *, 8) = func_02009740(temp_r4, arg2);
    func_02009784(temp_r4);
}
