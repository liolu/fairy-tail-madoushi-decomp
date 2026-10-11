#include "m2c.h"
#include "engine.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);

void func_0202a8c4(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202998c((s32) temp_r0);
        return;
    }
    func_0202997c(1);
}
