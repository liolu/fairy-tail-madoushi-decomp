/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_0200b1c4(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_r1;

    temp_r1 = M2C_FIELD((arg0 + (arg1 * 4)), void **, 0x70);
    switch (arg2) {                                 /* irregular */
    case 2:
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) ^ 4);
        return;
    case 0:
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) & ~4);
        return;
    case 1:
        M2C_FIELD(temp_r1, s32 *, 4) = (s32) (M2C_FIELD(temp_r1, s32 *, 4) | 4);
        return;
    }
}
