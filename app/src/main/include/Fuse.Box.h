// This file was generated based on '../Source/Fuse.Common/Box.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{struct Box;}}

namespace g{
namespace Fuse{

// public struct Box
// {
uStructType* Box_typeof();
void Box__ctor_1_fn(Box* __this, ::g::Uno::Float3* min, ::g::Uno::Float3* max);
void Box__New1_fn(::g::Uno::Float3* min, ::g::Uno::Float3* max, Box* __retval);

struct Box
{
    ::g::Uno::Float3 Minimum;
    ::g::Uno::Float3 Maximum;

    void ctor_1(::g::Uno::Float3 min, ::g::Uno::Float3 max);
};

Box Box__New1(::g::Uno::Float3 min, ::g::Uno::Float3 max);
// }

}} // ::g::Fuse
