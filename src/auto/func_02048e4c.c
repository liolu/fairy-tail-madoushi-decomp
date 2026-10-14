#include "engine.h"
#include "m2c.h"

void func_02046cc4(M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_02048e4c(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_02048ac0();
    if (arg1 != 0) {
        *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 | arg1);
        func_02046cc4(arg0 + 4);
    }
    func_02048ad4(temp_r4);
}
