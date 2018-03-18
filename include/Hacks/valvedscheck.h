#ifndef VALVE_DS_CHECK_H
#define VALVE_DS_CHECK_H

#include "../interfaces.h"
#include "../Utils/xorstring.h"

namespace ValveDSCheck {
    extern bool forceUT;

    //Hooks
    void FireGameEvent(IGameEvent*);
}

#endif // VALVE_DS_CHECK_H
