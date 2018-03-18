#ifndef SHOWSPECTATORS_H
#define SHOWSPECTATORS_H

#include "../settings.h"
#include "../interfaces.h"
#include "../Utils/entity.h"

namespace ShowSpectators {
    std::list<int> GetObservervators(int);
    void RenderWindow();
}

#endif // SHOWSPECTATORS_H
