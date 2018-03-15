#ifndef ENTITY_H
#define ENTITY_H

#include <list>
#include "../SDK/SDK.h"
#include "../interfaces.h"

namespace Entity
{
    bool IsVisible(C_BasePlayer*, int, float = 180.f, bool = false);
    bool IsSpotVisible(C_BasePlayer*, Vector, float = 180.f, bool = false);
    bool IsVisibleThroughEnemies(C_BasePlayer*, int, float = 180.f, bool = false);
    bool IsSpotVisibleThroughEnemies(C_BasePlayer*, Vector, float = 180.f, bool = false);
    bool IsPlanting(C_BasePlayer*);
    Bone GetBoneByName(C_BasePlayer*, const char*);
}

#endif // ENTITY_H
