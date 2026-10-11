#include "m2c.h"

extern M2C_UNK data_0214259c;

void func_0201ddd0(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_0214259c, s32 *, 0x24) = arg0;
    if (arg0 != -1) {
        if (arg1 == -1) {
            M2C_FIELD(&data_0214259c, s32 *, 0x10) = 0x1E;
        } else {
            M2C_FIELD(&data_0214259c, s32 *, 0x10) = arg1;
        }
        return;
    }
    M2C_FIELD(&data_0214259c, s32 *, 0x10) = 0;
}
