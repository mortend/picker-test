// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Byte.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct Byte
// {
uStructType* Byte_typeof();
void Byte__Equals_fn(uint8_t* __this, uType* __type, uObject* o, bool* __retval);
void Byte__GetHashCode_fn(uint8_t* __this, uType* __type, int32_t* __retval);
void Byte__ToString_fn(uint8_t* __this, uType* __type, uString** __retval);

struct Byte
{
    static bool Equals(uint8_t __this, uType* __type, uObject* o) { bool __retval; return Byte__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(uint8_t __this, uType* __type) { int32_t __retval; return Byte__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint8_t __this, uType* __type) { uString* __retval; return Byte__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
