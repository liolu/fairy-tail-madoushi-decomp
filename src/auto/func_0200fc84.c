#include "m2c.h"
#include "engine.h"

void func_02003644(M2C_UNK);

extern M2C_UNK data_020a54e4;

void func_0200fc84(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if (arg0 < 0) {
        return;
    }
    if (arg0 >= (s32) M2C_FIELD(&data_020a54e4, s32 *, 0x10)) {
        return;
    }
    temp_r4 = (arg0 * 0x2C) + M2C_FIELD(&data_020a54e4, s32 *, 0xC);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x1C);
    if (temp_r0 == 0) {
        return;
    }
    func_02003644(temp_r0);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x20) = 0;
    M2C_FIELD(temp_r4, s32 *, 0x24) = 0;
}
