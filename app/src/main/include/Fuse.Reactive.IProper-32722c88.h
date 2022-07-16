// This file was generated based on '../Source/Fuse.Reactive/IObservable.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract interface IPropertySubscription
// {
uInterfaceType* IPropertySubscription_typeof();

struct IPropertySubscription
{
    void(*fp_TrySetExclusive)(uObject*, uString*, uObject*, bool*);
    static bool TrySetExclusive(const uInterface& __this, uString* propertyName, uObject* newValue) { bool __retval; return __this.VTable<IPropertySubscription>()->fp_TrySetExclusive(__this, propertyName, newValue, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Reactive
