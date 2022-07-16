// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControls_bundle.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.DashedColor.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.ImageFil-b905dd3.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Internal.Drawing-2fac8179.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Uno.Bool.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.OpenGL.GLProgram.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-13489a6d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Matrix.h>
#include <Uno.Vector.h>
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Internal{
namespace Drawing{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls/Control.Background.uno
// ----------------------------------------------------------------------------

// internal sealed class SolidRectangle
// {
// static generated SolidRectangle()
static void SolidRectangle__cctor__fn(uType* __type)
{
    SolidRectangle::Impl_ = SolidRectangle::New1();
}

static void SolidRectangle_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[1] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[2] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[3] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[4] = ::g::Fuse::Drawing::DashedColor_typeof();
    ::TYPES[5] = ::g::Fuse::Drawing::StaticSolidColor_typeof();
    ::TYPES[6] = ::g::Uno::Float2_typeof()->Array();
    type->SetDependencies(
        ::g::FuseControls_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_46d404b6_7_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(SolidRectangle, DrawElement_LocalTransform_46d404b6_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(SolidRectangle, DrawElement_LocalTransform_46d404b6_4_9_3), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(SolidRectangle, DrawElement_LocalTransform_46d404b6_4_9_4), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_38768924_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_8010082d_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_6e298326_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(SolidRectangle, DrawElement_VertexData_21076ac8_7_2_1), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(SolidRectangle, _draw_46d404b6), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(SolidRectangle, _draw_38768924), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(SolidRectangle, _draw_8010082d), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(SolidRectangle, _draw_6e298326), 0,
        type, (uintptr_t)&SolidRectangle::Impl_, uFieldFlagsStatic);
}

uType* SolidRectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SolidRectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.Drawing.SolidRectangle", options);
    type->fp_build_ = SolidRectangle_build;
    type->fp_ctor_ = (void*)SolidRectangle__New1_fn;
    type->fp_cctor_ = SolidRectangle__cctor__fn;
    return type;
}

// public generated SolidRectangle()
void SolidRectangle__ctor__fn(SolidRectangle* __this)
{
    __this->ctor_();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity)
void SolidRectangle__DrawElement_fn(SolidRectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float* opacity)
{
    __this->DrawElement(dc, element, brush, *opacity);
}

// private generated void init_DrawCalls()
void SolidRectangle__init_DrawCalls_fn(SolidRectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated SolidRectangle New()
void SolidRectangle__New1_fn(SolidRectangle** __retval)
{
    *__retval = SolidRectangle::New1();
}

uSStrong<SolidRectangle*> SolidRectangle::Impl_;

// public generated SolidRectangle() [instance]
void SolidRectangle::ctor_()
{
    init_DrawCalls();
}

// public void DrawElement(Fuse.DrawContext dc, Fuse.Elements.Element element, Fuse.Drawing.Brush brush, float opacity) [instance]
void SolidRectangle::DrawElement(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Fuse::Drawing::Brush* brush, float opacity)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Float2 ind5;
    ::g::Uno::Float4 ind6;

    if (uIs(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_46d404b6_4_9_5 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_46d404b6_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_46d404b6_4_9_3, DrawElement_LocalTransform_46d404b6_4_9_4);
        ::g::Fuse::Drawing::ImageFill__DrawParams DP_46d404b6_16_8_9 = uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->GetDrawParams(dc, element->ActualSize());
        _draw_46d404b6.BlendEnabled(true);
        _draw_46d404b6.DepthTestEnabled(false);
        _draw_46d404b6.CullFace(uPtr(dc)->CullFace());
        _draw_46d404b6.BlendSrcAlpha(7);
        _draw_46d404b6.BlendDstRgb(3);
        _draw_46d404b6.Const(0, DP_46d404b6_16_8_9.NeedFract);
        _draw_46d404b6.Const(1, DP_46d404b6_16_8_9.Texture == nullptr);
        _draw_46d404b6.Use();
        _draw_46d404b6.Attrib1(2, 2, DrawElement_VertexData_46d404b6_7_2_1, 8, 0);
        _draw_46d404b6.Uniform12(3, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_46d404b6.Uniform2(4, uPtr(element)->ActualSize());
        _draw_46d404b6.Uniform2(5, DP_46d404b6_16_8_9.Origin);
        _draw_46d404b6.Uniform2(6, DP_46d404b6_16_8_9.Size);
        _draw_46d404b6.Uniform2(7, ::g::Uno::Float2__op_Subtraction2((ind1 = DP_46d404b6_16_8_9.UVClip, ::g::Uno::Float2__New2(ind1.Z, ind1.W)), (ind2 = DP_46d404b6_16_8_9.UVClip, ::g::Uno::Float2__New2(ind2.X, ind2.Y))));
        _draw_46d404b6.Uniform2(8, (ind3 = DP_46d404b6_16_8_9.UVClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y)));
        _draw_46d404b6.Uniform2(9, DP_46d404b6_16_8_9.TexCoordScale1);
        _draw_46d404b6.Uniform2(10, DP_46d404b6_16_8_9.TexCoordBias1);
        _draw_46d404b6.Uniform2(11, DP_46d404b6_16_8_9.TexCoordScale2);
        _draw_46d404b6.Uniform2(12, DP_46d404b6_16_8_9.TexCoordBias2);
        _draw_46d404b6.Uniform10(13, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Color());
        _draw_46d404b6.Uniform(14, uPtr(uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[0/*Fuse.Drawing.ImageFill*/]))->Opacity());
        _draw_46d404b6.Uniform(15, opacity);
        _draw_46d404b6.Uniform12(16, (element != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_46d404b6_4_9_5, element->WorldTransform()) : LocalTransform_46d404b6_4_9_5);
        _draw_46d404b6.Sampler3(17, DP_46d404b6_16_8_9.Texture, DP_46d404b6_16_8_9.SamplerState);
        _draw_46d404b6.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_38768924_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_46d404b6_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_46d404b6_4_9_3, DrawElement_LocalTransform_46d404b6_4_9_4);
        _draw_38768924.BlendEnabled(true);
        _draw_38768924.DepthTestEnabled(false);
        _draw_38768924.CullFace(uPtr(dc)->CullFace());
        _draw_38768924.BlendSrcAlpha(7);
        _draw_38768924.BlendDstRgb(3);
        _draw_38768924.Use();
        _draw_38768924.Attrib1(0, 2, DrawElement_VertexData_38768924_7_2_1, 8, 0);
        _draw_38768924.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_38768924.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind4 = uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind4.X, ind4.Y, ind4.Z)), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::SolidColor*>(brush, ::TYPES[2/*Fuse.Drawing.SolidColor*/]))->Opacity()), opacity));
        _draw_38768924.Uniform12(3, (element != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_38768924_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_38768924_4_9_2);
        _draw_38768924.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_8010082d_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_46d404b6_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_46d404b6_4_9_3, DrawElement_LocalTransform_46d404b6_4_9_4);
        ::g::Uno::Float4 endPoints_8010082d_16_17_8 = uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->GetEffectiveEndPoints(element->ActualSize());
        _draw_8010082d.BlendEnabled(true);
        _draw_8010082d.DepthTestEnabled(false);
        _draw_8010082d.CullFace(uPtr(dc)->CullFace());
        _draw_8010082d.BlendSrcAlpha(7);
        _draw_8010082d.BlendDstRgb(3);
        _draw_8010082d.Use();
        _draw_8010082d.Attrib1(0, 2, DrawElement_VertexData_8010082d_7_2_1, 8, 0);
        _draw_8010082d.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_8010082d.Uniform2(2, uPtr(element)->ActualSize());
        _draw_8010082d.Uniform2(3, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->_gradientStart);
        _draw_8010082d.Uniform(4, uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->Opacity());
        _draw_8010082d.Uniform(5, opacity);
        _draw_8010082d.Uniform12(6, (element != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_8010082d_4_9_2, element->WorldTransform()) : LocalTransform_8010082d_4_9_2);
        _draw_8010082d.Uniform10(7, endPoints_8010082d_16_17_8);
        _draw_8010082d.Uniform2(8, ::g::Uno::Vector::Normalize(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8010082d_16_17_8.Z, endPoints_8010082d_16_17_8.W), ::g::Uno::Float2__New2(endPoints_8010082d_16_17_8.X, endPoints_8010082d_16_17_8.Y))));
        _draw_8010082d.Uniform(9, ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(endPoints_8010082d_16_17_8.Z, endPoints_8010082d_16_17_8.W), ::g::Uno::Float2__New2(endPoints_8010082d_16_17_8.X, endPoints_8010082d_16_17_8.Y))));
        _draw_8010082d.Sampler3(10, uPtr(uPtr(uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[3/*Fuse.Drawing.LinearGradient*/]))->_gradientBuffer)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
        _draw_8010082d.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[4/*Fuse.Drawing.DashedColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_6e298326_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_46d404b6_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_46d404b6_4_9_3, DrawElement_LocalTransform_46d404b6_4_9_4);
        _draw_6e298326.BlendEnabled(true);
        _draw_6e298326.DepthTestEnabled(false);
        _draw_6e298326.CullFace(uPtr(dc)->CullFace());
        _draw_6e298326.BlendSrcAlpha(7);
        _draw_6e298326.BlendDstRgb(3);
        _draw_6e298326.Use();
        _draw_6e298326.Attrib1(0, 2, DrawElement_VertexData_6e298326_7_2_1, 8, 0);
        _draw_6e298326.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_6e298326.Uniform2(2, (ind5 = uPtr(element)->ActualSize(), ::g::Uno::Float2__New2(ind5.X, ind5.Y)));
        _draw_6e298326.Uniform2(3, element->ActualSize());
        _draw_6e298326.Uniform(4, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[4/*Fuse.Drawing.DashedColor*/]))->DashedSize());
        _draw_6e298326.Uniform10(5, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[4/*Fuse.Drawing.DashedColor*/]))->Color());
        _draw_6e298326.Uniform(6, uPtr(uAs< ::g::Fuse::Drawing::DashedColor*>(brush, ::TYPES[4/*Fuse.Drawing.DashedColor*/]))->Opacity());
        _draw_6e298326.Uniform(7, opacity);
        _draw_6e298326.Uniform12(8, (element != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_6e298326_4_9_2, element->WorldTransform()) : LocalTransform_6e298326_4_9_2);
        _draw_6e298326.DrawArrays(6);
    }
    else if (uIs(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))
    {
        ::g::Uno::Float4x4 LocalTransform_21076ac8_4_9_2 = ::g::Uno::Matrix::Mul10(DrawElement_LocalTransform_46d404b6_4_9_2, ::g::Uno::Matrix::Scaling1(uPtr(element)->ActualSize().X, uPtr(element)->ActualSize().Y, 1.0f), DrawElement_LocalTransform_46d404b6_4_9_3, DrawElement_LocalTransform_46d404b6_4_9_4);
        _draw_38768924.BlendEnabled(true);
        _draw_38768924.DepthTestEnabled(false);
        _draw_38768924.CullFace(uPtr(dc)->CullFace());
        _draw_38768924.BlendSrcAlpha(7);
        _draw_38768924.BlendDstRgb(3);
        _draw_38768924.Use();
        _draw_38768924.Attrib1(0, 2, DrawElement_VertexData_21076ac8_7_2_1, 8, 0);
        _draw_38768924.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[1/*Fuse.IRenderViewport*/])));
        _draw_38768924.Uniform10(2, ::g::Uno::Float4__op_Multiply1(::g::Uno::Float4__New8(::g::Uno::Float3__op_Multiply1((ind6 = uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color(), ::g::Uno::Float3__New2(ind6.X, ind6.Y, ind6.Z)), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), uPtr(uAs< ::g::Fuse::Drawing::StaticSolidColor*>(brush, ::TYPES[5/*Fuse.Drawing.StaticSolidColor*/]))->Color().W), opacity));
        _draw_38768924.Uniform12(3, (element != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_21076ac8_4_9_2, uPtr(element)->WorldTransform()) : LocalTransform_21076ac8_4_9_2);
        _draw_38768924.DrawArrays(6);
    }
}

