// This file was generated based on '../Source/Fuse.Triggers/Actions/Visibility.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public abstract interface IShow
// {
uInterfaceType* IShow_typeof();

struct IShow
{
    void(*fp_Show)(uObject*);
    static void Show(const uInterface& __this) { __this.VTable<IShow>()->fp_Show(__this); }
};
// }

}}}} // ::g::Fuse::Triggers::Actions
