#include "m2c.h"

M2C_UNK func_0202c654(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02048ac0();                                /* extern */
M2C_UNK func_02048ad4(s32);                         /* extern */
extern M2C_UNK data_021578fc;

void func_020350f0(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_02048ac0();
    func_0202c654(&data_021578fc, arg0);
    func_02048ad4(temp_r4);
}
