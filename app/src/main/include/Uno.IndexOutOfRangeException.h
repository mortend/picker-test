// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Exceptions/IndexOutOfRangeException.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct IndexOutOfRangeException;}}

namespace g{
namespace Uno{

// public sealed class IndexOutOfRangeException
// {
::g::Uno::Exception_type* IndexOutOfRangeException_typeof();
void IndexOutOfRangeException__ctor_3_fn(IndexOutOfRangeException* __this);
void IndexOutOfRangeException__New4_fn(IndexOutOfRangeException** __retval);

struct IndexOutOfRangeException : ::g::Uno::Exception
{
    void ctor_3();
    static IndexOutOfRangeException* New4();
};
// }

}} // ::g::Uno
