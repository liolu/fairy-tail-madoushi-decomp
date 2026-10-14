#include "engine.h"
#include "m2c.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);
M2C_UNK func_02029a4c(void);
M2C_UNK func_02029ae8(void);

extern M2C_UNK data_0214e120;

void func_020299e8(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202998c((s32) temp_r0);
        func_0202997c(9);
        return;
    }
    if (M2C_FIELD(&data_0214e120, s32 *, 0x34) != 0) {
        if (func_02029a4c() != 0) {
            return;
        }
        func_0202997c(9);
        return;
    }
    if (func_02029ae8() != 0) {
        return;
    }
    func_0202997c(9);
}
