#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_021572dc;

void func_02031e48(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_021572dc + (arg0 * 0x24))) = (s32) (u16) arg1;
}
