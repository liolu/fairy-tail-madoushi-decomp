#include "m2c.h"
#include "engine.h"

void func_020327b4(M2C_UNK);

void func_02034f60(s32 arg0) {
    s32 temp_r1;
    s32 temp_r1_2;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x128);
    if (temp_r1 == 0) {
        return;
    }
    temp_r1_2 = temp_r1 - 1;
    M2C_FIELD(arg0, s32 *, 0x128) = temp_r1_2;
    if (temp_r1_2 != 0) {
        return;
    }
    func_020327b4(arg0);
}
