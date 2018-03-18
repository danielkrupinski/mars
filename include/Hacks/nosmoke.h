#ifndef NOSMOKE_H
#define NOSMOKE_H

#include "../interfaces.h"
#include "../settings.h"

namespace NoSmoke {
    void Cleanup();

    //Hooks
    bool RenderSmokePostViewmodel();
    void FrameStageNotify(ClientFrameStage_t);
}

#endif // NOSMOKE_H
