#include "m2c.h"

M2C_UNK func_020096e4(void *, s32);                 /* extern */

void func_0200b30c(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    func_020096e4(temp_r0, M2C_FIELD(temp_r0, s32 *, 8));
}
