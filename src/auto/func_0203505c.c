#include "m2c.h"

M2C_UNK func_0202c75c(M2C_UNK, void *);             /* extern */
void *func_0202c7bc(M2C_UNK, M2C_UNK);              /* extern */
s32 func_02048ac0();                                /* extern */
M2C_UNK func_02048ad4(s32);                         /* extern */

void *func_0203505c(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_02048ac0();
    temp_r0 = func_0202c7bc(arg0, 0);
    if (temp_r0 != NULL) {
        func_0202c75c(arg0, temp_r0);
        temp_r1 = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x124) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x124) - 1);
    }
    func_02048ad4(temp_r4);
    return temp_r0;
}
