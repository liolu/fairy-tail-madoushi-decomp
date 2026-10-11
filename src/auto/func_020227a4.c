#include "m2c.h"

M2C_UNK func_02022754();                            /* extern */
extern M2C_UNK data_0214d67c;

void func_020227a4(s32 arg0) {
    if (M2C_FIELD(&data_0214d67c, s32 *, 8) != 0) {
        return;
    }
    M2C_FIELD(&data_0214d67c, s32 *, 8) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_02022754();
}
