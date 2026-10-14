#include "m2c.h"

extern M2C_UNK data_0214c738;
extern M2C_UNK data_0214d900;

void *func_02022b34(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    switch (M2C_FIELD(&data_0214c738, s32 *, 0x2D0)) { /* irregular */
        case 1:
        case 2:
            var_r0 = (s32) ((M2C_UNK *) ((s8 *) &data_0214d900 + (var_r0 << 5)));
        /* fallthrough */
        default:
            return (void *) var_r0;
        case 0:
            return (M2C_UNK *) ((s8 *) &data_0214d900 + (var_r0 << 5));
    }
}
