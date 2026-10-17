#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020465a4();                                /* extern */
extern M2C_UNK data_0215d000;
extern M2C_UNK data_0215d004;

void func_020522c8(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_0215d004, 0x05000001);
    M2C_FIELD(&data_0215d000, s16 *, 6) = func_020465a4();
}
