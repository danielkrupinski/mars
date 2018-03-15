#ifndef RECVPROXY_HOOK_H
#define RECVPROXY_HOOK_H

#include "../SDK/SDK.h"

class RecvPropHook {
private:
    RecvProp* target_property;
    RecvVarProxyFn original_proxy_fn;
public:
    explicit RecvPropHook(RecvProp* target_property)
        : target_property{target_property}, original_proxy_fn{target_property->m_ProxyFn} {}
    ~RecvPropHook() { target_property->m_ProxyFn = original_proxy_fn; };

    RecvVarProxyFn GetOriginalFunction() { return original_proxy_fn; };
    void SetProxyFunction(RecvVarProxyFn user_proxy_fn) { target_property->m_ProxyFn = user_proxy_fn; };
};

#endif // RECVPROXY_HOOK_H
