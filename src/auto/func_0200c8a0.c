#include "engine.h"
#include "m2c.h"

void func_0200c8a0(s32 arg0) {
    s32 var_r2;

    var_r2 = 1;
    if (arg0 != 0) {
        var_r2 = 0;
    }
    *(u16 *) 0x04000304 = (*(u16 *) 0x04000304 & ~0x8000) | (var_r2 << 0xF);
}
