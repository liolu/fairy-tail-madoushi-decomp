#include "engine.h"
#include "m2c.h"

void func_0202997c(M2C_UNK);

extern M2C_UNK data_0214e120;

s32 func_0202a2dc(void) {
    if (M2C_FIELD(&data_0214e120, s32 *, 0x18) != 2) {
        return 0;
    }
    M2C_FIELD(&data_0214e120, s16 *, 2) = 0;
    func_0202997c(3);
    return 1;
}
