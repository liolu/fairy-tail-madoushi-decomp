#include "m2c.h"

M2C_UNK func_0200129c();                            /* extern */
M2C_UNK func_02017f44();                            /* extern */

void func_02017f70(s32 arg0) {
    if (*(u16 *)0x02FFFC40 != 2) {
        func_0200129c(arg0);
        return;
    }
    func_02017f44(arg0);
}
