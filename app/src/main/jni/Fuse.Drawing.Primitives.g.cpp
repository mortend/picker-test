// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawingPrim-aed6b1dd.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DashedColor.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFil-b905dd3.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.Internal-1b31e5ea.h>
#include <Fuse.Drawing.Internal-2ca76543.h>
#include <Fuse.Drawing.Internal-acfd08d8.h>
#include <Fuse.Drawing.Internal-ec458cdf.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.Primitiv-30868a07.h>
#include <Fuse.Drawing.Primitiv-3957723a.h>
#include <Fuse.Drawing.Primitiv-428f9697.h>
#include <Fuse.Drawing.Primitiv-5d7d52a9.h>
#include <Fuse.Drawing.Primitiv-6ecbad8d.h>
#include <Fuse.Drawing.Primitiv-8a696e91.h>
#include <Fuse.Drawing.Primitiv-a2f4a135.h>
#include <Fuse.Drawing.Primitiv-a3dfd6e2.h>
#include <Fuse.Drawing.Primitiv-a93ed644.h>
#include <Fuse.Drawing.Primitiv-c2bde4f1.h>
#include <Fuse.Drawing.Primitives.Circle.h>
#include <Fuse.Drawing.Primitives.Wedge.h>
#include <Fuse.Drawing.Primitiv-f20d5f1c.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.ByteArrayExtensions.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.OpenGL.GLProgram.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-13489a6d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[17];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Primitives{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Circle.uno
// --------------------------------------------------------------------------

// public sealed class Circle
// {
// static generated Circle()
static void Circle__cctor__fn(uType* __type)
{
    Circle::Singleton_ = Circle::New1();
}

static void Circle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::Primitives::OneLimitCoverage_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::DashedColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof(), offsetof(Circle, _oneLimitCoverage), 0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Circle, _strokeCoverage), 0,
        ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Circle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Internal::Float2Buffer_typeof(), offsetof(Circle, _bufferVertex), 0,
        ::g::Fuse::Drawing::Internal::UShortBuffer_typeof(), offsetof(Circle, _bufferIndex), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_2a7897af), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_381877d6), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_c049787e), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_b10a9dbb), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_93267da2), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_22061cc2), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_25966248), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_648c56fb), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_25ed247a), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_7a46b9d6), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_797b524), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_edd754f9), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_bd227c38), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_4ca5964d), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_69509efb), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_bf2e9fa1), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_555dc9e6), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_c97098cd), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_a432c5dd), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_a84aa311), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_90f41f83), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_ad3108e3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_a9984188), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_2c21c8ee), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_4674c3a2), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1b821953), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_b6fe1b5a), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_1ad92463), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_2269edd), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Circle, _draw_98fd3aaa), 0,
        type, (uintptr_t)&Circle::Singleton_, uFieldFlagsStatic);
}

uType* Circle_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 36;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Circle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Circle", options);
    type->fp_build_ = Circle_build;
    type->fp_ctor_ = (void*)Circle__New1_fn;
    type->fp_cctor_ = Circle__cctor__fn;
    return type;
}

// public generated Circle()
void Circle__ctor__fn(Circle* __this)
{
    __this->ctor_();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness)
void Circle__Draw_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float* extend, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Draw(dc, visual, *radius, brush, cover, limit, *extend, *center, *smoothness);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness)
void Circle__Fill_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Fill(dc, visual, *radius, brush, *center, *smoothness);
}

