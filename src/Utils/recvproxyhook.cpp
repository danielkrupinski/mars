#include "../../include/Utils/recvproxyhook.h"

RecvPropHook::~RecvPropHook()
{
    target_property->m_ProxyFn = this->original_proxy_fn;
}

void RecvPropHook::SetProxyFunction(RecvVarProxyFn user_proxy_fn)
{
    target_property->m_ProxyFn = user_proxy_fn;
}
