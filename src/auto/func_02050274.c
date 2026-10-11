#include "m2c.h"
#include "engine.h"

M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);
M2C_UNK func_0204fcb4(void);
M2C_UNK func_0204fcc4(void);

s32 func_02050274(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02048ac0();
    temp_r0 = func_0204fcc4();
    if (temp_r0 != 0) {
        func_02048ad4(temp_r5);
        return temp_r0;
    }
    M2C_FIELD((void *) func_0204fcb4(), s32 *, 0xC8) = arg0;
    func_02048ad4(temp_r5);
    return 0;
}
