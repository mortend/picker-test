// This file was generated based on '../Source/Fuse.Reactive/ValueObserver.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract interface ValueForwarder.IValueListener
// {
uInterfaceType* ValueForwarder__IValueListener_typeof();

struct ValueForwarder__IValueListener
{
    void(*fp_LostValue)(uObject*);
    void(*fp_NewValue)(uObject*, uObject*);
    static void LostValue(const uInterface& __this) { __this.VTable<ValueForwarder__IValueListener>()->fp_LostValue(__this); }
    static void NewValue(const uInterface& __this, uObject* value) { __this.VTable<ValueForwarder__IValueListener>()->fp_NewValue(__this, value); }
};
// }

}}} // ::g::Fuse::Reactive
