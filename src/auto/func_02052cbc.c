#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a126c;

s32 func_02052cbc(s32 arg0, s32 arg1) {
    return M2C_FIELD(M2C_FIELD(&data_020a126c, void **, 8), s32 (**)(), 4)(arg0, arg1);
}
