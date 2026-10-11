#include "m2c.h"
#include "engine.h"

void func_02046cc4(M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_02036568(s32 arg0) {
    M2C_UNK (*temp_r5)(s32);
    s32 temp_r4;
    s32 temp_r6;

    temp_r5 = M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x4EC);
    temp_r6 = M2C_FIELD(arg0, s32 *, 0x4F0);
    temp_r4 = func_02048ac0();
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~0x4C);
    func_02046cc4(arg0 + 0x4F4);
    func_02048ad4(temp_r4);
    if (temp_r5 == NULL) {
        return;
    }
    temp_r5(temp_r6);
}
