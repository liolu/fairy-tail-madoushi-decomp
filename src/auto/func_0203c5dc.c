#include "engine.h"
#include "m2c.h"

void func_0203c5dc(s32 arg0) {
    *(u16 *) 0x04000004 = (*(u16 *) 0x04000004 & 0x3F) | (u16) (arg0 << 8) | ((s32) (arg0 & 0x100) >> 1);
}
