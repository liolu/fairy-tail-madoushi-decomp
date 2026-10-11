#include "m2c.h"
#include "engine.h"

void func_020336cc(M2C_UNK);

extern M2C_UNK data_020af8d8;
extern s32 data_020afaf0;

void func_0201115c(void) {
    if (data_020afaf0 == 0) {
        return;
    }
    func_020336cc(M2C_FIELD(&data_020af8d8, s32 *, 0x20));
}
