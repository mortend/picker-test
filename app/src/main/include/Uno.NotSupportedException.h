// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Exceptions/NotSupportedException.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Exception.h>
namespace g{namespace Uno{struct NotSupportedException;}}

namespace g{
namespace Uno{

// public sealed class NotSupportedException
// {
::g::Uno::Exception_type* NotSupportedException_typeof();
void NotSupportedException__ctor_3_fn(NotSupportedException* __this);
void NotSupportedException__ctor_4_fn(NotSupportedException* __this, uString* message);
void NotSupportedException__New4_fn(NotSupportedException** __retval);
void NotSupportedException__New5_fn(uString* message, NotSupportedException** __retval);

struct NotSupportedException : ::g::Uno::Exception
{
    void ctor_3();
    void ctor_4(uString* message);
    static NotSupportedException* New4();
    static NotSupportedException* New5(uString* message);
};
// }

}} // ::g::Uno
