#include "engine.h"
#include "m2c.h"

M2C_UNK func_02037930(M2C_UNK, M2C_UNK);
M2C_UNK func_02037cb0(M2C_UNK, M2C_UNK);
void func_02046cc4(M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_02037e5c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r8;
    s32 var_r5;

    var_r5  = arg0;
    temp_r4 = M2C_FIELD(var_r5, s32 *, 8);
    if (var_r5 == 0) {
        return;
    }
loop_3:
    temp_r8                       = func_02048ac0();
    temp_r0                       = M2C_FIELD(var_r5, s32 *, 0xC) | 0x40;
    M2C_FIELD(var_r5, s32 *, 0xC) = temp_r0;
    if (temp_r0 & 4) {
        func_02046cc4(var_r5 + 0x18);
        var_r5 = 0;
    }
    func_02048ad4(temp_r8);
    if (var_r5 == 0) {
        return;
    }
    if (func_02037930(var_r5, (s32) (u8) ((u32) M2C_FIELD(var_r5, u32 *, 0xC) >> 8)) == 0x100) {
        return;
    }
    var_r5 = func_02037cb0(temp_r4, 1);
    if (var_r5 == 0) {
        return;
    }
    goto loop_3;
}
