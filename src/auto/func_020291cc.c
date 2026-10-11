#include "m2c.h"

s32 func_02003d04();                                /* extern */
M2C_UNK func_02003f24(s32, M2C_UNK *);              /* extern */
M2C_UNK func_02019eec(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020273ec();                            /* extern */
M2C_UNK func_02027438(M2C_UNK);                     /* extern */
M2C_UNK func_02028a14(M2C_UNK);                     /* extern */
extern M2C_UNK func_02029150;

void func_020291cc(void) {
    func_02019eec(0x13, 0xE000);
    func_020273ec();
    func_02027438(1);
    func_02028a14(0x64);
    func_02003f24(func_02003d04(), &func_02029150);
}
