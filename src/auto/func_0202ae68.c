#include "engine.h"
#include "m2c.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);
M2C_UNK func_02050274(M2C_UNK);

extern M2C_UNK data_0214e120;

void func_0202ae68(s32 arg0) {
    s32 temp_r0_2;
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202998c((s32) temp_r0);
        func_0202997c(0xA);
        return;
    }
    temp_r0_2 = func_02050274(M2C_FIELD(&data_0214e120, s32 *, 0x14));
    if (temp_r0_2 != 0) {
        func_0202998c(temp_r0_2);
        func_0202997c(0xA);
        return;
    }
    func_0202997c(1);
}
