#include "m2c.h"

M2C_UNK WaitByLoop();                        /* extern */
s32 func_0204643c(); /* extern */

void func_0204635c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (func_0204643c() <= 0) {
        return;
    }
    do {
        WaitByLoop(0x400);
    } while (func_0204643c(arg0, arg1, arg2, arg3) > 0);
}
