// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Float2x2.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Float2x2;}}

namespace g{
namespace Uno{

// public intrinsic struct Float2x2
// {
uStructType* Float2x2_typeof();
void Float2x2__ctor_1_fn(Float2x2* __this, float* m11, float* m12, float* m21, float* m22);
void Float2x2__Equals_fn(Float2x2* __this, uType* __type, uObject* o, bool* __retval);
void Float2x2__GetHashCode_fn(Float2x2* __this, uType* __type, int32_t* __retval);
void Float2x2__New1_fn(float* m11, float* m12, float* m21, float* m22, Float2x2* __retval);
void Float2x2__ToString_fn(Float2x2* __this, uType* __type, uString** __retval);

struct Float2x2
{
    float M11;
    float M12;
    float M21;
    float M22;

    void ctor_1(float m11, float m12, float m21, float m22);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float2x2__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Float2x2__GetHashCode_fn(this, __type, &__retval), __retval; }
    uString* ToString(uType* __type) { uString* __retval; return Float2x2__ToString_fn(this, __type, &__retval), __retval; }
};

Float2x2 Float2x2__New1(float m11, float m12, float m21, float m22);
// }

}} // ::g::Uno
