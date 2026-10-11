#include "m2c.h"
#include "engine.h"

M2C_UNK func_02039e24(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02039f38(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u32 temp_lr;
    u32 temp_r0_2;
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg1, void **, 4);
    temp_lr = *(M2C_UNK *)arg3;
    temp_r0_2 = M2C_FIELD(temp_r0, s32 *, 8) - M2C_FIELD(temp_r0, s32 *, 0xC);
    if (temp_lr > temp_r0_2) {
        *(M2C_UNK *)arg3 = temp_r0_2;
    }
    M2C_FIELD(arg1, u32 *, 0x34) = temp_lr;
    M2C_FIELD(arg1, s32 *, 0x30) = arg2;
    M2C_FIELD(arg1, u32 *, 0x38) = (u32) *(M2C_UNK *)arg3;
    func_02039e24(arg1, 1, 0);
}
