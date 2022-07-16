// This file was generated based on '../Source/Fuse.Storage/UserSettingsModule.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Storage{struct UserSettingsModule;}}}

namespace g{
namespace Fuse{
namespace Storage{

// public sealed class UserSettingsModule
// {
::g::Fuse::Scripting::NativeModule_type* UserSettingsModule_typeof();
void UserSettingsModule__ctor_2_fn(UserSettingsModule* __this);
void UserSettingsModule__Clear_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__Converter_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uObject** __retval);
void UserSettingsModule__GetBoolean_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__GetNumber_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__GetObject_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__GetString_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__New2_fn(UserSettingsModule** __retval);
void UserSettingsModule__PutBoolean_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__PutNumber_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__PutObject_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__PutString_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);
void UserSettingsModule__Remove_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval);

struct UserSettingsModule : ::g::Fuse::Scripting::NativeModule
{
    static uSStrong<UserSettingsModule*> _instance_;
    static uSStrong<UserSettingsModule*>& _instance() { return _instance_; }

    void ctor_2();
    uObject* Clear(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Converter(::g::Fuse::Scripting::Context* c, uObject* obj);
    uObject* GetBoolean(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* GetNumber(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* GetObject(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* GetString(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* PutBoolean(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* PutNumber(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* PutObject(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* PutString(::g::Fuse::Scripting::Context* c, uArray* args);
    uObject* Remove(::g::Fuse::Scripting::Context* c, uArray* args);
    static UserSettingsModule* New2();
};
// }

}}} // ::g::Fuse::Storage
