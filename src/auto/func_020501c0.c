#include "engine.h"
#include "m2c.h"

M2C_UNK func_02048ac0(void);
void func_02048ad4(M2C_UNK);

extern M2C_UNK data_0215c4cc;

s32 func_020501c0(void) {
    s32 temp_r0;
    u16 var_r4;

    temp_r0 = func_02048ac0();
    if (M2C_FIELD(&data_0215c4cc, void **, 4) != NULL) {
        var_r4 = M2C_FIELD(M2C_FIELD(&data_0215c4cc, void **, 4), u16 *, 0x150);
    } else {
        var_r4 = 0;
    }
    func_02048ad4(temp_r0);
    return (s32) var_r4;
}
