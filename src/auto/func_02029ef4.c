#include "engine.h"
#include "m2c.h"

void func_0202998c(M2C_UNK);
void func_02029f1c(M2C_UNK);
M2C_UNK func_02050af8(M2C_UNK);

s32 func_02029ef4(void) {
    s32 temp_r0;

    temp_r0 = func_02050af8((s32) func_02029f1c);
    if (temp_r0 == 2) {
        return 1;
    }
    func_0202998c(temp_r0);
    return 0;
}
