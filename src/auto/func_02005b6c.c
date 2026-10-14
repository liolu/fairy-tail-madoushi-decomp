#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_020a2b30;

s32 func_02005b6c(s32 arg0) {
    return (0xCC * arg0) + (s32) &data_020a2b30;
}
