// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Log.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Diagnostics{struct Log;}}}

namespace g{
namespace Uno{
namespace Diagnostics{

// public static class Log
// {
uClassType* Log_typeof();
void Log__Debug_fn(uString* message);
void Log__Error_fn(uString* message);
void Log__WriteLine_fn(int32_t* level, uString* message);

struct Log : uObject
{
    static void Debug(uString* message);
    static void Error(uString* message);
    static void WriteLine(int32_t level, uString* message);
};
// }

}}} // ::g::Uno::Diagnostics
