#ifndef NETVAR_MANAGER_H
#define NETVAR_MANAGER_H

#include <vector>
#include <string>
#include <vector>
#include <strings.h>
#include <string>
#include <ios>
#include <iomanip>
#include <pwd.h>
#include <zconf.h>
#include <fstream>

#include "../SDK/SDK.h"
#include "../interfaces.h"

namespace NetVarManager {
    std::vector<RecvTable*> GetTables;
    RecvTable* GetTable(std::vector<RecvTable*>, const char*);
    int GetOffset(std::vector<RecvTable*>, const char*, const char*);
    int GetProp(std::vector<RecvTable*>, const char*, const char*, RecvProp** = 0);
    int GetProp(std::vector<RecvTable*>, RecvTable*, const char*, RecvProp** = 0);
    std::string DumpTable(RecvTable*, int);
    bool HookProp(const char*, const char*, RecvVarProxyFn);
    void DumpNetvars();
}

#endif // NETVAR_MANAGER_H
