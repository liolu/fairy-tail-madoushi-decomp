#include "m2c.h"
#include "engine.h"

void func_0202d8b8(s32 arg0) {
    M2C_UNK (*temp_r1)(arg0);

    temp_r1 = M2C_FIELD(arg0, M2C_UNK (**)(), 0xC);
    if (temp_r1 != NULL) {
        temp_r1(arg0);
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) + 1);
}
