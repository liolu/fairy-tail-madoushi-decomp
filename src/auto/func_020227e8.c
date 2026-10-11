#include "m2c.h"

s32 func_020227e8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 2);
    return 1;
}
