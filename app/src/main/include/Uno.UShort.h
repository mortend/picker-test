// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/UShort.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{

// public intrinsic struct UShort
// {
uStructType* UShort_typeof();
void UShort__Equals_fn(uint16_t* __this, uType* __type, uObject* o, bool* __retval);
void UShort__GetHashCode_fn(uint16_t* __this, uType* __type, int32_t* __retval);
void UShort__ToString_fn(uint16_t* __this, uType* __type, uString** __retval);

struct UShort
{
    static bool Equals(uint16_t __this, uType* __type, uObject* o) { bool __retval; return UShort__Equals_fn(&__this, __type, o, &__retval), __retval; }
    static int32_t GetHashCode(uint16_t __this, uType* __type) { int32_t __retval; return UShort__GetHashCode_fn(&__this, __type, &__retval), __retval; }
    static uString* ToString(uint16_t __this, uType* __type) { uString* __retval; return UShort__ToString_fn(&__this, __type, &__retval), __retval; }
};
// }

}} // ::g::Uno
