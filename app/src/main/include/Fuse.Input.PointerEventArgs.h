// This file was generated based on '../Source/Fuse.Nodes/Input/PointerEventArgs.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Fuse.VisualEventArgs.h>
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventData;}}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Input{

// public abstract class PointerEventArgs
// {
::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof();
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval);
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int32_t* __retval);
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s);
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval);
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval);
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval);
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval);

struct PointerEventArgs : ::g::Fuse::VisualEventArgs
{
    uStrong< ::g::Fuse::Input::PointerEventData*> _data;

    void ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual);
    bool IsPrimary();
    int32_t PointIndex();
    double Timestamp();
    bool TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual);
    bool TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual);
    ::g::Uno::Float2 WheelDelta();
    ::g::Uno::Float2 WindowPoint();
};
// }

}}} // ::g::Fuse::Input
