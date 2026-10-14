#include "engine.h"
#include "m2c.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);

void func_02029f1c(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202998c((s32) temp_r0);
        return;
    }
    func_0202997c(1);
}
