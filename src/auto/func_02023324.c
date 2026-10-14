#include "m2c.h"

M2C_UNK func_02023550(s32, s32, s32, u16, s32);     /* extern */
M2C_UNK func_02023690();                            /* extern */
extern M2C_UNK data_0214d694;

void func_02023324(void) {
    if (M2C_FIELD(&data_0214d694, s32 *, 0x68) == 0) {
        return;
    }
    M2C_FIELD(&data_0214d694, s32 *, 0x94) = 0;
    if (M2C_FIELD(&data_0214d694, s32 *, 0x90) == 0) {
        func_02023550(M2C_FIELD(&data_0214d694, s32 *, 0x6C), M2C_FIELD(&data_0214d694, s32 *, 0x70),
                      (M2C_FIELD(&data_0214d694, s32 *, 0x74) + (M2C_FIELD(&data_0214d694, s32 *, 0x78) << 5)) * 2,
                      M2C_FIELD(&data_0214d694, u16 *, 0x84), M2C_FIELD(&data_0214d694, s32 *, 0x88));
        return;
    }
    func_02023690();
}
