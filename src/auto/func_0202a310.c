#include "m2c.h"
#include "engine.h"

void func_0202998c(M2C_UNK);
void func_0202a338(M2C_UNK);
M2C_UNK func_02050c8c(M2C_UNK);

s32 func_0202a310(void) {
    s32 temp_r0;

    temp_r0 = func_02050c8c((s32) func_0202a338);
    if (temp_r0 == 2) {
        return 1;
    }
    func_0202998c(temp_r0);
    return 0;
}
