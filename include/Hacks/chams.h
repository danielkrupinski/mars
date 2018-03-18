#ifndef CHAMS_H
#define CHAMS_H

#include "../Hooks/hooks.h"
#include "../interfaces.h"
#include "../settings.h"

namespace Chams {
    //Hooks
    void DrawModelExecute(void*, void*, void*, const ModelRenderInfo_t&, matrix3x4_t*);
}

#endif // CHAMS_H
