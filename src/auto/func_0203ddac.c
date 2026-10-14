#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203edd4(void);

extern M2C_UNK data_02159f88;

void func_0203ddac(void) {
    M2C_FIELD(&data_02159f88, s32 *, 0x18) = func_0203edd4();
}
