#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);
void func_0204a4a4(M2C_UNK);

void func_0204a2e4(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02048ac0();
    func_0204a4a4(arg1);
    func_02048ad4(temp_r4);
}
