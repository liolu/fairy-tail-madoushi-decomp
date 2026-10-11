#include "m2c.h"

M2C_UNK func_020128f0(s32);                         /* extern */
extern M2C_UNK data_021405e0;

void func_02013528(s16 arg0) {
    if (M2C_FIELD(&data_021405e0, s32 *, 0x14) != 0) {
        return;
    }
    M2C_FIELD(&data_021405e0, s16 *, 0x48) = arg0;
    func_020128f0(0xFDC);
}
