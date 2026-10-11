#include "m2c.h"
#include "engine.h"

void func_02006a38(M2C_UNK);
void func_020274c4(M2C_UNK);

void func_02027524(s32 arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 != 0) {
        func_02006a38(temp_r0);
    }
    func_020274c4(arg0);
}
