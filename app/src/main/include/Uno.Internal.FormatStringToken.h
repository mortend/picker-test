// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Internal/FormatStringToken.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Internal{struct FormatStringToken;}}}

namespace g{
namespace Uno{
namespace Internal{

// public abstract class FormatStringToken
// {
struct FormatStringToken_type : uType
{
    void(*fp_ToString1)(::g::Uno::Internal::FormatStringToken*, uArray*, uString**);
};

FormatStringToken_type* FormatStringToken_typeof();
void FormatStringToken__ctor__fn(FormatStringToken* __this, uString* lexeme);
void FormatStringToken__get_Lexeme_fn(FormatStringToken* __this, uString** __retval);
void FormatStringToken__set_Lexeme_fn(FormatStringToken* __this, uString* value);

struct FormatStringToken : uObject
{
    uStrong<uString*> _Lexeme;

    void ctor_(uString* lexeme);
    uString* Lexeme();
    void Lexeme(uString* value);
    uString* ToString1(uArray* items) { uString* __retval; return (((FormatStringToken_type*)__type)->fp_ToString1)(this, items, &__retval), __retval; }
};
// }

}}} // ::g::Uno::Internal
