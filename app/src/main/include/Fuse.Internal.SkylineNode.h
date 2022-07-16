// This file was generated based on '../Source/Fuse.Common/Internal/RectPacker.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Internal{struct SkylineNode;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal struct SkylineNode
// {
uStructType* SkylineNode_typeof();
void SkylineNode__ctor_1_fn(SkylineNode* __this, ::g::Uno::Int2* position, int32_t* width);
void SkylineNode__New1_fn(::g::Uno::Int2* position, int32_t* width, SkylineNode* __retval);

struct SkylineNode
{
    ::g::Uno::Int2 Position;
    int32_t Width;

    void ctor_1(::g::Uno::Int2 position, int32_t width);
};

SkylineNode SkylineNode__New1(::g::Uno::Int2 position, int32_t width);
// }

}}} // ::g::Fuse::Internal
