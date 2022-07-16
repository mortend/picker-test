// This file was generated based on '../Source/Fuse.Drawing.Surface/Android/GraphicsSurface.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.AndroidSurface.h>
#include <Uno.Float2.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Drawing{struct GraphicsSurface;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Java{struct Object;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// internal sealed extern class GraphicsSurface
// {
::g::Fuse::Drawing::AndroidSurface_type* GraphicsSurface_typeof();
void GraphicsSurface__ctor_2_fn(GraphicsSurface* __this);
void GraphicsSurface__Begin_fn(GraphicsSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint);
void GraphicsSurface__BeginImpl_fn(::g::Java::Object* _context, int32_t* width, int32_t* height, int32_t* glTextureId);
void GraphicsSurface__End_fn(GraphicsSurface* __this);
void GraphicsSurface__EndImpl_fn(::g::Java::Object* context);
void GraphicsSurface__LoadBitmap_fn(::g::Java::Object* context, int32_t* width, int32_t* height);
void GraphicsSurface__New1_fn(GraphicsSurface** __retval);
void GraphicsSurface__VerifyBegun_fn(GraphicsSurface* __this);

struct GraphicsSurface : ::g::Fuse::Drawing::AndroidSurface
{
    uStrong< ::g::Uno::Graphics::Framebuffer*> _buffer;
    ::g::Uno::Float2 _size;
    uStrong< ::g::Fuse::DrawContext*> _drawContext;

    void ctor_2();
    static void BeginImpl(::g::Java::Object* _context, int32_t width, int32_t height, int32_t glTextureId);
    static void EndImpl(::g::Java::Object* context);
    static void LoadBitmap(::g::Java::Object* context, int32_t width, int32_t height);
    static GraphicsSurface* New1();
};
// }

}}} // ::g::Fuse::Drawing
