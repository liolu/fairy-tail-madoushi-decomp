#include "engine.h"
#include "m2c.h"

void func_020454c4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020475bc(M2C_UNK, M2C_UNK);
void func_02047630(M2C_UNK, M2C_UNK);

void func_02038e90(s32 arg0) {
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r5 = M2C_FIELD(arg0, s32 *, 8);
    temp_r6 = temp_r5 + M2C_FIELD(arg0, s32 *, 0xC);
    func_02047630(temp_r4, temp_r6);
    func_020475bc(temp_r4, temp_r6);
    func_020454c4(temp_r4 + temp_r5, 0, temp_r6 - temp_r5);
}
