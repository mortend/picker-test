// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Generic.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{struct Generic;}}

namespace g{
namespace Uno{

// public static class Generic
// {
uClassType* Generic_typeof();
void Generic__Equals_fn(uType* __type, void* left, void* right, bool* __retval);

struct Generic : uObject
{
    template<class T>
    static bool Equals(uType* __type, T left, T right) { bool __retval; return Generic__Equals_fn(__type, uConstrain(__type->U(0), left), uConstrain(__type->U(0), right), &__retval), __retval; }
};
// }

}} // ::g::Uno
