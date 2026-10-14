#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02142620;

void func_0201b728(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(((arg0 * 0x1C) + (s32) &data_02142620), s32 *, 4) =
        (s32) ((arg1 & 0x1F) + ((u32) (arg2 << 0x1B) >> 0x16) + ((u32) (arg3 << 0x1B) >> 0x11));
}
