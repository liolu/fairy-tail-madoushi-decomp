#include "m2c.h"

M2C_UNK func_02046644(s32, void *);                 /* extern */
M2C_UNK func_02046818();                            /* extern */
s32 func_02048ac0();                                /* extern */
M2C_UNK func_02048ad4(s32);                         /* extern */
extern M2C_UNK data_0215a1a8;

void func_02046c74(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_02048ac0();
    temp_r5 = *M2C_FIELD(&data_0215a1a8, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_02046644(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_02046818();
    func_02048ad4(temp_r4);
}
