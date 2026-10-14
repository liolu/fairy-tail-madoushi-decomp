#include "engine.h"
#include "m2c.h"

M2C_UNK func_0203ed60(void);

extern M2C_UNK data_02159f88;

void func_0203dc00(void) {
    s32 temp_r0;

    temp_r0                             = func_0203ed60();
    M2C_FIELD(&data_02159f88, s32 *, 8) = temp_r0;
    switch (temp_r0) {                              /* irregular */
        case 0x0:
            return;
        case 0x40:
            M2C_FIELD(&data_02159f88, s32 *, 4) = 0x06894000;
            return;
        case 0x20:
            M2C_FIELD(&data_02159f88, s32 *, 4) = 0x06890000;
            return;
    }
}