// private generated void init_DrawCalls()
void Circle__init_DrawCalls_fn(Circle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers()
void Circle__InitBuffers_fn(Circle* __this)
{
    __this->InitBuffers();
}

// public generated Circle New()
void Circle__New1_fn(Circle** __retval)
{
    *__retval = Circle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness)
void Circle__Stroke_fn(Circle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* smoothness)
{
    __this->Stroke(dc, visual, *radius, stroke, *center, *smoothness);
}

uSStrong<Circle*> Circle::Singleton_;

// public generated Circle() [instance]
void Circle::ctor_()
{
    _oneLimitCoverage = ::g::Fuse::Drawing::Primitives::OneLimitCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    init_DrawCalls();
}

// internal void Draw(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, Fuse.Drawing.Primitives.LimitCoverage limit, float extend, float2 center, float smoothness) [instance]
void Circle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Fuse::Drawing::Primitives::LimitCoverage* limit, float extend, ::g::Uno::Float2 center, float smoothness)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float2 ind13;
    ::g::Uno::Float2 ind14;
    ::g::Uno::Float2 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;
    ::g::Uno::Float4 ind21;
    ::g::Uno::Float4 ind22;
    ::g::Uno::Float4 ind23;
    ::g::Uno::Float4 ind24;
    ::g::Uno::Float4 ind25;
    ::g::Uno::Float4 ind26;
    ::g::Uno::Float4 ind27;
    ::g::Uno::Float4 ind28;
    ::g::Uno::Float4 ind29;
    ::g::Uno::Float4 ind30;
    ::g::Uno::Float2 ind31;
    ::g::Uno::Float2 ind32;
    ::g::Uno::Float2 ind33;
    ::g::Uno::Float4 ind34;
    ::g::Uno::Float4 ind35;
    ::g::Uno::Float4 ind36;

    if (radius <= 0.0f)
        return;

    if (_bufferVertex == nullptr)
        InitBuffers();

    float radiusRcp = 1.0f / radius;

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_2a7897af_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_2a7897af_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_2a7897af_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_2a7897af.BlendEnabled(true);
                _draw_2a7897af.DepthTestEnabled(false);
                _draw_2a7897af.CullFace(uPtr(dc)->CullFace());
                _draw_2a7897af.BlendSrcAlpha(7);
                _draw_2a7897af.BlendDstRgb(3);
                _draw_2a7897af.Const(0, DP_2a7897af_14_8_4.NeedFract);
                _draw_2a7897af.Const(1, DP_2a7897af_14_8_4.Texture == nullptr);
                _draw_2a7897af.Use();
                _draw_2a7897af.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_2a7897af.Uniform(3, radius + (extend * 2.0f));
                _draw_2a7897af.Uniform2(4, center);
                _draw_2a7897af.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_2a7897af.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_2a7897af.Uniform2(7, DP_2a7897af_14_8_4.Origin);
                _draw_2a7897af.Uniform2(8, DP_2a7897af_14_8_4.Size);
                _draw_2a7897af.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_2a7897af_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_2a7897af_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_2a7897af.Uniform2(10, (ind3 = DP_2a7897af_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_2a7897af.Uniform2(11, DP_2a7897af_14_8_4.TexCoordScale1);
                _draw_2a7897af.Uniform2(12, DP_2a7897af_14_8_4.TexCoordBias1);
                _draw_2a7897af.Uniform2(13, DP_2a7897af_14_8_4.TexCoordScale2);
                _draw_2a7897af.Uniform2(14, DP_2a7897af_14_8_4.TexCoordBias2);
                _draw_2a7897af.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_2a7897af.Uniform(16, radiusRcp);
                _draw_2a7897af.Uniform(17, radius);
                _draw_2a7897af.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_2a7897af.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_2a7897af.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_2a7897af.Uniform(21, 1.0f / smoothness);
                _draw_2a7897af.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_2a7897af.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_2a7897af_20_2_17, EndVec_2a7897af_20_3_18)));
                _draw_2a7897af.Uniform2(24, StartVec_2a7897af_20_2_17);
                _draw_2a7897af.Uniform2(25, EndVec_2a7897af_20_3_18);
                _draw_2a7897af.Sampler3(26, DP_2a7897af_14_8_4.Texture, DP_2a7897af_14_8_4.SamplerState);
                _draw_2a7897af.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_381877d6_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_381877d6_20_2_17 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_381877d6_20_3_18 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_381877d6.BlendEnabled(true);
                _draw_381877d6.DepthTestEnabled(false);
                _draw_381877d6.CullFace(uPtr(dc)->CullFace());
                _draw_381877d6.BlendSrcAlpha(7);
                _draw_381877d6.BlendDstRgb(3);
                _draw_381877d6.Const(0, DP_381877d6_14_8_4.NeedFract);
                _draw_381877d6.Const(1, DP_381877d6_14_8_4.Texture == nullptr);
                _draw_381877d6.Use();
                _draw_381877d6.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_381877d6.Uniform(3, radius + (extend * 2.0f));
                _draw_381877d6.Uniform2(4, center);
                _draw_381877d6.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_381877d6.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_381877d6.Uniform2(7, DP_381877d6_14_8_4.Origin);
                _draw_381877d6.Uniform2(8, DP_381877d6_14_8_4.Size);
                _draw_381877d6.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_381877d6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_381877d6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_381877d6.Uniform2(10, (ind6 = DP_381877d6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_381877d6.Uniform2(11, DP_381877d6_14_8_4.TexCoordScale1);
                _draw_381877d6.Uniform2(12, DP_381877d6_14_8_4.TexCoordBias1);
                _draw_381877d6.Uniform2(13, DP_381877d6_14_8_4.TexCoordScale2);
                _draw_381877d6.Uniform2(14, DP_381877d6_14_8_4.TexCoordBias2);
                _draw_381877d6.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_381877d6.Uniform(16, radiusRcp);
                _draw_381877d6.Uniform(17, radius);
                _draw_381877d6.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_381877d6.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_381877d6.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_381877d6.Uniform(21, 1.0f / smoothness);
                _draw_381877d6.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_381877d6.Uniform2(23, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_381877d6_20_2_17, EndVec_381877d6_20_3_18)));
                _draw_381877d6.Uniform2(24, StartVec_381877d6_20_2_17);
                _draw_381877d6.Uniform2(25, EndVec_381877d6_20_3_18);
                _draw_381877d6.Sampler3(26, DP_381877d6_14_8_4.Texture, DP_381877d6_14_8_4.SamplerState);
                _draw_381877d6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_c049787e_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_c049787e.BlendEnabled(true);
                _draw_c049787e.DepthTestEnabled(false);
                _draw_c049787e.CullFace(uPtr(dc)->CullFace());
                _draw_c049787e.BlendSrcAlpha(7);
                _draw_c049787e.BlendDstRgb(3);
                _draw_c049787e.Const(0, DP_c049787e_14_8_4.NeedFract);
                _draw_c049787e.Const(1, DP_c049787e_14_8_4.Texture == nullptr);
                _draw_c049787e.Use();
                _draw_c049787e.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c049787e.Uniform(3, radius + (extend * 2.0f));
                _draw_c049787e.Uniform2(4, center);
                _draw_c049787e.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c049787e.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c049787e.Uniform2(7, DP_c049787e_14_8_4.Origin);
                _draw_c049787e.Uniform2(8, DP_c049787e_14_8_4.Size);
                _draw_c049787e.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind7 = DP_c049787e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind7.Z, ind7.W)), (ind8 = DP_c049787e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind8.X, ind8.Y))));
                _draw_c049787e.Uniform2(10, (ind9 = DP_c049787e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind9.X, ind9.Y)));
                _draw_c049787e.Uniform2(11, DP_c049787e_14_8_4.TexCoordScale1);
                _draw_c049787e.Uniform2(12, DP_c049787e_14_8_4.TexCoordBias1);
                _draw_c049787e.Uniform2(13, DP_c049787e_14_8_4.TexCoordScale2);
                _draw_c049787e.Uniform2(14, DP_c049787e_14_8_4.TexCoordBias2);
                _draw_c049787e.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_c049787e.Uniform(16, radiusRcp);
                _draw_c049787e.Uniform(17, radius);
                _draw_c049787e.Uniform(18, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_c049787e.Uniform(19, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_c049787e.Uniform(20, dc->ViewportPixelsPerPoint());
                _draw_c049787e.Uniform(21, 1.0f / smoothness);
                _draw_c049787e.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_c049787e.Sampler3(23, DP_c049787e_14_8_4.Texture, DP_c049787e_14_8_4.SamplerState);
                _draw_c049787e.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_b10a9dbb_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_b10a9dbb_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_b10a9dbb.BlendEnabled(true);
                _draw_b10a9dbb.DepthTestEnabled(false);
                _draw_b10a9dbb.CullFace(uPtr(dc)->CullFace());
                _draw_b10a9dbb.BlendSrcAlpha(7);
                _draw_b10a9dbb.BlendDstRgb(3);
                _draw_b10a9dbb.Use();
                _draw_b10a9dbb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_b10a9dbb.Uniform(1, radius + (extend * 2.0f));
                _draw_b10a9dbb.Uniform2(2, center);
                _draw_b10a9dbb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_b10a9dbb.Uniform(4, radiusRcp);
                _draw_b10a9dbb.Uniform(5, radius);
                _draw_b10a9dbb.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_b10a9dbb.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_b10a9dbb.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_b10a9dbb.Uniform(9, 1.0f / smoothness);
                _draw_b10a9dbb.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind10 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_b10a9dbb.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_b10a9dbb.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_b10a9dbb_20_2_8, EndVec_b10a9dbb_20_3_9)));
                _draw_b10a9dbb.Uniform2(13, StartVec_b10a9dbb_20_2_8);
                _draw_b10a9dbb.Uniform2(14, EndVec_b10a9dbb_20_3_9);
                _draw_b10a9dbb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_93267da2_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_93267da2_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_93267da2.BlendEnabled(true);
                _draw_93267da2.DepthTestEnabled(false);
                _draw_93267da2.CullFace(uPtr(dc)->CullFace());
                _draw_93267da2.BlendSrcAlpha(7);
                _draw_93267da2.BlendDstRgb(3);
                _draw_93267da2.Use();
                _draw_93267da2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_93267da2.Uniform(1, radius + (extend * 2.0f));
                _draw_93267da2.Uniform2(2, center);
                _draw_93267da2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_93267da2.Uniform(4, radiusRcp);
                _draw_93267da2.Uniform(5, radius);
                _draw_93267da2.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_93267da2.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_93267da2.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_93267da2.Uniform(9, 1.0f / smoothness);
                _draw_93267da2.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind11 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind11.X, ind11.Y, ind11.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_93267da2.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_93267da2.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_93267da2_20_2_8, EndVec_93267da2_20_3_9)));
                _draw_93267da2.Uniform2(13, StartVec_93267da2_20_2_8);
                _draw_93267da2.Uniform2(14, EndVec_93267da2_20_3_9);
                _draw_93267da2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_22061cc2.BlendEnabled(true);
                _draw_22061cc2.DepthTestEnabled(false);
                _draw_22061cc2.CullFace(uPtr(dc)->CullFace());
                _draw_22061cc2.BlendSrcAlpha(7);
                _draw_22061cc2.BlendDstRgb(3);
                _draw_22061cc2.Use();
                _draw_22061cc2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_22061cc2.Uniform(1, radius + (extend * 2.0f));
                _draw_22061cc2.Uniform2(2, center);
                _draw_22061cc2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_22061cc2.Uniform(4, radiusRcp);
                _draw_22061cc2.Uniform(5, radius);
                _draw_22061cc2.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_22061cc2.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_22061cc2.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_22061cc2.Uniform(9, 1.0f / smoothness);
                _draw_22061cc2.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind12 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind12.X, ind12.Y, ind12.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_22061cc2.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_22061cc2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_25966248_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_25966248_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_25966248_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_25966248.BlendEnabled(true);
                _draw_25966248.DepthTestEnabled(false);
                _draw_25966248.CullFace(uPtr(dc)->CullFace());
                _draw_25966248.BlendSrcAlpha(7);
                _draw_25966248.BlendDstRgb(3);
                _draw_25966248.Use();
                _draw_25966248.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_25966248.Uniform(1, radius + (extend * 2.0f));
                _draw_25966248.Uniform2(2, center);
                _draw_25966248.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_25966248.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_25966248.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_25966248.Uniform(6, radiusRcp);
                _draw_25966248.Uniform(7, radius);
                _draw_25966248.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_25966248.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_25966248.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_25966248.Uniform(11, 1.0f / smoothness);
                _draw_25966248.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_25966248.Uniform10(13, endPoints_25966248_14_17_6);
                _draw_25966248.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25966248_14_17_6.Z, endPoints_25966248_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25966248_14_17_6.X, endPoints_25966248_14_17_6.Y))));
                _draw_25966248.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25966248_14_17_6.Z, endPoints_25966248_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25966248_14_17_6.X, endPoints_25966248_14_17_6.Y))));
                _draw_25966248.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_25966248_20_2_15, EndVec_25966248_20_3_16)));
                _draw_25966248.Uniform2(17, StartVec_25966248_20_2_15);
                _draw_25966248.Uniform2(18, EndVec_25966248_20_3_16);
                _draw_25966248.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_25966248.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_648c56fb_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_648c56fb_20_2_15 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_648c56fb_20_3_16 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_648c56fb.BlendEnabled(true);
                _draw_648c56fb.DepthTestEnabled(false);
                _draw_648c56fb.CullFace(uPtr(dc)->CullFace());
                _draw_648c56fb.BlendSrcAlpha(7);
                _draw_648c56fb.BlendDstRgb(3);
                _draw_648c56fb.Use();
                _draw_648c56fb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_648c56fb.Uniform(1, radius + (extend * 2.0f));
                _draw_648c56fb.Uniform2(2, center);
                _draw_648c56fb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_648c56fb.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_648c56fb.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_648c56fb.Uniform(6, radiusRcp);
                _draw_648c56fb.Uniform(7, radius);
                _draw_648c56fb.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_648c56fb.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_648c56fb.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_648c56fb.Uniform(11, 1.0f / smoothness);
                _draw_648c56fb.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_648c56fb.Uniform10(13, endPoints_648c56fb_14_17_6);
                _draw_648c56fb.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.Z, endPoints_648c56fb_14_17_6.W), ::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.X, endPoints_648c56fb_14_17_6.Y))));
                _draw_648c56fb.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.Z, endPoints_648c56fb_14_17_6.W), ::g::Uno::Float2__New2(endPoints_648c56fb_14_17_6.X, endPoints_648c56fb_14_17_6.Y))));
                _draw_648c56fb.Uniform2(16, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_648c56fb_20_2_15, EndVec_648c56fb_20_3_16)));
                _draw_648c56fb.Uniform2(17, StartVec_648c56fb_20_2_15);
                _draw_648c56fb.Uniform2(18, EndVec_648c56fb_20_3_16);
                _draw_648c56fb.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_648c56fb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_25ed247a_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_25ed247a.BlendEnabled(true);
                _draw_25ed247a.DepthTestEnabled(false);
                _draw_25ed247a.CullFace(uPtr(dc)->CullFace());
                _draw_25ed247a.BlendSrcAlpha(7);
                _draw_25ed247a.BlendDstRgb(3);
                _draw_25ed247a.Use();
                _draw_25ed247a.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_25ed247a.Uniform(1, radius + (extend * 2.0f));
                _draw_25ed247a.Uniform2(2, center);
                _draw_25ed247a.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_25ed247a.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_25ed247a.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_25ed247a.Uniform(6, radiusRcp);
                _draw_25ed247a.Uniform(7, radius);
                _draw_25ed247a.Uniform(8, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_25ed247a.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_25ed247a.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_25ed247a.Uniform(11, 1.0f / smoothness);
                _draw_25ed247a.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_25ed247a.Uniform10(13, endPoints_25ed247a_14_17_6);
                _draw_25ed247a.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.Z, endPoints_25ed247a_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.X, endPoints_25ed247a_14_17_6.Y))));
                _draw_25ed247a.Uniform(15, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.Z, endPoints_25ed247a_14_17_6.W), ::g::Uno::Float2__New2(endPoints_25ed247a_14_17_6.X, endPoints_25ed247a_14_17_6.Y))));
                _draw_25ed247a.Sampler3(16, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_25ed247a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_7a46b9d6_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_7a46b9d6_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_7a46b9d6.BlendEnabled(true);
                _draw_7a46b9d6.DepthTestEnabled(false);
                _draw_7a46b9d6.CullFace(uPtr(dc)->CullFace());
                _draw_7a46b9d6.BlendSrcAlpha(7);
                _draw_7a46b9d6.BlendDstRgb(3);
                _draw_7a46b9d6.Use();
                _draw_7a46b9d6.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_7a46b9d6.Uniform(1, radius + (extend * 2.0f));
                _draw_7a46b9d6.Uniform2(2, center);
                _draw_7a46b9d6.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_7a46b9d6.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_7a46b9d6.Uniform2(5, (ind13 = visual->ActualSize(), ::g::Uno::Float2__New2(ind13.X, ind13.Y)));
                _draw_7a46b9d6.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_7a46b9d6.Uniform10(7, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_7a46b9d6.Uniform(8, radiusRcp);
                _draw_7a46b9d6.Uniform(9, radius);
                _draw_7a46b9d6.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_7a46b9d6.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_7a46b9d6.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_7a46b9d6.Uniform(13, 1.0f / smoothness);
                _draw_7a46b9d6.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_7a46b9d6.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_7a46b9d6_20_2_13, EndVec_7a46b9d6_20_3_14)));
                _draw_7a46b9d6.Uniform2(16, StartVec_7a46b9d6_20_2_13);
                _draw_7a46b9d6.Uniform2(17, EndVec_7a46b9d6_20_3_14);
                _draw_7a46b9d6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_797b524_20_2_13 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_797b524_20_3_14 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_797b524.BlendEnabled(true);
                _draw_797b524.DepthTestEnabled(false);
                _draw_797b524.CullFace(uPtr(dc)->CullFace());
                _draw_797b524.BlendSrcAlpha(7);
                _draw_797b524.BlendDstRgb(3);
                _draw_797b524.Use();
                _draw_797b524.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_797b524.Uniform(1, radius + (extend * 2.0f));
                _draw_797b524.Uniform2(2, center);
                _draw_797b524.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_797b524.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_797b524.Uniform2(5, (ind14 = visual->ActualSize(), ::g::Uno::Float2__New2(ind14.X, ind14.Y)));
                _draw_797b524.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_797b524.Uniform10(7, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_797b524.Uniform(8, radiusRcp);
                _draw_797b524.Uniform(9, radius);
                _draw_797b524.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_797b524.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_797b524.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_797b524.Uniform(13, 1.0f / smoothness);
                _draw_797b524.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_797b524.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_797b524_20_2_13, EndVec_797b524_20_3_14)));
                _draw_797b524.Uniform2(16, StartVec_797b524_20_2_13);
                _draw_797b524.Uniform2(17, EndVec_797b524_20_3_14);
                _draw_797b524.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_edd754f9.BlendEnabled(true);
                _draw_edd754f9.DepthTestEnabled(false);
                _draw_edd754f9.CullFace(uPtr(dc)->CullFace());
                _draw_edd754f9.BlendSrcAlpha(7);
                _draw_edd754f9.BlendDstRgb(3);
                _draw_edd754f9.Use();
                _draw_edd754f9.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_edd754f9.Uniform(1, radius + (extend * 2.0f));
                _draw_edd754f9.Uniform2(2, center);
                _draw_edd754f9.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_edd754f9.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_edd754f9.Uniform2(5, (ind15 = visual->ActualSize(), ::g::Uno::Float2__New2(ind15.X, ind15.Y)));
                _draw_edd754f9.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_edd754f9.Uniform10(7, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_edd754f9.Uniform(8, radiusRcp);
                _draw_edd754f9.Uniform(9, radius);
                _draw_edd754f9.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_edd754f9.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_edd754f9.Uniform(12, dc->ViewportPixelsPerPoint());
                _draw_edd754f9.Uniform(13, 1.0f / smoothness);
                _draw_edd754f9.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_edd754f9.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_bd227c38_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_bd227c38_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_bd227c38.BlendEnabled(true);
                _draw_bd227c38.DepthTestEnabled(false);
                _draw_bd227c38.CullFace(uPtr(dc)->CullFace());
                _draw_bd227c38.BlendSrcAlpha(7);
                _draw_bd227c38.BlendDstRgb(3);
                _draw_bd227c38.Use();
                _draw_bd227c38.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_bd227c38.Uniform(1, radius + (extend * 2.0f));
                _draw_bd227c38.Uniform2(2, center);
                _draw_bd227c38.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_bd227c38.Uniform(4, radiusRcp);
                _draw_bd227c38.Uniform(5, radius);
                _draw_bd227c38.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_bd227c38.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_bd227c38.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_bd227c38.Uniform(9, 1.0f / smoothness);
                _draw_bd227c38.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind16 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind16.X, ind16.Y, ind16.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_bd227c38.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_bd227c38_20_2_8, EndVec_bd227c38_20_3_9)));
                _draw_bd227c38.Uniform2(12, StartVec_bd227c38_20_2_8);
                _draw_bd227c38.Uniform2(13, EndVec_bd227c38_20_3_9);
                _draw_bd227c38.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_4ca5964d_20_2_8 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_4ca5964d_20_3_9 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_4ca5964d.BlendEnabled(true);
                _draw_4ca5964d.DepthTestEnabled(false);
                _draw_4ca5964d.CullFace(uPtr(dc)->CullFace());
                _draw_4ca5964d.BlendSrcAlpha(7);
                _draw_4ca5964d.BlendDstRgb(3);
                _draw_4ca5964d.Use();
                _draw_4ca5964d.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_4ca5964d.Uniform(1, radius + (extend * 2.0f));
                _draw_4ca5964d.Uniform2(2, center);
                _draw_4ca5964d.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_4ca5964d.Uniform(4, radiusRcp);
                _draw_4ca5964d.Uniform(5, radius);
                _draw_4ca5964d.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_4ca5964d.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_4ca5964d.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_4ca5964d.Uniform(9, 1.0f / smoothness);
                _draw_4ca5964d.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind17 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_4ca5964d.Uniform2(11, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_4ca5964d_20_2_8, EndVec_4ca5964d_20_3_9)));
                _draw_4ca5964d.Uniform2(12, StartVec_4ca5964d_20_2_8);
                _draw_4ca5964d.Uniform2(13, EndVec_4ca5964d_20_3_9);
                _draw_4ca5964d.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_69509efb.BlendEnabled(true);
                _draw_69509efb.DepthTestEnabled(false);
                _draw_69509efb.CullFace(uPtr(dc)->CullFace());
                _draw_69509efb.BlendSrcAlpha(7);
                _draw_69509efb.BlendDstRgb(3);
                _draw_69509efb.Use();
                _draw_69509efb.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_69509efb.Uniform(1, radius + (extend * 2.0f));
                _draw_69509efb.Uniform2(2, center);
                _draw_69509efb.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_69509efb.Uniform(4, radiusRcp);
                _draw_69509efb.Uniform(5, radius);
                _draw_69509efb.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_69509efb.Uniform(7, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_69509efb.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_69509efb.Uniform(9, 1.0f / smoothness);
                _draw_69509efb.Uniform10(10, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind18 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_69509efb.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
    else if (uIs(cover, ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_bf2e9fa1_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_bf2e9fa1_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_bf2e9fa1_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_bf2e9fa1.BlendEnabled(true);
                _draw_bf2e9fa1.DepthTestEnabled(false);
                _draw_bf2e9fa1.CullFace(uPtr(dc)->CullFace());
                _draw_bf2e9fa1.BlendSrcAlpha(7);
                _draw_bf2e9fa1.BlendDstRgb(3);
                _draw_bf2e9fa1.Const(0, DP_bf2e9fa1_14_8_4.NeedFract);
                _draw_bf2e9fa1.Const(1, DP_bf2e9fa1_14_8_4.Texture == nullptr);
                _draw_bf2e9fa1.Use();
                _draw_bf2e9fa1.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_bf2e9fa1.Uniform(3, radius + (extend * 2.0f));
                _draw_bf2e9fa1.Uniform2(4, center);
                _draw_bf2e9fa1.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_bf2e9fa1.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_bf2e9fa1.Uniform2(7, DP_bf2e9fa1_14_8_4.Origin);
                _draw_bf2e9fa1.Uniform2(8, DP_bf2e9fa1_14_8_4.Size);
                _draw_bf2e9fa1.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind19 = DP_bf2e9fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind19.Z, ind19.W)), (ind20 = DP_bf2e9fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind20.X, ind20.Y))));
                _draw_bf2e9fa1.Uniform2(10, (ind21 = DP_bf2e9fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind21.X, ind21.Y)));
                _draw_bf2e9fa1.Uniform2(11, DP_bf2e9fa1_14_8_4.TexCoordScale1);
                _draw_bf2e9fa1.Uniform2(12, DP_bf2e9fa1_14_8_4.TexCoordBias1);
                _draw_bf2e9fa1.Uniform2(13, DP_bf2e9fa1_14_8_4.TexCoordScale2);
                _draw_bf2e9fa1.Uniform2(14, DP_bf2e9fa1_14_8_4.TexCoordBias2);
                _draw_bf2e9fa1.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_bf2e9fa1.Uniform(16, radiusRcp);
                _draw_bf2e9fa1.Uniform(17, radius);
                _draw_bf2e9fa1.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_bf2e9fa1.Uniform(19, 1.0f / smoothness);
                _draw_bf2e9fa1.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_bf2e9fa1.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_bf2e9fa1_20_2_16, EndVec_bf2e9fa1_20_3_17)));
                _draw_bf2e9fa1.Uniform2(22, StartVec_bf2e9fa1_20_2_16);
                _draw_bf2e9fa1.Uniform2(23, EndVec_bf2e9fa1_20_3_17);
                _draw_bf2e9fa1.Sampler3(24, DP_bf2e9fa1_14_8_4.Texture, DP_bf2e9fa1_14_8_4.SamplerState);
                _draw_bf2e9fa1.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_555dc9e6_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_555dc9e6_20_2_16 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_555dc9e6_20_3_17 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_555dc9e6.BlendEnabled(true);
                _draw_555dc9e6.DepthTestEnabled(false);
                _draw_555dc9e6.CullFace(uPtr(dc)->CullFace());
                _draw_555dc9e6.BlendSrcAlpha(7);
                _draw_555dc9e6.BlendDstRgb(3);
                _draw_555dc9e6.Const(0, DP_555dc9e6_14_8_4.NeedFract);
                _draw_555dc9e6.Const(1, DP_555dc9e6_14_8_4.Texture == nullptr);
                _draw_555dc9e6.Use();
                _draw_555dc9e6.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_555dc9e6.Uniform(3, radius + (extend * 2.0f));
                _draw_555dc9e6.Uniform2(4, center);
                _draw_555dc9e6.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_555dc9e6.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_555dc9e6.Uniform2(7, DP_555dc9e6_14_8_4.Origin);
                _draw_555dc9e6.Uniform2(8, DP_555dc9e6_14_8_4.Size);
                _draw_555dc9e6.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind22 = DP_555dc9e6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind22.Z, ind22.W)), (ind23 = DP_555dc9e6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind23.X, ind23.Y))));
                _draw_555dc9e6.Uniform2(10, (ind24 = DP_555dc9e6_14_8_4.UVClip, ::g::Uno::Float2__New2(ind24.X, ind24.Y)));
                _draw_555dc9e6.Uniform2(11, DP_555dc9e6_14_8_4.TexCoordScale1);
                _draw_555dc9e6.Uniform2(12, DP_555dc9e6_14_8_4.TexCoordBias1);
                _draw_555dc9e6.Uniform2(13, DP_555dc9e6_14_8_4.TexCoordScale2);
                _draw_555dc9e6.Uniform2(14, DP_555dc9e6_14_8_4.TexCoordBias2);
                _draw_555dc9e6.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_555dc9e6.Uniform(16, radiusRcp);
                _draw_555dc9e6.Uniform(17, radius);
                _draw_555dc9e6.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_555dc9e6.Uniform(19, 1.0f / smoothness);
                _draw_555dc9e6.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_555dc9e6.Uniform2(21, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_555dc9e6_20_2_16, EndVec_555dc9e6_20_3_17)));
                _draw_555dc9e6.Uniform2(22, StartVec_555dc9e6_20_2_16);
                _draw_555dc9e6.Uniform2(23, EndVec_555dc9e6_20_3_17);
                _draw_555dc9e6.Sampler3(24, DP_555dc9e6_14_8_4.Texture, DP_555dc9e6_14_8_4.SamplerState);
                _draw_555dc9e6.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_c97098cd_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, uPtr(visual)->ActualSize());
                _draw_c97098cd.BlendEnabled(true);
                _draw_c97098cd.DepthTestEnabled(false);
                _draw_c97098cd.CullFace(uPtr(dc)->CullFace());
                _draw_c97098cd.BlendSrcAlpha(7);
                _draw_c97098cd.BlendDstRgb(3);
                _draw_c97098cd.Const(0, DP_c97098cd_14_8_4.NeedFract);
                _draw_c97098cd.Const(1, DP_c97098cd_14_8_4.Texture == nullptr);
                _draw_c97098cd.Use();
                _draw_c97098cd.Attrib1(2, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_c97098cd.Uniform(3, radius + (extend * 2.0f));
                _draw_c97098cd.Uniform2(4, center);
                _draw_c97098cd.Uniform12(5, dc->GetLocalToClipTransform(visual));
                _draw_c97098cd.Uniform2(6, uPtr(visual)->ActualSize());
                _draw_c97098cd.Uniform2(7, DP_c97098cd_14_8_4.Origin);
                _draw_c97098cd.Uniform2(8, DP_c97098cd_14_8_4.Size);
                _draw_c97098cd.Uniform2(9, ::g::Uno::Float2__op_Subtraction2((ind25 = DP_c97098cd_14_8_4.UVClip, ::g::Uno::Float2__New2(ind25.Z, ind25.W)), (ind26 = DP_c97098cd_14_8_4.UVClip, ::g::Uno::Float2__New2(ind26.X, ind26.Y))));
                _draw_c97098cd.Uniform2(10, (ind27 = DP_c97098cd_14_8_4.UVClip, ::g::Uno::Float2__New2(ind27.X, ind27.Y)));
                _draw_c97098cd.Uniform2(11, DP_c97098cd_14_8_4.TexCoordScale1);
                _draw_c97098cd.Uniform2(12, DP_c97098cd_14_8_4.TexCoordBias1);
                _draw_c97098cd.Uniform2(13, DP_c97098cd_14_8_4.TexCoordScale2);
                _draw_c97098cd.Uniform2(14, DP_c97098cd_14_8_4.TexCoordBias2);
                _draw_c97098cd.Uniform10(15, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_c97098cd.Uniform(16, radiusRcp);
                _draw_c97098cd.Uniform(17, radius);
                _draw_c97098cd.Uniform(18, dc->ViewportPixelsPerPoint());
                _draw_c97098cd.Uniform(19, 1.0f / smoothness);
                _draw_c97098cd.Uniform(20, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_c97098cd.Sampler3(21, DP_c97098cd_14_8_4.Texture, DP_c97098cd_14_8_4.SamplerState);
                _draw_c97098cd.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_a432c5dd_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_a432c5dd_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_a432c5dd.BlendEnabled(true);
                _draw_a432c5dd.DepthTestEnabled(false);
                _draw_a432c5dd.CullFace(uPtr(dc)->CullFace());
                _draw_a432c5dd.BlendSrcAlpha(7);
                _draw_a432c5dd.BlendDstRgb(3);
                _draw_a432c5dd.Use();
                _draw_a432c5dd.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_a432c5dd.Uniform(1, radius + (extend * 2.0f));
                _draw_a432c5dd.Uniform2(2, center);
                _draw_a432c5dd.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_a432c5dd.Uniform(4, radiusRcp);
                _draw_a432c5dd.Uniform(5, radius);
                _draw_a432c5dd.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_a432c5dd.Uniform(7, 1.0f / smoothness);
                _draw_a432c5dd.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind28 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind28.X, ind28.Y, ind28.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_a432c5dd.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_a432c5dd.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_a432c5dd_20_2_7, EndVec_a432c5dd_20_3_8)));
                _draw_a432c5dd.Uniform2(11, StartVec_a432c5dd_20_2_7);
                _draw_a432c5dd.Uniform2(12, EndVec_a432c5dd_20_3_8);
                _draw_a432c5dd.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_a84aa311_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_a84aa311_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_a84aa311.BlendEnabled(true);
                _draw_a84aa311.DepthTestEnabled(false);
                _draw_a84aa311.CullFace(uPtr(dc)->CullFace());
                _draw_a84aa311.BlendSrcAlpha(7);
                _draw_a84aa311.BlendDstRgb(3);
                _draw_a84aa311.Use();
                _draw_a84aa311.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_a84aa311.Uniform(1, radius + (extend * 2.0f));
                _draw_a84aa311.Uniform2(2, center);
                _draw_a84aa311.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_a84aa311.Uniform(4, radiusRcp);
                _draw_a84aa311.Uniform(5, radius);
                _draw_a84aa311.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_a84aa311.Uniform(7, 1.0f / smoothness);
                _draw_a84aa311.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind29 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind29.X, ind29.Y, ind29.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_a84aa311.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_a84aa311.Uniform2(10, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_a84aa311_20_2_7, EndVec_a84aa311_20_3_8)));
                _draw_a84aa311.Uniform2(11, StartVec_a84aa311_20_2_7);
                _draw_a84aa311.Uniform2(12, EndVec_a84aa311_20_3_8);
                _draw_a84aa311.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_90f41f83.BlendEnabled(true);
                _draw_90f41f83.DepthTestEnabled(false);
                _draw_90f41f83.CullFace(uPtr(dc)->CullFace());
                _draw_90f41f83.BlendSrcAlpha(7);
                _draw_90f41f83.BlendDstRgb(3);
                _draw_90f41f83.Use();
                _draw_90f41f83.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_90f41f83.Uniform(1, radius + (extend * 2.0f));
                _draw_90f41f83.Uniform2(2, center);
                _draw_90f41f83.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_90f41f83.Uniform(4, radiusRcp);
                _draw_90f41f83.Uniform(5, radius);
                _draw_90f41f83.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_90f41f83.Uniform(7, 1.0f / smoothness);
                _draw_90f41f83.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind30 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind30.X, ind30.Y, ind30.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_90f41f83.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_90f41f83.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_ad3108e3_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_ad3108e3_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_ad3108e3_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_ad3108e3.BlendEnabled(true);
                _draw_ad3108e3.DepthTestEnabled(false);
                _draw_ad3108e3.CullFace(uPtr(dc)->CullFace());
                _draw_ad3108e3.BlendSrcAlpha(7);
                _draw_ad3108e3.BlendDstRgb(3);
                _draw_ad3108e3.Use();
                _draw_ad3108e3.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_ad3108e3.Uniform(1, radius + (extend * 2.0f));
                _draw_ad3108e3.Uniform2(2, center);
                _draw_ad3108e3.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_ad3108e3.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_ad3108e3.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_ad3108e3.Uniform(6, radiusRcp);
                _draw_ad3108e3.Uniform(7, radius);
                _draw_ad3108e3.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_ad3108e3.Uniform(9, 1.0f / smoothness);
                _draw_ad3108e3.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_ad3108e3.Uniform10(11, endPoints_ad3108e3_14_17_6);
                _draw_ad3108e3.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_ad3108e3_14_17_6.Z, endPoints_ad3108e3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_ad3108e3_14_17_6.X, endPoints_ad3108e3_14_17_6.Y))));
                _draw_ad3108e3.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_ad3108e3_14_17_6.Z, endPoints_ad3108e3_14_17_6.W), ::g::Uno::Float2__New2(endPoints_ad3108e3_14_17_6.X, endPoints_ad3108e3_14_17_6.Y))));
                _draw_ad3108e3.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_ad3108e3_20_2_14, EndVec_ad3108e3_20_3_15)));
                _draw_ad3108e3.Uniform2(15, StartVec_ad3108e3_20_2_14);
                _draw_ad3108e3.Uniform2(16, EndVec_ad3108e3_20_3_15);
                _draw_ad3108e3.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_ad3108e3.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_a9984188_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                ::g::Uno::Float2 StartVec_a9984188_20_2_14 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_a9984188_20_3_15 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_a9984188.BlendEnabled(true);
                _draw_a9984188.DepthTestEnabled(false);
                _draw_a9984188.CullFace(uPtr(dc)->CullFace());
                _draw_a9984188.BlendSrcAlpha(7);
                _draw_a9984188.BlendDstRgb(3);
                _draw_a9984188.Use();
                _draw_a9984188.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_a9984188.Uniform(1, radius + (extend * 2.0f));
                _draw_a9984188.Uniform2(2, center);
                _draw_a9984188.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_a9984188.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_a9984188.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_a9984188.Uniform(6, radiusRcp);
                _draw_a9984188.Uniform(7, radius);
                _draw_a9984188.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_a9984188.Uniform(9, 1.0f / smoothness);
                _draw_a9984188.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_a9984188.Uniform10(11, endPoints_a9984188_14_17_6);
                _draw_a9984188.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_a9984188_14_17_6.Z, endPoints_a9984188_14_17_6.W), ::g::Uno::Float2__New2(endPoints_a9984188_14_17_6.X, endPoints_a9984188_14_17_6.Y))));
                _draw_a9984188.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_a9984188_14_17_6.Z, endPoints_a9984188_14_17_6.W), ::g::Uno::Float2__New2(endPoints_a9984188_14_17_6.X, endPoints_a9984188_14_17_6.Y))));
                _draw_a9984188.Uniform2(14, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_a9984188_20_2_14, EndVec_a9984188_20_3_15)));
                _draw_a9984188.Uniform2(15, StartVec_a9984188_20_2_14);
                _draw_a9984188.Uniform2(16, EndVec_a9984188_20_3_15);
                _draw_a9984188.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_a9984188.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                ::g::Uno::Float4 endPoints_2c21c8ee_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(uPtr(visual)->ActualSize());
                _draw_2c21c8ee.BlendEnabled(true);
                _draw_2c21c8ee.DepthTestEnabled(false);
                _draw_2c21c8ee.CullFace(uPtr(dc)->CullFace());
                _draw_2c21c8ee.BlendSrcAlpha(7);
                _draw_2c21c8ee.BlendDstRgb(3);
                _draw_2c21c8ee.Use();
                _draw_2c21c8ee.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_2c21c8ee.Uniform(1, radius + (extend * 2.0f));
                _draw_2c21c8ee.Uniform2(2, center);
                _draw_2c21c8ee.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_2c21c8ee.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_2c21c8ee.Uniform2(5, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_2c21c8ee.Uniform(6, radiusRcp);
                _draw_2c21c8ee.Uniform(7, radius);
                _draw_2c21c8ee.Uniform(8, dc->ViewportPixelsPerPoint());
                _draw_2c21c8ee.Uniform(9, 1.0f / smoothness);
                _draw_2c21c8ee.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_2c21c8ee.Uniform10(11, endPoints_2c21c8ee_14_17_6);
                _draw_2c21c8ee.Uniform2(12, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_2c21c8ee_14_17_6.Z, endPoints_2c21c8ee_14_17_6.W), ::g::Uno::Float2__New2(endPoints_2c21c8ee_14_17_6.X, endPoints_2c21c8ee_14_17_6.Y))));
                _draw_2c21c8ee.Uniform(13, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_2c21c8ee_14_17_6.Z, endPoints_2c21c8ee_14_17_6.W), ::g::Uno::Float2__New2(endPoints_2c21c8ee_14_17_6.X, endPoints_2c21c8ee_14_17_6.Y))));
                _draw_2c21c8ee.Sampler3(14, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_2c21c8ee.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_4674c3a2_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_4674c3a2_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_4674c3a2.BlendEnabled(true);
                _draw_4674c3a2.DepthTestEnabled(false);
                _draw_4674c3a2.CullFace(uPtr(dc)->CullFace());
                _draw_4674c3a2.BlendSrcAlpha(7);
                _draw_4674c3a2.BlendDstRgb(3);
                _draw_4674c3a2.Use();
                _draw_4674c3a2.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_4674c3a2.Uniform(1, radius + (extend * 2.0f));
                _draw_4674c3a2.Uniform2(2, center);
                _draw_4674c3a2.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_4674c3a2.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_4674c3a2.Uniform2(5, (ind31 = visual->ActualSize(), ::g::Uno::Float2__New2(ind31.X, ind31.Y)));
                _draw_4674c3a2.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_4674c3a2.Uniform10(7, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_4674c3a2.Uniform(8, radiusRcp);
                _draw_4674c3a2.Uniform(9, radius);
                _draw_4674c3a2.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_4674c3a2.Uniform(11, 1.0f / smoothness);
                _draw_4674c3a2.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_4674c3a2.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_4674c3a2_20_2_12, EndVec_4674c3a2_20_3_13)));
                _draw_4674c3a2.Uniform2(14, StartVec_4674c3a2_20_2_12);
                _draw_4674c3a2.Uniform2(15, EndVec_4674c3a2_20_3_13);
                _draw_4674c3a2.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_1b821953_20_2_12 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1b821953_20_3_13 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_1b821953.BlendEnabled(true);
                _draw_1b821953.DepthTestEnabled(false);
                _draw_1b821953.CullFace(uPtr(dc)->CullFace());
                _draw_1b821953.BlendSrcAlpha(7);
                _draw_1b821953.BlendDstRgb(3);
                _draw_1b821953.Use();
                _draw_1b821953.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1b821953.Uniform(1, radius + (extend * 2.0f));
                _draw_1b821953.Uniform2(2, center);
                _draw_1b821953.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1b821953.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_1b821953.Uniform2(5, (ind32 = visual->ActualSize(), ::g::Uno::Float2__New2(ind32.X, ind32.Y)));
                _draw_1b821953.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_1b821953.Uniform10(7, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_1b821953.Uniform(8, radiusRcp);
                _draw_1b821953.Uniform(9, radius);
                _draw_1b821953.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_1b821953.Uniform(11, 1.0f / smoothness);
                _draw_1b821953.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_1b821953.Uniform2(13, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1b821953_20_2_12, EndVec_1b821953_20_3_13)));
                _draw_1b821953.Uniform2(14, StartVec_1b821953_20_2_12);
                _draw_1b821953.Uniform2(15, EndVec_1b821953_20_3_13);
                _draw_1b821953.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_b6fe1b5a.BlendEnabled(true);
                _draw_b6fe1b5a.DepthTestEnabled(false);
                _draw_b6fe1b5a.CullFace(uPtr(dc)->CullFace());
                _draw_b6fe1b5a.BlendSrcAlpha(7);
                _draw_b6fe1b5a.BlendDstRgb(3);
                _draw_b6fe1b5a.Use();
                _draw_b6fe1b5a.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_b6fe1b5a.Uniform(1, radius + (extend * 2.0f));
                _draw_b6fe1b5a.Uniform2(2, center);
                _draw_b6fe1b5a.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_b6fe1b5a.Uniform2(4, uPtr(visual)->ActualSize());
                _draw_b6fe1b5a.Uniform2(5, (ind33 = visual->ActualSize(), ::g::Uno::Float2__New2(ind33.X, ind33.Y)));
                _draw_b6fe1b5a.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_b6fe1b5a.Uniform10(7, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_b6fe1b5a.Uniform(8, radiusRcp);
                _draw_b6fe1b5a.Uniform(9, radius);
                _draw_b6fe1b5a.Uniform(10, dc->ViewportPixelsPerPoint());
                _draw_b6fe1b5a.Uniform(11, 1.0f / smoothness);
                _draw_b6fe1b5a.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_b6fe1b5a.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_1ad92463_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_1ad92463_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage*>(limit, ::TYPES[2/*Fuse.Drawing.Primitives.ConcaveWedgeCoverage*/]))->EndAngle));
                _draw_1ad92463.BlendEnabled(true);
                _draw_1ad92463.DepthTestEnabled(false);
                _draw_1ad92463.CullFace(uPtr(dc)->CullFace());
                _draw_1ad92463.BlendSrcAlpha(7);
                _draw_1ad92463.BlendDstRgb(3);
                _draw_1ad92463.Use();
                _draw_1ad92463.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_1ad92463.Uniform(1, radius + (extend * 2.0f));
                _draw_1ad92463.Uniform2(2, center);
                _draw_1ad92463.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_1ad92463.Uniform(4, radiusRcp);
                _draw_1ad92463.Uniform(5, radius);
                _draw_1ad92463.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_1ad92463.Uniform(7, 1.0f / smoothness);
                _draw_1ad92463.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind34 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind34.X, ind34.Y, ind34.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_1ad92463.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_1ad92463_20_2_7, EndVec_1ad92463_20_3_8)));
                _draw_1ad92463.Uniform2(10, StartVec_1ad92463_20_2_7);
                _draw_1ad92463.Uniform2(11, EndVec_1ad92463_20_3_8);
                _draw_1ad92463.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))
            {
                ::g::Uno::Float2 StartVec_2269edd_20_2_7 = ::g::Uno::Float2__New2(::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle), -::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->StartAngle));
                ::g::Uno::Float2 EndVec_2269edd_20_3_8 = ::g::Uno::Float2__New2(-::g::Uno::Math::Sin1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle), ::g::Uno::Math::Cos1(uPtr(uAs< ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage*>(limit, ::TYPES[3/*Fuse.Drawing.Primitives.ConvexWedgeCoverage*/]))->EndAngle));
                _draw_2269edd.BlendEnabled(true);
                _draw_2269edd.DepthTestEnabled(false);
                _draw_2269edd.CullFace(uPtr(dc)->CullFace());
                _draw_2269edd.BlendSrcAlpha(7);
                _draw_2269edd.BlendDstRgb(3);
                _draw_2269edd.Use();
                _draw_2269edd.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_2269edd.Uniform(1, radius + (extend * 2.0f));
                _draw_2269edd.Uniform2(2, center);
                _draw_2269edd.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_2269edd.Uniform(4, radiusRcp);
                _draw_2269edd.Uniform(5, radius);
                _draw_2269edd.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_2269edd.Uniform(7, 1.0f / smoothness);
                _draw_2269edd.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind35 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind35.X, ind35.Y, ind35.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_2269edd.Uniform2(9, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Addition2(StartVec_2269edd_20_2_7, EndVec_2269edd_20_3_8)));
                _draw_2269edd.Uniform2(10, StartVec_2269edd_20_2_7);
                _draw_2269edd.Uniform2(11, EndVec_2269edd_20_3_8);
                _draw_2269edd.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
            else if (uIs(limit, ::TYPES[4/*Fuse.Drawing.Primitives.OneLimitCoverage*/]))
            {
                _draw_98fd3aaa.BlendEnabled(true);
                _draw_98fd3aaa.DepthTestEnabled(false);
                _draw_98fd3aaa.CullFace(uPtr(dc)->CullFace());
                _draw_98fd3aaa.BlendSrcAlpha(7);
                _draw_98fd3aaa.BlendDstRgb(3);
                _draw_98fd3aaa.Use();
                _draw_98fd3aaa.Attrib1(0, 2, uPtr(_bufferVertex)->GetDeviceVertex(), 8, 0);
                _draw_98fd3aaa.Uniform(1, radius + (extend * 2.0f));
                _draw_98fd3aaa.Uniform2(2, center);
                _draw_98fd3aaa.Uniform12(3, dc->GetLocalToClipTransform(visual));
                _draw_98fd3aaa.Uniform(4, radiusRcp);
                _draw_98fd3aaa.Uniform(5, radius);
                _draw_98fd3aaa.Uniform(6, dc->ViewportPixelsPerPoint());
                _draw_98fd3aaa.Uniform(7, 1.0f / smoothness);
                _draw_98fd3aaa.Uniform10(8, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind36 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind36.X, ind36.Y, ind36.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_98fd3aaa.Draw(uPtr(_bufferIndex)->Count(), 2, uPtr(_bufferIndex)->GetDeviceIndex());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Brush brush, float2 center, float smoothness) [instance]
void Circle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float smoothness)
{
    Draw(dc, visual, radius, brush, _fillCoverage, _oneLimitCoverage, smoothness, center, smoothness);
}

