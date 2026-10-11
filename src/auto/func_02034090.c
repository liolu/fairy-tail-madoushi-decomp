#include "m2c.h"
#include "engine.h"

M2C_UNK func_02033134(M2C_UNK);
M2C_UNK func_020335b4(M2C_UNK);
void func_020335dc(M2C_UNK, M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_02034090(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_02048ac0();
    temp_r4 = func_02033134(arg1);
    if (arg0 == func_020335b4(arg2)) {
        func_020335dc(arg2, 0);
    }
    func_02033134(temp_r4);
    func_02048ad4(temp_r5);
}
