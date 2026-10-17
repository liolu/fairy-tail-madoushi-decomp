#include "m2c.h"

extern M2C_UNK data_02096a94;

s8 func_0201fc70(s32 arg0) {
    return *((u8 *) ((s8 *) &data_02096a94 + (arg0 * 0x30)));
}