// private generated void init_DrawCalls() [instance]
void Circle::init_DrawCalls()
{
    _draw_2a7897af = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle6fa31eb0());
    _draw_381877d6 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled03fdf74());
    _draw_c049787e = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle08faad29());
    _draw_b10a9dbb = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle2ad0f86f());
    _draw_93267da2 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle14c4da1d());
    _draw_22061cc2 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlebe0c57c7());
    _draw_25966248 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle749c4263());
    _draw_648c56fb = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle5116898d());
    _draw_25ed247a = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlef89e5004());
    _draw_7a46b9d6 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle6f96fc09());
    _draw_797b524 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle0756ecfb());
    _draw_edd754f9 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle91d9beaf());
    _draw_bd227c38 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee0319d48());
    _draw_4ca5964d = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleb95e9034());
    _draw_69509efb = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle9dea10a3());
    _draw_bf2e9fa1 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circledfe84c53());
    _draw_555dc9e6 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlecd64a2fe());
    _draw_c97098cd = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circledc12e66f());
    _draw_a432c5dd = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle4eb54f01());
    _draw_a84aa311 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle11a7e996());
    _draw_90f41f83 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circleed7a4684());
    _draw_ad3108e3 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle5c7bf5c2());
    _draw_a9984188 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle3cc69ea6());
    _draw_2c21c8ee = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle7e8f9c01());
    _draw_4674c3a2 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle731c9041());
    _draw_1b821953 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle9ba5ce77());
    _draw_b6fe1b5a = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle4f17d172());
    _draw_1ad92463 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circle240d45f6());
    _draw_2269edd = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circlee17e57be());
    _draw_98fd3aaa = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Circled0cee2fd());
}

