// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Long.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct Long
// {
uStructType* Long_typeof();
void Long__Equals_fn(int64_t* __this, uType* __type, uObject* o, bool* __retval);
void Long__GetHashCode_fn(int64_t* __this, uType* __type, int32_t* __retval);
void Long__ToString_fn(int64_t* __this, uType* __type, uString** __retval);

struct Long
{
    static bool Equals(int64_t __this, uType* __type, uObject* o) { bool __retval; return Long__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(int64_t __this, uType* __type) { int32_t __retval; return Long__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(int64_t __this, uType* __type) { uString* __retval; return Long__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
