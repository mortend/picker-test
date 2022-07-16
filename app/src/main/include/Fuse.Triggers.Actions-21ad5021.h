// This file was generated based on '../Source/Fuse.Triggers/Actions/SetSystemUI.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct SetWindowOrientation;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class SetWindowOrientation
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SetWindowOrientation_typeof();
void SetWindowOrientation__Perform_fn(SetWindowOrientation* __this, ::g::Fuse::Node* n);
void SetWindowOrientation__get_To_fn(SetWindowOrientation* __this, int32_t* __retval);
void SetWindowOrientation__set_To_fn(SetWindowOrientation* __this, int32_t* value);

struct SetWindowOrientation : ::g::Fuse::Triggers::Actions::TriggerAction
{
    int32_t _To;

    int32_t To();
    void To(int32_t value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
