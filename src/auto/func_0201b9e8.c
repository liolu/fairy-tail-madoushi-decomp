/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021425d0;

void func_0201b9e8(s32 arg0, s32 arg1) {
    void *temp_r2;

    temp_r2 = (M2C_UNK *) ((s8 *) &data_021425d0 + (arg0 * 0x10));
    if (arg1 == 0) {
        if (M2C_FIELD(temp_r2, s32 *, 0) != -1) {
            M2C_FIELD(temp_r2, s32 *, 0) = -1;
            M2C_FIELD(temp_r2, s32 *, 4) = 0x10000;
        }
        return;
    }
    if (M2C_FIELD(temp_r2, s32 *, 0) != 1) {
        M2C_FIELD(temp_r2, s32 *, 0) = 1;
        M2C_FIELD(temp_r2, s32 *, 4) = 0;
    }
}
