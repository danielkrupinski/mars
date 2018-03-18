#ifndef SPAMMER_H
#define SPAMMER_H

#include <vector>
#include "../interfaces.h"
#include "../settings.h"
#include "../Utils/util.h"

namespace Spammer {
    //Hooks
    void BeginFrame(float);
    void FireGameEvent(IGameEvent*);
}

#endif // SPAMMER_H
