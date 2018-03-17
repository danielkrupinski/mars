#ifndef AUTOACCEPT_H
#define AUTOACCEPT_H

#include "../interfaces.h"
#include "../settings.h"

namespace AutoAccept {
    //Hooks
    void PlaySound(const char*);
}

extern IsReadyCallbackFn IsReadyCallback;

#endif // AUTOACCEPT_H
