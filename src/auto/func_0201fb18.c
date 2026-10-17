#include "m2c.h"

extern M2C_UNK data_02094b88;

s16 func_0201fb18(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02094b88 + (arg0 * 0x28)));
}
