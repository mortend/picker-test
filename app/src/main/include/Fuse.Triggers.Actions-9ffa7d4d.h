// This file was generated based on '../Source/Fuse.Controls/Triggers/BringToFront.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct SendToBack;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class SendToBack
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SendToBack_typeof();
void SendToBack__Perform_fn(SendToBack* __this, ::g::Fuse::Node* target);
void SendToBack__get_Target_fn(SendToBack* __this, ::g::Fuse::Visual** __retval);
void SendToBack__set_Target_fn(SendToBack* __this, ::g::Fuse::Visual* value);

struct SendToBack : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
