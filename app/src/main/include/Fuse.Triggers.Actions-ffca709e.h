// This file was generated based on '../Source/Fuse.Triggers/Actions/StateTransition.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct TransitionState;}}}}
namespace g{namespace Fuse{namespace Triggers{struct State;}}}
namespace g{namespace Fuse{namespace Triggers{struct StateGroup;}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class TransitionState
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* TransitionState_typeof();
void TransitionState__Perform_fn(TransitionState* __this, ::g::Fuse::Node* target);
void TransitionState__get_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup** __retval);
void TransitionState__set_Target_fn(TransitionState* __this, ::g::Fuse::Triggers::StateGroup* value);
void TransitionState__get_Type_fn(TransitionState* __this, int32_t* __retval);
void TransitionState__set_Type_fn(TransitionState* __this, int32_t* value);
void TransitionState__get_Value_fn(TransitionState* __this, ::g::Fuse::Triggers::State** __retval);
void TransitionState__set_Value_fn(TransitionState* __this, ::g::Fuse::Triggers::State* value);

struct TransitionState : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Triggers::StateGroup*> _Target;
    int32_t _Type;
    uStrong< ::g::Fuse::Triggers::State*> _Value;

    ::g::Fuse::Triggers::StateGroup* Target();
    void Target(::g::Fuse::Triggers::StateGroup* value);
    int32_t Type();
    void Type(int32_t value);
    ::g::Fuse::Triggers::State* Value();
    void Value(::g::Fuse::Triggers::State* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
