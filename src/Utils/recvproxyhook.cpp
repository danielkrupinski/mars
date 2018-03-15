#include "../../include/Utils/recvproxyhook.h"

RecvPropHook::RecvPropHook(RecvProp* target_property)
{
    this->target_property = target_property;
    this->original_proxy_fn = target_property->m_ProxyFn;
}

RecvPropHook::~RecvPropHook()
{
    target_property->m_ProxyFn = this->original_proxy_fn;
}

RecvVarProxyFn RecvPropHook::GetOriginalFunction()
{
    return this->original_proxy_fn;
}

void RecvPropHook::SetProxyFunction(RecvVarProxyFn user_proxy_fn)
{
    target_property->m_ProxyFn = user_proxy_fn;
}
