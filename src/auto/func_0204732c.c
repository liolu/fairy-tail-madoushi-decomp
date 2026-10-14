#include "engine.h"
#include "m2c.h"

void func_02046c74(M2C_UNK);
M2C_UNK func_020473d4(M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

extern M2C_UNK data_0215a1c4;

void func_0204732c(s32 arg0) {
    s32 temp_r5;
    void *temp_r6;

    temp_r5 = func_02048ac0();
    temp_r6 = M2C_FIELD(&data_0215a1c4, void **, 4);
loop_1:
    if (func_020473d4(arg0) == 0) {
        M2C_FIELD(temp_r6, s32 *, 0x84) = arg0;
        func_02046c74(arg0);
        M2C_FIELD(temp_r6, s32 *, 0x84) = 0;
        goto loop_1;
    }
    func_02048ad4(temp_r5);
}
