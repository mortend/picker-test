// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Graphics/VertexAttributeInfo.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Graphics{struct VertexAttributeInfo;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Uno{
namespace Graphics{

// public struct VertexAttributeInfo
// {
uStructType* VertexAttributeInfo_typeof();

struct VertexAttributeInfo
{
    int32_t Type;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Buffer;
    int32_t BufferStride;
    int32_t BufferOffset;
};
// }

}}} // ::g::Uno::Graphics
