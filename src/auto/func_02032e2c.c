/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NNSi_SndCaptureBeginSleep from https://github.com/Yokimitsuro/khdays-decomp libs/nns/snd/calls/NNSi_SndCaptureBeginSleep.c
 * (license: CC0-1.0), reused by tools/donor_match.py */
typedef unsigned long u32;
typedef int BOOL;
extern BOOL func_02049fcc(u32 flags);
extern void func_0204a168(u32 tag);
extern u32 func_0204a1d4(void);
extern void func_02049a30(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
typedef enum {
    NNS_SND_CAPTURE_FORMAT_PCM16,
    NNS_SND_CAPTURE_FORMAT_PCM8
} NNSSndCaptureFormat;
typedef enum {
    NNS_SND_CAPTURE_TYPE_REVERB,
    NNS_SND_CAPTURE_TYPE_EFFECT,
    NNS_SND_CAPTURE_TYPE_SAMPLING
} NNSSndCaptureType;
typedef void (*NNSSndCaptureCallback)(void *bufferL, void *bufferR, u32 len, NNSSndCaptureFormat format, void *arg);
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
typedef struct CaptureParam {
    BOOL activeFlag;
    NNSSndCaptureType type;
    NNSSndCaptureFormat format;
    void *bufferL;
    void *bufferR;
    u32 bufLen;
    u32 blockSize;
    int curBuffer;
    u32 chBitMask;
    u32 playChBitMask;
    u32 capBitMask;
    int alarmNo;
    int interval;
    NNSSndCaptureCallback callback;
    void *callbackArg;
    NNSSndFader fader;
    BOOL fadeOutFlag;
    int volume;
} CaptureParam;
extern CaptureParam data_0215785c;
void func_02032e2c(void) {
    CaptureParam *cap;
    u32 commandTag;

    cap = &data_0215785c;

    if (!cap->activeFlag) {
        return;
    }

    func_02049a30(cap->playChBitMask, cap->capBitMask, cap->alarmNo >= 0 ? (u32) (1 << cap->alarmNo) : 0, 0);

    commandTag = func_0204a1d4();
    (void) func_02049fcc((1 << 0));
    func_0204a168(commandTag);
}
