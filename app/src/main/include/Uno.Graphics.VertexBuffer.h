// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Graphics/VertexBuffer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}

namespace g{
namespace Uno{
namespace Graphics{

// public sealed class VertexBuffer
// {
::g::Uno::Graphics::DeviceBuffer_type* VertexBuffer_typeof();
void VertexBuffer__ctor_1_fn(VertexBuffer* __this, uArray* data, int32_t* usage);
void VertexBuffer__ctor_3_fn(VertexBuffer* __this, uArray* data, int32_t* usage);
void VertexBuffer__ctor_4_fn(VertexBuffer* __this, uArray* data, int32_t* usage);
void VertexBuffer__ctor_7_fn(VertexBuffer* __this, int32_t* usage);
void VertexBuffer__New1_fn(uArray* data, int32_t* usage, VertexBuffer** __retval);
void VertexBuffer__New3_fn(uArray* data, int32_t* usage, VertexBuffer** __retval);
void VertexBuffer__New4_fn(uArray* data, int32_t* usage, VertexBuffer** __retval);
void VertexBuffer__New7_fn(int32_t* usage, VertexBuffer** __retval);
void VertexBuffer__Update4_fn(VertexBuffer* __this, uArray* data);
void VertexBuffer__Update5_fn(VertexBuffer* __this, uArray* data);

struct VertexBuffer : ::g::Uno::Graphics::DeviceBuffer
{
    void ctor_1(uArray* data, int32_t usage);
    void ctor_3(uArray* data, int32_t usage);
    void ctor_4(uArray* data, int32_t usage);
    void ctor_7(int32_t usage);
    void Update4(uArray* data);
    void Update5(uArray* data);
    static VertexBuffer* New1(uArray* data, int32_t usage);
    static VertexBuffer* New3(uArray* data, int32_t usage);
    static VertexBuffer* New4(uArray* data, int32_t usage);
    static VertexBuffer* New7(int32_t usage);
};
// }

}}} // ::g::Uno::Graphics
