#include "m2c.h"

extern M2C_UNK data_02142658;

s32 func_0201cb84(s32 arg0) {
    if (*((M2C_UNK *) ((s8 *) &data_02142658 + (arg0 * 0xC28))) != 0) {
        return 1;
    }
    return 0;
}
