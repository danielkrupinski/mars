#ifndef GRENADEHELPER_H
#define GRENADEHELPER_H

#include "../SDK/SDK.h"
#include "../settings.h"
#include <algorithm>


GrenadeType GetGrenadeType(C_BaseCombatWeapon*);

namespace GrenadeHelper {
    // Hooks
    void CreateMove(CUserCmd*); // Actively Help to throw grenade
    void Paint(); // Draw the Grenade Helper Esp
}

#endif // GRENADEHELPER_H
