// This file was generated based on '../Source/Fuse.Triggers/Actions/Toggle.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IToggleable
// {
uInterfaceType* IToggleable_typeof();

struct IToggleable
{
    void(*fp_Toggle)(uObject*);
    static void Toggle(const uInterface& __this) { __this.VTable<IToggleable>()->fp_Toggle(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
