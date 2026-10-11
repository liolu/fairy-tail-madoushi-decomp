#include "m2c.h"
#include "engine.h"

void func_0202d268(void);
void func_0203c9cc(void);

void func_0202fea4(void) {
    func_0203c9cc();
    func_0202d268();
    *(s32 *)0x04000600 = (*(s32 *)0x04000600 & ~0xC0000000) | 0x80000000;
}
