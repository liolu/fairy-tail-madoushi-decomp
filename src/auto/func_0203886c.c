#include "m2c.h"
#include "engine.h"

void func_02037834(M2C_UNK, M2C_UNK);
M2C_UNK func_02037cb0(M2C_UNK, M2C_UNK);
void func_02037e5c(M2C_UNK);
void func_02046cc4(M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_0203886c(s32 arg0, s32 arg1) {
    s32 temp_r0;
    s32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(arg0, void **, 8);
    if (M2C_FIELD(temp_r5, s32 *, 0xC) & 4) {
        temp_r4 = func_02048ac0();
        M2C_FIELD(temp_r5, s32 *, 0xC) = (s32) (M2C_FIELD(temp_r5, s32 *, 0xC) | 8);
        M2C_FIELD(temp_r5, s32 *, 0x14) = arg1;
        func_02046cc4((s32) (temp_r5 + 0x18));
        func_02048ad4(temp_r4);
        return;
    }
    func_02037834((s32) temp_r5, arg1);
    temp_r0 = func_02037cb0(arg0, 1);
    if (temp_r0 == 0) {
        return;
    }
    func_02037e5c(temp_r0);
}
