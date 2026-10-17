#include "m2c.h"

extern M2C_UNK data_02094b83;

s8 func_0201fae8(s32 arg0) {
    return *((u8 *) ((s8 *) &data_02094b83 + (arg0 * 0x28)));
}
