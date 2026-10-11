#include "m2c.h"
#include "engine.h"

void func_020041e8(M2C_UNK);
M2C_UNK func_020041f4(void);
void func_02039460(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0207c3e0;

void func_02004330(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020041f4();
    if (temp_r0 == 0) {
        return;
    }
    func_02039460(0, *((M2C_UNK *)((s8 *)&data_0207c3e0 + (arg0 * 4))));
    func_020041e8(temp_r0);
}
