// This file was generated based on '../Source/Fuse.Common/Internal/AndroidSystemFont.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__Alias;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.Alias
// {
uStructType* AndroidSystemFont__Alias_typeof();
void AndroidSystemFont__Alias__ctor_1_fn(AndroidSystemFont__Alias* __this, uString* to, int32_t* weight);
void AndroidSystemFont__Alias__New1_fn(uString* to, int32_t* weight, AndroidSystemFont__Alias* __retval);

struct AndroidSystemFont__Alias
{
    uStrong<uString*> To;
    int32_t Weight;

    void ctor_1(uString* to, int32_t weight);
};

AndroidSystemFont__Alias AndroidSystemFont__Alias__New1(uString* to, int32_t weight);
// }

}}} // ::g::Fuse::Internal
