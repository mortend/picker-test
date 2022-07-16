// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Environment.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{struct Environment;}}

namespace g{
namespace Uno{

// public static class Environment
// {
uClassType* Environment_typeof();
void Environment__get_NewLine_fn(uString** __retval);

struct Environment : uObject
{
    static uString* NewLine();
};
// }

}} // ::g::Uno
