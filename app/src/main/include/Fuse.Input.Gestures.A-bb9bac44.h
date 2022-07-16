// This file was generated based on '../Source/Fuse.Nodes/Input/Gesture.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Input{struct Gesture;}}}
namespace g{namespace Fuse{namespace Input{struct Gestures__ActiveGesture;}}}
namespace g{namespace Fuse{namespace Input{struct PointerEventArgs;}}}

namespace g{
namespace Fuse{
namespace Input{

// private sealed class Gestures.ActiveGesture
// {
uType* Gestures__ActiveGesture_typeof();
void Gestures__ActiveGesture__ctor__fn(Gestures__ActiveGesture* __this);
void Gestures__ActiveGesture__New1_fn(Gestures__ActiveGesture** __retval);

struct Gestures__ActiveGesture : uObject
{
    uStrong< ::g::Fuse::Input::Gesture*> Gesture;
    bool ChangeRequest;
    uStrong< ::g::Fuse::Input::PointerEventArgs*> Args;
    int32_t CaptureType;
    float Significance;
    int32_t PriorityAdjustment;
    int32_t Priority;

    void ctor_();
    static Gestures__ActiveGesture* New1();
};
// }

}}} // ::g::Fuse::Input
