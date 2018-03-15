#ifndef PATTERN_FINDER_H
#define PATTERN_FINDER_H

#include <cstdint>

namespace PatternFinder {
    uintptr_t FindPattern(uintptr_t, uintptr_t, unsigned char*, const char*);
    uintptr_t FindPatternInModule(const char*, unsigned char*, const char*);
}

#endif PATTERN_FINDER_H
