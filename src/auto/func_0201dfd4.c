#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214259c;

void func_0201dfd4(void) {
    if ((s32) M2C_FIELD(&data_0214259c, s32 *, 8) < 0x3E8) {
        M2C_FIELD(&data_0214259c, s32 *, 8) = (s32) (M2C_FIELD(&data_0214259c, s32 *, 8) + 1);
    }
}
