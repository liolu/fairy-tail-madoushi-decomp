#include "m2c.h"
#include "engine.h"

void func_02027f44(void);
void func_02027ff8(void);

extern M2C_UNK data_0214e020;

void func_0202871c(void) {
    if (M2C_FIELD(&data_0214e020, s32 *, 0x38) != 0) {
        func_02027ff8();
        func_02027f44();
    }
    M2C_FIELD(&data_0214e020, s32 *, 0x38) = 0;
}
