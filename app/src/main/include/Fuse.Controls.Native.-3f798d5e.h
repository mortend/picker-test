// This file was generated based on '../Source/Fuse.Controls.Native/Android/Switch.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-7013e868.h>
#include <Fuse.Controls.Native.-c3ee8de8.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Switch;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Switch
// {
struct Switch_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IToggleView interface2;
};

Switch_type* Switch_typeof();
void Switch__Dispose_fn(Switch* __this);
void Switch__OnToggleChanged_fn(Switch* __this, bool* value);
void Switch__SetValue_fn(::g::Java::Object* handle, bool* value);
void Switch__set_Value_fn(Switch* __this, bool* value);

struct Switch : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void OnToggleChanged(bool value);
    void Value(bool value);
    static void SetValue(::g::Java::Object* handle, bool value);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
