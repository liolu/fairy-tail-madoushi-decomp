/* compiler: 1.2/sp2p3 -proc arm7tdmi */
#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02141b6c;

void func_02016308(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02141b6c, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(&data_02141b6c, s32 *, 0x18) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(&data_02141b6c, s32 *, 0x1C) = (s32) M2C_FIELD(arg1, s32 *, 8);
    M2C_FIELD(&data_02141b6c, s32 *, 0x20) = arg0;
    M2C_FIELD(&data_02141b6c, s32 *, 0x24) = 0;
}
