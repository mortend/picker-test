// This file was generated based on '../Source/Fuse.Triggers/Actions/CancelInteractions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct CancelInteractions;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class CancelInteractions
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* CancelInteractions_typeof();
void CancelInteractions__Perform_fn(CancelInteractions* __this, ::g::Fuse::Node* target);
void CancelInteractions__get_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual** __retval);
void CancelInteractions__set_Target_fn(CancelInteractions* __this, ::g::Fuse::Visual* value);

struct CancelInteractions : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _Target;

    ::g::Fuse::Visual* Target();
    void Target(::g::Fuse::Visual* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
