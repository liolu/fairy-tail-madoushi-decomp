#include "m2c.h"
#include "engine.h"

void func_02032b3c(M2C_UNK, M2C_UNK);
M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);
void func_02049a08(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_02032c38(s32 arg0) {
    s32 temp_r6;

    if (((s32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x1E) >> 0x1F) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        do {
            temp_r6 = func_02048ac0();
            func_02032b3c(arg0, 1);
            func_02048ad4(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x40) != 0);
    }
    func_02049a08(M2C_FIELD(arg0, s32 *, 0x4C), 0, 1 << M2C_FIELD(arg0, s32 *, 0x48), 0);
}
