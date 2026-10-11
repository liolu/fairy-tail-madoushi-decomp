#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_020a5520;

void func_0200be68(void) {
    M2C_FIELD((void *)0x04000000, s32 *, 0) = (s32) ((M2C_FIELD((void *)0x04000000, s32 *, 0) & ~0x1F00) | (M2C_FIELD(&data_020a5520, s32 *, 0) << 8));
    M2C_FIELD((void *)0x04000000, s32 *, 0x1000) = (s32) ((M2C_FIELD((void *)0x04000000, s32 *, 0x1000) & ~0x1F00) | (M2C_FIELD(&data_020a5520, s32 *, 0x164) << 8));
}
