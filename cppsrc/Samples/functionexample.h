#include <napi.h>

namespace functionexample {
    int UVCInit(void);
    // int LibUVCDeInit(void);
    int UVCReadButtonStatus(void);
    Napi::Number UVCInitWrapped(const Napi::CallbackInfo& info);
    Napi::Number UVCReadButtonStatusWrapped(const Napi::CallbackInfo& info);
    std::string hello();
    Napi::String HelloWrapped(const Napi::CallbackInfo& info);
    Napi::Object Init(Napi::Env env, Napi::Object exports);
    
}
