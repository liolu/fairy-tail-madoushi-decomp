#include "engine.h"
#include "m2c.h"

extern s32 data_020a1d4c;

s32 func_02003a78(void) {
    if (data_020a1d4c != 0) {
        return 1;
    }
    return 0;
}
