#include "engine.h"
#include "m2c.h"

void func_02046818(void);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_02046d2c(s32 arg0) {
    s32 temp_r4;

    temp_r4                      = func_02048ac0();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_02046818();
    func_02048ad4(temp_r4);
}
