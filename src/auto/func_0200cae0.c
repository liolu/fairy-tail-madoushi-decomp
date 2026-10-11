#include "m2c.h"

void func_0200cae0(s32 arg0, s32 arg1) {
    if (arg0 != 0) {
        return;
    }
    *(s32 *)0x04000000 = (*(s32 *)0x04000000 & ~0x38000000) | (((s32) (arg1 + ((u32) (arg1 >> 0xF) >> 0x10)) >> 0x10) << 0x1B);
}
