#include "m2c.h"

M2C_UNK func_02054f30();                            /* extern */
extern M2C_UNK (*data_0215d610)();

void func_02054f08(s32 arg0, s32 arg1, s32 arg2) {
    if (data_0215d610 != NULL) {
        data_0215d610(arg0, arg1, arg2);
        return;
    }
    func_02054f30(arg0, arg1, arg2);
}
