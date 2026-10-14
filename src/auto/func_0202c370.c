#include "m2c.h"

M2C_UNK func_0202bf90();                            /* extern */
M2C_UNK func_0202c150(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_02048d44();                            /* extern */
M2C_UNK func_0204e89c(s32, s32, M2C_UNK *, M2C_UNK *, s32); /* extern */
s32 func_0204f6e0(s32, s32, s32);                   /* extern */
extern M2C_UNK data_02150ec0;
extern M2C_UNK data_02150ecc;
extern M2C_UNK func_0202c240;
extern M2C_UNK func_0202c244;

void func_0202c370(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6) {
    s32 temp_r4;

    func_0202c150(arg1, arg2, arg3, arg0, 0xE2C, &func_0202c244);
    temp_r4                                = M2C_FIELD(&data_02150ec0, s32 *, 0x24);
    M2C_FIELD(&data_02150ec0, s32 *, 0x28) = temp_r4;
    func_0204e89c(temp_r4, temp_r4, &func_0202c240, &data_02150ecc, arg4);
    if (func_0204f6e0(temp_r4, arg5, arg6) == 0) {
        func_02048d44();
    }
    M2C_FIELD(&data_02150ec0, s32 *, 0) = 1;
    M2C_FIELD(&data_02150ec0, s32 *, 8) = (s32) (M2C_FIELD(&data_02150ec0, s32 *, 8) | 4);
    func_0202bf90();
}
