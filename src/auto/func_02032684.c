#include "engine.h"
#include "m2c.h"

void func_0202c75c(M2C_UNK, M2C_UNK);
void func_0203246c(M2C_UNK, M2C_UNK);
void func_020324bc(M2C_UNK);

extern M2C_UNK data_02156e78;

void func_02032684(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r4 != 0) {
        func_0202c75c(temp_r4, arg0);
        M2C_FIELD(arg0, s32 *, 4) = 0;
    }
    func_0202c75c((s32) &data_02156e78, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = (s8) arg1;
    if (temp_r4 != 0) {
        func_0203246c(temp_r4, arg0);
    }
    func_020324bc(arg0);
}
