#include "engine.h"
#include "m2c.h"

void func_02049af4(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02156e60;

void func_02031d7c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_02049af4(arg0, 0);
    M2C_FIELD(&data_02156e60, s32 *, 8) = (s32) (M2C_FIELD(&data_02156e60, s32 *, 8) & ~arg0);
}
