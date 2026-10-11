#include "m2c.h"
#include "engine.h"

M2C_UNK func_02054fd8(M2C_UNK, M2C_UNK);
void func_02055044(M2C_UNK, M2C_UNK);

void func_02055094(s32 arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 <= 0) {
        return;
    }
    if (arg1 >= (s32) M2C_FIELD(arg0, u8 *, 4)) {
        return;
    }
    temp_r0 = func_02054fd8(arg0, arg1);
    M2C_FIELD(arg0, u8 *, 4) = (u8) arg1;
    if (temp_r0 < 0) {
        return;
    }
    func_02055044(arg0, arg1);
}
