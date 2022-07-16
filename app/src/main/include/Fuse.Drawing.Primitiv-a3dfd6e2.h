// This file was generated based on '../Source/Fuse.Drawing.Primitives/Rectangle.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
#include <Uno.Graphics.VertexAt-20e40bee.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct FloatBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Coverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Falloff;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct FillCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Rectangle;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// public sealed class Rectangle
// {
uType* Rectangle_typeof();
void Rectangle__ctor__fn(Rectangle* __this);
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval);
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff);
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness);
void Rectangle__init_DrawCalls_fn(Rectangle* __this);
void Rectangle__InitBuffers_fn(Rectangle* __this);
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval);
void Rectangle__New1_fn(Rectangle** __retval);
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness);
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval);

struct Rectangle : uObject
{
    static uSStrong<Rectangle*> Singleton_;
    static uSStrong<Rectangle*>& Singleton() { return Rectangle_typeof()->Init(), Singleton_; }
    uStrong< ::g::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::Falloff*> _shadowFalloff;
    ::g::Uno::Graphics::VertexAttributeInfo _vertexInfo;
    ::g::Uno::Graphics::VertexAttributeInfo _edgeInfo;
    uStrong< ::g::Fuse::Drawing::Internal::FloatBuffer*> _bufferDistance;
    uStrong<uArray*> _uniforms;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_8ea59fa1;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_756a815;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_db3963ea;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_46d298b5;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_ececdec4;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_e1fb4228;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_9f25b31c;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_e693f66d;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_4d5db26e;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_6cd3942d;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_7b8cd5b0;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_1a35325e;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_1b41176d;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_c086d1a2;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_778362f8;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_d788ec00;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_2935d8a1;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_9205091c;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_4a509b68;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_bff5c1da;

    void ctor_();
    uArray* add(uArray* a, uArray* b);
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff);
    void Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness);
    void init_DrawCalls();
    void InitBuffers();
    uArray* neg(uArray* a);
    void Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness);
    uArray* sub(uArray* a, uArray* b);
    static Rectangle* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
