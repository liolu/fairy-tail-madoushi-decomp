#include "m2c.h"

s32 func_0202bccc();                                /* extern */
s32 func_0202bcfc(s32);                             /* extern */
extern M2C_UNK data_0205c968;

s32 func_02012194(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_0202bcfc(arg0 + 0xA);
    if (temp_r0 == 0) {
        return 0;
    }
    *((M2C_UNK *) ((s8 *) &data_0205c968 + ((temp_r0 - 1) * 4))) = func_0202bccc();
    return 1;
}
