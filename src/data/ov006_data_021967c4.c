/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 data_ov006_02195f2c[];
extern u8 data_ov006_02195f40[];
extern u8 data_ov006_02195f54[];
extern u8 data_ov006_02195f68[];
extern u8 data_ov006_02195f7c[];
extern u8 data_ov006_02195f90[];
extern u8 data_ov006_02195fa4[];
extern u8 data_ov006_02195fb8[];
extern u8 data_ov006_02195fcc[];
extern u8 data_ov006_02195fe0[];
extern u8 data_ov006_02195ff4[];
extern u8 data_ov006_02196008[];
extern u8 data_ov006_0219601c[];
extern u8 data_ov006_02196030[];
extern u8 data_ov006_02196044[];
extern u8 data_ov006_02196058[];
extern u8 data_ov006_0219606c[];
extern u8 data_ov006_02196080[];
extern u8 data_ov006_02196094[];
extern u8 data_ov006_021960a8[];
extern u8 data_ov006_021960bc[];
extern u8 data_ov006_021960d0[];
extern u8 data_ov006_021960e4[];
extern u8 data_ov006_021960f8[];
extern u8 data_ov006_0219610c[];
extern u8 data_ov006_02196124[];
extern u8 data_ov006_0219613c[];
extern u8 data_ov006_02196154[];
extern u8 data_ov006_0219616c[];
extern u8 data_ov006_02196184[];
extern u8 data_ov006_0219619c[];
extern u8 data_ov006_021961b4[];
extern u8 data_ov006_021961cc[];
extern u8 data_ov006_021961e4[];
extern u8 data_ov006_021961fc[];
extern u8 data_ov006_02196214[];
extern u8 data_ov006_0219622c[];
extern u8 data_ov006_02196244[];
extern u8 data_ov006_0219625c[];
extern u8 data_ov006_02196274[];
extern u8 data_ov006_0219628c[];
extern u8 data_ov006_021962a4[];
extern u8 data_ov006_021962bc[];
extern u8 data_ov006_021962d4[];
extern u8 data_ov006_02196324[];
extern u8 data_ov006_0219634c[];

u32 data_ov006_021967c4[12] = {0x1919140A, 0x05050F14, 0x19140F05, 0x05050F0F, 0x00050505, 0x140F0A05,
                               0x00050A0A, 0x1E1E140A, 0x000A0A14, 0x0000000A, 0x1E140A00, 0x00000A0A};
u32 data_ov006_021967f4[18] = {0x00000000, 0x00000020, 0x00000001, 0x00000000, 0x0000000B, 0x00000020,
                               0x0000000C, 0x00000000, 0x00000036, 0x00000020, 0x00000037, 0x00000000,
                               0x0000005F, 0x00000020, 0x00000060, 0x00000000, 0xFFFFFFFF, 0x00000000};
u32 data_ov006_0219683c[23] = {
    (u32) &data_ov006_02196124, (u32) &data_ov006_0219613c, (u32) &data_ov006_02196184, (u32) &data_ov006_0219619c,
    (u32) &data_ov006_021961b4, (u32) &data_ov006_021961e4, (u32) &data_ov006_021961fc, (u32) &data_ov006_02196274,
    (u32) &data_ov006_0219622c, (u32) &data_ov006_0219625c, (u32) &data_ov006_0219628c, (u32) &data_ov006_021962a4,
    (u32) &data_ov006_021962bc, (u32) &data_ov006_021962d4, (u32) &data_ov006_0219610c, (u32) &data_ov006_02196154,
    (u32) &data_ov006_0219616c, (u32) &data_ov006_021961cc, (u32) &data_ov006_02196214, (u32) &data_ov006_02196244,
    (u32) &data_ov006_02196324, (u32) &data_ov006_0219634c, (u32) &data_ov006_021967f4};
u32 data_ov006_02196898[28] = {(u32) &data_ov006_02196094,
                               (u32) &data_ov006_02195f2c,
                               (u32) &data_ov006_021960d0,
                               (u32) &data_ov006_02196044,
                               (u32) &data_ov006_0219606c,
                               (u32) &data_ov006_02195f7c,
                               (u32) &data_ov006_02195f68,
                               (u32) &data_ov006_021960e4,
                               (u32) &data_ov006_0219601c,
                               (u32) &data_ov006_02196080,
                               (u32) &data_ov006_02195f90,
                               (u32) &data_ov006_02195fb8,
                               (u32) &data_ov006_02195fe0,
                               (u32) &data_ov006_02195ff4,
                               (u32) &data_ov006_02196008,
                               (u32) &data_ov006_02196030,
                               (u32) &data_ov006_02196058,
                               (u32) &data_ov006_02195f40,
                               (u32) &data_ov006_021960f8,
                               (u32) &data_ov006_02195fa4,
                               (u32) &data_ov006_02195fcc,
                               0x00000000,
                               0x00000000,
                               0x00000000,
                               (u32) &data_ov006_021960bc,
                               (u32) &data_ov006_02195f54,
                               (u32) &data_ov006_021960a8,
                               (u32) &data_ov006_02196094};
u32 data_ov006_02196908[32] = {0x444B505A, 0x282F363D, 0x1A17140A, 0x2623201D, 0x06020000, 0x16120E0A, 0x00000000, 0x00000000,
                               0x36444D50, 0x12151628, 0x201A1714, 0x24252826, 0x0E060000, 0x2E2A2616, 0x00000000, 0x00000000,
                               0x0C0F1215, 0x00030609, 0x22232425, 0x1E1F2021, 0x36322E2A, 0x46423E3A, 0x00000000, 0x00000000,
                               0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000};
u32 data_ov006_02196988[40] = {0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x00000000, 0x64646464,
                               0x00000000, 0x00000000, 0x00003C1E, 0x00000000, 0x00321400, 0x64320000, 0x00001446, 0x00001E1E,
                               0x50321E00, 0x00141400, 0x141E0000, 0x00001446, 0x00001E1E, 0x50321E00, 0x00141400, 0x141E0000,
                               0x00001446, 0x00001E1E, 0x50321E00, 0x00141400, 0x141E0000, 0x00001446, 0x00001E1E, 0x50321E00,
                               0x00141400, 0x141E0000, 0x00001446, 0x00001E1E, 0x50321E00, 0x00141400, 0x141E0000, 0x00001446};
