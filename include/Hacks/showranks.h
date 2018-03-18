#ifndef SHOWRANKS_H
#define SHOWRANKS_H

#include "../SDK/SDK.h"
#include "../settings.h"

namespace ShowRanks {
    //Hooks
    void CreateMove(CUserCmd*);
}

extern MsgFunc_ServerRankRevealAllFn MsgFunc_ServerRankRevealAll;

#endif // SHOWRANKS_H
