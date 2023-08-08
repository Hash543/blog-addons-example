#include "functionexample.h"
#include "libpixiouvc.h"
int functionexample::UVCInit(void){
    // return 9;
  return LibUVCInit();
}
int functionexample::UVCReadButtonStatus(void){
    // return 8;
  return LibUVCReadButtonStatus();
}
std::string functionexample::hello(){
    return "Hello World";
}

Napi::String functionexample::HelloWrapped(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    Napi::String returnValue = Napi::String::New(env, functionexample::hello());
    return returnValue;
}
Napi::Number functionexample::UVCInitWrapped(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    int returnValue = functionexample::UVCInit();
    return Napi::Number::New(env, returnValue);
}
Napi::Number functionexample::UVCReadButtonStatusWrapped(const Napi::CallbackInfo& info) {
    Napi::Env env = info.Env();
    int returnValue = functionexample::UVCReadButtonStatus();
    return Napi::Number::New(env, returnValue);
}
Napi::Object functionexample::Init(Napi::Env env, Napi::Object exports) {
    exports.Set("hello", Napi::Function::New(env, functionexample::HelloWrapped));
    exports.Set("LibUVCInit", Napi::Function::New(env, functionexample::UVCInitWrapped));
    exports.Set("LibUVCReadButtonStatus", Napi::Function::New(env, functionexample::UVCReadButtonStatusWrapped));
    return exports;
}
