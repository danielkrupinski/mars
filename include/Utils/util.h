#ifndef UTIL_H
#define UTIL_H

#include <string>
#include <sys/mman.h>
#include <zconf.h>
#include <vector>
#include <map>
#include <algorithm>
#include <chrono>
#include <locale>
#include <codecvt>
#include <sstream>
#include <link.h>
#include "../../lib/ImGUI/imgui.h"
#include "../SDK/SDK.h"

namespace Util {
    std::string ReplaceString(std::string, const std::string&, const std::string&);
    void StdReplaceStr(std::string&, const std::string&, const std::string&);
    const char* PadStringRight(std::string, size_t);
    bool Contains(const std::string&, const std::string&);
    std::string ToLower(std::string);
    std::string ToUpper(std::string);
    std::string WstringToString(std::wstring);
    std::wstring StringToWstring(std::string);
    ImColor GetRainbowColor(float);
    Color GetHealthColor(int);
    Color GetHealthColor(C_BasePlayer*);
    int RandomInt(int, int);
    long GetEpochTime();
    int IsDebuggerPresent();
    void RemoveLinkMapEntry(char*, void**, void**, void**);
    void RestoreLinkMapEntry(void*, void*, void*);
    void PrintLinkMapIDs();
    bool SearchLinkMap(char*);
    bool SearchLinkMap(char*, void**);

    const std::map<int,int>* GetModelTypeBoneMap(C_BasePlayer*);
    ModelType GetModelTypeID(C_BasePlayer*);
    std::string ModelTypeToString(ModelType);
    std::string BoneToString(const std::map<int,int>*, int);
    template <typename T>
    T GetValueByKey(std::vector<std::pair<int, T>> vec, int key)
    {
        for (auto i : vec)
            if (i.first == key)
                return i.second;

        return "";
    }

    template <typename K, typename V>
    K MapReverseSearchOrDefault(std::map<K, V> const* _map, V value, K fallback)
    {
        auto _pair = std::find_if(_map->begin(), _map->end(),
        [value](const std::pair<K, V>& pair) {
            return pair.second == value;
        });

        if (_pair == _map->end())
            return fallback;

        return _pair->first;
    }

    template <typename K, typename V>
    V MapSearchOrDefault(std::map<K, V> const* _map, K key, V fallback)
    {
        auto result = _map->find(key);
            if (result == _map->end())
                return fallback;

        return result->second;
    }

    template<typename T>
    struct IntHash {
        size_t operator()(const T& t) const noexcept
        {
            return std::hash<int>()((int) t);
        }
    };
}

#endif // UTIL_H
