// This file was generated based on '../Source/Fuse.Gestures/Swipe.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Gestures{struct SwipeGesture;}}}
namespace g{namespace Fuse{namespace Gestures{struct ToggleSwipeActive;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ToggleSwipeActive
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof();
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target);
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval);
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value);

struct ToggleSwipeActive : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Gestures::SwipeGesture*> _Target;

    ::g::Fuse::Gestures::SwipeGesture* Target();
    void Target(::g::Fuse::Gestures::SwipeGesture* value);
};
// }

}}} // ::g::Fuse::Gestures
