#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02159fec;

void func_020421fc(void) {
    M2C_FIELD(M2C_FIELD(&data_02159fec, void **, 0x1C), s16 *, 0x4B0) = 1;
    M2C_FIELD(&data_02159fec, u8 *, 0x26) = (u8) M2C_FIELD(M2C_FIELD(&data_02159fec, void **, 0x1C), u8 *, 0x4B4);
    M2C_FIELD(&data_02159fec, s8 *, 0x24) = 5;
}
