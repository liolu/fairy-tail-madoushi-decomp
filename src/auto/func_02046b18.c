#include "m2c.h"
#include "engine.h"

void func_02046b38(M2C_UNK, M2C_UNK);
M2C_UNK func_02048ac0(void);

extern M2C_UNK data_0215a1a8;

void func_02046b18(void) {
    func_02048ac0();
    func_02046b38(M2C_FIELD(&data_0215a1a8, s32 *, 0x20), 0);
}
