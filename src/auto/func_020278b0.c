#include "m2c.h"
#include "engine.h"

void func_020274ac(void);
void func_02027554(void);

extern M2C_UNK data_0214e020;

void func_020278b0(void) {
    if (M2C_FIELD(&data_0214e020, s32 *, 0x20) != 0) {
        func_02027554();
        func_020274ac();
    }
    M2C_FIELD(&data_0214e020, s32 *, 0x20) = 0;
}
