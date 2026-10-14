#include "m2c.h"

s32 func_020335b4(M2C_UNK);                         /* extern */
M2C_UNK func_02045558(s32, s32, M2C_UNK);           /* extern */

s32 func_02035dec(void *arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                      = func_020335b4(arg1);
    M2C_FIELD(arg0, s32 *, 0xAC) = temp_r0;
    func_02045558(temp_r0, arg0 + 0xB0, 0x40);
    return 1;
}
