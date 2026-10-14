#include "engine.h"
#include "m2c.h"

void func_02043ecc(void);

extern M2C_UNK data_02150e80;

void func_0202b8a4(void) {
    if ((M2C_FIELD(&data_02150e80, u16 *, 8) == 4) &&
        (M2C_FIELD(&data_02150e80, u16 *, 0xA) == M2C_FIELD(&data_02150e80, u16 *, 0x14))) {
        func_02043ecc();
    }
}
