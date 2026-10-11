#include "m2c.h"
#include "engine.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);
M2C_UNK func_0202a3b0(void);
M2C_UNK func_0202a44c(void);

extern M2C_UNK data_0214e120;

void func_0202a338(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202998c((s32) temp_r0);
        return;
    }
    func_0202997c(1);
    if (M2C_FIELD(&data_0214e120, u16 *, 2) == 0) {
        return;
    }
    M2C_FIELD(&data_0214e120, u16 *, 2) = 0U;
    if (M2C_FIELD(&data_0214e120, s32 *, 0x38) != 0) {
        if (func_0202a3b0() != 0) {
            return;
        }
        func_0202997c(9);
        return;
    }
    if (func_0202a44c() != 0) {
        return;
    }
    func_0202997c(9);
}
