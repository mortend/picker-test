// This file was generated based on '../Source/Fuse.Common/Ray.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float3.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{struct Ray;}}

namespace g{
namespace Fuse{

// public struct Ray
// {
uStructType* Ray_typeof();
void Ray__ctor_1_fn(Ray* __this, ::g::Uno::Float3* pos, ::g::Uno::Float3* dir);
void Ray__New1_fn(::g::Uno::Float3* pos, ::g::Uno::Float3* dir, Ray* __retval);

struct Ray
{
    ::g::Uno::Float3 Position;
    ::g::Uno::Float3 Direction;

    void ctor_1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
};

Ray Ray__New1(::g::Uno::Float3 pos, ::g::Uno::Float3 dir);
// }

}} // ::g::Fuse
