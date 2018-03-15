#ifndef PATTERN_FINDER_H
#define PATTERN_FINDER_H

#include <cstdint>

namespace PatternFinder
{
    uintptr_t FindPattern(uintptr_t dwAddress, uintptr_t dwLen, unsigned char* bMask, const char* szMask);
    uintptr_t FindPatternInModule(const char* moduleName, unsigned char* bMask, const char* szMask);
}

#endif PATTERN_FINDER_H
