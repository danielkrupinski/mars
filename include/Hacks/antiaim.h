#ifndef ANTIAIM_H
#define ANTIAIM_H

#include "../settings.h"
#include "../SDK/SDK.h"
#include "../Hooks/hooks.h"
#include "../interfaces.h"
#include "aimbot.h"
#include <lua.hpp>

namespace AntiAim {
    void LuaInit();
    void LuaCleanup();

    //Hooks
    void CreateMove(CUserCmd*);
}

#endif // ANTIAIM_H
