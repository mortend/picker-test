// This file was generated based on '../Source/Fuse.Common/Internal/AndroidSystemFont.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Internal{struct AndroidSystemFont__FontDescriptor;}}}

namespace g{
namespace Fuse{
namespace Internal{

// private struct AndroidSystemFont.FontDescriptor
// {
uStructType* AndroidSystemFont__FontDescriptor_typeof();
void AndroidSystemFont__FontDescriptor__ctor_1_fn(AndroidSystemFont__FontDescriptor* __this, uString* filePath, int32_t* index, int32_t* style, int32_t* weight);
void AndroidSystemFont__FontDescriptor__New1_fn(uString* filePath, int32_t* index, int32_t* style, int32_t* weight, AndroidSystemFont__FontDescriptor* __retval);

struct AndroidSystemFont__FontDescriptor
{
    uStrong<uString*> FilePath;
    int32_t Index;
    int32_t Style;
    int32_t Weight;

    void ctor_1(uString* filePath, int32_t index, int32_t style, int32_t weight);
};

AndroidSystemFont__FontDescriptor AndroidSystemFont__FontDescriptor__New1(uString* filePath, int32_t index, int32_t style, int32_t weight);
// }

}}} // ::g::Fuse::Internal
