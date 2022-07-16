// This file was generated based on '../Source/Fuse.Platform/AppAlerts.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Platform{struct AppEvents;}}}

namespace g{
namespace Fuse{
namespace Platform{

// internal static class AppEvents
// {
uClassType* AppEvents_typeof();
void AppEvents__add_LowMemoryWarning_fn(uDelegate* value);
void AppEvents__remove_LowMemoryWarning_fn(uDelegate* value);
void AppEvents__OnLowMemoryWarning_fn(uObject* s, uObject* a);

struct AppEvents : uObject
{
    static uSStrong<uDelegate*> LowMemoryWarning1_;
    static uSStrong<uDelegate*>& LowMemoryWarning1() { return AppEvents_typeof()->Init(), LowMemoryWarning1_; }

    static void OnLowMemoryWarning(uObject* s, uObject* a);
    static void add_LowMemoryWarning(uDelegate* value);
    static void remove_LowMemoryWarning(uDelegate* value);
};
// }

}}} // ::g::Fuse::Platform
