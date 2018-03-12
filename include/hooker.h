#ifndef HOOKER_H
#define HOOKER_H

#include <memory>
#include <unordered_map>
#include <sys/mman.h>
#include <link.h>
#include "Utils/patternfinder.h"
#include "Utils/recvproxyhook.h"
#include "SDK/SDK.h"
#include "Utils/vmt.h"
#include "Utils/util.h"
#include "glhook.h"
#include "interfaces.h"

struct dlinfo_t {
    const char* library = nullptr;
    uintptr_t address = 0;
    size_t size = 0;
};

namespace Hooker {
    bool GetLibraryInformation(const char*, uintptr_t*, size_t*);
    void InitializeVMHooks();
    bool HookRecvProp(const char*, const char*, std::unique_ptr<RecvPropHook>&);
    void FindIClientMode();
    void FindGlobalVars();
    void FindCInput();
    void FindGlowManager();
    void FindPlayerResource();
    void FindGameRules();
    void FindRankReveal();
    void FindSendClanTag();
    void FindViewRender();
    void FindPrediction();
    void FindIsReadyCallback();
    void FindSurfaceDrawing();
    void FindGetLocalClient();
    void FindLineGoesThroughSmoke();
    void FindInitKeyValues();
    void FindLoadFromBuffer();
    void FindOverridePostProcessingDisable();
    void HookSwapWindow();
    void HookPollEvent();
    void FindSDLInput();
    void FindSetNamedSkybox();
}

#endif // HOOKER_H
