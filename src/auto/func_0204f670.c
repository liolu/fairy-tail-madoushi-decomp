#include "m2c.h"

M2C_UNK func_02038c00();                         /* extern */
s32 func_02045c40();              /* extern */
M2C_UNK func_02046c24();                         /* extern */
M2C_UNK func_02047138();       /* extern */

void func_0204f670(s32 arg0, void *arg1) {
    if (arg1 == NULL) {
        func_02047138(arg0 + 0x20D4, 0, 1);
        func_02046c24(arg0 + 0x20F8);
        func_02038c00(arg0 + 0x10);
        return;
    }
    if (func_02045c40(arg0 + 0x58, M2C_FIELD(arg1, s32 *, 8), M2C_FIELD(arg1, s32 *, 0), M2C_FIELD(arg1, s32 *, 4)) != 0) {
        return;
    }
    M2C_FIELD(arg1, s32 *, 8) = 0;
    func_02047138(arg0 + 0x20D4, 1);
}