// private void InitBuffers() [instance]
void Circle::InitBuffers()
{
    _bufferVertex = ::g::Fuse::Drawing::Internal::Float2Buffer::New3();
    _bufferIndex = ::g::Fuse::Drawing::Internal::UShortBuffer::New3();
    int32_t numSegments = 16;
    float theta = 1.57079637f - (6.28318548f / (float)numSegments);
    float len = 1.0f / ::g::Uno::Math::Sin1(theta);
    uPtr(_bufferVertex)->Append(0.0, 0.0);

    for (int32_t i = 0; i < numSegments; ++i)
    {
        float r = (((float)i / (float)numSegments) * 3.14159274f) * 2.0f;
        uPtr(_bufferVertex)->Append((double)(::g::Uno::Math::Cos1(r) * len), (double)(::g::Uno::Math::Sin1(r) * len));
        uPtr(_bufferIndex)->Append(0);
        uPtr(_bufferIndex)->Append((i == (numSegments - 1)) ? 1 : i + 2);
        uPtr(_bufferIndex)->Append(i + 1);
    }

    uPtr(_bufferVertex)->InitDeviceVertex(0);
    uPtr(_bufferIndex)->InitDeviceIndex(0);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element visual, float radius, Fuse.Drawing.Stroke stroke, float2 center, float smoothness) [instance]
void Circle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* visual, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    Draw(dc, visual, radius, stroke->Brush(), sc, _oneLimitCoverage, extend, center, smoothness);
}

// public generated Circle New() [static]
Circle* Circle::New1()
{
    Circle* obj37 = (Circle*)uNew(Circle_typeof());
    obj37->ctor_();
    return obj37;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Wedge.uno
// -------------------------------------------------------------------------

// internal sealed class ConcaveWedgeCoverage
// {
static void ConcaveWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConcaveWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConcaveWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConcaveWedgeCoverage", options);
    type->fp_build_ = ConcaveWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConcaveWedgeCoverage__New1_fn;
    return type;
}

