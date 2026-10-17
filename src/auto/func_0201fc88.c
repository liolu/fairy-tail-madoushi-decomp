#include "m2c.h"

extern M2C_UNK data_02096a96;

s16 func_0201fc88(s32 arg0) {
    return *((u16 *) ((s8 *) &data_02096a96 + (arg0 * 0x30)));
}
