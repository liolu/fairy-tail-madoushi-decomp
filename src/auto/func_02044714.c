#include "m2c.h"
#include "engine.h"

M2C_UNK func_02044568(void);
void func_020445b0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

extern s32 data_0215a104;

void func_02044714(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02048ac0();
    if (func_02044568() != 0) {
        func_020445b0(data_0215a104 + 0xC4, 0, arg0, 0);
    }
    func_02048ad4(temp_r4);
}