// public generated ConcaveWedgeCoverage()
void ConcaveWedgeCoverage__ctor_2_fn(ConcaveWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConcaveWedgeCoverage New()
void ConcaveWedgeCoverage__New1_fn(ConcaveWedgeCoverage** __retval)
{
    *__retval = ConcaveWedgeCoverage::New1();
}

// public generated ConcaveWedgeCoverage() [instance]
void ConcaveWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConcaveWedgeCoverage New() [static]
ConcaveWedgeCoverage* ConcaveWedgeCoverage::New1()
{
    ConcaveWedgeCoverage* obj1 = (ConcaveWedgeCoverage*)uNew(ConcaveWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Wedge.uno
// -------------------------------------------------------------------------

// internal sealed class ConvexWedgeCoverage
// {
static void ConvexWedgeCoverage_build(uType* type)
{
    type->SetFields(2);
}

uType* ConvexWedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::WedgeCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ConvexWedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ConvexWedgeCoverage", options);
    type->fp_build_ = ConvexWedgeCoverage_build;
    type->fp_ctor_ = (void*)ConvexWedgeCoverage__New1_fn;
    return type;
}

// public generated ConvexWedgeCoverage()
void ConvexWedgeCoverage__ctor_2_fn(ConvexWedgeCoverage* __this)
{
    __this->ctor_2();
}

// public generated ConvexWedgeCoverage New()
void ConvexWedgeCoverage__New1_fn(ConvexWedgeCoverage** __retval)
{
    *__retval = ConvexWedgeCoverage::New1();
}

// public generated ConvexWedgeCoverage() [instance]
void ConvexWedgeCoverage::ctor_2()
{
    ctor_1();
}

// public generated ConvexWedgeCoverage New() [static]
ConvexWedgeCoverage* ConvexWedgeCoverage::New1()
{
    ConvexWedgeCoverage* obj1 = (ConvexWedgeCoverage*)uNew(ConvexWedgeCoverage_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Rectangle.uno
// -----------------------------------------------------------------------------

// internal abstract class Coverage
// {
static void Coverage_build(uType* type)
{
}

uType* Coverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Coverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Coverage", options);
    type->fp_build_ = Coverage_build;
    return type;
}

// protected generated Coverage()
void Coverage__ctor__fn(Coverage* __this)
{
    __this->ctor_();
}

// protected generated Coverage() [instance]
void Coverage::ctor_()
{
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Rectangle.uno
// -----------------------------------------------------------------------------

// internal class Falloff
// {
static void Falloff_build(uType* type)
{
}

uType* Falloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Falloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Falloff", options);
    type->fp_build_ = Falloff_build;
    type->fp_ctor_ = (void*)Falloff__New1_fn;
    return type;
}

// public generated Falloff()
void Falloff__ctor__fn(Falloff* __this)
{
    __this->ctor_();
}

// public generated Falloff New()
void Falloff__New1_fn(Falloff** __retval)
{
    *__retval = Falloff::New1();
}

// public generated Falloff() [instance]
void Falloff::ctor_()
{
}

// public generated Falloff New() [static]
Falloff* Falloff::New1()
{
    Falloff* obj1 = (Falloff*)uNew(Falloff_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Rectangle.uno
// -----------------------------------------------------------------------------

// internal sealed class FillCoverage
// {
static void FillCoverage_build(uType* type)
{
}

uType* FillCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.ObjectSize = sizeof(FillCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.FillCoverage", options);
    type->fp_build_ = FillCoverage_build;
    type->fp_ctor_ = (void*)FillCoverage__New1_fn;
    return type;
}

// public generated FillCoverage()
void FillCoverage__ctor_1_fn(FillCoverage* __this)
{
    __this->ctor_1();
}

// public generated FillCoverage New()
void FillCoverage__New1_fn(FillCoverage** __retval)
{
    *__retval = FillCoverage::New1();
}

// public generated FillCoverage() [instance]
void FillCoverage::ctor_1()
{
    ctor_();
}

// public generated FillCoverage New() [static]
FillCoverage* FillCoverage::New1()
{
    FillCoverage* obj1 = (FillCoverage*)uNew(FillCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Circle.uno
// --------------------------------------------------------------------------

// internal abstract class LimitCoverage
// {
static void LimitCoverage_build(uType* type)
{
}

uType* LimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(LimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.LimitCoverage", options);
    type->fp_build_ = LimitCoverage_build;
    return type;
}

// protected generated LimitCoverage()
void LimitCoverage__ctor__fn(LimitCoverage* __this)
{
    __this->ctor_();
}

// protected generated LimitCoverage() [instance]
void LimitCoverage::ctor_()
{
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Circle.uno
// --------------------------------------------------------------------------

// internal sealed class OneLimitCoverage
// {
static void OneLimitCoverage_build(uType* type)
{
}

uType* OneLimitCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.ObjectSize = sizeof(OneLimitCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.OneLimitCoverage", options);
    type->fp_build_ = OneLimitCoverage_build;
    type->fp_ctor_ = (void*)OneLimitCoverage__New1_fn;
    return type;
}

// public generated OneLimitCoverage()
void OneLimitCoverage__ctor_1_fn(OneLimitCoverage* __this)
{
    __this->ctor_1();
}

// public generated OneLimitCoverage New()
void OneLimitCoverage__New1_fn(OneLimitCoverage** __retval)
{
    *__retval = OneLimitCoverage::New1();
}

// public generated OneLimitCoverage() [instance]
void OneLimitCoverage::ctor_1()
{
    ctor_();
}

// public generated OneLimitCoverage New() [static]
OneLimitCoverage* OneLimitCoverage::New1()
{
    OneLimitCoverage* obj1 = (OneLimitCoverage*)uNew(OneLimitCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Rectangle.uno
// -----------------------------------------------------------------------------

// public sealed class Rectangle
// {
// static generated Rectangle()
static void Rectangle__cctor__fn(uType* __type)
{
    Rectangle::Singleton_ = Rectangle::New1();
}

static void Rectangle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("more than two non-zero values!");
    ::TYPES[10] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[11] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[0] = ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof();
    ::TYPES[1] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[12] = ::g::Fuse::Drawing::Primitives::ShadowFalloff_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[6] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::DashedColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::Primitives::FillCoverage_typeof();
    ::TYPES[13] = ::TYPES[10/*float[]*/]->Array();
    ::TYPES[14] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[15] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[16] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::FuseDrawingPrimitives_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/], offsetof(Rectangle, _strokeCoverage), 0,
        ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/], offsetof(Rectangle, _fillCoverage), 0,
        ::g::Fuse::Drawing::Primitives::Falloff_typeof(), offsetof(Rectangle, _shadowFalloff), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _vertexInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(Rectangle, _edgeInfo), 0,
        ::g::Fuse::Drawing::Internal::FloatBuffer_typeof(), offsetof(Rectangle, _bufferDistance), 0,
        ::TYPES[10/*float[]*/], offsetof(Rectangle, _uniforms), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_8ea59fa1), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_756a815), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_db3963ea), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_46d298b5), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_ececdec4), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e1fb4228), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_9f25b31c), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_e693f66d), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_4d5db26e), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_6cd3942d), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_7b8cd5b0), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_1a35325e), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_1b41176d), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_c086d1a2), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_778362f8), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_d788ec00), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_2935d8a1), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_9205091c), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_4a509b68), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Rectangle, _draw_bff5c1da), 0,
        type, (uintptr_t)&Rectangle::Singleton_, uFieldFlagsStatic);
}

uType* Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 28;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Rectangle", options);
    type->fp_build_ = Rectangle_build;
    type->fp_ctor_ = (void*)Rectangle__New1_fn;
    type->fp_cctor_ = Rectangle__cctor__fn;
    return type;
}

// public generated Rectangle()
void Rectangle__ctor__fn(Rectangle* __this)
{
    __this->ctor_();
}

// private float[] add(float[] a, float[] b)
void Rectangle__add_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->add(a, b);
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff])
void Rectangle__Draw_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2* extend, ::g::Uno::Float2* position, float* smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    __this->Draw(dc, visual, *Size, *CornerRadius, brush, cover, *extend, *position, *smoothness, falloff);
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness])
void Rectangle__Fill_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Fill(dc, visual, *Size, *CornerRadius, brush, *Position, *Smoothness);
}

// private generated void init_DrawCalls()
void Rectangle__init_DrawCalls_fn(Rectangle* __this)
{
    __this->init_DrawCalls();
}

// private void InitBuffers()
void Rectangle__InitBuffers_fn(Rectangle* __this)
{
    __this->InitBuffers();
}

// private float[] neg(float[] a)
void Rectangle__neg_fn(Rectangle* __this, uArray* a, uArray** __retval)
{
    *__retval = __this->neg(a);
}

// public generated Rectangle New()
void Rectangle__New1_fn(Rectangle** __retval)
{
    *__retval = Rectangle::New1();
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness])
void Rectangle__Stroke_fn(Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2* Size, ::g::Uno::Float4* CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* Position, float* Smoothness)
{
    __this->Stroke(dc, visual, *Size, *CornerRadius, stroke, *Position, *Smoothness);
}

// private float[] sub(float[] a, float[] b)
void Rectangle__sub_fn(Rectangle* __this, uArray* a, uArray* b, uArray** __retval)
{
    *__retval = __this->sub(a, b);
}

uSStrong<Rectangle*> Rectangle::Singleton_;

// public generated Rectangle() [instance]
void Rectangle::ctor_()
{
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
    _shadowFalloff = ::g::Fuse::Drawing::Primitives::ShadowFalloff::New2();
    _uniforms = uArray::New(::TYPES[10/*float[]*/], 10);
    init_DrawCalls();
}

// private float[] add(float[] a, float[] b) [instance]
uArray* Rectangle::add(uArray* a, uArray* b)
{
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) + uPtr(b)->Item<float>(i);

    return r;
}

