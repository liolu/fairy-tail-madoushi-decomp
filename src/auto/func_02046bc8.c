#include "m2c.h"

M2C_UNK func_020466f0(s32, void *);                 /* extern */
M2C_UNK func_020467d0(void *);                      /* extern */
M2C_UNK func_02046cc4(void *);                      /* extern */
M2C_UNK func_02046d80();                            /* extern */
M2C_UNK func_02046f44();                            /* extern */
M2C_UNK func_02046f74();                            /* extern */
M2C_UNK func_0204738c(void *);                      /* extern */
M2C_UNK func_02048d44();                            /* extern */
extern M2C_UNK data_0215a1a8;

void func_02046bc8(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_0215a1a8, void ***, 8);
    func_02046f44();
    func_0204738c(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_020466f0(temp_r0, temp_r4);
    }
    func_020467d0(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_02046cc4(temp_r4 + 0x9C);
    func_02046f74();
    func_02046d80();
    func_02048d44();
}
