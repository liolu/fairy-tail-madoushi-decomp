#include "engine.h"
#include "m2c.h"

void func_02037740(M2C_UNK, M2C_UNK);
void func_02044ef8(void);
void func_02048d44(void);
void func_0204b968(void);

void func_020376b8(void) {
    if (((s32) (*(u16 *) 0x02FFFFA8 & 0x8000) >> 0xF) != 0) {
        func_0204b968();
    }
    func_02037740(1, 1);
    func_02044ef8();
    func_02048d44();
}
