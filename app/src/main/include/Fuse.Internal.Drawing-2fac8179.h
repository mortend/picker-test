// This file was generated based on '../Source/Fuse.Controls/Control.Background.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Internal{namespace Drawing{struct SolidRectangle;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// internal sealed class SolidRectangle
// {
uType* SolidRectangle_typeof();
void SolidRectangle__ctor__fn(SolidRectangle* __this);
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity);
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this);
void SolidRectangle__New1_fn(SolidRectangle** __retval);

struct SolidRectangle : uObject
{
    static uSStrong<SolidRectangle*> Impl_;
    static uSStrong<SolidRectangle*>& Impl() { return SolidRectangle_typeof()->Init(), Impl_; }
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_46d404b6_7_2_1;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_46d404b6_4_9_2;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_46d404b6_4_9_3;
    ::g::Uno::Float4x4 DrawElement_LocalTransform_46d404b6_4_9_4;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_38768924_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_8010082d_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_6e298326_7_2_1;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> DrawElement_VertexData_21076ac8_7_2_1;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_46d404b6;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_38768924;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_8010082d;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_6e298326;

    void ctor_();
    void DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity);
    void init_DrawCalls();
    static SolidRectangle* New1();
};
// }

}}}} // ::g::Fuse::Internal::Drawing
