// This file was generated based on '../Source/Fuse.Controls.ScrollView/Scroller.Actions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
#include <Uno.Float2.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Gestures{struct ScrollTo;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Gestures{

// public sealed class ScrollTo
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof();
void ScrollTo__get_How_fn(ScrollTo* __this, int32_t* __retval);
void ScrollTo__set_How_fn(ScrollTo* __this, int32_t* value);
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target);
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval);
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value);

struct ScrollTo : ::g::Fuse::Triggers::Actions::TriggerAction
{
    ::g::Uno::Float2 _position;
    ::g::Uno::Float2 _relativePosition;
    bool _hasRelativePosition;
    int32_t _how;
    uStrong< ::g::Fuse::Controls::ScrollView*> _Target;

    int32_t How();
    void How(int32_t value);
    ::g::Fuse::Controls::ScrollView* Target();
    void Target(::g::Fuse::Controls::ScrollView* value);
};
// }

}}} // ::g::Fuse::Gestures