// private void Draw(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, Fuse.Drawing.Primitives.Coverage cover, float2 extend, float2 position, float smoothness, [Fuse.Drawing.Primitives.Falloff falloff]) [instance]
void Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Fuse::Drawing::Primitives::Coverage* cover, ::g::Uno::Float2 extend, ::g::Uno::Float2 position, float smoothness, ::g::Fuse::Drawing::Primitives::Falloff* falloff)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float4 ind5;
    ::g::Uno::Float4 ind6;
    ::g::Uno::Float4 ind7;
    ::g::Uno::Float4 ind8;
    ::g::Uno::Float4 ind9;
    ::g::Uno::Float4 ind10;
    ::g::Uno::Float4 ind11;
    ::g::Uno::Float4 ind12;
    ::g::Uno::Float4 ind13;
    ::g::Uno::Float4 ind14;
    ::g::Uno::Float4 ind15;
    ::g::Uno::Float4 ind16;
    ::g::Uno::Float4 ind17;
    ::g::Uno::Float4 ind18;
    ::g::Uno::Float4 ind19;
    ::g::Uno::Float4 ind20;

    if (_bufferDistance == nullptr)
        InitBuffers();

    float mn = ::g::Uno::Math::Min1(Size.X / 2.0f, Size.Y / 2.0f);

    for (int32_t i = 0; i < 4; ++i)
        CornerRadius.Item(i, ::g::Uno::Math::Clamp1(CornerRadius.Item(i), 0.0f, mn));

    uPtr(_uniforms)->Item<float>(0) = 0.0f;
    uPtr(_uniforms)->Item<float>(1) = CornerRadius.Item(3);
    uPtr(_uniforms)->Item<float>(2) = CornerRadius.Item(2);
    uPtr(_uniforms)->Item<float>(3) = CornerRadius.Item(1);
    uPtr(_uniforms)->Item<float>(4) = CornerRadius.Item(0);
    uPtr(_uniforms)->Item<float>(5) = Size.X;
    uPtr(_uniforms)->Item<float>(6) = Size.Y;
    uPtr(_uniforms)->Item<float>(7) = extend.X;
    uPtr(_uniforms)->Item<float>(8) = extend.Y;
    uPtr(_uniforms)->Item<float>(9) = mn;
    float float16MaxValue = 65504.0f;
    float distanceScale = ::g::Uno::Math::Max1(1.0f, ::g::Uno::Math::Max1(Size.X + extend.X, Size.Y + extend.Y) / ::g::Uno::Math::Sqrt1(float16MaxValue * 0.5f));
    distanceScale = ::g::Uno::Math::Exp22(::g::Uno::Math::Ceil1(::g::Uno::Math::Log22(distanceScale)));
    float distanceScaleRcp = 1.0f / distanceScale;
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(visual, ::TYPES[11/*Fuse.Elements.Element*/]);
    ::g::Uno::Float2 csz = (elm == nullptr) ? ::g::Uno::Float2__New1(1.0f) : uPtr(elm)->ActualSize();

    if (uIs(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_8ea59fa1_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_8ea59fa1.BlendEnabled(true);
                _draw_8ea59fa1.DepthTestEnabled(false);
                _draw_8ea59fa1.CullFace(uPtr(dc)->CullFace());
                _draw_8ea59fa1.BlendSrcAlpha(7);
                _draw_8ea59fa1.BlendDstRgb(3);
                _draw_8ea59fa1.Const1(0, uPtr(_uniforms)->Length());
                _draw_8ea59fa1.Const(1, DP_8ea59fa1_14_8_4.NeedFract);
                _draw_8ea59fa1.Const(2, DP_8ea59fa1_14_8_4.Texture == nullptr);
                _draw_8ea59fa1.Use();
                _draw_8ea59fa1.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_8ea59fa1.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_8ea59fa1.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_8ea59fa1.Uniform1(6, _uniforms);
                _draw_8ea59fa1.Uniform2(7, position);
                _draw_8ea59fa1.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_8ea59fa1.Uniform2(9, csz);
                _draw_8ea59fa1.Uniform2(10, DP_8ea59fa1_14_8_4.Origin);
                _draw_8ea59fa1.Uniform2(11, DP_8ea59fa1_14_8_4.Size);
                _draw_8ea59fa1.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_8ea59fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_8ea59fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
                _draw_8ea59fa1.Uniform2(13, (ind3 = DP_8ea59fa1_14_8_4.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
                _draw_8ea59fa1.Uniform2(14, DP_8ea59fa1_14_8_4.TexCoordScale1);
                _draw_8ea59fa1.Uniform2(15, DP_8ea59fa1_14_8_4.TexCoordBias1);
                _draw_8ea59fa1.Uniform2(16, DP_8ea59fa1_14_8_4.TexCoordScale2);
                _draw_8ea59fa1.Uniform2(17, DP_8ea59fa1_14_8_4.TexCoordBias2);
                _draw_8ea59fa1.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_8ea59fa1.Uniform(19, distanceScaleRcp);
                _draw_8ea59fa1.Uniform(20, distanceScale);
                _draw_8ea59fa1.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_8ea59fa1.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_8ea59fa1.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_8ea59fa1.Uniform(24, 1.0f / smoothness);
                _draw_8ea59fa1.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_8ea59fa1.Sampler3(26, DP_8ea59fa1_14_8_4.Texture, DP_8ea59fa1_14_8_4.SamplerState);
                _draw_8ea59fa1.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_756a815_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_756a815.BlendEnabled(true);
                _draw_756a815.DepthTestEnabled(false);
                _draw_756a815.CullFace(uPtr(dc)->CullFace());
                _draw_756a815.BlendSrcAlpha(7);
                _draw_756a815.BlendDstRgb(3);
                _draw_756a815.Const1(0, uPtr(_uniforms)->Length());
                _draw_756a815.Const(1, DP_756a815_14_8_4.NeedFract);
                _draw_756a815.Const(2, DP_756a815_14_8_4.Texture == nullptr);
                _draw_756a815.Use();
                _draw_756a815.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_756a815.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_756a815.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_756a815.Uniform1(6, _uniforms);
                _draw_756a815.Uniform2(7, position);
                _draw_756a815.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_756a815.Uniform2(9, csz);
                _draw_756a815.Uniform2(10, DP_756a815_14_8_4.Origin);
                _draw_756a815.Uniform2(11, DP_756a815_14_8_4.Size);
                _draw_756a815.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind4 = DP_756a815_14_8_4.UVClip, ::g::Uno::Float2__New2(ind4.Z, ind4.W)), (ind5 = DP_756a815_14_8_4.UVClip, ::g::Uno::Float2__New2(ind5.X, ind5.Y))));
                _draw_756a815.Uniform2(13, (ind6 = DP_756a815_14_8_4.UVClip, ::g::Uno::Float2__New2(ind6.X, ind6.Y)));
                _draw_756a815.Uniform2(14, DP_756a815_14_8_4.TexCoordScale1);
                _draw_756a815.Uniform2(15, DP_756a815_14_8_4.TexCoordBias1);
                _draw_756a815.Uniform2(16, DP_756a815_14_8_4.TexCoordScale2);
                _draw_756a815.Uniform2(17, DP_756a815_14_8_4.TexCoordBias2);
                _draw_756a815.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_756a815.Uniform(19, distanceScaleRcp);
                _draw_756a815.Uniform(20, distanceScale);
                _draw_756a815.Uniform(21, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_756a815.Uniform(22, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_756a815.Uniform(23, dc->ViewportPixelsPerPoint());
                _draw_756a815.Uniform(24, 1.0f / smoothness);
                _draw_756a815.Uniform(25, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_756a815.Sampler3(26, DP_756a815_14_8_4.Texture, DP_756a815_14_8_4.SamplerState);
                _draw_756a815.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_db3963ea.BlendEnabled(true);
                _draw_db3963ea.DepthTestEnabled(false);
                _draw_db3963ea.CullFace(uPtr(dc)->CullFace());
                _draw_db3963ea.BlendSrcAlpha(7);
                _draw_db3963ea.BlendDstRgb(3);
                _draw_db3963ea.Const1(0, uPtr(_uniforms)->Length());
                _draw_db3963ea.Use();
                _draw_db3963ea.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_db3963ea.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_db3963ea.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_db3963ea.Uniform1(4, _uniforms);
                _draw_db3963ea.Uniform2(5, position);
                _draw_db3963ea.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_db3963ea.Uniform(7, distanceScaleRcp);
                _draw_db3963ea.Uniform(8, distanceScale);
                _draw_db3963ea.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_db3963ea.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_db3963ea.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_db3963ea.Uniform(12, 1.0f / smoothness);
                _draw_db3963ea.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind7 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind7.X, ind7.Y, ind7.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_db3963ea.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_db3963ea.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_46d298b5.BlendEnabled(true);
                _draw_46d298b5.DepthTestEnabled(false);
                _draw_46d298b5.CullFace(uPtr(dc)->CullFace());
                _draw_46d298b5.BlendSrcAlpha(7);
                _draw_46d298b5.BlendDstRgb(3);
                _draw_46d298b5.Const1(0, uPtr(_uniforms)->Length());
                _draw_46d298b5.Use();
                _draw_46d298b5.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_46d298b5.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_46d298b5.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_46d298b5.Uniform1(4, _uniforms);
                _draw_46d298b5.Uniform2(5, position);
                _draw_46d298b5.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_46d298b5.Uniform(7, distanceScaleRcp);
                _draw_46d298b5.Uniform(8, distanceScale);
                _draw_46d298b5.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_46d298b5.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_46d298b5.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_46d298b5.Uniform(12, 1.0f / smoothness);
                _draw_46d298b5.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind8 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind8.X, ind8.Y, ind8.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_46d298b5.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_46d298b5.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_ececdec4_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_ececdec4.BlendEnabled(true);
                _draw_ececdec4.DepthTestEnabled(false);
                _draw_ececdec4.CullFace(uPtr(dc)->CullFace());
                _draw_ececdec4.BlendSrcAlpha(7);
                _draw_ececdec4.BlendDstRgb(3);
                _draw_ececdec4.Const1(0, uPtr(_uniforms)->Length());
                _draw_ececdec4.Use();
                _draw_ececdec4.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_ececdec4.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_ececdec4.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_ececdec4.Uniform1(4, _uniforms);
                _draw_ececdec4.Uniform2(5, position);
                _draw_ececdec4.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_ececdec4.Uniform2(7, csz);
                _draw_ececdec4.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_ececdec4.Uniform(9, distanceScaleRcp);
                _draw_ececdec4.Uniform(10, distanceScale);
                _draw_ececdec4.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_ececdec4.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_ececdec4.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_ececdec4.Uniform(14, 1.0f / smoothness);
                _draw_ececdec4.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_ececdec4.Uniform10(16, endPoints_ececdec4_14_17_6);
                _draw_ececdec4.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.Z, endPoints_ececdec4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.X, endPoints_ececdec4_14_17_6.Y))));
                _draw_ececdec4.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.Z, endPoints_ececdec4_14_17_6.W), ::g::Uno::Float2__New2(endPoints_ececdec4_14_17_6.X, endPoints_ececdec4_14_17_6.Y))));
                _draw_ececdec4.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_ececdec4.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_e1fb4228_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_e1fb4228.BlendEnabled(true);
                _draw_e1fb4228.DepthTestEnabled(false);
                _draw_e1fb4228.CullFace(uPtr(dc)->CullFace());
                _draw_e1fb4228.BlendSrcAlpha(7);
                _draw_e1fb4228.BlendDstRgb(3);
                _draw_e1fb4228.Const1(0, uPtr(_uniforms)->Length());
                _draw_e1fb4228.Use();
                _draw_e1fb4228.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e1fb4228.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e1fb4228.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e1fb4228.Uniform1(4, _uniforms);
                _draw_e1fb4228.Uniform2(5, position);
                _draw_e1fb4228.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e1fb4228.Uniform2(7, csz);
                _draw_e1fb4228.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_e1fb4228.Uniform(9, distanceScaleRcp);
                _draw_e1fb4228.Uniform(10, distanceScale);
                _draw_e1fb4228.Uniform(11, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e1fb4228.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e1fb4228.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_e1fb4228.Uniform(14, 1.0f / smoothness);
                _draw_e1fb4228.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_e1fb4228.Uniform10(16, endPoints_e1fb4228_14_17_6);
                _draw_e1fb4228.Uniform2(17, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.Z, endPoints_e1fb4228_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.X, endPoints_e1fb4228_14_17_6.Y))));
                _draw_e1fb4228.Uniform(18, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.Z, endPoints_e1fb4228_14_17_6.W), ::g::Uno::Float2__New2(endPoints_e1fb4228_14_17_6.X, endPoints_e1fb4228_14_17_6.Y))));
                _draw_e1fb4228.Sampler3(19, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_e1fb4228.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_9f25b31c.BlendEnabled(true);
                _draw_9f25b31c.DepthTestEnabled(false);
                _draw_9f25b31c.CullFace(uPtr(dc)->CullFace());
                _draw_9f25b31c.BlendSrcAlpha(7);
                _draw_9f25b31c.BlendDstRgb(3);
                _draw_9f25b31c.Const1(0, uPtr(_uniforms)->Length());
                _draw_9f25b31c.Use();
                _draw_9f25b31c.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_9f25b31c.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_9f25b31c.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_9f25b31c.Uniform1(4, _uniforms);
                _draw_9f25b31c.Uniform2(5, position);
                _draw_9f25b31c.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_9f25b31c.Uniform2(7, csz);
                _draw_9f25b31c.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_9f25b31c.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_9f25b31c.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_9f25b31c.Uniform(11, distanceScaleRcp);
                _draw_9f25b31c.Uniform(12, distanceScale);
                _draw_9f25b31c.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_9f25b31c.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_9f25b31c.Uniform(15, dc->ViewportPixelsPerPoint());
                _draw_9f25b31c.Uniform(16, 1.0f / smoothness);
                _draw_9f25b31c.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_9f25b31c.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_e693f66d.BlendEnabled(true);
                _draw_e693f66d.DepthTestEnabled(false);
                _draw_e693f66d.CullFace(uPtr(dc)->CullFace());
                _draw_e693f66d.BlendSrcAlpha(7);
                _draw_e693f66d.BlendDstRgb(3);
                _draw_e693f66d.Const1(0, uPtr(_uniforms)->Length());
                _draw_e693f66d.Use();
                _draw_e693f66d.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_e693f66d.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_e693f66d.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_e693f66d.Uniform1(4, _uniforms);
                _draw_e693f66d.Uniform2(5, position);
                _draw_e693f66d.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_e693f66d.Uniform2(7, csz);
                _draw_e693f66d.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_e693f66d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_e693f66d.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_e693f66d.Uniform(11, distanceScaleRcp);
                _draw_e693f66d.Uniform(12, distanceScale);
                _draw_e693f66d.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_e693f66d.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_e693f66d.Uniform(15, dc->ViewportPixelsPerPoint());
                _draw_e693f66d.Uniform(16, 1.0f / smoothness);
                _draw_e693f66d.Uniform(17, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_e693f66d.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_4d5db26e.BlendEnabled(true);
                _draw_4d5db26e.DepthTestEnabled(false);
                _draw_4d5db26e.CullFace(uPtr(dc)->CullFace());
                _draw_4d5db26e.BlendSrcAlpha(7);
                _draw_4d5db26e.BlendDstRgb(3);
                _draw_4d5db26e.Const1(0, uPtr(_uniforms)->Length());
                _draw_4d5db26e.Use();
                _draw_4d5db26e.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_4d5db26e.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_4d5db26e.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_4d5db26e.Uniform1(4, _uniforms);
                _draw_4d5db26e.Uniform2(5, position);
                _draw_4d5db26e.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_4d5db26e.Uniform(7, distanceScaleRcp);
                _draw_4d5db26e.Uniform(8, distanceScale);
                _draw_4d5db26e.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_4d5db26e.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_4d5db26e.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_4d5db26e.Uniform(12, 1.0f / smoothness);
                _draw_4d5db26e.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind9 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind9.X, ind9.Y, ind9.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_4d5db26e.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_6cd3942d.BlendEnabled(true);
                _draw_6cd3942d.DepthTestEnabled(false);
                _draw_6cd3942d.CullFace(uPtr(dc)->CullFace());
                _draw_6cd3942d.BlendSrcAlpha(7);
                _draw_6cd3942d.BlendDstRgb(3);
                _draw_6cd3942d.Const1(0, uPtr(_uniforms)->Length());
                _draw_6cd3942d.Use();
                _draw_6cd3942d.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_6cd3942d.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_6cd3942d.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_6cd3942d.Uniform1(4, _uniforms);
                _draw_6cd3942d.Uniform2(5, position);
                _draw_6cd3942d.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_6cd3942d.Uniform(7, distanceScaleRcp);
                _draw_6cd3942d.Uniform(8, distanceScale);
                _draw_6cd3942d.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Center);
                _draw_6cd3942d.Uniform(10, uPtr(uAs< ::g::Fuse::Drawing::Primitives::StrokeCoverage*>(cover, ::TYPES[0/*Fuse.Drawing.Primitives.StrokeCoverage*/]))->Radius);
                _draw_6cd3942d.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_6cd3942d.Uniform(12, 1.0f / smoothness);
                _draw_6cd3942d.Uniform10(13, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind10 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind10.X, ind10.Y, ind10.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_6cd3942d.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
    else if (uIs(cover, ::TYPES[9/*Fuse.Drawing.Primitives.FillCoverage*/]))
    {
        if (uIs(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_7b8cd5b0_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_7b8cd5b0.BlendEnabled(true);
                _draw_7b8cd5b0.DepthTestEnabled(false);
                _draw_7b8cd5b0.CullFace(uPtr(dc)->CullFace());
                _draw_7b8cd5b0.BlendSrcAlpha(7);
                _draw_7b8cd5b0.BlendDstRgb(3);
                _draw_7b8cd5b0.Const1(0, uPtr(_uniforms)->Length());
                _draw_7b8cd5b0.Const(1, DP_7b8cd5b0_14_8_4.NeedFract);
                _draw_7b8cd5b0.Const(2, DP_7b8cd5b0_14_8_4.Texture == nullptr);
                _draw_7b8cd5b0.Use();
                _draw_7b8cd5b0.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_7b8cd5b0.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_7b8cd5b0.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_7b8cd5b0.Uniform1(6, _uniforms);
                _draw_7b8cd5b0.Uniform2(7, position);
                _draw_7b8cd5b0.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_7b8cd5b0.Uniform2(9, csz);
                _draw_7b8cd5b0.Uniform2(10, DP_7b8cd5b0_14_8_4.Origin);
                _draw_7b8cd5b0.Uniform2(11, DP_7b8cd5b0_14_8_4.Size);
                _draw_7b8cd5b0.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind11 = DP_7b8cd5b0_14_8_4.UVClip, ::g::Uno::Float2__New2(ind11.Z, ind11.W)), (ind12 = DP_7b8cd5b0_14_8_4.UVClip, ::g::Uno::Float2__New2(ind12.X, ind12.Y))));
                _draw_7b8cd5b0.Uniform2(13, (ind13 = DP_7b8cd5b0_14_8_4.UVClip, ::g::Uno::Float2__New2(ind13.X, ind13.Y)));
                _draw_7b8cd5b0.Uniform2(14, DP_7b8cd5b0_14_8_4.TexCoordScale1);
                _draw_7b8cd5b0.Uniform2(15, DP_7b8cd5b0_14_8_4.TexCoordBias1);
                _draw_7b8cd5b0.Uniform2(16, DP_7b8cd5b0_14_8_4.TexCoordScale2);
                _draw_7b8cd5b0.Uniform2(17, DP_7b8cd5b0_14_8_4.TexCoordBias2);
                _draw_7b8cd5b0.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_7b8cd5b0.Uniform(19, distanceScaleRcp);
                _draw_7b8cd5b0.Uniform(20, distanceScale);
                _draw_7b8cd5b0.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_7b8cd5b0.Uniform(22, 1.0f / smoothness);
                _draw_7b8cd5b0.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_7b8cd5b0.Sampler3(24, DP_7b8cd5b0_14_8_4.Texture, DP_7b8cd5b0_14_8_4.SamplerState);
                _draw_7b8cd5b0.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Fuse::Drawing::ImageFill__DrawParams DP_1a35325e_14_8_4 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, csz);
                _draw_1a35325e.BlendEnabled(true);
                _draw_1a35325e.DepthTestEnabled(false);
                _draw_1a35325e.CullFace(uPtr(dc)->CullFace());
                _draw_1a35325e.BlendSrcAlpha(7);
                _draw_1a35325e.BlendDstRgb(3);
                _draw_1a35325e.Const1(0, uPtr(_uniforms)->Length());
                _draw_1a35325e.Const(1, DP_1a35325e_14_8_4.NeedFract);
                _draw_1a35325e.Const(2, DP_1a35325e_14_8_4.Texture == nullptr);
                _draw_1a35325e.Use();
                _draw_1a35325e.Attrib1(3, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_1a35325e.Attrib1(4, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_1a35325e.Attrib1(5, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_1a35325e.Uniform1(6, _uniforms);
                _draw_1a35325e.Uniform2(7, position);
                _draw_1a35325e.Uniform12(8, dc->GetLocalToClipTransform(visual));
                _draw_1a35325e.Uniform2(9, csz);
                _draw_1a35325e.Uniform2(10, DP_1a35325e_14_8_4.Origin);
                _draw_1a35325e.Uniform2(11, DP_1a35325e_14_8_4.Size);
                _draw_1a35325e.Uniform2(12, ::g::Uno::Float2__op_Subtraction2((ind14 = DP_1a35325e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind14.Z, ind14.W)), (ind15 = DP_1a35325e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind15.X, ind15.Y))));
                _draw_1a35325e.Uniform2(13, (ind16 = DP_1a35325e_14_8_4.UVClip, ::g::Uno::Float2__New2(ind16.X, ind16.Y)));
                _draw_1a35325e.Uniform2(14, DP_1a35325e_14_8_4.TexCoordScale1);
                _draw_1a35325e.Uniform2(15, DP_1a35325e_14_8_4.TexCoordBias1);
                _draw_1a35325e.Uniform2(16, DP_1a35325e_14_8_4.TexCoordScale2);
                _draw_1a35325e.Uniform2(17, DP_1a35325e_14_8_4.TexCoordBias2);
                _draw_1a35325e.Uniform10(18, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Color());
                _draw_1a35325e.Uniform(19, distanceScaleRcp);
                _draw_1a35325e.Uniform(20, distanceScale);
                _draw_1a35325e.Uniform(21, dc->ViewportPixelsPerPoint());
                _draw_1a35325e.Uniform(22, 1.0f / smoothness);
                _draw_1a35325e.Uniform(23, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[1/*Fuse.Drawing.ImageFill*/]))->Opacity());
                _draw_1a35325e.Sampler3(24, DP_1a35325e_14_8_4.Texture, DP_1a35325e_14_8_4.SamplerState);
                _draw_1a35325e.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_1b41176d.BlendEnabled(true);
                _draw_1b41176d.DepthTestEnabled(false);
                _draw_1b41176d.CullFace(uPtr(dc)->CullFace());
                _draw_1b41176d.BlendSrcAlpha(7);
                _draw_1b41176d.BlendDstRgb(3);
                _draw_1b41176d.Const1(0, uPtr(_uniforms)->Length());
                _draw_1b41176d.Use();
                _draw_1b41176d.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_1b41176d.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_1b41176d.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_1b41176d.Uniform1(4, _uniforms);
                _draw_1b41176d.Uniform2(5, position);
                _draw_1b41176d.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_1b41176d.Uniform(7, distanceScaleRcp);
                _draw_1b41176d.Uniform(8, distanceScale);
                _draw_1b41176d.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_1b41176d.Uniform(10, 1.0f / smoothness);
                _draw_1b41176d.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind17 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind17.X, ind17.Y, ind17.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_1b41176d.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_1b41176d.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_c086d1a2.BlendEnabled(true);
                _draw_c086d1a2.DepthTestEnabled(false);
                _draw_c086d1a2.CullFace(uPtr(dc)->CullFace());
                _draw_c086d1a2.BlendSrcAlpha(7);
                _draw_c086d1a2.BlendDstRgb(3);
                _draw_c086d1a2.Const1(0, uPtr(_uniforms)->Length());
                _draw_c086d1a2.Use();
                _draw_c086d1a2.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_c086d1a2.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_c086d1a2.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_c086d1a2.Uniform1(4, _uniforms);
                _draw_c086d1a2.Uniform2(5, position);
                _draw_c086d1a2.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_c086d1a2.Uniform(7, distanceScaleRcp);
                _draw_c086d1a2.Uniform(8, distanceScale);
                _draw_c086d1a2.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_c086d1a2.Uniform(10, 1.0f / smoothness);
                _draw_c086d1a2.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind18 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind18.X, ind18.Y, ind18.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Color().W));
                _draw_c086d1a2.Uniform(12, uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.SolidColor*/]))->Opacity());
                _draw_c086d1a2.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                ::g::Uno::Float4 endPoints_778362f8_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_778362f8.BlendEnabled(true);
                _draw_778362f8.DepthTestEnabled(false);
                _draw_778362f8.CullFace(uPtr(dc)->CullFace());
                _draw_778362f8.BlendSrcAlpha(7);
                _draw_778362f8.BlendDstRgb(3);
                _draw_778362f8.Const1(0, uPtr(_uniforms)->Length());
                _draw_778362f8.Use();
                _draw_778362f8.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_778362f8.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_778362f8.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_778362f8.Uniform1(4, _uniforms);
                _draw_778362f8.Uniform2(5, position);
                _draw_778362f8.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_778362f8.Uniform2(7, csz);
                _draw_778362f8.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_778362f8.Uniform(9, distanceScaleRcp);
                _draw_778362f8.Uniform(10, distanceScale);
                _draw_778362f8.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_778362f8.Uniform(12, 1.0f / smoothness);
                _draw_778362f8.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_778362f8.Uniform10(14, endPoints_778362f8_14_17_6);
                _draw_778362f8.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_778362f8_14_17_6.Z, endPoints_778362f8_14_17_6.W), ::g::Uno::Float2__New2(endPoints_778362f8_14_17_6.X, endPoints_778362f8_14_17_6.Y))));
                _draw_778362f8.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_778362f8_14_17_6.Z, endPoints_778362f8_14_17_6.W), ::g::Uno::Float2__New2(endPoints_778362f8_14_17_6.X, endPoints_778362f8_14_17_6.Y))));
                _draw_778362f8.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_778362f8.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                ::g::Uno::Float4 endPoints_d788ec00_14_17_6 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(csz);
                _draw_d788ec00.BlendEnabled(true);
                _draw_d788ec00.DepthTestEnabled(false);
                _draw_d788ec00.CullFace(uPtr(dc)->CullFace());
                _draw_d788ec00.BlendSrcAlpha(7);
                _draw_d788ec00.BlendDstRgb(3);
                _draw_d788ec00.Const1(0, uPtr(_uniforms)->Length());
                _draw_d788ec00.Use();
                _draw_d788ec00.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_d788ec00.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_d788ec00.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_d788ec00.Uniform1(4, _uniforms);
                _draw_d788ec00.Uniform2(5, position);
                _draw_d788ec00.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_d788ec00.Uniform2(7, csz);
                _draw_d788ec00.Uniform2(8, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
                _draw_d788ec00.Uniform(9, distanceScaleRcp);
                _draw_d788ec00.Uniform(10, distanceScale);
                _draw_d788ec00.Uniform(11, dc->ViewportPixelsPerPoint());
                _draw_d788ec00.Uniform(12, 1.0f / smoothness);
                _draw_d788ec00.Uniform(13, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->Opacity());
                _draw_d788ec00.Uniform10(14, endPoints_d788ec00_14_17_6);
                _draw_d788ec00.Uniform2(15, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_d788ec00_14_17_6.Z, endPoints_d788ec00_14_17_6.W), ::g::Uno::Float2__New2(endPoints_d788ec00_14_17_6.X, endPoints_d788ec00_14_17_6.Y))));
                _draw_d788ec00.Uniform(16, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_d788ec00_14_17_6.Z, endPoints_d788ec00_14_17_6.W), ::g::Uno::Float2__New2(endPoints_d788ec00_14_17_6.X, endPoints_d788ec00_14_17_6.Y))));
                _draw_d788ec00.Sampler3(17, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[6/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
                _draw_d788ec00.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_2935d8a1.BlendEnabled(true);
                _draw_2935d8a1.DepthTestEnabled(false);
                _draw_2935d8a1.CullFace(uPtr(dc)->CullFace());
                _draw_2935d8a1.BlendSrcAlpha(7);
                _draw_2935d8a1.BlendDstRgb(3);
                _draw_2935d8a1.Const1(0, uPtr(_uniforms)->Length());
                _draw_2935d8a1.Use();
                _draw_2935d8a1.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_2935d8a1.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_2935d8a1.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_2935d8a1.Uniform1(4, _uniforms);
                _draw_2935d8a1.Uniform2(5, position);
                _draw_2935d8a1.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_2935d8a1.Uniform2(7, csz);
                _draw_2935d8a1.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_2935d8a1.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_2935d8a1.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_2935d8a1.Uniform(11, distanceScaleRcp);
                _draw_2935d8a1.Uniform(12, distanceScale);
                _draw_2935d8a1.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_2935d8a1.Uniform(14, 1.0f / smoothness);
                _draw_2935d8a1.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_2935d8a1.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_9205091c.BlendEnabled(true);
                _draw_9205091c.DepthTestEnabled(false);
                _draw_9205091c.CullFace(uPtr(dc)->CullFace());
                _draw_9205091c.BlendSrcAlpha(7);
                _draw_9205091c.BlendDstRgb(3);
                _draw_9205091c.Const1(0, uPtr(_uniforms)->Length());
                _draw_9205091c.Use();
                _draw_9205091c.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_9205091c.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_9205091c.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_9205091c.Uniform1(4, _uniforms);
                _draw_9205091c.Uniform2(5, position);
                _draw_9205091c.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_9205091c.Uniform2(7, csz);
                _draw_9205091c.Uniform2(8, ::g::Uno::Float2__New2(csz.X, csz.Y));
                _draw_9205091c.Uniform(9, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->DashedSize());
                _draw_9205091c.Uniform10(10, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Color());
                _draw_9205091c.Uniform(11, distanceScaleRcp);
                _draw_9205091c.Uniform(12, distanceScale);
                _draw_9205091c.Uniform(13, dc->ViewportPixelsPerPoint());
                _draw_9205091c.Uniform(14, 1.0f / smoothness);
                _draw_9205091c.Uniform(15, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[7/*Fuse.Drawing.DashedColor*/]))->Opacity());
                _draw_9205091c.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
        else if (uIs(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))
        {
            if (uIs(falloff, ::TYPES[12/*Fuse.Drawing.Primitives.ShadowFalloff*/]))
            {
                _draw_4a509b68.BlendEnabled(true);
                _draw_4a509b68.DepthTestEnabled(false);
                _draw_4a509b68.CullFace(uPtr(dc)->CullFace());
                _draw_4a509b68.BlendSrcAlpha(7);
                _draw_4a509b68.BlendDstRgb(3);
                _draw_4a509b68.Const1(0, uPtr(_uniforms)->Length());
                _draw_4a509b68.Use();
                _draw_4a509b68.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_4a509b68.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_4a509b68.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_4a509b68.Uniform1(4, _uniforms);
                _draw_4a509b68.Uniform2(5, position);
                _draw_4a509b68.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_4a509b68.Uniform(7, distanceScaleRcp);
                _draw_4a509b68.Uniform(8, distanceScale);
                _draw_4a509b68.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_4a509b68.Uniform(10, 1.0f / smoothness);
                _draw_4a509b68.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind19 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind19.X, ind19.Y, ind19.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_4a509b68.DrawArrays(uPtr(_bufferDistance)->Count());
            }
            else
            {
                _draw_bff5c1da.BlendEnabled(true);
                _draw_bff5c1da.DepthTestEnabled(false);
                _draw_bff5c1da.CullFace(uPtr(dc)->CullFace());
                _draw_bff5c1da.BlendSrcAlpha(7);
                _draw_bff5c1da.BlendDstRgb(3);
                _draw_bff5c1da.Const1(0, uPtr(_uniforms)->Length());
                _draw_bff5c1da.Use();
                _draw_bff5c1da.Attrib1(1, _vertexInfo.Type, _vertexInfo.Buffer, _vertexInfo.BufferStride, _vertexInfo.BufferOffset);
                _draw_bff5c1da.Attrib1(2, _edgeInfo.Type, _edgeInfo.Buffer, _edgeInfo.BufferStride, _edgeInfo.BufferOffset);
                _draw_bff5c1da.Attrib1(3, 1, uPtr(_bufferDistance)->GetDeviceVertex(), 4, 0);
                _draw_bff5c1da.Uniform1(4, _uniforms);
                _draw_bff5c1da.Uniform2(5, position);
                _draw_bff5c1da.Uniform12(6, dc->GetLocalToClipTransform(visual));
                _draw_bff5c1da.Uniform(7, distanceScaleRcp);
                _draw_bff5c1da.Uniform(8, distanceScale);
                _draw_bff5c1da.Uniform(9, dc->ViewportPixelsPerPoint());
                _draw_bff5c1da.Uniform(10, 1.0f / smoothness);
                _draw_bff5c1da.Uniform10(11, ::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind20 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind20.X, ind20.Y, ind20.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[8/*Fuse.Drawing.StaticSolidColor*/]))->Color().W));
                _draw_bff5c1da.DrawArrays(uPtr(_bufferDistance)->Count());
            }
        }
    }
}

