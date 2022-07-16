// This file was generated based on '../Source/Fuse.Scripting/JSObjectUtils.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Scripting{struct JSObjectUtils;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public static class JSObjectUtils
// {
uClassType* JSObjectUtils_typeof();
void JSObjectUtils__ValueOrDefault1_fn(uType* __type, uArray* args, int32_t* index, void* defaultValue, uTRef __retval);

struct JSObjectUtils : uObject
{
    template<class T>
    static T ValueOrDefault1(uType* __type, uArray* args, int32_t index, T defaultValue) { T __retval; return JSObjectUtils__ValueOrDefault1_fn(__type, args, &index, uConstrain(__type->U(0), defaultValue), &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
