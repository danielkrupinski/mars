#ifndef EDGEJUMP_H
#define EDGEJUMP_H

#include "../interfaces.h"
#include "../settings.h"

namespace EdgeJump {
    //Hooks
    void PrePredictionCreateMove(CUserCmd*);
    void PostPredictionCreateMove(CUserCmd*);
}

#endif // EDGEJUMP_H
