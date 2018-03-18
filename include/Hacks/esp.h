#ifndef ESP_H
#define ESP_H

#include <math.h>
#include "../settings.h"
#include "../Hooks/hooks.h"
#include "../Utils/draw.h"
#include "../interfaces.h"
#include "../Utils/entity.h"

namespace ESP {
    extern const char* ranks[];

    ImColor GetESPPlayerColor(C_BasePlayer*, bool);

    //Hooks
    void DrawModelExecute(void*, void*, void*, const ModelRenderInfo_t&, matrix3x4_t*);
    bool PrePaintTraverse(VPANEL, bool, bool);
    void Paint();
    void EmitSound(int, const char*);
    void CreateMove(CUserCmd*);
}

#endif // ESP_H
