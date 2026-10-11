#include "m2c.h"
#include "engine.h"

extern u16 data_0215c4cc;

s32 func_0204fcc4(void) {
    if (data_0215c4cc != 0) {
        return 0;
    }
    return 3;
}
