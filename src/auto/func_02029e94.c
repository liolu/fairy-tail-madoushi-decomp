#include "m2c.h"
#include "engine.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);
void func_02029ec4(M2C_UNK);
M2C_UNK func_02051314(M2C_UNK);

s32 func_02029e94(void) {
    s32 temp_r0;

    func_0202997c(3);
    temp_r0 = func_02051314((s32) func_02029ec4);
    if (temp_r0 == 2) {
        return 1;
    }
    func_0202998c(temp_r0);
    return 0;
}
