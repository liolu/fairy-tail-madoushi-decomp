#include "m2c.h"

M2C_UNK func_02027870();                            /* extern */
extern M2C_UNK data_0214e020;

void func_020278e0(s32 arg0) {
    if (M2C_FIELD(&data_0214e020, s32 *, 0x20) != 0) {
        return;
    }
    M2C_FIELD(&data_0214e020, s32 *, 0x20) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_02027870();
}
