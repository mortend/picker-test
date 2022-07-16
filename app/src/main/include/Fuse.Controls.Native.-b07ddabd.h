// This file was generated based on '../Source/Fuse.Controls.Native/Android/ScrollView.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-677c303b.h>
#include <Fuse.Controls.Native.-d6795632.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct ScrollView;}}}}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class ScrollView
// {
struct ScrollView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::Native::IScrollView interface2;
};

ScrollView_type* ScrollView_typeof();
void ScrollView__ctor_7_fn(ScrollView* __this, uObject* host);
void ScrollView__set_AllowedScrollDirections_fn(ScrollView* __this, int32_t* value);
void ScrollView__Create_fn(::g::Java::Object** __retval);
void ScrollView__Dispose_fn(ScrollView* __this);
void ScrollView__InstallCallback_fn(ScrollView* __this, ::g::Java::Object* handle, uDelegate* callback);
void ScrollView__New5_fn(uObject* host, ScrollView** __retval);
void ScrollView__OnScrollChanged_fn(ScrollView* __this, int32_t* x, int32_t* y, int32_t* oldx, int32_t* oldy);
void ScrollView__set_ScrollPosition_fn(ScrollView* __this, ::g::Uno::Float2* value);
void ScrollView__SetIsHorizontal_fn(ScrollView* __this, ::g::Java::Object* handle, bool* isHorizontal);
void ScrollView__SetScrollPosition_fn(::g::Java::Object* handle, int32_t* x, int32_t* y);

struct ScrollView : ::g::Fuse::Controls::Native::Android::View
{
    uStrong<uObject*> _host;

    void ctor_7(uObject* host);
    void AllowedScrollDirections(int32_t value);
    void InstallCallback(::g::Java::Object* handle, uDelegate* callback);
    void OnScrollChanged(int32_t x, int32_t y, int32_t oldx, int32_t oldy);
    void ScrollPosition(::g::Uno::Float2 value);
    void SetIsHorizontal(::g::Java::Object* handle, bool isHorizontal);
    static ::g::Java::Object* Create();
    static ScrollView* New5(uObject* host);
    static void SetScrollPosition(::g::Java::Object* handle, int32_t x, int32_t y);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
