#include "engine.h"
#include "m2c.h"

void func_02049990(M2C_UNK, M2C_UNK);

void func_020323a4(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (arg1 != M2C_FIELD(arg0, u8 *, 0x2E))) {
        func_02049990((s32) M2C_FIELD(arg0, u8 *, 0x3C), arg1);
        M2C_FIELD(arg0, u8 *, 0x2E) = (u8) arg1;
    }
}
