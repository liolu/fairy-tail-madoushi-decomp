#include "engine.h"
#include "m2c.h"

s32 func_0204b77c(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0204c01c(void);

s32 func_0204b9a4(s32 arg0) {
    if (func_0204c01c() == 0) {
        return 0;
    }
    return func_0204b77c(0x10, (s32) (u16) arg0, 0);
}
