// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Object.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>

namespace g{
namespace Uno{

// public intrinsic class Object
// {
void Object__Equals_fn(uObject* __this, uObject* o, bool* __retval);
void Object__Equals1_fn(uObject* left, uObject* right, bool* __retval);
void Object__GetHashCode_fn(uObject* __this, int32_t* __retval);
void Object__GetType_fn(uObject* __this, uType** __retval);
void Object__New_fn(uObject** __retval);
void Object__ReferenceEquals_fn(uObject* left, uObject* right, bool* __retval);
void Object__ToString_fn(uObject* __this, uString** __retval);

struct Object
{
    static bool Equals(uObject* __this, uObject* o) { bool __retval; return (__this->__type->fp_Equals)(__this, o, &__retval), __retval; }
    static int32_t GetHashCode(uObject* __this) { int32_t __retval; return (__this->__type->fp_GetHashCode)(__this, &__retval), __retval; }
    static uType* GetType(uObject* __this);
    static uString* ToString(uObject* __this) { uString* __retval; return (__this->__type->fp_ToString)(__this, &__retval), __retval; }
    static bool Equals1(uObject* left, uObject* right);
    static uObject* New();
    static bool ReferenceEquals(uObject* left, uObject* right);
};
// }

}} // ::g::Uno
