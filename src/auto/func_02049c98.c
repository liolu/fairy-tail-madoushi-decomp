#include "engine.h"
#include "m2c.h"

M2C_UNK func_02049f0c(M2C_UNK);
void func_02049f94(M2C_UNK);

void func_02049c98(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0;

    temp_r0 = func_02049f0c(1);
    if (temp_r0 == 0) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4)    = arg0;
    M2C_FIELD(temp_r0, s32 *, 8)    = arg1;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = arg2;
    M2C_FIELD(temp_r0, s32 *, 0x10) = arg3;
    M2C_FIELD(temp_r0, s32 *, 0x14) = arg4;
    func_02049f94(temp_r0);
}
