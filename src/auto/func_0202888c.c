#include "engine.h"
#include "m2c.h"

void func_02006a38(M2C_UNK);
void func_02028828(M2C_UNK);

void func_0202888c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if (temp_r0 != 0) {
        func_0202888c(temp_r0);
    }
    temp_r1 = M2C_FIELD(arg0, void **, 8);
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, s32 *, 0xC) = 0;
    }
    temp_r0_2 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0_2 != 0) {
        func_02006a38(temp_r0_2);
    }
    func_02028828(arg0);
}
