#include "m2c.h"
#include "engine.h"

void func_02034b38(M2C_UNK);
void func_02034f60(M2C_UNK);
void func_02034fec(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021578f0;
extern M2C_UNK data_02159370;

void func_02034ec0(s32 arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x118) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_02034f60(arg0);
    M2C_FIELD(arg0, M2C_UNK (**)(s32), 0x170)(arg0);
    func_02034fec((s32) &data_02159370, arg0);
    if (M2C_FIELD(&data_021578f0, s32 *, 4) != 0) {
        func_02034fec(M2C_FIELD(&data_021578f0, s32 *, 4) + 0x10E0, arg0);
    }
    func_02034b38(arg0);
}
