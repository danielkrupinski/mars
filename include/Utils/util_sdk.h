#ifndef UTIL_SDK_H
#define UTIL_SDK_H

#include "../SDK/SDK.h"
#include "../interfaces.h"
#include "util.h"

namespace Util {
    char GetButtonString(ButtonCode_t);
    std::string GetButtonName(ButtonCode_t);
    ButtonCode_t GetButtonCode(std::string);

    IMaterial* CreateMaterial(std::string, std::string, bool, bool, bool, bool, bool);
}

#endif // UTIL_SDK_H
