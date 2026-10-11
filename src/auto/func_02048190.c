#include "m2c.h"
#include "engine.h"

extern u16 data_0215a4e8;

void func_02048190(s32 arg0) {
    data_0215a4e8 |= (u16) (1 << arg0);
}
