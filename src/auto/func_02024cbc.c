#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0214df18;

void func_02024cbc(s32 arg0) {
    if (M2C_FIELD(&data_0214df18, s32 *, 0) != 0) {
        M2C_FIELD(&data_0214df18, s32 *, 8) = arg0;
    }
}
