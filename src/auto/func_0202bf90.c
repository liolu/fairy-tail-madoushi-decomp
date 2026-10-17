#include "m2c.h"

M2C_UNK func_02045558(void *, M2C_UNK *, M2C_UNK);  /* extern */

u32 func_0202bf90(void *arg0) {
    u8 sp4[8];
    s32 sp0;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;
    u32 temp_r0_4;
    u32 temp_r1;

    temp_r1   = M2C_FIELD(arg0, u32 *, 8);
    temp_r0_4 = (u32) (temp_r1 << 0x1E) >> 0x1F;
    if (temp_r0_4 == 0) {
        return temp_r0_4;
    }
    temp_r0_3 = (u32) (temp_r1 << 0x1D) >> 0x1F;
    if (temp_r0_3 == 0) {
        return temp_r0_3;
    }
    temp_r0_2 = (u32) (temp_r1 << 0x1C) >> 0x1F;
    if (temp_r0_2 != 0) {
        return temp_r0_2;
    }
    sp0 = (s32) M2C_FIELD(arg0, u16 *, 0x5C8);
    func_02045558(arg0 + 0x520, sp4, 6);
    M2C_FIELD(arg0, M2C_UNK(**)(s32, M2C_UNK, s32 *), 0x20)(M2C_FIELD(arg0, s32 *, 0x24), 1, &sp0);
    temp_r0                   = M2C_FIELD(arg0, u32 *, 8) | 8;
    M2C_FIELD(arg0, u32 *, 8) = temp_r0;
    return temp_r0;
}
