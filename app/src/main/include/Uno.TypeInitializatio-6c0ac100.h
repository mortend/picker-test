// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Exceptions/TypeInitializationException.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct TypeInitializationException;}}

namespace g{
namespace Uno{

// public sealed class TypeInitializationException
// {
::g::Uno::Exception_type* TypeInitializationException_typeof();
void TypeInitializationException__ctor_3_fn(TypeInitializationException* __this, uString* fullTypeName, ::g::Uno::Exception* innerException);
void TypeInitializationException__New4_fn(uString* fullTypeName, ::g::Uno::Exception* innerException, TypeInitializationException** __retval);

struct TypeInitializationException : ::g::Uno::Exception
{
    uStrong<uString*> _typeName;

    void ctor_3(uString* fullTypeName, ::g::Uno::Exception* innerException);
    static TypeInitializationException* New4(uString* fullTypeName, ::g::Uno::Exception* innerException);
};
// }

}} // ::g::Uno
