// This file was generated based on '../Source/Fuse.Controls.Native/Android/Slider.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.-c3ee8de8.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct Slider;}}}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// public sealed extern class Slider
// {
::g::Fuse::Controls::Native::Android::View_type* Slider_typeof();
void Slider__Dispose_fn(Slider* __this);
void Slider__OnSeekBarChanged_fn(Slider* __this, double* rel, bool* fromUser);
void Slider__SetProgress_fn(::g::Java::Object* handle, double* progress);

struct Slider : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong<uObject*> _host;

    void OnSeekBarChanged(double rel, bool fromUser);
    static void SetProgress(::g::Java::Object* handle, double progress);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
