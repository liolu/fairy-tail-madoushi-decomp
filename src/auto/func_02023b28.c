#include "engine.h"
#include "m2c.h"

void func_0200d4c8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02023970(void);

extern M2C_UNK data_0214d694;

void func_02023b28(s32 arg0) {
    if (M2C_FIELD(&data_0214d694, s32 *, 8) == 0) {
        return;
    }
    M2C_FIELD(&data_0214d694, s32 *, 0xC) = -1;
    func_0200d4c8(M2C_FIELD(&data_0214d694, s32 *, 0x10), M2C_FIELD(&data_0214d694, s32 *, 0x14), 0x1FF, arg0);
    func_02023970();
}
