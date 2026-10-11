#include "m2c.h"

M2C_UNK func_020245e4();                            /* extern */
extern M2C_UNK data_0214df00;

void func_02024664(s32 arg0) {
    if (M2C_FIELD(&data_0214df00, s32 *, 0xC) != 0) {
        return;
    }
    M2C_FIELD(&data_0214df00, s32 *, 0xC) = arg0;
    if (arg0 == 0) {
        return;
    }
    func_020245e4();
}
