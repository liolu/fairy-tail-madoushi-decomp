#include "engine.h"
#include "m2c.h"

void func_02007b5c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_UNK (*temp_r3)(arg0, arg1, arg2);
    void *temp_ip;

    temp_ip = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    if (M2C_FIELD(temp_ip, s32 *, 4) & 2) {
        temp_r3 = M2C_FIELD(temp_ip, M2C_UNK(**)(), 0x24);
        if (temp_r3 != NULL) {
            temp_r3(arg0, arg1, arg2);
        }
    }
}
