#ifndef PREDICTIONSYSTEM_H
#define PREDICTIONSYSTEM_H

#include "../settings.h"
#include "../SDK/SDK.h"

namespace PredictionSystem {
    //Hooks
    /* CreateMove */
    void StartPrediction(CUserCmd*);
    void EndPrediction();
}

#endif // PREDICTIONSYSTEM_H
