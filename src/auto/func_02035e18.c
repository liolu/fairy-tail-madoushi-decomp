#include "m2c.h"

M2C_UNK func_02045558(s32);                         /* extern */

s32 func_02035e18(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02045558(M2C_FIELD(arg0, s32 *, 0xAC) + arg3);
    return arg2;
}
