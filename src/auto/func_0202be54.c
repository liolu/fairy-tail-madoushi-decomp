#include "m2c.h"
#include "engine.h"

void func_0202be54(s32 arg0, s32 arg1) {
    if (arg1 == 0) {
        return;
    }
    M2C_FIELD(arg0, M2C_UNK (**)(s32, M2C_UNK, s32), 0x18)(M2C_FIELD(arg0, s32 *, 0x1C), 0, arg1 - M2C_FIELD(arg1, s32 *, -4));
}
