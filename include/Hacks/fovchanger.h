#ifndef FOVCHANGER_H
#define FOVCHANGER_H

#include "../SDK/SDK.h"
#include "../settings.h"

namespace FOVChanger {
    //Hooks
    void OverrideView(CViewSetup*);
    void GetViewModelFOV(float&);
}

#endif // FOVCHANGER_H
