// This file was generated based on '../Source/Fuse.Navigation/TriggerActions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigateToggle;}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigateToggle
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* NavigateToggle_typeof();
void NavigateToggle__Perform_fn(NavigateToggle* __this, ::g::Fuse::Node* n);
void NavigateToggle__get_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual** __retval);
void NavigateToggle__set_Target_fn(NavigateToggle* __this, ::g::Fuse::Visual* value);

struct NavigateToggle : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}} // ::g::Fuse::Navigation
