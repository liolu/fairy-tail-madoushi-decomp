#include "m2c.h"

extern M2C_UNK data_0209978c;

s16 func_0201f340(s32 arg0) {
    return *((u16 *) ((s8 *) &data_0209978c + (arg0 * 0x70)));
}
