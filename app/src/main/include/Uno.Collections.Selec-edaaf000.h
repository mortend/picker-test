// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Collections/2.2.0/Extensions/Select.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct SelectEnumerable;}}}

namespace g{
namespace Uno{
namespace Collections{

// internal sealed class SelectEnumerable<T, TRet>
// {
struct SelectEnumerable_type : uType
{
    ::g::Uno::Collections::IEnumerable interface0;
};

SelectEnumerable_type* SelectEnumerable_typeof();
void SelectEnumerable__ctor__fn(SelectEnumerable* __this, uObject* source, uDelegate* select);
void SelectEnumerable__GetEnumerator_fn(SelectEnumerable* __this, uObject** __retval);
void SelectEnumerable__New1_fn(uType* __type, uObject* source, uDelegate* select, SelectEnumerable** __retval);

struct SelectEnumerable : uObject
{
    uStrong<uObject*> _source;
    uStrong<uDelegate*> _select;

    void ctor_(uObject* source, uDelegate* select);
    uObject* GetEnumerator();
    static SelectEnumerable* New1(uType* __type, uObject* source, uDelegate* select);
};
// }

}}} // ::g::Uno::Collections
