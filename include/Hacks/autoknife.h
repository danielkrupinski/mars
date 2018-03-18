#ifndef AUTOKNIFE_H
#define AUTOKNIFE_H

#include "../settings.h"
#include "../SDK/SDK.h"
#include "../interfaces.h"
#include "../Utils/entity.h"
#include "../Utils/math.h"

namespace AutoKnife {
    bool IsPlayerBehind(C_BasePlayer*, C_BasePlayer*);
    int GetKnifeDamageDone(C_BasePlayer*, C_BasePlayer*);
    int GetKnife2DamageDone(C_BasePlayer*, C_BasePlayer*);
    void CreateMove(CUserCmd*);
};

#endif // AUTOKNIFE_H
