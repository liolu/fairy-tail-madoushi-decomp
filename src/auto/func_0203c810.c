/* compiler: 1.2/sp2p3  */
#include "m2c.h"
#include "engine.h"

void func_0203c810(s32 arg0, s32 arg1, s32 arg2) {
    if (arg2 < 0) {
        M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0xC0);
        M2C_FIELD(arg0, s16 *, 4) = (s16) (0 - arg2);
        return;
    }
    M2C_FIELD(arg0, s16 *, 0) = (s16) (arg1 | 0x80);
    M2C_FIELD(arg0, s16 *, 4) = (s16) arg2;
}
