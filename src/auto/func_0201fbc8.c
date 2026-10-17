#include "m2c.h"

extern M2C_UNK data_02096a8c;

s16 func_0201fbc8(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02096a8c + (arg0 * 0x30)));
}
