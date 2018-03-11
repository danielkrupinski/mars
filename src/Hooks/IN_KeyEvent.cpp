#include "../../include/Hooks/hooks.h"

int Hooks::IN_KeyEvent(void* thisptr, int eventcode, int keynum, const char* currentbinding)
{
    return clientVMT->GetOriginalMethod<IN_KeyEventFn>(20)(thisptr, eventcode, keynum, currentbinding);
}
