#include "m2c.h"
#include "engine.h"

extern s32 data_02156e60;

void func_02031dac(s32 arg0) {
    data_02156e60 &= ~arg0;
}