// private generated void init_DrawCalls() [instance]
void SolidRectangle::init_DrawCalls()
{
    uArray* Vertices_46d404b6_7_1_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[6/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    DrawElement_VertexData_46d404b6_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_46d404b6_7_1_0, 0);
    DrawElement_LocalTransform_46d404b6_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_LocalTransform_46d404b6_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    DrawElement_LocalTransform_46d404b6_4_9_4 = ::g::Uno::Matrix::Translation(::g::Uno::Float2__New1(0.0f).X, ::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    DrawElement_VertexData_38768924_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_46d404b6_7_1_0, 0);
    DrawElement_VertexData_8010082d_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_46d404b6_7_1_0, 0);
    DrawElement_VertexData_6e298326_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_46d404b6_7_1_0, 0);
    DrawElement_VertexData_21076ac8_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_46d404b6_7_1_0, 0);
    _draw_46d404b6 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle9102669d());
    _draw_38768924 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectanglec0131986());
    _draw_8010082d = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle40bbf9dc());
    _draw_6e298326 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseControls_bundle::SolidRectangle43281f2d());
}

// public generated SolidRectangle New() [static]
SolidRectangle* SolidRectangle::New1()
{
    SolidRectangle* obj7 = (SolidRectangle*)uNew(SolidRectangle_typeof());
    obj7->ctor_();
    return obj7;
}
// }

}}}} // ::g::Fuse::Internal::Drawing
