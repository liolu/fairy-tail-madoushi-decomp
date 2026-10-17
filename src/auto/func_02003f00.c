#include "m2c.h"

extern M2C_UNK data_020a2520;

s32 func_02003f00(s32 arg0) {
    if (*((s16 *) ((s8 *) &data_020a2520 + (arg0 * 0x18))) != 0) {
        return 1;
    }
    return 0;
}
