#include "engine.h"
#include "m2c.h"

void func_0205019c(void) {
    u16 temp_r1;

    temp_r1 = *(u16 *) 0x02FFFF96;
    if (temp_r1 & 1) {
        *(u16 *) 0x02FFFF96 = temp_r1 & 0xFFFE;
    }
}