// public void Fill(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Brush brush, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 Position, float Smoothness)
{
    Draw(dc, visual, Size, CornerRadius, brush, _fillCoverage, ::g::Uno::Float2__New1(Smoothness), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private generated void init_DrawCalls() [instance]
void Rectangle::init_DrawCalls()
{
    _draw_8ea59fa1 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleeea60686());
    _draw_756a815 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle92dbce62());
    _draw_db3963ea = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle277ecc8b());
    _draw_46d298b5 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle0d95ac89());
    _draw_ececdec4 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb9bd3313());
    _draw_e1fb4228 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle96567dcc());
    _draw_9f25b31c = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle443ab62b());
    _draw_e693f66d = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle2a980758());
    _draw_4d5db26e = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle077c3378());
    _draw_6cd3942d = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleb91c47bc());
    _draw_7b8cd5b0 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleaf680338());
    _draw_1a35325e = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangleae3d51b5());
    _draw_1b41176d = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglef9806da2());
    _draw_c086d1a2 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglecb05e1d1());
    _draw_778362f8 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7575b8fd());
    _draw_d788ec00 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle6cc3b044());
    _draw_2935d8a1 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectanglea4c63db0());
    _draw_9205091c = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7df074e3());
    _draw_4a509b68 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle7ebb267b());
    _draw_bff5c1da = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawingPrimitives_bundle::Rectangle55280bee());
}

