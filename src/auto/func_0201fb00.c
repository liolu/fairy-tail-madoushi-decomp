#include "m2c.h"

extern M2C_UNK data_02094b84;

s8 func_0201fb00(s32 arg0) {
    return *((u8 *) ((s8 *) &data_02094b84 + (arg0 * 0x28)));
}
