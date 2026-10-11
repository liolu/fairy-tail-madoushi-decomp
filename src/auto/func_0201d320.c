#include "m2c.h"

M2C_UNK func_0201d214();                            /* extern */
extern s32 data_02143ea8;

void func_0201d320(s32 arg0) {
    if (data_02143ea8 != 0) {
        return;
    }
    data_02143ea8 = arg0;
    if (arg0 == 0) {
        return;
    }
    func_0201d214();
}
