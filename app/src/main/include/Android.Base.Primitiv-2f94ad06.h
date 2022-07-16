// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <jni.h>
#include <Uno.ValueType.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// public extern struct ujclass
// {
uStructType* ujclass_typeof();
void ujclass__get_Null_fn(jclass* __retval);
void ujclass__op_Equality_fn(jclass* lhs, jclass* rhs, bool* __retval);

struct ujclass
{
    static bool op_Equality(jclass lhs, jclass rhs);
    static jclass Null();
};
// }

}}}} // ::g::Android::Base::Primitives
