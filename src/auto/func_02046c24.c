#include "m2c.h"
#include "engine.h"

void func_02046c74(M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

void func_02046c24(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_02048ac0();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        do {
            func_02046c74(arg0 + 0x9C);
        } while (M2C_FIELD(arg0, s32 *, 0x64) != 2);
    }
    func_02048ad4(temp_r4);
}
