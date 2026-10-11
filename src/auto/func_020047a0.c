#include "m2c.h"
#include "engine.h"

void func_02003644(M2C_UNK);
void func_0200452c(M2C_UNK);

void func_020047a0(s32 arg0) {
    s32 temp_r0;

    if (arg0 == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 0x84);
    if (temp_r0 == 1) {
        if (M2C_FIELD(arg0, s32 *, 0x78) != 0) {
            goto block_7;
        }
    } else if ((temp_r0 == 2) && (M2C_FIELD(arg0, s32 *, 0x78) != 0)) {
block_7:
        func_02003644(M2C_FIELD(arg0, s32 *, 0x78));
    }
    func_0200452c(arg0);
}
