#include "engine.h"
#include "m2c.h"

void func_02041efc(void);

extern M2C_UNK data_02159fec;

void func_02041ed0(void) {
    M2C_FIELD(&data_02159fec, s32 *, 0x18) = 0;
    M2C_FIELD(&data_02159fec, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_02159fec, s8 *, 0x24)  = 1;
    M2C_FIELD(&data_02159fec, s32 *, 0x14) = 0;
    func_02041efc();
}
