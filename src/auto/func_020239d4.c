#include "m2c.h"
#include "engine.h"

void func_020238c0(void);

extern M2C_UNK data_0214d694;

void func_020239d4(void) {
    if (M2C_FIELD(&data_0214d694, s32 *, 8) == 0) {
        return;
    }
    func_020238c0();
}
