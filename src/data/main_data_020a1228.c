/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_020a1218[];
extern u8 data_020a121c[];
extern u8 data_020a1220[];
extern u8 data_020a1260[];
extern u8 data_020a1278[];
extern u8 data_020a1284[];
extern u8 data_020a1294[];
extern u8 data_020a12ec[];
extern u8 data_020a1374[];
extern u8 func_02052c70[];
extern u8 func_02052ca8[];

u32 data_020a1228[2] = {(u32) &func_02052c70, (u32) &func_02052ca8};
u32 data_020a1230[4] = {0x00000020, 0x0000006E, 0x00000000, (u32) &data_020a1374};
u32 data_020a1240[8] = {(u32) &data_020a1220, (u32) &data_020a1284, (u32) &data_020a1278, (u32) &data_020a1260,
                        (u32) &data_020a121c, (u32) &data_020a1294, (u32) &data_020a12ec, (u32) &data_020a1218};
