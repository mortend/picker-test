// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Exceptions/FormatException.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct FormatException;}}

namespace g{
namespace Uno{

// public sealed class FormatException
// {
::g::Uno::Exception_type* FormatException_typeof();
void FormatException__ctor_3_fn(FormatException* __this, uString* message);
void FormatException__New4_fn(uString* message, FormatException** __retval);

struct FormatException : ::g::Uno::Exception
{
    void ctor_3(uString* message);
    static FormatException* New4(uString* message);
};
// }

}} // ::g::Uno
