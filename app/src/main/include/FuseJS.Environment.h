// This file was generated based on '../Source/FuseJS/Environment.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace FuseJS{struct Environment;}}

namespace g{
namespace FuseJS{

// public sealed class Environment
// {
::g::Fuse::Scripting::NativeModule_type* Environment_typeof();
void Environment__ctor_2_fn(Environment* __this);
void Environment__GetCurrentLocale_fn(uString** __retval);
void Environment__GetMobileOSVersion_fn(uString** __retval);
void Environment__New2_fn(Environment** __retval);

struct Environment : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<Environment*> _instance_;
    static uSStrong<Environment*>& _instance() { return Environment_typeof()->Init(), _instance_; }
    static uSStrong<uString*> versionNumber_;
    static uSStrong<uString*>& versionNumber() { return Environment_typeof()->Init(), versionNumber_; }
    static uSStrong<uString*> title_;
    static uSStrong<uString*>& title() { return Environment_typeof()->Init(), title_; }
    static uSStrong<uString*> publisher_;
    static uSStrong<uString*>& publisher() { return Environment_typeof()->Init(), publisher_; }
    static uSStrong<uString*> copyright_;
    static uSStrong<uString*>& copyright() { return Environment_typeof()->Init(), copyright_; }
    static uSStrong<uString*> androidTitle_;
    static uSStrong<uString*>& androidTitle() { return Environment_typeof()->Init(), androidTitle_; }
    static uSStrong<uString*> androidVersionNumber_;
    static uSStrong<uString*>& androidVersionNumber() { return Environment_typeof()->Init(), androidVersionNumber_; }
    static uSStrong<uString*> androidVersionCode_;
    static uSStrong<uString*>& androidVersionCode() { return Environment_typeof()->Init(), androidVersionCode_; }
    static uSStrong<uString*> iosTitle_;
    static uSStrong<uString*>& iosTitle() { return Environment_typeof()->Init(), iosTitle_; }
    static uSStrong<uString*> iosVersionNumber_;
    static uSStrong<uString*>& iosVersionNumber() { return Environment_typeof()->Init(), iosVersionNumber_; }

    void ctor_2();
    static uString* GetCurrentLocale();
    static uString* GetMobileOSVersion();
    static Environment* New2();
};
// }

}} // ::g::FuseJS
