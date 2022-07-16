// This file was generated based on '../Source/Fuse.Drawing.Primitives/Circle.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct Float2Buffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Internal{struct UShortBuffer;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Circle;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct Coverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct FillCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct LimitCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{namespace Primitives{struct StrokeCoverage;}}}}
namespace g{namespace Fuse{namespace Drawing{struct Brush;}}}
namespace g{namespace Fuse{namespace Drawing{struct Stroke;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// public sealed class Circle
// {
uType* Circle_typeof();
void Circle__ctor__fn(Circle* __this);
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float* extend, ::g::Uno::Float2* center, float* smoothness);
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness);
void Circle__init_DrawCalls_fn(Circle* __this);
void Circle__InitBuffers_fn(Circle* __this);
void Circle__New1_fn(Circle** __retval);
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness);

struct Circle : uObject
{
    static uSStrong<Circle*> Singleton_;
    static uSStrong<Circle*>& Singleton() { return Circle_typeof()->Init(), Singleton_; }
    uStrong< ::g::Fuse::Drawing::Primitives::LimitCoverage*> _oneLimitCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::StrokeCoverage*> _strokeCoverage;
    uStrong< ::g::Fuse::Drawing::Primitives::FillCoverage*> _fillCoverage;
    uStrong< ::g::Fuse::Drawing::Internal::Float2Buffer*> _bufferVertex;
    uStrong< ::g::Fuse::Drawing::Internal::UShortBuffer*> _bufferIndex;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_2a7897af;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_381877d6;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_c049787e;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_b10a9dbb;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_93267da2;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_22061cc2;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_25966248;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_648c56fb;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_25ed247a;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_7a46b9d6;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_797b524;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_edd754f9;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_bd227c38;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_4ca5964d;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_69509efb;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_bf2e9fa1;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_555dc9e6;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_c97098cd;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_a432c5dd;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_a84aa311;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_90f41f83;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_ad3108e3;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_a9984188;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_2c21c8ee;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_4674c3a2;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_1b821953;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_b6fe1b5a;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_1ad92463;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_2269edd;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_98fd3aaa;

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float extend, ::g::Uno::Float2 center, float smoothness);
    void Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness);
    void init_DrawCalls();
    void InitBuffers();
    void Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness);
    static Circle* New1();
};
// }

}}}} // ::g::Fuse::Drawing::Primitives
