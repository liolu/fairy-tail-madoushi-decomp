#include "m2c.h"
#include "engine.h"

void func_02031d7c(M2C_UNK);

void func_020327b4(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x4C);
    if (temp_r0 == 0) {
        return;
    }
    func_02031d7c(temp_r0);
    M2C_FIELD(arg0, s32 *, 0x4C) = 0;
    M2C_FIELD(arg0, s32 *, 0x50) = 0;
}
