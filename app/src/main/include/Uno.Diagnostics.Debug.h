// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Debug.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Debug;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Debug
// {
uClassType* Debug_typeof();
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int32_t* line, uArray* operands);
void Debug__EmitLog_fn(uString* message, int32_t* type);

struct Debug : uObject
{
    static uSStrong<uDelegate*> _assertionHandler_;
    static uSStrong<uDelegate*>& _assertionHandler() { return Debug_typeof()->Init(), _assertionHandler_; }
    static uSStrong<uString*> _indentStr_;
    static uSStrong<uString*>& _indentStr() { return Debug_typeof()->Init(), _indentStr_; }

    static void Assert(bool value, uString* expression, uString* filename, int32_t line, uArray* operands);
    static void EmitLog(uString* message, int32_t type);
};
// }

}}} // ::g::Uno::Diagnostics
