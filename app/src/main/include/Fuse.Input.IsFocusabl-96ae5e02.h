// This file was generated based on '../Source/Fuse.Nodes/Input/FocusEvents.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Input.IsFocusabl-9f350c7e.h>
#include <Fuse.Input.IsFocusabl-d997a976.h>
#include <Fuse.VisualEvent-2.h>
namespace g{namespace Fuse{namespace Input{struct IsFocusableChangedEvent;}}}

namespace g{
namespace Fuse{
namespace Input{

// internal sealed class IsFocusableChangedEvent
// {
::g::Fuse::VisualEvent_type* IsFocusableChangedEvent_typeof();
void IsFocusableChangedEvent__ctor_1_fn(IsFocusableChangedEvent* __this);
void IsFocusableChangedEvent__Invoke_fn(IsFocusableChangedEvent* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::IsFocusableChangedArgs* args);
void IsFocusableChangedEvent__New1_fn(IsFocusableChangedEvent** __retval);

struct IsFocusableChangedEvent : ::g::Fuse::VisualEvent
{
    void ctor_1();
    static IsFocusableChangedEvent* New1();
};
// }

}}} // ::g::Fuse::Input
