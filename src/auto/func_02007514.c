#include "engine.h"
#include "m2c.h"

void func_02007454(M2C_UNK, M2C_UNK);

extern M2C_UNK data_020a1ac0;

void func_02007514(void) {
    func_02007454(0, M2C_FIELD(&data_020a1ac0, s32 *, 0x94) - 1);
}
