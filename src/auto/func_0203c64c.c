#include "engine.h"
#include "m2c.h"

void func_0204c2a0(void);

extern s16 data_020a1170;
extern s16 data_02159f84;

void func_0203c64c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_020a1170       = 0;
    data_02159f84       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
    func_0204c2a0();
}
