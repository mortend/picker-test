// This file was generated based on '../Source/Fuse.Effects/EffectHelpers.Blur.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Effects{struct EffectHelpers;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Fuse{
namespace Effects{

// internal partial sealed class EffectHelpers
// {
uType* EffectHelpers_typeof();
void EffectHelpers__ctor__fn(EffectHelpers* __this);
void EffectHelpers__Blur_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float* sigma, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__BlurHorizontal_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int32_t* samples, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__BlurVertical_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int32_t* samples, ::g::Uno::Graphics::Framebuffer** __retval);
void EffectHelpers__GaussianBlurSeparable_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir, float* sigma, int32_t* samples);
void EffectHelpers__init_DrawCalls_fn(EffectHelpers* __this);
void EffectHelpers__get_Instance_fn(EffectHelpers** __retval);
void EffectHelpers__New1_fn(EffectHelpers** __retval);
void EffectHelpers__ResampleGaussian5tap_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2* size, ::g::Uno::Graphics::Framebuffer** __retval);

struct EffectHelpers : uObject
{
    static uSStrong<EffectHelpers*> _instance_;
    static uSStrong<EffectHelpers*>& _instance() { return _instance_; }
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleBilinear_VertexData_92c4812c_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleBilinear_VertexData_92c4812c_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleGaussian5tap_VertexData_29a0fd93_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleGaussian5tap_VertexData_29a0fd93_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> ResampleGaussian9tap_VertexData_a023b028_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> ResampleGaussian9tap_VertexData_a023b028_2_5_3;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> GaussianBlurSeparable_VertexData_b5e3eac2_2_5_2;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> GaussianBlurSeparable_VertexData_b5e3eac2_2_5_3;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_92c4812c;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_29a0fd93;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_a023b028;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_b5e3eac2;

    void ctor_();
    ::g::Uno::Graphics::Framebuffer* Blur(::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float sigma);
    ::g::Uno::Graphics::Framebuffer* BlurHorizontal(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int32_t samples);
    ::g::Uno::Graphics::Framebuffer* BlurVertical(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int32_t samples);
    void GaussianBlurSeparable(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir, float sigma, int32_t samples);
    void init_DrawCalls();
    ::g::Uno::Graphics::Framebuffer* ResampleGaussian5tap(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2 size);
    static EffectHelpers* New1();
    static EffectHelpers* Instance();
};
// }

}}} // ::g::Fuse::Effects
