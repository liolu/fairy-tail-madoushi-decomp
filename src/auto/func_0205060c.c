#include "m2c.h"
#include "engine.h"

M2C_UNK func_0204fcc4(void);

s32 func_0205060c(void) {
    if (func_0204fcc4() != 0) {
        return 0x8000;
    }
    return (s32) *(u16 *)0x02FFFCFA;
}
