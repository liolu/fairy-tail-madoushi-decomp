#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020997b8;

s32 func_0201f3e4(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_020997b8 + (arg0 * 0x70)));
}
