// This file was generated based on '../Source/Fuse.Controls.Native/DarkMode.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IModuleProvider.h>
#include <Fuse.Scripting.Native-d6551e97.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct DarkMode;}}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// public sealed class DarkMode
// {
::g::Fuse::Scripting::NativeModule_type* DarkMode_typeof();
void DarkMode__ctor_3_fn(DarkMode* __this);
void DarkMode__changeDarkMode_fn(uString* modeValue);
void DarkMode__checkForDarkThemeChange_fn();
void DarkMode__New3_fn(DarkMode** __retval);
void DarkMode__receivedDarkModeChangedEvent_fn(DarkMode* __this, uString* modeValue);
void DarkMode__SetupAndroidListener_fn(DarkMode* __this);

struct DarkMode : ::g::Fuse::Scripting::NativeEventEmitterModule
{
    static uSStrong<DarkMode*> _instance_;
    static uSStrong<DarkMode*>& _instance() { return _instance_; }

    void ctor_3();
    void receivedDarkModeChangedEvent(uString* modeValue);
    void SetupAndroidListener();
    static void changeDarkMode(uString* modeValue);
    static void checkForDarkThemeChange();
    static DarkMode* New3();
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
