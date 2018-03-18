#ifndef NAMESTEALER_H
#define NAMESTEALER_H

#include "../SDK/SDK.h"
#include "../settings.h"

namespace NameStealer {
    extern int entityId;

    //Hooks
    void BeginFrame(float);
    void FireGameEvent(IGameEvent*);
}

#endif // NAMESTEALER_H
