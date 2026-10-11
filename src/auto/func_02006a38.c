#include "m2c.h"
#include "engine.h"

void func_02006acc(M2C_UNK);

extern M2C_UNK data_020a1ac0;

void func_02006a38(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x7C) == 0) {
        return;
    }
    func_02006acc(arg0);
    M2C_FIELD(&data_020a1ac0, s32 *, 0xC) = (s32) (M2C_FIELD(&data_020a1ac0, s32 *, 0xC) - 1);
}
