#include "m2c.h"

extern M2C_UNK data_02096a8e;

s8 func_0201fbe0(s32 arg0) {
    return *((u8 *) ((s8 *) &data_02096a8e + (arg0 * 0x30)));
}
