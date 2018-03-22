#ifndef INTERFACES_H
#define INTERFACES_H

#include <set>
#include <fstream>
#include <link.h>

#include "SDK/SDK.h"
#include "Utils/vmt.h"
#include "Utils/util.h"
#include "Utils/xorstring.h"

IBaseClientDLL* client {nullptr};
ISurface* surface {nullptr};
IVPanel* panel {nullptr};
IEngineClient* engine {nullptr};
IClientEntityList* entityList {nullptr};
IVDebugOverlay* debugOverlay {nullptr};
IVModelInfo* modelInfo {nullptr};
IVModelRender* modelRender {nullptr};
IClientMode* clientMode {nullptr};
IEngineTrace* trace {nullptr};
IInputSystem* inputSystem {nullptr};
IInputInternal* inputInternal {nullptr};
IMaterialSystem* material {nullptr};
ICvar* cvar {nullptr};
CGlobalVars* globalVars {nullptr};
CEffects* effects {nullptr};
IGameEventManager2* gameEvents {nullptr};
IPhysicsSurfaceProps* physics {nullptr};
CViewRender* viewRender {nullptr};
IPrediction* prediction {nullptr};
IGameMovement* gameMovement {nullptr};
IMoveHelper* moveHelper {nullptr};
CGlowObjectManager* glowManager {nullptr};
ILauncherMgr* launcherMgr {nullptr};
C_CSPlayerResource** csPlayerResource {nullptr};
C_CSGameRules** csGameRules {nullptr};
IEngineVGui* engineVGui {nullptr};
IEngineSound* sound {nullptr};
ILocalize* localize {nullptr};
ICommandLine* commandline {nullptr};
CInput* input {nullptr};

extern VMT* panelVMT;
extern VMT* clientVMT;
extern VMT* modelRenderVMT;
extern VMT* clientModeVMT;
extern VMT* gameEventsVMT;
extern VMT* viewRenderVMT;
extern VMT* inputInternalVMT;
extern VMT* materialVMT;
extern VMT* surfaceVMT;
extern VMT* launcherMgrVMT;
extern VMT* engineVGuiVMT;
extern VMT* soundVMT;

extern LineGoesThroughSmokeFn LineGoesThroughSmoke;
extern InitKeyValuesFn InitKeyValues;
extern LoadFromBufferFn LoadFromBuffer;


extern SetNamedSkyBoxFn SetNamedSkyBox;

extern int* nPredictionRandomSeed;
extern CMoveData* g_MoveData;
extern bool* s_bOverridePostProcessingDisable;

extern uintptr_t oSwapWindow;
extern uintptr_t* swapWindowJumpAddress;

extern uintptr_t oPollEvent;
extern uintptr_t* polleventJumpAddress;

namespace Interfaces {
    void FindInterfaces();
    void DumpInterfaces();
}

#endif // INTERFACES_H
