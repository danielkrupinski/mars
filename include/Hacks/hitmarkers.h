#ifndef HITMARKERS_H
#define HITMARKERS_H

#include "../Utils/draw.h"
#include "../interfaces.h"
#include "../Utils/entity.h"

namespace Hitmarkers {
    //Hooks
    void FireGameEvent(IGameEvent*);
    void Paint();
}

#endif // HITMARKERS_H
