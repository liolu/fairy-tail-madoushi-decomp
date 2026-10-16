/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207364c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_player_init.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    u8 unk_00[0x10];
} UnkSndFader;
typedef struct {
    u8 unk_00[0x20];
    u8 volume;
} UnkSndPlayerGroup;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    UnkSndPlayerGroup *player;
    u8 unk_08[0x14 - 0x08];
    UnkFndLink prioLink;
    UnkSndFader fader;
    u8 status;
    u8 startedFlag;
    u8 unk_2e;
    u8 updateFlag;
    u32 commandTag;
    u16 seqType;
    u16 unk_36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 unk_3d;
    s16 extVolume;
    u8 initVolume;
    u8 volume;
    u8 unk_42[2];
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *volatile player;
} UnkSndHandle;
extern UnkFndList data_02156e78;
extern const s16 data_0205c264[];
extern void *func_0202c7bc(UnkFndList *list, void *object);
extern u32 func_0204a4e8(void);
extern BOOL func_0204a200(u32 tag);
extern void func_020325b4(UnkSndSeqPlayer *player);
extern void func_02035f40(UnkSndFader *fader);
extern int func_02035f0c(UnkSndFader *fader);
extern BOOL func_02035f58(UnkSndFader *fader);
extern void func_020499b0(u32 playerNo, int volume);
extern void func_02032510(UnkSndSeqPlayer *player);
extern void func_02049970(u32 playerNo);
void func_020320f8(void) {
    u32 status              = func_0204a4e8();
    UnkSndSeqPlayer *player = func_0202c7bc(&data_02156e78, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = func_0202c7bc(&data_02156e78, player);

        if (!player->startedFlag) {
            if (func_0204a200(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            func_020325b4(player);
        } else {
            func_02035f40(&player->fader);
            seqVol   = data_0205c264[player->volume];
            initVol  = data_0205c264[player->initVolume];
            groupVol = data_0205c264[player->player->volume];
            volume   = data_0205c264[func_02035f0c(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                func_020499b0(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && func_02035f58(&player->fader)) {
                func_02032510(player);
            }
            if (player->updateFlag) {
                func_02049970(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
