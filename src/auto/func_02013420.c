#include "m2c.h"

M2C_UNK func_02052250(M2C_UNK, M2C_UNK);            /* extern */
extern M2C_UNK data_021405e0;

void func_02013420(s32 arg0) {
    if (M2C_FIELD(&data_021405e0, s32 *, 0x14) != 0) {
        return;
    }
    if (arg0 == 0) {
        func_02052250(0, 0);
        return;
    }
    func_02052250(0, 1);
}
