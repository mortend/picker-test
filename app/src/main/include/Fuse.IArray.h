// This file was generated based on '../Source/Fuse.Common/IObject.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface IArray
// {
uInterfaceType* IArray_typeof();

struct IArray
{
    void(*fp_get_Item)(uObject*, int32_t*, uObject**);
    void(*fp_get_Length)(uObject*, int32_t*);
    static uObject* Item(const uInterface& __this, int32_t index) { uObject* __retval; return __this.VTable<IArray>()->fp_get_Item(__this, &index, &__retval), __retval; }
    static int32_t Length(const uInterface& __this) { int32_t __retval; return __this.VTable<IArray>()->fp_get_Length(__this, &__retval), __retval; }
};
// }

}} // ::g::Fuse
