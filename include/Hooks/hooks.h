#ifndef HOOKS_H
#define HOOKS_H

#include "../SDK/SDK.h"
#include "../interfaces.h"
#include "../Hacks/hacks.h"
#include "../ATGUI/atgui.h"
#include "../hooker.h"

typedef void (*FrameStageNotifyFn) (void*, ClientFrameStage_t);
typedef void (*PaintTraverseFn) (void*, VPANEL, bool, bool);
typedef void (*DrawModelExecuteFn) (void*, void*, void*, const ModelRenderInfo_t&, matrix3x4_t*);
typedef bool (*CreateMoveFn) (void*, float, CUserCmd*);
typedef bool (*FireEventFn) (void*, IGameEvent*, bool);
typedef bool (*FireEventClientSideFn) (void*, IGameEvent*);
typedef int (*IN_KeyEventFn) (void*, int, int, const char*);
typedef void (*RenderViewFn) (void*, CViewSetup&, CViewSetup&, unsigned int, int);
typedef void (*SetKeyCodeStateFn) (void*, ButtonCode_t, bool);
typedef void (*SetMouseCodeStateFn) (void*, ButtonCode_t, MouseCodeState_t);
typedef void (*OnScreenSizeChangedFn) (void*, int, int);
typedef void (*PlaySoundFn) (void*, const char*);
typedef void (*BeginFrameFn) (void*, float);
typedef int (*PumpWindowsMessageLoopFn) (void*, void*);
typedef void (*PaintFn) (void*, PaintMode_t);
typedef void (*EmitSound1Fn) (void*, IRecipientFilter&, int, int, const char*, unsigned int, const char*, float, int, float, int, int, const Vector*, const Vector*, void*, bool, float, int);
typedef void (*EmitSound2Fn) (void*, IRecipientFilter&, int, int, const char*, unsigned int, const char*, float, int, soundlevel_t, int, int, const Vector*, const Vector*, void*, bool, float, int);
typedef void (*RenderSmokePostViewmodelFn) (void*);
typedef void (*OverrideViewFn) (void*, CViewSetup*);
typedef float (*GetViewModelFOVFn) (void*);

namespace Hooks {
    void PaintTraverse(void*, VPANEL, bool, bool);
    void FrameStageNotify(void*, ClientFrameStage_t);
    void DrawModelExecute(void*, void*, void*, const ModelRenderInfo_t&, matrix3x4_t*);
    bool CreateMove(void*, float, CUserCmd*);
    bool FireEvent(void*, IGameEvent*, bool);
    bool FireEventClientSide(void*, IGameEvent*);
    int IN_KeyEvent(void*, int, int, const char*);
    void RenderView(void*, CViewSetup&, CViewSetup&, unsigned int, int);
    void OverrideView(void*, CViewSetup*);
    void SetKeyCodeState(void*, ButtonCode_t, bool);
    void SetMouseCodeState(void*, ButtonCode_t, MouseCodeState_t);
    void OnScreenSizeChanged(void*, int, int);
    void PlaySound(void*, const char*);
    void BeginFrame(void*, float);
    int PumpWindowsMessageLoop(void*, void*);
    void Paint(void*, PaintMode_t);
    void PaintImGui(); // Draw with ImGui.
    void EmitSound1(void*, IRecipientFilter&, int, int, const char*, unsigned int, const char*, float, int, float, int, int, const Vector*, const Vector*, void*, bool, float, int);
    void EmitSound2(void*, IRecipientFilter&, int, int, const char*, unsigned int, const char*, float, int, soundlevel_t, int, int, const Vector*, const Vector*, void*, bool, float, int);
    void RenderSmokePostViewmodel(void*);
    float GetViewModelFOV(void*);
}

namespace CreateMove {
    extern bool sendPacket;
    extern QAngle lastTickViewAngles;
}

namespace OverrideView {
    extern float currentFOV;
}

namespace SetKeyCodeState {
    extern bool shouldListen;
    extern ButtonCode_t* keyOutput;
}

#endif // HOOKS_H
