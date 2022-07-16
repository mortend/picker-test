// This file was generated based on '../Source/Fuse.Animations/Mixer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Animations{

// internal abstract interface MasterPropertyGet
// {
uInterfaceType* MasterPropertyGet_typeof();

struct MasterPropertyGet
{
    void(*fp_GetPropertyObject)(uObject*, uObject**);
    static uObject* GetPropertyObject(const uInterface& __this) { uObject* __retval; return __this.VTable<MasterPropertyGet>()->fp_GetPropertyObject(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Animations
