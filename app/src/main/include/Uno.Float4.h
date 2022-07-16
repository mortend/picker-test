// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Float4.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}
namespace g{namespace Uno{struct Int4;}}

namespace g{
namespace Uno{

// public intrinsic struct Float4
// {
uStructType* Float4_typeof();
void Float4__ctor_1_fn(Float4* __this, float* xyzw);
void Float4__ctor_2_fn(Float4* __this, float* x, float* y, float* z, float* w);
void Float4__ctor_5_fn(Float4* __this, float* x, ::g::Uno::Float3* yzw);
void Float4__ctor_6_fn(Float4* __this, ::g::Uno::Float2* xy, float* z, float* w);
void Float4__ctor_7_fn(Float4* __this, ::g::Uno::Float2* xy, ::g::Uno::Float2* zw);
void Float4__ctor_8_fn(Float4* __this, ::g::Uno::Float3* xyz, float* w);
void Float4__Equals_fn(Float4* __this, uType* __type, uObject* o, bool* __retval);
void Float4__GetHashCode_fn(Float4* __this, uType* __type, int32_t* __retval);
void Float4__get_Identity_fn(Float4* __retval);
void Float4__get_Item_fn(Float4* __this, int32_t* index, float* __retval);
void Float4__set_Item_fn(Float4* __this, int32_t* index, float* value);
void Float4__New1_fn(float* xyzw, Float4* __retval);
void Float4__New2_fn(float* x, float* y, float* z, float* w, Float4* __retval);
void Float4__New5_fn(float* x, ::g::Uno::Float3* yzw, Float4* __retval);
void Float4__New6_fn(::g::Uno::Float2* xy, float* z, float* w, Float4* __retval);
void Float4__New7_fn(::g::Uno::Float2* xy, ::g::Uno::Float2* zw, Float4* __retval);
void Float4__New8_fn(::g::Uno::Float3* xyz, float* w, Float4* __retval);
void Float4__op_Addition1_fn(Float4* a, float* b, Float4* __retval);
void Float4__op_Addition2_fn(Float4* a, Float4* b, Float4* __retval);
void Float4__op_Division1_fn(Float4* a, float* b, Float4* __retval);
void Float4__op_Equality_fn(Float4* a, Float4* b, bool* __retval);
void Float4__op_Implicit1_fn(::g::Uno::Int4* a, Float4* __retval);
void Float4__op_Inequality_fn(Float4* a, Float4* b, bool* __retval);
void Float4__op_Multiply_fn(float* a, Float4* b, Float4* __retval);
void Float4__op_Multiply1_fn(Float4* a, float* b, Float4* __retval);
void Float4__op_Multiply2_fn(Float4* a, Float4* b, Float4* __retval);
void Float4__op_Subtraction2_fn(Float4* a, Float4* b, Float4* __retval);
void Float4__ToString_fn(Float4* __this, uType* __type, uString** __retval);

struct Float4
{
    float X;
    float Y;
    float Z;
    float W;

    void ctor_1(float xyzw);
    void ctor_2(float x, float y, float z, float w);
    void ctor_5(float x, ::g::Uno::Float3 yzw);
    void ctor_6(::g::Uno::Float2 xy, float z, float w);
    void ctor_7(::g::Uno::Float2 xy, ::g::Uno::Float2 zw);
    void ctor_8(::g::Uno::Float3 xyz, float w);
    bool Equals(uType* __type, uObject* o) { bool __retval; return Float4__Equals_fn(this, __type, o, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Float4__GetHashCode_fn(this, __type, &__retval), __retval; }
    float Item(int32_t index);
    void Item(int32_t index, float value);
    uString* ToString(uType* __type) { uString* __retval; return Float4__ToString_fn(this, __type, &__retval), __retval; }
};

Float4 Float4__New1(float xyzw);
Float4 Float4__New2(float x, float y, float z, float w);
Float4 Float4__New5(float x, ::g::Uno::Float3 yzw);
Float4 Float4__New6(::g::Uno::Float2 xy, float z, float w);
Float4 Float4__New7(::g::Uno::Float2 xy, ::g::Uno::Float2 zw);
Float4 Float4__New8(::g::Uno::Float3 xyz, float w);
Float4 Float4__op_Addition1(Float4 a, float b);
Float4 Float4__op_Addition2(Float4 a, Float4 b);
Float4 Float4__op_Division1(Float4 a, float b);
bool Float4__op_Equality(Float4 a, Float4 b);
Float4 Float4__op_Implicit1(::g::Uno::Int4 a);
bool Float4__op_Inequality(Float4 a, Float4 b);
Float4 Float4__op_Multiply(float a, Float4 b);
Float4 Float4__op_Multiply1(Float4 a, float b);
Float4 Float4__op_Multiply2(Float4 a, Float4 b);
Float4 Float4__op_Subtraction2(Float4 a, Float4 b);
Float4 Float4__Identity();
// }

}} // ::g::Uno
