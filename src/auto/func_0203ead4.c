#include "engine.h"
#include "m2c.h"

void func_0203e130(M2C_UNK);

extern u16 data_02159fc4;

void func_0203ead4(s32 arg0) {
    data_02159fc4 |= (u16) arg0;
    func_0203e130(arg0);
}
