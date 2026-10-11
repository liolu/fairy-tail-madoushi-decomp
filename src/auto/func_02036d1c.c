#include "m2c.h"

M2C_UNK func_02000b64(s32);                         /* extern */
M2C_UNK func_020360e8();                            /* extern */
s32 func_020362f8();                                /* extern */
M2C_UNK func_020364f0(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02048d44();                            /* extern */
extern M2C_UNK data_021593e0;

void func_02036d1c(s32 arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02000b64(0x02000BAC);
    func_020360e8();
    if (arg0 != (arg0 & func_020362f8())) {
        func_02048d44();
    }
    func_020364f0(&data_021593e0, 1, arg1, arg2);
}
