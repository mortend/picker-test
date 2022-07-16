// This file was generated based on '../Source/Fuse.Nodes/Scaling.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{struct ScalingModes;}}

namespace g{
namespace Fuse{

// public static class ScalingModes
// {
uClassType* ScalingModes_typeof();

struct ScalingModes : uObject
{
    static uSStrong<uObject*> Identity_;
    static uSStrong<uObject*>& Identity() { return ScalingModes_typeof()->Init(), Identity_; }
};
// }

}} // ::g::Fuse
