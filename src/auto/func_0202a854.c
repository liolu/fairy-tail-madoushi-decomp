#include "m2c.h"
#include "engine.h"

void func_0202997c(M2C_UNK);
void func_0202998c(M2C_UNK);
M2C_UNK func_0202a888(void);
void func_0202b10c(void);

void func_0202a854(s32 arg0) {
    u16 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u16 *, 2);
    if (temp_r0 != 0) {
        func_0202998c((s32) temp_r0);
        func_0202b10c();
        return;
    }
    if (func_0202a888() != 0) {
        return;
    }
    func_0202997c(9);
}
