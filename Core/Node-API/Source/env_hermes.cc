#include <napi/env.h>
#include "js_native_api_hermes.h"
#include <jsrt.h>
#include <strsafe.h>

namespace Napi
{
    Env Attach()
    {
        napi_env env_ptr{new napi_env__};

        return {env_ptr};
    }

    void Detach(Env env)
    {
        napi_env env_ptr{env};
        delete env_ptr;
    }
}
