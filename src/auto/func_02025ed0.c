#include "m2c.h"

M2C_UNK func_02025df8();                            /* extern */
extern s32 data_0214df18;

void func_02025ed0(s32 arg0) {
    if (data_0214df18 != 0) {
        return;
    }
    data_0214df18 = arg0;
    if (arg0 == 0) {
        return;
    }
    func_02025df8();
}
