#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

extern void *data_0215a0a0;

void func_0203fa60(s32 arg0) {
    s32 temp_r0;

    temp_r0                                 = func_02048ac0();
    M2C_FIELD(data_0215a0a0, s32 *, 0x14E4) = arg0;
    func_02048ad4(temp_r0);
}
