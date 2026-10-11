#include "m2c.h"

M2C_UNK func_020286b4();                            /* extern */
extern M2C_UNK data_0214e020;

void func_0202874c(s32 arg0) {
    if (M2C_FIELD(&data_0214e020, s32 *, 0x38) != 0) {
        return;
    }
    M2C_FIELD(&data_0214e020, s32 *, 0x38) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_020286b4();
}
