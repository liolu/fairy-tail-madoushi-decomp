#include "m2c.h"
#include "engine.h"

s32 func_02040d88(s32 arg0, s32 arg1) {
    s32 var_r1;

    var_r1 = arg1;
    if ((u32) var_r1 <= (u32) arg0) {
        var_r1 = arg0;
    }
    return (s32) (u16) var_r1;
}
