// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/String.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Char.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{struct String__Enumerator;}}

namespace g{
namespace Uno{

// private sealed class String.Enumerator
// {
struct String__Enumerator_type : uType
{
    ::g::Uno::Collections::IEnumerator1 interface0;
    ::g::Uno::IDisposable interface1;
    ::g::Uno::Collections::IEnumerator interface2;
};

String__Enumerator_type* String__Enumerator_typeof();
void String__Enumerator__ctor__fn(String__Enumerator* __this, uString* source);
void String__Enumerator__get_Current_fn(String__Enumerator* __this, char16_t* __retval);
void String__Enumerator__Dispose_fn(String__Enumerator* __this);
void String__Enumerator__MoveNext_fn(String__Enumerator* __this, bool* __retval);
void String__Enumerator__New1_fn(uString* source, String__Enumerator** __retval);
void String__Enumerator__Reset_fn(String__Enumerator* __this);

struct String__Enumerator : uObject
{
    uStrong<uString*> _source;
    char16_t _current;
    int32_t _iterator;

    void ctor_(uString* source);
    char16_t Current();
    void Dispose();
    bool MoveNext();
    void Reset();
    static String__Enumerator* New1(uString* source);
};
// }

}} // ::g::Uno
