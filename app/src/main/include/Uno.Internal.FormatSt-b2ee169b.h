// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Internal/FormatStringLiteral.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Internal.FormatStringToken.h>
namespace g{namespace Uno{namespace Internal{struct FormatStringLiteral;}}}

namespace g{
namespace Uno{
namespace Internal{

// public sealed class FormatStringLiteral
// {
::g::Uno::Internal::FormatStringToken_type* FormatStringLiteral_typeof();
void FormatStringLiteral__ctor_1_fn(FormatStringLiteral* __this, uString* lexeme);
void FormatStringLiteral__Equals_fn(FormatStringLiteral* __this, uObject* obj, bool* __retval);
void FormatStringLiteral__GetHashCode_fn(FormatStringLiteral* __this, int32_t* __retval);
void FormatStringLiteral__New1_fn(uString* lexeme, FormatStringLiteral** __retval);
void FormatStringLiteral__ToString1_fn(FormatStringLiteral* __this, uArray* objs, uString** __retval);

struct FormatStringLiteral : ::g::Uno::Internal::FormatStringToken
{
    void ctor_1(uString* lexeme);
    static FormatStringLiteral* New1(uString* lexeme);
};
// }

}}} // ::g::Uno::Internal
