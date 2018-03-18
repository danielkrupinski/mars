#ifndef TRACER_EFFECT_H
#define TRACER_EFFECT_H

#include "../interfaces.h"
#include "../settings.h"
#include <map>
#include <string>
#include <vector>

namespace TracerEffect {
    void RestoreTracers();
    //Hooks
    void CreateMove(CUserCmd*);
}
