#include "m2c.h"

extern M2C_UNK data_02094ba2;

s16 func_0201fb64(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02094ba2 + (arg0 * 0x28)));
}