// private void InitBuffers() [instance]
void Rectangle::InitBuffers()
{
    _bufferDistance = ::g::Fuse::Drawing::Internal::FloatBuffer::New3();
    uArray* CornerRadius0 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius1 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius2 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* CornerRadius3 = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeX = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f);
    uArray* SizeY = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f);
    uArray* ExtendX = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f);
    uArray* ExtendY = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
    uArray* Mn = uArray::Init<double>(::TYPES[10/*float[]*/], 9, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f);
    uArray* vr = uArray::Init<uArray*>(::TYPES[13/*float[][]*/], 56, CornerRadius0, (uArray*)add(SizeY, ExtendY), (uArray*)sub(SizeX, CornerRadius1), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)sub(SizeY, CornerRadius0), CornerRadius0, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, CornerRadius1), (uArray*)add(SizeX, ExtendX), (uArray*)sub(SizeY, CornerRadius1), Mn, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, Mn), Mn, Mn, (uArray*)sub(SizeX, Mn), Mn, (uArray*)neg(ExtendX), CornerRadius3, CornerRadius3, CornerRadius3, (uArray*)sub(SizeX, CornerRadius2), CornerRadius2, (uArray*)add(SizeX, ExtendX), CornerRadius2, CornerRadius3, (uArray*)neg(ExtendY), (uArray*)sub(SizeX, CornerRadius2), (uArray*)neg(ExtendY), (uArray*)neg(ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)add(SizeY, ExtendY), (uArray*)neg(ExtendX), (uArray*)neg(ExtendY), (uArray*)add(SizeX, ExtendX), (uArray*)neg(ExtendY), Mn, (uArray*)sub(SizeY, CornerRadius0), (uArray*)sub(SizeX, Mn), (uArray*)sub(SizeY, CornerRadius1), Mn, CornerRadius3, (uArray*)sub(SizeX, Mn), CornerRadius2, CornerRadius0, (uArray*)sub(SizeY, Mn), (uArray*)sub(SizeX, CornerRadius1), (uArray*)sub(SizeY, Mn), CornerRadius3, Mn, (uArray*)sub(SizeX, CornerRadius2), Mn);
    uArray* offsets = uArray::New(::TYPES[14/*float2[]*/], vr->Length());

    for (int32_t i = 0; i < vr->Length(); ++i)
    {
        ::g::Uno::Int2 offset = ::g::Uno::Int2__New2(0, 0);
        uArray* v = uPtr(vr)->Strong<uArray*>(i);

        for (int32_t j = 0; j < uPtr(v)->Length(); ++j)
        {
            float f = uPtr(v)->Item<float>(j);

            if (f != 0.0f)
            {
                if (offset.Y != 0)
                    U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"more than t...*/]));

                int32_t o = 1 + j;
                offset = ::g::Uno::Int2__New2((f < 0.0f) ? -o : o, offset.X);
            }
        }

        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Implicit1(offset);
    }

    uArray* vsr = uArray::Init<int32_t>(::TYPES[15/*int[]*/], 72, 10, 8, 11, 10, 6, 8, 10, 2, 6, 2, 3, 6, 14, 11, 8, 14, 8, 15, 8, 9, 15, 9, 12, 15, 3, 0, 6, 0, 1, 6, 6, 1, 4, 6, 4, 7, 7, 4, 5, 7, 5, 9, 9, 5, 13, 9, 13, 12, 2, 16, 3, 3, 16, 0, 1, 17, 4, 4, 17, 5, 15, 12, 19, 12, 
        13, 19, 11, 18, 10, 14, 18, 11);
    uArray* ptr = uArray::Init<int32_t>(::TYPES[15/*int[]*/], 72, 22, 8, 22, 22, 6, 8, 22, 20, 6, 20, 20, 6, 26, 26, 8, 26, 8, 27, 8, 9, 27, 9, 27, 27, 24, 24, 6, 24, 25, 6, 6, 25, 25, 6, 25, 7, 7, 21, 21, 7, 21, 9, 9, 21, 23, 9, 23, 23, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4, 4, 4, 12, 12, 12, 12, 
        12, 12, 11, 11, 11, 11, 11, 11);
    uArray* bufferVertex = uArray::New(::TYPES[16/*byte[]*/], vsr->Length() * 16);
    uArray* bufferEdge = uArray::New(::TYPES[16/*byte[]*/], vsr->Length() * 16);
    _vertexInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _vertexInfo.BufferOffset = 0;
    _vertexInfo.BufferStride = 16;
    _vertexInfo.Type = 4;
    _vertexInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New7(0);
    _edgeInfo = uDefault< ::g::Uno::Graphics::VertexAttributeInfo>();
    _edgeInfo.BufferOffset = 0;
    _edgeInfo.BufferStride = 16;
    _edgeInfo.Type = 4;
    _edgeInfo.Buffer = ::g::Uno::Graphics::VertexBuffer::New7(0);

    for (int32_t i1 = 0; i1 < vsr->Length(); ++i1)
    {
        ::g::Uno::ByteArrayExtensions::Set8(bufferVertex, i1 * _vertexInfo.BufferStride, ::g::Uno::Float4__New7(uPtr(offsets)->Item< ::g::Uno::Float2>(uPtr(vsr)->Item<int32_t>(i1) * 2), uPtr(offsets)->Item< ::g::Uno::Float2>((uPtr(vsr)->Item<int32_t>(i1) * 2) + 1)), true);
        ::g::Uno::ByteArrayExtensions::Set8(bufferEdge, i1 * _edgeInfo.BufferStride, ::g::Uno::Float4__New7(offsets->Item< ::g::Uno::Float2>(uPtr(ptr)->Item<int32_t>(i1) * 2), offsets->Item< ::g::Uno::Float2>((uPtr(ptr)->Item<int32_t>(i1) * 2) + 1)), true);
        uPtr(_bufferDistance)->Append1((float)(uint16_t)(1 + ((i1 < 48) ? 8 : (i1 < 54) ? 0 : (i1 < 60) ? 1 : (i1 < 66) ? 2 : 3)));
    }

    uPtr(_vertexInfo.Buffer)->Update(bufferVertex);
    uPtr(_edgeInfo.Buffer)->Update(bufferEdge);
    uPtr(_bufferDistance)->InitDeviceVertex(0);
}

// private float[] neg(float[] a) [instance]
uArray* Rectangle::neg(uArray* a)
{
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = -uPtr(a)->Item<float>(i);

    return r;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Visual visual, float2 Size, float4 CornerRadius, Fuse.Drawing.Stroke stroke, [float2 Position], [float Smoothness]) [instance]
void Rectangle::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* visual, ::g::Uno::Float2 Size, ::g::Uno::Float4 CornerRadius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 Position, float Smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + Smoothness;
    Draw(dc, visual, Size, CornerRadius, stroke->Brush(), sc, ::g::Uno::Float2__New1(extend), Position, Smoothness, ::g::Fuse::Drawing::Primitives::Falloff::New1());
}

// private float[] sub(float[] a, float[] b) [instance]
uArray* Rectangle::sub(uArray* a, uArray* b)
{
    uArray* r = uArray::New(::TYPES[10/*float[]*/], uPtr(a)->Length());

    for (int32_t i = 0; i < a->Length(); i++)
        uPtr(r)->Item<float>(i) = uPtr(a)->Item<float>(i) - uPtr(b)->Item<float>(i);

    return r;
}

// public generated Rectangle New() [static]
Rectangle* Rectangle::New1()
{
    Rectangle* obj21 = (Rectangle*)uNew(Rectangle_typeof());
    obj21->ctor_();
    return obj21;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Rectangle.uno
// -----------------------------------------------------------------------------

// internal sealed class ShadowFalloff
// {
static void ShadowFalloff_build(uType* type)
{
}

uType* ShadowFalloff_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Falloff_typeof();
    options.ObjectSize = sizeof(ShadowFalloff);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.ShadowFalloff", options);
    type->fp_build_ = ShadowFalloff_build;
    type->fp_ctor_ = (void*)ShadowFalloff__New2_fn;
    return type;
}

// public generated ShadowFalloff()
void ShadowFalloff__ctor_1_fn(ShadowFalloff* __this)
{
    __this->ctor_1();
}

// public generated ShadowFalloff New()
void ShadowFalloff__New2_fn(ShadowFalloff** __retval)
{
    *__retval = ShadowFalloff::New2();
}

// public generated ShadowFalloff() [instance]
void ShadowFalloff::ctor_1()
{
    ctor_();
}

// public generated ShadowFalloff New() [static]
ShadowFalloff* ShadowFalloff::New2()
{
    ShadowFalloff* obj1 = (ShadowFalloff*)uNew(ShadowFalloff_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Rectangle.uno
// -----------------------------------------------------------------------------

// internal sealed class StrokeCoverage
// {
static void StrokeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Radius), 0,
        ::g::Uno::Float_typeof(), offsetof(StrokeCoverage, Center), 0);
}

uType* StrokeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::Coverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StrokeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.StrokeCoverage", options);
    type->fp_build_ = StrokeCoverage_build;
    type->fp_ctor_ = (void*)StrokeCoverage__New1_fn;
    return type;
}

// public generated StrokeCoverage()
void StrokeCoverage__ctor_1_fn(StrokeCoverage* __this)
{
    __this->ctor_1();
}

// public generated StrokeCoverage New()
void StrokeCoverage__New1_fn(StrokeCoverage** __retval)
{
    *__retval = StrokeCoverage::New1();
}

// public generated StrokeCoverage() [instance]
void StrokeCoverage::ctor_1()
{
    Radius = 1.0f;
    Center = 0.0f;
    ctor_();
}

// public generated StrokeCoverage New() [static]
StrokeCoverage* StrokeCoverage::New1()
{
    StrokeCoverage* obj1 = (StrokeCoverage*)uNew(StrokeCoverage_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Wedge.uno
// -------------------------------------------------------------------------

// public sealed class Wedge
// {
// static generated Wedge()
static void Wedge__cctor__fn(uType* __type)
{
    Wedge::Singleton_ = Wedge::New1();
}

static void Wedge_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Drawing::Primitives::Circle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage_typeof(), offsetof(Wedge, _convexWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage_typeof(), offsetof(Wedge, _concaveWedgeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::StrokeCoverage_typeof(), offsetof(Wedge, _strokeCoverage), 0,
        ::g::Fuse::Drawing::Primitives::FillCoverage_typeof(), offsetof(Wedge, _fillCoverage), 0,
        type, (uintptr_t)&Wedge::Singleton_, uFieldFlagsStatic);
}

uType* Wedge_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Wedge);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.Wedge", options);
    type->fp_build_ = Wedge_build;
    type->fp_ctor_ = (void*)Wedge__New1_fn;
    type->fp_cctor_ = Wedge__cctor__fn;
    return type;
}

// public generated Wedge()
void Wedge__ctor__fn(Wedge* __this)
{
    __this->ctor_();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness)
void Wedge__Fill_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Fill(dc, node, *radius, brush, *center, *startAngle, *endAngle, *smoothness);
}

// public generated Wedge New()
void Wedge__New1_fn(Wedge** __retval)
{
    *__retval = Wedge::New1();
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle)
void Wedge__SetupWedgeCoverage_fn(Wedge* __this, float* startAngle, float* endAngle, ::g::Fuse::Drawing::Primitives::WedgeCoverage** __retval)
{
    *__retval = __this->SetupWedgeCoverage(*startAngle, *endAngle);
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness)
void Wedge__Stroke_fn(Wedge* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float* radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2* center, float* startAngle, float* endAngle, float* smoothness)
{
    __this->Stroke(dc, node, *radius, stroke, *center, *startAngle, *endAngle, *smoothness);
}

uSStrong<Wedge*> Wedge::Singleton_;

// public generated Wedge() [instance]
void Wedge::ctor_()
{
    _convexWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConvexWedgeCoverage::New1();
    _concaveWedgeCoverage = ::g::Fuse::Drawing::Primitives::ConcaveWedgeCoverage::New1();
    _strokeCoverage = ::g::Fuse::Drawing::Primitives::StrokeCoverage::New1();
    _fillCoverage = ::g::Fuse::Drawing::Primitives::FillCoverage::New1();
}

// public void Fill(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Brush brush, float2 center, float startAngle, float endAngle, float smoothness) [instance]
void Wedge::Fill(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Brush* brush, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, brush, _fillCoverage, wc, smoothness, center, smoothness);
}

// private Fuse.Drawing.Primitives.WedgeCoverage SetupWedgeCoverage(float startAngle, float endAngle) [instance]
::g::Fuse::Drawing::Primitives::WedgeCoverage* Wedge::SetupWedgeCoverage(float startAngle, float endAngle)
{
    float pStartAngle = ::g::Uno::Math::Mod1(startAngle, 6.28318548f);
    float pEndAngle = ::g::Uno::Math::Mod1(endAngle, 6.28318548f);

    if (pEndAngle < pStartAngle)
        pEndAngle = pEndAngle + 6.28318548f;

    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = _concaveWedgeCoverage;

    if ((pEndAngle - pStartAngle) < 3.14159274f)
        wc = _convexWedgeCoverage;

    uPtr(wc)->StartAngle = pStartAngle;
    wc->EndAngle = pEndAngle;
    return wc;
}

// public void Stroke(Fuse.DrawContext dc, Fuse.Elements.Element node, float radius, Fuse.Drawing.Stroke stroke, float2 center, float startAngle, float endAngle, float smoothness) [instance]
void Wedge::Stroke(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* node, float radius, ::g::Fuse::Drawing::Stroke* stroke, ::g::Uno::Float2 center, float startAngle, float endAngle, float smoothness)
{
    ::g::Uno::Float2 r = uPtr(stroke)->GetDeviceAdjusted(uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Fuse::Drawing::Primitives::StrokeCoverage* sc = _strokeCoverage;
    uPtr(sc)->Radius = (r.Item(0) / 2.0f);
    sc->Center = r.Item(1);
    float extend = ::g::Uno::Math::Max1(0.0f, r.Item(0) + r.Item(1)) + smoothness;
    ::g::Fuse::Drawing::Primitives::WedgeCoverage* wc = SetupWedgeCoverage(startAngle, endAngle);
    uPtr(::g::Fuse::Drawing::Primitives::Circle::Singleton())->Draw(dc, node, radius, stroke->Brush(), sc, wc, extend, center, smoothness);
}

// public generated Wedge New() [static]
Wedge* Wedge::New1()
{
    Wedge* obj1 = (Wedge*)uNew(Wedge_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Primitives/Wedge.uno
// -------------------------------------------------------------------------

// internal abstract class WedgeCoverage
// {
static void WedgeCoverage_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, StartAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(WedgeCoverage, EndAngle), 0);
}

uType* WedgeCoverage_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Primitives::LimitCoverage_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(WedgeCoverage);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Primitives.WedgeCoverage", options);
    type->fp_build_ = WedgeCoverage_build;
    return type;
}

// protected generated WedgeCoverage()
void WedgeCoverage__ctor_1_fn(WedgeCoverage* __this)
{
    __this->ctor_1();
}

// protected generated WedgeCoverage() [instance]
void WedgeCoverage::ctor_1()
{
    StartAngle = 0.0f;
    EndAngle = 6.28318548f;
    ctor_();
}
// }

}}}} // ::g::Fuse::Drawing::Primitives
