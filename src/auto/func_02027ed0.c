#include "m2c.h"

M2C_UNK func_02027e50();                            /* extern */
extern s32 data_0214e088;

void func_02027ed0(s32 arg0) {
    if (data_0214e088 != 0) {
        return;
    }
    data_0214e088 = arg0;
    if (arg0 == 0) {
        return;
    }
    func_02027e50();
}
