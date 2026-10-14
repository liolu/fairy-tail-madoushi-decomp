#include "m2c.h"

extern M2C_UNK data_0214c730;

s32 func_0201d04c(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0214c730 + (arg0 * 4))) = arg1;
    return 0;
}
