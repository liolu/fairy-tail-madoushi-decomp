#include "m2c.h"

M2C_UNK func_02046a28(void *, M2C_UNK *, void *, M2C_UNK *, s32, s32); /* extern */
M2C_UNK func_02046d2c(void *);                      /* extern */
s32 func_02048ac0();                                /* extern */
M2C_UNK func_02048ad4(s32);                         /* extern */
M2C_UNK func_020529ac(M2C_UNK *);                   /* extern */
extern void *data_0215d1e8;
extern M2C_UNK data_0215d1ec;
extern M2C_UNK data_0215d610;
extern M2C_UNK func_020529c0;

void func_02052920(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_02048ac0();
    if (data_0215d1e8 == NULL) {
        data_0215d1e8 = arg0;
        func_020529ac(arg0 + 0xC4);
        func_020529ac(&data_0215d1ec);
        M2C_FIELD(arg0, s32 *, 0xC0) = 0;
        func_02046a28(arg0, &func_020529c0, arg0, &data_0215d610, 0x400, 0x14);
        func_02046d2c(arg0);
    }
    func_02048ad4(temp_r4);
}
