#include "m2c.h"

M2C_UNK func_020329d0(void *);                      /* extern */
M2C_UNK func_02034ec0(void *);                      /* extern */
M2C_UNK func_0204732c(M2C_UNK *);                   /* extern */
M2C_UNK func_0204737c(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021578f0;
extern M2C_UNK data_02159358;

void func_02034e28(void *arg0) {
    func_0204732c(&data_02159358);
    if (M2C_FIELD(&data_021578f0, s32 *, 4) != 0) {
        func_0204732c(M2C_FIELD(&data_021578f0, s32 *, 4) + 0x10C8);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1E) >> 0x1F) != 0) {
        func_020329d0(arg0);
    }
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) != 0) {
        M2C_FIELD(arg0, M2C_UNK (**)(void *), 0x178)(arg0);
    }
    func_02034ec0(arg0);
    func_0204737c(&data_02159358);
    if (M2C_FIELD(&data_021578f0, s32 *, 4) == 0) {
        return;
    }
    func_0204737c(M2C_FIELD(&data_021578f0, s32 *, 4) + 0x10C8);
}
