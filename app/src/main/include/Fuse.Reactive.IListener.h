// This file was generated based on '../Source/Fuse.Reactive/IExpression.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface IListener
// {
uInterfaceType* IListener_typeof();

struct IListener
{
    void(*fp_OnLostData)(uObject*, uObject*);
    void(*fp_OnNewData)(uObject*, uObject*, uObject*);
    static void OnLostData(const uInterface& __this, uObject* source) { __this.VTable<IListener>()->fp_OnLostData(__this, source); }
    static void OnNewData(const uInterface& __this, uObject* source, uObject* data) { __this.VTable<IListener>()->fp_OnNewData(__this, source, data); }
};
// }

}}} // ::g::Fuse::Reactive
