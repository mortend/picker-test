// This file was generated based on '../Source/Fuse.Scripting.JavaScript/ValueMirror.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// internal abstract interface IRaw
// {
uInterfaceType* IRaw_typeof();

struct IRaw
{
    void(*fp_get_ReflectedRaw)(uObject*, uObject**);
    static uObject* ReflectedRaw(const uInterface& __this) { uObject* __retval; return __this.VTable<IRaw>()->fp_get_ReflectedRaw(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
