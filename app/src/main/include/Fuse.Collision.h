// This file was generated based on '../Source/Fuse.Common/Collision.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{struct Box;}}
namespace g{namespace Fuse{struct Collision;}}
namespace g{namespace Fuse{struct Ray;}}

namespace g{
namespace Fuse{

// public static class Collision
// {
uClassType* Collision_typeof();
void Collision__RayIntersectsBox_fn(::g::Fuse::Ray* ray, ::g::Fuse::Box* box, float* distance, bool* __retval);

struct Collision : uObject
{
    static bool RayIntersectsBox(::g::Fuse::Ray ray, ::g::Fuse::Box box, float* distance);
};
// }

}} // ::g::Fuse
