#ifndef VIEW_H
#define VIEW_H

#include "../interfaces.h"
#include "../settings.h"

namespace View {
    //Hooks
    void FrameStageNotify(ClientFrameStage_t);
    void PostFrameStageNotify(ClientFrameStage_t);
}

#endif // VIEW_H
