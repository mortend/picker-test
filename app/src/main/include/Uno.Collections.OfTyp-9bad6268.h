// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Collections/2.2.0/Extensions/OfType.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct OfTypeEnumerable;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class OfTypeEnumerable<T, U>
// {
struct OfTypeEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

OfTypeEnumerable_type* OfTypeEnumerable_typeof();
void OfTypeEnumerable__ctor__fn(OfTypeEnumerable* __this, uObject* source);
void OfTypeEnumerable__GetEnumerator_fn(OfTypeEnumerable* __this, uObject** __retval);
void OfTypeEnumerable__New1_fn(uType* __type, uObject* source, OfTypeEnumerable** __retval);

struct OfTypeEnumerable : uObject
{
    uStrong<uObject*> _source;

    void ctor_(uObject* source);
    uObject* GetEnumerator();
    static OfTypeEnumerable* New1(uType* __type, uObject* source);
};
// }

}}} // ::g::Uno::Collections
