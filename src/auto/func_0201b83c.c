#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02142620;

s32 func_0201b83c(s32 arg0) {
    if (*((M2C_UNK *)((s8 *)&data_02142620 + (arg0 * 0x1C))) != 0) {
        return 1;
    }
    return 0;
}
