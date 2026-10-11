#include "m2c.h"

M2C_UNK func_02046d2c(s32);                         /* extern */
extern M2C_UNK data_021593e0;

void func_02036668(s32 arg0, s32 arg1, s32 arg2) {
    if (arg0 != 0xB) {
        return;
    }
    if (arg2 == 0) {
        return;
    }
    M2C_FIELD(&data_021593e0, s32 *, 4) = (s32) (M2C_FIELD(&data_021593e0, s32 *, 4) & ~0x20);
    func_02046d2c(M2C_FIELD(&data_021593e0, s32 *, 0x51C));
}
