#include "m2c.h"

extern M2C_UNK data_02096a8f;

s8 func_0201fbf8(s32 arg0) {
    return *((u8 *) ((s8 *) &data_02096a8f + (arg0 * 0x30)));
}
