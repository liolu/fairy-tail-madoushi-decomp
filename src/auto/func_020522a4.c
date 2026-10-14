#include "engine.h"
#include "m2c.h"

s32 func_020522a4(void) {
    if (*(u16 *) 0x02FFFC30 != 0xFFFF) {
        return 1;
    }
    return 0;
}
