// This file was generated based on '../Source/Fuse.Reactive/ValueObserver.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Reactive.IObserver.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Reactive{struct ValueObserver;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// internal abstract class ValueObserver
// {
struct ValueObserver_type : uType
{
    ::g::Uno::IDisposable interface0;
    ::g::Fuse::Reactive::IObserver interface1;
    void(*fp_Dispose)(::g::Fuse::Reactive::ValueObserver*);
    void(*fp_LostData)(::g::Fuse::Reactive::ValueObserver*);
    void(*fp_PushData)(::g::Fuse::Reactive::ValueObserver*, uObject*);
};

ValueObserver_type* ValueObserver_typeof();
void ValueObserver__ctor__fn(ValueObserver* __this);
void ValueObserver__Dispose_fn(ValueObserver* __this);
void ValueObserver__FuseReactiveIObserverOnAdd_fn(ValueObserver* __this, uObject* addedValue);
void ValueObserver__FuseReactiveIObserverOnClear_fn(ValueObserver* __this);
void ValueObserver__FuseReactiveIObserverOnFailed_fn(ValueObserver* __this, uString* message);
void ValueObserver__FuseReactiveIObserverOnInsertAt_fn(ValueObserver* __this, int32_t* index, uObject* value);
void ValueObserver__FuseReactiveIObserverOnNewAll_fn(ValueObserver* __this, uObject* values);
void ValueObserver__FuseReactiveIObserverOnNewAt_fn(ValueObserver* __this, int32_t* index, uObject* value);
void ValueObserver__FuseReactiveIObserverOnRemoveAt_fn(ValueObserver* __this, int32_t* index);
void ValueObserver__FuseReactiveIObserverOnSet_fn(ValueObserver* __this, uObject* newValue);
void ValueObserver__Subscribe_fn(ValueObserver* __this, uObject* obs);
void ValueObserver__SubscribeNoPush_fn(ValueObserver* __this, uObject* obs);
void ValueObserver__Unsubscribe_fn(ValueObserver* __this);
void ValueObserver__get_Value_fn(ValueObserver* __this, uObject** __retval);

struct ValueObserver : uObject
{
    uStrong<uObject*> _obsSub;
    uStrong<uObject*> _obs;

    void ctor_();
    void Dispose() { (((ValueObserver_type*)__type)->fp_Dispose)(this); }
    void LostData() { (((ValueObserver_type*)__type)->fp_LostData)(this); }
    void PushData(uObject* newValue) { (((ValueObserver_type*)__type)->fp_PushData)(this, newValue); }
    void Subscribe(uObject* obs);
    void SubscribeNoPush(uObject* obs);
    void Unsubscribe();
    uObject* Value();
    static void Dispose(ValueObserver* __this) { ValueObserver__Dispose_fn(__this); }
};
// }

}}} // ::g::Fuse::Reactive
