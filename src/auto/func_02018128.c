#include "m2c.h"

s32 func_02004078();                                /* extern */
M2C_UNK func_02017f70(M2C_UNK);                     /* extern */

void func_02018128(void) {
    if (func_02004078() != 0) {
        return;
    }
    func_02017f70(0);
}
