// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Collections/Queue.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Collections{struct Queue;}}}

namespace g{
namespace Uno{
namespace Collections{

// public struct Queue<T>.Enumerator
// {
struct Queue__Enumerator_type : uStructType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

Queue__Enumerator_type* Queue__Enumerator_typeof();
void Queue__Enumerator__ctor_1_fn(uTRef __this, uType* __type, ::g::Uno::Collections::Queue* source);
void Queue__Enumerator__get_Current_fn(uTRef __this, uType* __type, uTRef __retval);
void Queue__Enumerator__Dispose_fn(uTRef __this, uType* __type);
void Queue__Enumerator__MoveNext_fn(uTRef __this, uType* __type, bool* __retval);
void Queue__Enumerator__New1_fn(uType* __type, ::g::Uno::Collections::Queue* source, uTRef __retval);
void Queue__Enumerator__UnoCollectionsIEnumeratorReset_fn(uTRef __this, uType* __type);

template<class T>
struct Queue__Enumerator
{
    uStrong< ::g::Uno::Collections::Queue*> _source;
    int32_t _version;
    int32_t _index;
    T _current;

    void ctor_1(uType* __type, ::g::Uno::Collections::Queue* source) { Queue__Enumerator__ctor_1_fn(this, __type, source); }
    T Current(uType* __type) { T __retval; return Queue__Enumerator__get_Current_fn(this, __type, &__retval), __retval; }
    void Dispose(uType* __type) { Queue__Enumerator__Dispose_fn(this, __type); }
    bool MoveNext(uType* __type) { bool __retval; return Queue__Enumerator__MoveNext_fn(this, __type, &__retval), __retval; }
};

template<class T>
Queue__Enumerator<T> Queue__Enumerator__New1(uType* __type, ::g::Uno::Collections::Queue* source) { Queue__Enumerator<T> __retval; return Queue__Enumerator__New1_fn(__type, source, &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
