#ifndef RESOLVER_H
#define RESOLVER_H

#include "../settings.h"
#include "../interfaces.h"

namespace Resolver {
    extern std::vector<int64_t> Players;

    //Hooks
    void FrameStageNotify(ClientFrameStage_t);
    void PostFrameStageNotify(ClientFrameStage_t);
    void FireGameEvent(IGameEvent*);
}

#endif // RESOLVER_H
