#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a02bc;

s32 func_02022acc(s32 arg0) {
    return *((M2C_UNK *)((s8 *)&data_020a02bc + (arg0 * 8)));
}
