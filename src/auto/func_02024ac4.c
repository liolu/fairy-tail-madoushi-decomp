#include "m2c.h"

M2C_UNK func_02024a6c();                            /* extern */
extern s32 data_0214df00;

void func_02024ac4(s32 arg0) {
    if (data_0214df00 != 0) {
        return;
    }
    data_0214df00 = arg0;
    if (arg0 == 0) {
        return;
    }
    func_02024a6c();
}
