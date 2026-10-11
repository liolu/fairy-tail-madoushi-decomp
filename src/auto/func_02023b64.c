#include "m2c.h"
#include "engine.h"

void func_02023970(void);

extern M2C_UNK data_0214d694;

void func_02023b64(void) {
    if (M2C_FIELD(&data_0214d694, s32 *, 8) == 0) {
        return;
    }
    M2C_FIELD(&data_0214d694, s32 *, 0xC) = -1;
    func_02023970();
}
