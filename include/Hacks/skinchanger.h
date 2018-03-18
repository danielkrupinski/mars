#ifndef SKINCHANGER_H
#define SKINCHANGER_H

#include "../interfaces.h"
#include "../settings.h"

class RecvPropHook;

extern GetLocalClientFn GetLocalClient;

extern std::unordered_map<std::string, std::string> killIcons;

namespace SkinChanger {
    extern bool forceFullUpdate;
    extern bool glovesUpdated;
    extern std::unique_ptr<RecvPropHook> sequenceHook;

    //Hooks
    void FrameStageNotifySkins(ClientFrameStage_t);
    void FrameStageNotifyModels(ClientFrameStage_t);
    void FireEventClientSide(IGameEvent*);
    void FireGameEvent(IGameEvent*);

    void SetViewModelSequence(const CRecvProxyData*, void*, void*);
}

extern RecvVarProxyFn fnSequenceProxyFn;

#endif // SKINCHANGER_H
