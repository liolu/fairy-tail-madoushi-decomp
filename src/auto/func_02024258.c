#include "m2c.h"

M2C_UNK func_02023bdc(void *);                      /* extern */
extern M2C_UNK data_0214df60;

void func_02024258(s32 arg0) {
    s32 temp_r1;

    temp_r1 = arg0 * 0x18;
    if (*((M2C_UNK *) ((s8 *) &data_0214df60 + temp_r1)) == 0) {
        return;
    }
    func_02023bdc((M2C_UNK *) ((s8 *) &data_0214df60 + temp_r1));
}
