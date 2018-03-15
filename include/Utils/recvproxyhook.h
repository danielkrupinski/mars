#ifndef RECVPROXY_HOOK_H
#define RECVPROXY_HOOK_H

#include "../SDK/SDK.h"

// credits: emskye96
class RecvPropHook {
private:
    RecvProp* target_property;
    RecvVarProxyFn original_proxy_fn;
public:
    RecvPropHook(RecvProp* target_property)
    ~RecvPropHook()

    RecvVarProxyFn GetOriginalFunction()
    void SetProxyFunction(RecvVarProxyFn user_proxy_fn)
};

#endif // RECVPROXY_HOOK_H
