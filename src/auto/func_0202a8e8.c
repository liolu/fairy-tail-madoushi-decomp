#include "engine.h"
#include "m2c.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);
void func_0202a918(M2C_UNK);
M2C_UNK func_020508d4(M2C_UNK);

s32 func_0202a8e8(void) {
    s32 temp_r0;

    func_0202997c(3);
    temp_r0 = func_020508d4((s32) func_0202a918);
    if (temp_r0 == 2) {
        return 1;
    }
    func_0202998c(temp_r0);
    return 0;
}
