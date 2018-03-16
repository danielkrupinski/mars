#ifndef UTIL_ITEMS_H
#define UTIL_ITEMS_H

#include <string>
#include <map>
#include <algorithm>
#include "util.h"
#include "../SDK/SDK.h"

namespace Util {
    namespace Items {
        /*
        * Look up a ItemDefinitionIndex ordinal value by the symbolic name
        * using an internal map
        */
        enum ItemDefinitionIndex GetItemIndex(const std::string);

        /*
        * Look up the symbolic name of a ItemDefinitionIndex ordinal value
        * using an internal map
        */
        std::string GetItemName(const enum ItemDefinitionIndex);

        std::string GetItemEntityName(ItemDefinitionIndex);

        std::string GetItemConfigEntityName(ItemDefinitionIndex);

        std::string GetItemDisplayName(ItemDefinitionIndex);

        bool IsKnife(ItemDefinitionIndex);
        bool IsUtility(ItemDefinitionIndex);
        bool IsGlove(ItemDefinitionIndex);
        bool IsCTWeapon(ItemDefinitionIndex);
        bool IsTWeapon(ItemDefinitionIndex);
    }
}

#endif // UTIL_ITEMS_H
