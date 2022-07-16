// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseEffects_bundle.h>
#include <Fuse.Common.Blitter.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.Effects.Blur.h>
#include <Fuse.Effects.Desaturate.h>
#include <Fuse.Effects.DropShad-c530ad41.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Effects.Duotone.h>
#include <Fuse.Effects.Effect.h>
#include <Fuse.Effects.EffectHelpers.h>
#include <Fuse.Effects.EffectType.h>
#include <Fuse.Effects.FrostedGlass.h>
#include <Fuse.Effects.Halftone.h>
#include <Fuse.Effects.Mask.h>
#include <Fuse.Effects.Mask.MaskMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FastMatrix.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float2x2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
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
#include <Uno.Matrix.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
static uString* STRINGS[1];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Effects{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/BasicEffect.uno
// --------------------------------------------------------------------

// public abstract class BasicEffect
// {
static void BasicEffect_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(BasicEffect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(BasicEffect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(BasicEffect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(BasicEffect_type, interface6));
    type->SetFields(21);
}

BasicEffect_type* BasicEffect_typeof()
{
    static uSStrong<BasicEffect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::Effect_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BasicEffect);
    options.TypeSize = sizeof(BasicEffect_type);
    type = (BasicEffect_type*)uClassType::New("Fuse.Effects.BasicEffect", options);
    type->fp_build_ = BasicEffect_build;
    type->fp_Render = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::DrawContext*))BasicEffect__Render_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r)
void BasicEffect__ConservativelySnapToCoveringIntegers_fn(::g::Uno::Rect* r, ::g::Uno::Recti* __retval)
{
    *__retval = BasicEffect::ConservativelySnapToCoveringIntegers(*r);
}

// protected Uno.Rect GetLocalElementRect()
void BasicEffect__GetLocalElementRect_fn(BasicEffect* __this, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetLocalElementRect();
}

// public override sealed void Render(Fuse.DrawContext dc)
void BasicEffect__Render_fn(BasicEffect* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Rect rect = __this->GetLocalElementRect();
    __this->OnRender(dc, rect);
}

// protected Uno.Rect GetLocalElementRect() [instance]
::g::Uno::Rect BasicEffect::GetLocalElementRect()
{
    ::g::Uno::Recti ir = BasicEffect::ConservativelySnapToCoveringIntegers(::g::Uno::Rect__Scale(uPtr(uPtr(Element())->RenderBoundsWithoutEffects())->FlatRect(), uPtr(Element())->AbsoluteZoom()));
    return ::g::Uno::Rect__New1((float)ir.Minimum().X / uPtr(Element())->AbsoluteZoom(), (float)ir.Minimum().Y / uPtr(Element())->AbsoluteZoom(), (float)ir.Maximum().X / uPtr(Element())->AbsoluteZoom(), (float)ir.Maximum().Y / uPtr(Element())->AbsoluteZoom());
}

// internal static Uno.Recti ConservativelySnapToCoveringIntegers(Uno.Rect r) [static]
::g::Uno::Recti BasicEffect::ConservativelySnapToCoveringIntegers(::g::Uno::Rect r)
{
    ::g::Uno::Int2 origin = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Floor2(r.LeftTop()));
    ::g::Uno::Int2 size = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Subtraction2(r.RightBottom(), r.LeftTop()), 0.01f)));
    return ::g::Uno::Recti__New1(origin.X, origin.Y, (origin.X + size.X) + 1, (origin.Y + size.Y) + 1);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/DropShadow.uno
// -------------------------------------------------------------------

// private sealed class DropShadow.Blitter
// {
static void DropShadow__Blitter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    type->SetDependencies(
        ::g::FuseEffects_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(DropShadow__Blitter, Blit_VertexData_c0030eee_7_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(DropShadow__Blitter, Blit_LocalTransform_c0030eee_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(DropShadow__Blitter, Blit_LocalTransform_c0030eee_4_9_3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(DropShadow__Blitter, _draw_c0030eee), 0,
        type, (uintptr_t)&DropShadow__Blitter::_instance_, uFieldFlagsStatic);
}

uType* DropShadow__Blitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DropShadow__Blitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Effects.DropShadow.Blitter", options);
    type->fp_build_ = DropShadow__Blitter_build;
    type->fp_ctor_ = (void*)DropShadow__Blitter__New1_fn;
    return type;
}

// public generated Blitter()
void DropShadow__Blitter__ctor__fn(DropShadow__Blitter* __this)
{
    __this->ctor_();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Element element, Uno.Rect elementRect, float padding, int2 tempSize, texture2D blurTexture, float spreadScale, float2 offset, float4 color)
void DropShadow__Blitter__Blit_fn(DropShadow__Blitter* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect* elementRect, float* padding, ::g::Uno::Int2* tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float* spreadScale, ::g::Uno::Float2* offset, ::g::Uno::Float4* color)
{
    __this->Blit(dc, element, *elementRect, *padding, *tempSize, blurTexture, *spreadScale, *offset, *color);
}

// private generated void init_DrawCalls()
void DropShadow__Blitter__init_DrawCalls_fn(DropShadow__Blitter* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Effects.DropShadow.Blitter get_Instance()
void DropShadow__Blitter__get_Instance_fn(DropShadow__Blitter** __retval)
{
    *__retval = DropShadow__Blitter::Instance();
}

// public generated Blitter New()
void DropShadow__Blitter__New1_fn(DropShadow__Blitter** __retval)
{
    *__retval = DropShadow__Blitter::New1();
}

uSStrong<DropShadow__Blitter*> DropShadow__Blitter::_instance_;

// public generated Blitter() [instance]
void DropShadow__Blitter::ctor_()
{
    init_DrawCalls();
}

// public void Blit(Fuse.DrawContext dc, Fuse.Elements.Element element, Uno.Rect elementRect, float padding, int2 tempSize, texture2D blurTexture, float spreadScale, float2 offset, float4 color) [instance]
void DropShadow__Blitter::Blit(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* element, ::g::Uno::Rect elementRect, float padding, ::g::Uno::Int2 tempSize, ::g::Uno::Graphics::Texture2D* blurTexture, float spreadScale, ::g::Uno::Float2 offset, ::g::Uno::Float4 color)
{
    ::g::Uno::Float4x4 LocalTransform_c0030eee_4_9_4 = ::g::Uno::Matrix::Mul10(Blit_LocalTransform_c0030eee_4_9_2, ::g::Uno::Matrix::Scaling1(::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tempSize.X, (float)tempSize.Y), uPtr(element)->AbsoluteZoom()).X, ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)tempSize.X, (float)tempSize.Y), uPtr(element)->AbsoluteZoom()).Y, 1.0f), Blit_LocalTransform_c0030eee_4_9_3, ::g::Uno::Matrix::Translation(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(elementRect.Minimum(), offset), padding).X, ::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Addition2(elementRect.Minimum(), offset), padding).Y, 0.0f));
    _draw_c0030eee.BlendEnabled(true);
    _draw_c0030eee.DepthTestEnabled(false);
    _draw_c0030eee.CullFace(uPtr(dc)->CullFace());
    _draw_c0030eee.BlendSrcRgb(2);
    _draw_c0030eee.BlendDstRgb(3);
    _draw_c0030eee.BlendDstAlpha(3);
    _draw_c0030eee.Use();
    _draw_c0030eee.Attrib1(0, 2, Blit_VertexData_c0030eee_7_2_1, 8, 0);
    _draw_c0030eee.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    _draw_c0030eee.Uniform(2, spreadScale);
    _draw_c0030eee.Uniform(3, color.W);
    _draw_c0030eee.Uniform6(4, ::g::Uno::Float3__New2(color.X, color.Y, color.Z));
    _draw_c0030eee.Uniform12(5, (element != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_c0030eee_4_9_4, uPtr(element)->WorldTransform()) : LocalTransform_c0030eee_4_9_4);
    _draw_c0030eee.Sampler3(6, blurTexture, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_c0030eee.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance]
void DropShadow__Blitter::init_DrawCalls()
{
    Blit_VertexData_c0030eee_7_2_1 = ::g::Uno::Graphics::VertexBuffer::New3(uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f)), 0);
    Blit_LocalTransform_c0030eee_4_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Blit_LocalTransform_c0030eee_4_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_c0030eee = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::Blitter1d578c84());
}

// public generated Blitter New() [static]
DropShadow__Blitter* DropShadow__Blitter::New1()
{
    DropShadow__Blitter* obj2 = (DropShadow__Blitter*)uNew(DropShadow__Blitter_typeof());
    obj2->ctor_();
    return obj2;
}

// public static Fuse.Effects.DropShadow.Blitter get_Instance() [static]
DropShadow__Blitter* DropShadow__Blitter::Instance()
{
    DropShadow__Blitter* ind1;
    ind1 = DropShadow__Blitter::_instance_;
    return (ind1 != nullptr) ? ind1 : (DropShadow__Blitter*)(DropShadow__Blitter::_instance_ = DropShadow__Blitter::New1());
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/Blur.uno
// -------------------------------------------------------------

// public sealed class Blur
// {
static void Blur_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Common::Blitter_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface6));
    type->SetFields(21,
        ::g::Uno::Float_typeof(), offsetof(Blur, _radius), 0);
}

::g::Fuse::Effects::BasicEffect_type* Blur_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 22;
    options.InterfaceCount = 7;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Blur);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Blur", options);
    type->fp_build_ = Blur_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Effects::Effect*, bool*))Blur__get_Active_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))Blur__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Blur__OnRender_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public override sealed bool get_Active()
void Blur__get_Active_fn(Blur* __this, bool* __retval)
{
    return *__retval = __this->Radius() > 0.0f, void();
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds)
void Blur__ModifyRenderBounds_fn(Blur* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = uPtr(inBounds)->InflateXY(__this->Padding()), void();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect)
void Blur__OnRender_fn(Blur* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Rect paddedRect = ::g::Uno::Rect__Inflate(elementRect_, __this->Padding());
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, paddedRect, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == nullptr)
        return;

    ::g::Uno::Graphics::Framebuffer* blur = uPtr(::g::Fuse::Effects::EffectHelpers::Instance())->Blur(uPtr(original)->ColorBuffer(), dc, __this->Sigma() * uPtr(__this->Element())->AbsoluteZoom());
    ::g::Fuse::FramebufferPool::Release(original);
    uPtr(::g::Fuse::Common::Blitter::Singleton())->Blit1(uPtr(blur)->ColorBuffer(), ::g::Uno::Rect__New2(::g::Uno::Float2__op_Subtraction1(elementRect_.Minimum(), __this->Padding()), paddedRect.Size()), uPtr(dc)->GetLocalToClipTransform(__this->Element()), 1.0f, true, 0);
    ::g::Fuse::FramebufferPool::Release(blur);
}

// internal float get_Padding()
void Blur__get_Padding_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Padding();
}

// public float get_Radius()
void Blur__get_Radius_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value)
void Blur__set_Radius_fn(Blur* __this, float* value)
{
    __this->Radius(*value);
}

// internal float get_Sigma()
void Blur__get_Sigma_fn(Blur* __this, float* __retval)
{
    *__retval = __this->Sigma();
}

// internal float get_Padding() [instance]
float Blur::Padding()
{
    return ::g::Uno::Math::Ceil1((Sigma() * 3.0f) * uPtr(Element())->AbsoluteZoom()) / uPtr(Element())->AbsoluteZoom();
}

// public float get_Radius() [instance]
float Blur::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance]
void Blur::Radius(float value)
{
    if (_radius != value)
    {
        _radius = value;
        OnRenderingChanged();
        OnRenderBoundsChanged();
    }
}

// internal float get_Sigma() [instance]
float Blur::Sigma()
{
    return ::g::Uno::Math::Max1(Radius(), 1e-05f);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/Desaturate.uno
// -------------------------------------------------------------------

// public sealed class Desaturate
// {
static void Desaturate_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface6));
    type->SetFields(21,
        ::g::Uno::Float_typeof(), offsetof(Desaturate, _amount), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Desaturate, OnRender_VertexData_b556a599_7_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Desaturate, OnRender_LocalTransform_b556a599_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Desaturate, OnRender_LocalTransform_b556a599_4_9_3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Desaturate, _draw_b556a599), 0);
}

::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Desaturate);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Desaturate", options);
    type->fp_build_ = Desaturate_build;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Desaturate__OnRender_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public float get_Amount()
void Desaturate__get_Amount_fn(Desaturate* __this, float* __retval)
{
    *__retval = __this->Amount();
}

// public void set_Amount(float value)
void Desaturate__set_Amount_fn(Desaturate* __this, float* value)
{
    __this->Amount(*value);
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect)
void Desaturate__OnRender_fn(Desaturate* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == nullptr)
        return;

    ::g::Uno::Float4x4 LocalTransform_b556a599_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_b556a599_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_b556a599_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_b556a599.BlendEnabled(true);
    __this->_draw_b556a599.DepthTestEnabled(false);
    __this->_draw_b556a599.CullFace(uPtr(dc)->CullFace());
    __this->_draw_b556a599.BlendSrcRgb(2);
    __this->_draw_b556a599.BlendDstRgb(3);
    __this->_draw_b556a599.BlendDstAlpha(3);
    __this->_draw_b556a599.Use();
    __this->_draw_b556a599.Attrib1(0, 2, __this->OnRender_VertexData_b556a599_7_2_1, 8, 0);
    __this->_draw_b556a599.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_b556a599.Uniform(2, __this->Amount());
    __this->_draw_b556a599.Uniform12(3, (__this->Element() != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_b556a599_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_b556a599_4_9_4);
    __this->_draw_b556a599.Sampler3(4, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_b556a599.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public float get_Amount() [instance]
float Desaturate::Amount()
{
    return _amount;
}

// public void set_Amount(float value) [instance]
void Desaturate::Amount(float value)
{
    if (_amount != value)
    {
        _amount = value;
        OnRenderingChanged();
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/DropShadow.uno
// -------------------------------------------------------------------

// public sealed class DropShadow
// {
static void DropShadow_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface6));
    type->SetFields(21,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _size), 0,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _angle), 0,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _distance), 0,
        ::g::Uno::Float_typeof(), offsetof(DropShadow, _spread), 0,
        ::g::Uno::Float4_typeof(), offsetof(DropShadow, _color), 0);
}

::g::Fuse::Effects::BasicEffect_type* DropShadow_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DropShadow);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.DropShadow", options);
    type->fp_build_ = DropShadow_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Effects::Effect*, bool*))DropShadow__get_Active_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))DropShadow__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))DropShadow__OnRender_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public override sealed bool get_Active()
void DropShadow__get_Active_fn(DropShadow* __this, bool* __retval)
{
    return *__retval = __this->Color().W > 0.0f, void();
}

// public float get_Angle()
void DropShadow__get_Angle_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value)
void DropShadow__set_Angle_fn(DropShadow* __this, float* value)
{
    __this->Angle(*value);
}

// public float4 get_Color()
void DropShadow__get_Color_fn(DropShadow* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void DropShadow__set_Color_fn(DropShadow* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_Distance()
void DropShadow__get_Distance_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Distance();
}

// public void set_Distance(float value)
void DropShadow__set_Distance_fn(DropShadow* __this, float* value)
{
    __this->Distance(*value);
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds)
void DropShadow__ModifyRenderBounds_fn(DropShadow* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    ::g::Fuse::VisualBounds* r = uPtr(uPtr(inBounds)->InflateXY(__this->Padding()))->Translate(::g::Uno::Float3__New4(__this->Offset(), 0.0f));
    return *__retval = inBounds->Merge(r, nullptr), void();
}

// private float2 get_Offset()
void DropShadow__get_Offset_fn(DropShadow* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Offset();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect)
void DropShadow__OnRender_fn(DropShadow* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* temp = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__New1(__this->Padding()));

    if (temp == nullptr)
        return;

    ::g::Uno::Graphics::Framebuffer* blur = uPtr(::g::Fuse::Effects::EffectHelpers::Instance())->Blur(uPtr(temp)->ColorBuffer(), dc, __this->Sigma() * uPtr(__this->Element())->AbsoluteZoom());
    float spreadScale = ::g::Uno::Math::Pow1(1.0f / ::g::Uno::Math::Max1(1.0f - __this->Spread(), 1e-10f), 2.0f);
    uPtr(DropShadow__Blitter::Instance())->Blit(dc, __this->Element(), elementRect_, __this->Padding(), temp->Size(), uPtr(blur)->ColorBuffer(), spreadScale, __this->Offset(), __this->Color());
    ::g::Fuse::FramebufferPool::Release(blur);
    ::g::Fuse::FramebufferPool::Release(temp);
}

// internal float get_Padding()
void DropShadow__get_Padding_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Padding();
}

// private float get_Radius()
void DropShadow__get_Radius_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// internal float get_Sigma()
void DropShadow__get_Sigma_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Sigma();
}

// public float get_Size()
void DropShadow__get_Size_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Size();
}

// public void set_Size(float value)
void DropShadow__set_Size_fn(DropShadow* __this, float* value)
{
    __this->Size(*value);
}

// public float get_Spread()
void DropShadow__get_Spread_fn(DropShadow* __this, float* __retval)
{
    *__retval = __this->Spread();
}

// public void set_Spread(float value)
void DropShadow__set_Spread_fn(DropShadow* __this, float* value)
{
    __this->Spread(*value);
}

// public float get_Angle() [instance]
float DropShadow::Angle()
{
    return _angle;
}

// public void set_Angle(float value) [instance]
void DropShadow::Angle(float value)
{
    if (_angle != value)
    {
        _angle = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// public float4 get_Color() [instance]
::g::Uno::Float4 DropShadow::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance]
void DropShadow::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        bool wasActive = Active();
        _color = value;

        if (wasActive || Active())
            OnRenderingChanged();
    }
}

// public float get_Distance() [instance]
float DropShadow::Distance()
{
    return _distance;
}

// public void set_Distance(float value) [instance]
void DropShadow::Distance(float value)
{
    if (_distance != value)
    {
        _distance = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// private float2 get_Offset() [instance]
::g::Uno::Float2 DropShadow::Offset()
{
    float th = Angle() * 0.0174532924f;
    return ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__New2(-::g::Uno::Math::Cos1(th), ::g::Uno::Math::Sin1(th)), Distance());
}

// internal float get_Padding() [instance]
float DropShadow::Padding()
{
    return ::g::Uno::Math::Ceil1((Sigma() * 3.0f) * uPtr(Element())->AbsoluteZoom()) / uPtr(Element())->AbsoluteZoom();
}

// private float get_Radius() [instance]
float DropShadow::Radius()
{
    return Size() / 2.0f;
}

// internal float get_Sigma() [instance]
float DropShadow::Sigma()
{
    return ::g::Uno::Math::Max1(Radius(), 1e-05f);
}

// public float get_Size() [instance]
float DropShadow::Size()
{
    return _size;
}

// public void set_Size(float value) [instance]
void DropShadow::Size(float value)
{
    if (_size != value)
    {
        _size = value;

        if (Active())
        {
            OnRenderingChanged();
            OnRenderBoundsChanged();
        }
    }
}

// public float get_Spread() [instance]
float DropShadow::Spread()
{
    return _spread;
}

// public void set_Spread(float value) [instance]
void DropShadow::Spread(float value)
{
    value = ::g::Uno::Math::Clamp1(value, 0.0f, 1.0f);

    if (_spread != value)
    {
        bool wasActive = Active();
        _spread = value;

        if (wasActive || Active())
            OnRenderingChanged();
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/Duotone.uno
// ----------------------------------------------------------------

// public sealed class Duotone
// {
static void Duotone_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface6));
    type->SetFields(21,
        ::g::Uno::Float_typeof(), offsetof(Duotone, _amount), 0,
        ::g::Uno::Float3_typeof(), offsetof(Duotone, _light), 0,
        ::g::Uno::Float3_typeof(), offsetof(Duotone, _shadow), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Duotone, OnRender_VertexData_3c61d4eb_7_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Duotone, OnRender_LocalTransform_3c61d4eb_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Duotone, OnRender_LocalTransform_3c61d4eb_4_9_3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Duotone, _draw_3c61d4eb), 0);
}

::g::Fuse::Effects::BasicEffect_type* Duotone_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Duotone);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Duotone", options);
    type->fp_build_ = Duotone_build;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Duotone__OnRender_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public float get_Amount()
void Duotone__get_Amount_fn(Duotone* __this, float* __retval)
{
    *__retval = __this->Amount();
}

// public void set_Amount(float value)
void Duotone__set_Amount_fn(Duotone* __this, float* value)
{
    __this->Amount(*value);
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect)
void Duotone__OnRender_fn(Duotone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == nullptr)
        return;

    ::g::Uno::Float4x4 LocalTransform_3c61d4eb_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_3c61d4eb_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_3c61d4eb_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_3c61d4eb.BlendEnabled(true);
    __this->_draw_3c61d4eb.DepthTestEnabled(false);
    __this->_draw_3c61d4eb.CullFace(uPtr(dc)->CullFace());
    __this->_draw_3c61d4eb.BlendSrcRgb(2);
    __this->_draw_3c61d4eb.BlendDstRgb(3);
    __this->_draw_3c61d4eb.BlendDstAlpha(3);
    __this->_draw_3c61d4eb.Use();
    __this->_draw_3c61d4eb.Attrib1(0, 2, __this->OnRender_VertexData_3c61d4eb_7_2_1, 8, 0);
    __this->_draw_3c61d4eb.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_3c61d4eb.Uniform6(2, __this->_shadow);
    __this->_draw_3c61d4eb.Uniform6(3, __this->_light);
    __this->_draw_3c61d4eb.Uniform(4, __this->Amount());
    __this->_draw_3c61d4eb.Uniform12(5, (__this->Element() != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_3c61d4eb_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_3c61d4eb_4_9_4);
    __this->_draw_3c61d4eb.Sampler3(6, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_3c61d4eb.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public float get_Amount() [instance]
float Duotone::Amount()
{
    return _amount;
}

// public void set_Amount(float value) [instance]
void Duotone::Amount(float value)
{
    if (_amount != value)
    {
        _amount = value;
        OnRenderingChanged();
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Effects/Effect.uno
// ------------------------------------------------------------------------

// public abstract class Effect
// {
static void Effect_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Effects can only be parented to Elements");
    ::TYPES[2] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(type, nullptr);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Effect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Effect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Effect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Effect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Effect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Effect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Effect_type, interface6));
    type->SetFields(17,
        ::g::Fuse::Effects::EffectType_typeof(), offsetof(Effect, _effectType), 0,
        ::TYPES[2/*Fuse.Elements.Element*/], offsetof(Effect, _Element), 0,
        ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/], offsetof(Effect, RenderBoundsChanged1), 0,
        ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/], offsetof(Effect, RenderingChanged1), 0);
}

Effect_type* Effect_typeof()
{
    static uSStrong<Effect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Node_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(Effect);
    options.TypeSize = sizeof(Effect_type);
    type = (Effect_type*)uClassType::New("Fuse.Effects.Effect", options);
    type->fp_build_ = Effect_build;
    type->fp_get_Active = Effect__get_Active_fn;
    type->fp_ModifyRenderBounds = Effect__ModifyRenderBounds_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Effect__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Effect__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public virtual bool get_Active()
void Effect__get_Active_fn(Effect* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public generated Fuse.Elements.Element get_Element()
void Effect__get_Element_fn(Effect* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Element();
}

// private generated void set_Element(Fuse.Elements.Element value)
void Effect__set_Element_fn(Effect* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Element(value);
}

// public virtual Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds)
void Effect__ModifyRenderBounds_fn(Effect* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = inBounds, void();
}

// protected void OnRenderBoundsChanged()
void Effect__OnRenderBoundsChanged_fn(Effect* __this)
{
    __this->OnRenderBoundsChanged();
}

// protected void OnRenderingChanged()
void Effect__OnRenderingChanged_fn(Effect* __this)
{
    __this->OnRenderingChanged();
}

// protected override void OnRooted()
void Effect__OnRooted_fn(Effect* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[2/*Fuse.Elements.Element*/]);

    if (elm == nullptr)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Effects can...*/]));

    __this->Element(elm);
    uPtr(__this->Element())->AddDrawCost(3.0);
}

// protected override void OnUnrooted()
void Effect__OnUnrooted_fn(Effect* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    uPtr(__this->Element())->RemoveDrawCost(3.0);
    __this->Element(nullptr);
}

// public generated void add_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value)
void Effect__add_RenderBoundsChanged_fn(Effect* __this, uDelegate* value)
{
    __this->add_RenderBoundsChanged(value);
}

// public generated void remove_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value)
void Effect__remove_RenderBoundsChanged_fn(Effect* __this, uDelegate* value)
{
    __this->remove_RenderBoundsChanged(value);
}

// public generated void add_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value)
void Effect__add_RenderingChanged_fn(Effect* __this, uDelegate* value)
{
    __this->add_RenderingChanged(value);
}

// public generated void remove_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value)
void Effect__remove_RenderingChanged_fn(Effect* __this, uDelegate* value)
{
    __this->remove_RenderingChanged(value);
}

// public Fuse.Effects.EffectType get_Type()
void Effect__get_Type_fn(Effect* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public generated Fuse.Elements.Element get_Element() [instance]
::g::Fuse::Elements::Element* Effect::Element()
{
    return _Element;
}

// private generated void set_Element(Fuse.Elements.Element value) [instance]
void Effect::Element(::g::Fuse::Elements::Element* value)
{
    _Element = value;
}

// protected void OnRenderBoundsChanged() [instance]
void Effect::OnRenderBoundsChanged()
{
    if (::g::Uno::Delegate::op_Inequality(RenderBoundsChanged1, nullptr))
        uPtr(RenderBoundsChanged1)->InvokeVoid(this);
}

// protected void OnRenderingChanged() [instance]
void Effect::OnRenderingChanged()
{
    if (::g::Uno::Delegate::op_Inequality(RenderingChanged1, nullptr))
        uPtr(RenderingChanged1)->InvokeVoid(this);
}

// public generated void add_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) [instance]
void Effect::add_RenderBoundsChanged(uDelegate* value)
{
    RenderBoundsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderBoundsChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void remove_RenderBoundsChanged(Uno.Action<Fuse.Effects.Effect> value) [instance]
void Effect::remove_RenderBoundsChanged(uDelegate* value)
{
    RenderBoundsChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderBoundsChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void add_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) [instance]
void Effect::add_RenderingChanged(uDelegate* value)
{
    RenderingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(RenderingChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public generated void remove_RenderingChanged(Uno.Action<Fuse.Effects.Effect> value) [instance]
void Effect::remove_RenderingChanged(uDelegate* value)
{
    RenderingChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(RenderingChanged1, value), ::TYPES[3/*Uno.Action<Fuse.Effects.Effect>*/]);
}

// public Fuse.Effects.EffectType get_Type() [instance]
int32_t Effect::Type()
{
    return _effectType;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/EffectHelpers.Blur.uno
// ---------------------------------------------------------------------------

// internal partial sealed class EffectHelpers
// {
static void EffectHelpers_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[1] = ::g::Uno::Float2_typeof()->Array();
    ::TYPES[5] = ::g::Uno::UShort_typeof()->Array();
    type->SetDependencies(
        ::g::FuseEffects_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, ResampleBilinear_VertexData_92c4812c_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, ResampleBilinear_VertexData_92c4812c_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian5tap_VertexData_29a0fd93_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian5tap_VertexData_29a0fd93_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian9tap_VertexData_a023b028_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, ResampleGaussian9tap_VertexData_a023b028_2_5_3), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(EffectHelpers, GaussianBlurSeparable_VertexData_b5e3eac2_2_5_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(EffectHelpers, GaussianBlurSeparable_VertexData_b5e3eac2_2_5_3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_92c4812c), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_29a0fd93), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_a023b028), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(EffectHelpers, _draw_b5e3eac2), 0,
        type, (uintptr_t)&EffectHelpers::_instance_, uFieldFlagsStatic);
}

uType* EffectHelpers_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 13;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(EffectHelpers);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Effects.EffectHelpers", options);
    type->fp_build_ = EffectHelpers_build;
    type->fp_ctor_ = (void*)EffectHelpers__New1_fn;
    return type;
}

// public generated EffectHelpers()
void EffectHelpers__ctor__fn(EffectHelpers* __this)
{
    __this->ctor_();
}

// public framebuffer Blur(texture2D original, Fuse.DrawContext dc, float sigma)
void EffectHelpers__Blur_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float* sigma, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->Blur(original, dc, *sigma);
}

// private framebuffer BlurHorizontal(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples)
void EffectHelpers__BlurHorizontal_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int32_t* samples, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->BlurHorizontal(dc, *size, tex, *sigma, *samples);
}

// private framebuffer BlurVertical(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples)
void EffectHelpers__BlurVertical_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Int2* size, ::g::Uno::Graphics::Texture2D* tex, float* sigma, int32_t* samples, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->BlurVertical(dc, *size, tex, *sigma, *samples);
}

// private void GaussianBlurSeparable(texture2D tex, float2 dir, float sigma, int samples)
void EffectHelpers__GaussianBlurSeparable_fn(EffectHelpers* __this, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2* dir, float* sigma, int32_t* samples)
{
    __this->GaussianBlurSeparable(tex, *dir, *sigma, *samples);
}

// private generated void init_DrawCalls()
void EffectHelpers__init_DrawCalls_fn(EffectHelpers* __this)
{
    __this->init_DrawCalls();
}

// public static Fuse.Effects.EffectHelpers get_Instance()
void EffectHelpers__get_Instance_fn(EffectHelpers** __retval)
{
    *__retval = EffectHelpers::Instance();
}

// public generated EffectHelpers New()
void EffectHelpers__New1_fn(EffectHelpers** __retval)
{
    *__retval = EffectHelpers::New1();
}

// private framebuffer ResampleGaussian5tap(Fuse.DrawContext dc, texture2D tex, int2 size)
void EffectHelpers__ResampleGaussian5tap_fn(EffectHelpers* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2* size, ::g::Uno::Graphics::Framebuffer** __retval)
{
    *__retval = __this->ResampleGaussian5tap(dc, tex, *size);
}

uSStrong<EffectHelpers*> EffectHelpers::_instance_;

// public generated EffectHelpers() [instance]
void EffectHelpers::ctor_()
{
    init_DrawCalls();
}

// public framebuffer Blur(texture2D original, Fuse.DrawContext dc, float sigma) [instance]
::g::Uno::Graphics::Framebuffer* EffectHelpers::Blur(::g::Uno::Graphics::Texture2D* original, ::g::Fuse::DrawContext* dc, float sigma)
{
    int32_t maxSamples = 3;
    ::g::Uno::Graphics::Texture2D* src = original;
    ::g::Uno::Graphics::Framebuffer* fb = nullptr;
    ::g::Uno::Float2 sigmas = ::g::Uno::Float2__New1(sigma);

    while (((3.0f * sigmas.X) > (float)maxSamples) && ((3.0f * sigmas.Y) > (float)maxSamples))
    {
        ::g::Uno::Int2 newSize = ::g::Uno::Int2__New2(::g::Uno::Math::Max8(uPtr(src)->Size().X / 2, 1), ::g::Uno::Math::Max8(uPtr(src)->Size().Y / 2, 1));
        ::g::Uno::Graphics::Framebuffer* newFb = ResampleGaussian5tap(dc, src, newSize);

        if (fb != nullptr)
            ::g::Fuse::FramebufferPool::Release(fb);

        sigmas = ::g::Uno::Math::Sqrt2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply2(sigmas, sigmas), 1.0f));
        sigmas = ::g::Uno::Float2__op_Multiply2(sigmas, ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New2((float)newSize.X, (float)newSize.Y), ::g::Uno::Float2__op_Implicit1(src->Size())));
        fb = newFb;
        src = uPtr(newFb)->ColorBuffer();
        maxSamples = maxSamples * 2;
    }

    ::g::Uno::Int2 samples = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Max2(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Multiply(3.0f, sigmas)), 1.0f));
    ::g::Uno::Graphics::Framebuffer* tmp = BlurHorizontal(dc, uPtr(src)->Size(), src, sigmas.X, samples.X);

    if (fb != nullptr)
        ::g::Fuse::FramebufferPool::Release(fb);

    ::g::Uno::Graphics::Framebuffer* blur = BlurVertical(dc, uPtr(uPtr(tmp)->ColorBuffer())->Size(), uPtr(tmp)->ColorBuffer(), sigmas.Y, samples.Y);
    ::g::Fuse::FramebufferPool::Release(tmp);
    return blur;
}

// private framebuffer BlurHorizontal(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) [instance]
::g::Uno::Graphics::Framebuffer* EffectHelpers::BlurHorizontal(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int32_t samples)
{
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    GaussianBlurSeparable(tex, ::g::Uno::Float2__New2(1.0f, 0.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

// private framebuffer BlurVertical(Fuse.DrawContext dc, int2 size, texture2D tex, float sigma, int samples) [instance]
::g::Uno::Graphics::Framebuffer* EffectHelpers::BlurVertical(::g::Fuse::DrawContext* dc, ::g::Uno::Int2 size, ::g::Uno::Graphics::Texture2D* tex, float sigma, int32_t samples)
{
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    GaussianBlurSeparable(tex, ::g::Uno::Float2__New2(0.0f, 1.0f), sigma, samples);
    dc->PopRenderTarget();
    return fb;
}

// private void GaussianBlurSeparable(texture2D tex, float2 dir, float sigma, int samples) [instance]
void EffectHelpers::GaussianBlurSeparable(::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Float2 dir, float sigma, int32_t samples)
{
    float sigmaSquared = sigma * sigma;
    float scale = 1.0f / (float)::g::Uno::Math::Sqrt(6.2831853071795862 * (double)sigmaSquared);
    uArray* weights = uArray::New(::TYPES[4/*float[]*/], 1 + samples);
    uArray* offsets = uArray::New(::TYPES[1/*float2[]*/], samples);
    float total = weights->Item<float>(0) = scale;

    for (int32_t i = 0; i < samples; ++i)
    {
        int32_t offset1 = (i * 2) + 1;
        int32_t offset2 = (i * 2) + 2;
        float weight1 = scale * ::g::Uno::Math::Exp1((float)(-offset1 * offset1) / (2.0f * sigmaSquared));
        float weight2 = scale * ::g::Uno::Math::Exp1((float)(-offset2 * offset2) / (2.0f * sigmaSquared));
        float weight = weight1 + weight2;
        float offset = (((float)offset1 * weight1) + ((float)offset2 * weight2)) / weight;
        uPtr(weights)->Item<float>(i + 1) = weight;
        uPtr(offsets)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Float2__op_Multiply2(dir, ::g::Uno::Float2__New2(offset / (float)uPtr(tex)->Size().X, offset / (float)uPtr(tex)->Size().Y));
        total = total + (2.0f * weight);
    }

    for (int32_t i1 = 0; i1 < (samples + 1); ++i1)
        uPtr(weights)->Item<float>(i1) = uPtr(weights)->Item<float>(i1) / total;

    _draw_b5e3eac2.DepthTestEnabled(false);
    _draw_b5e3eac2.Const1(0, uPtr(weights)->Length());
    _draw_b5e3eac2.Const1(1, samples);
    _draw_b5e3eac2.Const1(2, uPtr(offsets)->Length());
    _draw_b5e3eac2.Use();
    _draw_b5e3eac2.Attrib1(3, 2, GaussianBlurSeparable_VertexData_b5e3eac2_2_5_3, 8, 0);
    _draw_b5e3eac2.Uniform1(4, weights);
    _draw_b5e3eac2.Uniform3(5, offsets);
    _draw_b5e3eac2.Sampler3(6, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_b5e3eac2.Draw(6, 2, GaussianBlurSeparable_VertexData_b5e3eac2_2_5_2);
}

// private generated void init_DrawCalls() [instance]
void EffectHelpers::init_DrawCalls()
{
    uArray* Vertices_92c4812c_2_2_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[1/*float2[]*/], 4, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 1.0f));
    uArray* Indices_92c4812c_2_3_1 = uArray::Init<int32_t>(::TYPES[5/*ushort[]*/], 6, 0, 1, 2, 2, 3, 0);
    ResampleBilinear_VertexData_92c4812c_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New4(Indices_92c4812c_2_3_1, 0);
    ResampleBilinear_VertexData_92c4812c_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_92c4812c_2_2_0, 0);
    ResampleGaussian5tap_VertexData_29a0fd93_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New4(Indices_92c4812c_2_3_1, 0);
    ResampleGaussian5tap_VertexData_29a0fd93_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_92c4812c_2_2_0, 0);
    ResampleGaussian9tap_VertexData_a023b028_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New4(Indices_92c4812c_2_3_1, 0);
    ResampleGaussian9tap_VertexData_a023b028_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_92c4812c_2_2_0, 0);
    GaussianBlurSeparable_VertexData_b5e3eac2_2_5_2 = ::g::Uno::Graphics::IndexBuffer::New4(Indices_92c4812c_2_3_1, 0);
    GaussianBlurSeparable_VertexData_b5e3eac2_2_5_3 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_92c4812c_2_2_0, 0);
    _draw_92c4812c = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers074a19b5());
    _draw_29a0fd93 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers153da7bd());
    _draw_a023b028 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers1a4b9670());
    _draw_b5e3eac2 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseEffects_bundle::EffectHelpers97b71f66());
}

// private framebuffer ResampleGaussian5tap(Fuse.DrawContext dc, texture2D tex, int2 size) [instance]
::g::Uno::Graphics::Framebuffer* EffectHelpers::ResampleGaussian5tap(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Int2 size)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Uno::Float4 ind4;
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
    uPtr(dc)->PushRenderTarget(fb);
    dc->Clear(::g::Uno::Float4__New1(0.0f), 1.0f);
    ::g::Uno::Float2 diagonalOffsets = ::g::Uno::Float2__New2(0.384289622f, 1.20486164f);
    ::g::Uno::Int2 texSize = uPtr(tex)->Size();
    float centerWeight = 0.162102818f;
    float diagonalWeight = 0.20850347f;
    _draw_29a0fd93.DepthTestEnabled(false);
    _draw_29a0fd93.Use();
    _draw_29a0fd93.Attrib1(0, 2, ResampleGaussian5tap_VertexData_29a0fd93_2_5_3, 8, 0);
    _draw_29a0fd93.Uniform(1, centerWeight);
    _draw_29a0fd93.Uniform2(2, ::g::Uno::Float2__op_Division2((ind1 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_29a0fd93.Uniform(3, diagonalWeight);
    _draw_29a0fd93.Uniform2(4, ::g::Uno::Float2__op_Division2((ind2 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind2.W, ind2.X)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_29a0fd93.Uniform2(5, ::g::Uno::Float2__op_Division2((ind3 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind3.Z, ind3.W)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_29a0fd93.Uniform2(6, ::g::Uno::Float2__op_Division2((ind4 = ::g::Uno::Float4__New7(::g::Uno::Float2__op_UnaryNegation(diagonalOffsets), diagonalOffsets), ::g::Uno::Float2__New2(ind4.Y, ind4.Z)), ::g::Uno::Float2__op_Implicit1(texSize)));
    _draw_29a0fd93.Sampler3(7, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_29a0fd93.Draw(6, 2, ResampleGaussian5tap_VertexData_29a0fd93_2_5_2);
    dc->PopRenderTarget();
    return fb;
}

// public generated EffectHelpers New() [static]
EffectHelpers* EffectHelpers::New1()
{
    EffectHelpers* obj12 = (EffectHelpers*)uNew(EffectHelpers_typeof());
    obj12->ctor_();
    return obj12;
}

// public static Fuse.Effects.EffectHelpers get_Instance() [static]
EffectHelpers* EffectHelpers::Instance()
{
    EffectHelpers* ind11;
    ind11 = EffectHelpers::_instance_;
    return (ind11 != nullptr) ? ind11 : (EffectHelpers*)(EffectHelpers::_instance_ = EffectHelpers::New1());
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Effects/Effect.uno
// ------------------------------------------------------------------------

// public enum EffectType
uEnumType* EffectType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Effects.EffectType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Underlay", 0LL,
        "Composition", 1LL,
        "Overlay", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/Behaviors/Glass.uno
// ------------------------------------------------------------------------------------

// internal sealed class FrostedGlass
// {
static void FrostedGlass_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface6));
    type->SetFields(21,
        ::g::Uno::Float3_typeof(), offsetof(FrostedGlass, _lumaRange), 0,
        ::g::Uno::Float_typeof(), offsetof(FrostedGlass, _radius), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(FrostedGlass, OnRender_VertexData_dae4f2a4_7_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrostedGlass, OnRender_LocalTransform_dae4f2a4_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(FrostedGlass, OnRender_LocalTransform_dae4f2a4_4_9_3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(FrostedGlass, _draw_dae4f2a4), 0,
        ::g::Fuse::Elements::Element_typeof(), offsetof(FrostedGlass, _Background), 0);
}

::g::Fuse::Effects::BasicEffect_type* FrostedGlass_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FrostedGlass);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.FrostedGlass", options);
    type->fp_build_ = FrostedGlass_build;
    type->fp_get_Active = (void(*)(::g::Fuse::Effects::Effect*, bool*))FrostedGlass__get_Active_fn;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))FrostedGlass__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))FrostedGlass__OnRender_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public override sealed bool get_Active()
void FrostedGlass__get_Active_fn(FrostedGlass* __this, bool* __retval)
{
    return *__retval = __this->Radius() > 0.0f, void();
}

// public generated Fuse.Elements.Element get_Background()
void FrostedGlass__get_Background_fn(FrostedGlass* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->Background();
}

// public generated void set_Background(Fuse.Elements.Element value)
void FrostedGlass__set_Background_fn(FrostedGlass* __this, ::g::Fuse::Elements::Element* value)
{
    __this->Background(value);
}

// public float3 get_LumaRange()
void FrostedGlass__get_LumaRange_fn(FrostedGlass* __this, ::g::Uno::Float3* __retval)
{
    *__retval = __this->LumaRange();
}

// public void set_LumaRange(float3 value)
void FrostedGlass__set_LumaRange_fn(FrostedGlass* __this, ::g::Uno::Float3* value)
{
    __this->LumaRange(*value);
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds)
void FrostedGlass__ModifyRenderBounds_fn(FrostedGlass* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = uPtr(inBounds)->InflateXY(__this->Padding()), void();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect)
void FrostedGlass__OnRender_fn(FrostedGlass* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Fuse::Elements::Element* bg = __this->Background();
    ::g::Uno::Rect paddedRect = elementRect_;
    ::g::Uno::Float3 pe = uPtr(__this->Element())->WorldPosition();
    ::g::Uno::Float3 pb = uPtr(bg)->WorldPosition();
    float left = (paddedRect.Left + pe.X) - pb.X;
    float top = (paddedRect.Top + pe.Y) - pb.Y;
    float bottom = top + paddedRect.Height();
    float right = left + paddedRect.Width();
    paddedRect = ::g::Uno::Rect__New1(left, top, right, bottom);
    ::g::Uno::Graphics::Framebuffer* blurRegion = bg->CaptureRegion(dc, paddedRect, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (blurRegion == nullptr)
        return;

    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__New1(0.0f));

    if (original == nullptr)
        return;

    ::g::Uno::Graphics::Framebuffer* blur = uPtr(::g::Fuse::Effects::EffectHelpers::Instance())->Blur(uPtr(blurRegion)->ColorBuffer(), dc, __this->Sigma() * bg->AbsoluteZoom());
    ::g::Fuse::FramebufferPool::Release(blurRegion);
    ::g::Uno::Float4x4 LocalTransform_dae4f2a4_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_dae4f2a4_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_dae4f2a4_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_dae4f2a4.BlendEnabled(true);
    __this->_draw_dae4f2a4.DepthTestEnabled(false);
    __this->_draw_dae4f2a4.CullFace(uPtr(dc)->CullFace());
    __this->_draw_dae4f2a4.BlendSrcAlpha(7);
    __this->_draw_dae4f2a4.BlendDstRgb(3);
    __this->_draw_dae4f2a4.Use();
    __this->_draw_dae4f2a4.Attrib1(0, 2, __this->OnRender_VertexData_dae4f2a4_7_2_1, 8, 0);
    __this->_draw_dae4f2a4.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_dae4f2a4.Uniform10(2, ::g::Uno::Float4__New8(__this->LumaRange(), 1.0f));
    __this->_draw_dae4f2a4.Uniform12(3, (__this->Element() != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_dae4f2a4_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_dae4f2a4_4_9_4);
    __this->_draw_dae4f2a4.Sampler3(4, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_dae4f2a4.Sampler3(5, uPtr(blur)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_dae4f2a4.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
    ::g::Fuse::FramebufferPool::Release(blurRegion);
    ::g::Fuse::FramebufferPool::Release(blur);
    original = nullptr;
    blurRegion = nullptr;
    blur = nullptr;
}

// internal float get_Padding()
void FrostedGlass__get_Padding_fn(FrostedGlass* __this, float* __retval)
{
    *__retval = __this->Padding();
}

// public float get_Radius()
void FrostedGlass__get_Radius_fn(FrostedGlass* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value)
void FrostedGlass__set_Radius_fn(FrostedGlass* __this, float* value)
{
    __this->Radius(*value);
}

// internal float get_Sigma()
void FrostedGlass__get_Sigma_fn(FrostedGlass* __this, float* __retval)
{
    *__retval = __this->Sigma();
}

// public generated Fuse.Elements.Element get_Background() [instance]
::g::Fuse::Elements::Element* FrostedGlass::Background()
{
    return _Background;
}

// public generated void set_Background(Fuse.Elements.Element value) [instance]
void FrostedGlass::Background(::g::Fuse::Elements::Element* value)
{
    _Background = value;
}

// public float3 get_LumaRange() [instance]
::g::Uno::Float3 FrostedGlass::LumaRange()
{
    return _lumaRange;
}

// public void set_LumaRange(float3 value) [instance]
void FrostedGlass::LumaRange(::g::Uno::Float3 value)
{
    if (::g::Uno::Float3__op_Inequality(_lumaRange, value))
    {
        _lumaRange = value;
        OnRenderingChanged();
        OnRenderBoundsChanged();
    }
}

// internal float get_Padding() [instance]
float FrostedGlass::Padding()
{
    return 0.0f;
}

// public float get_Radius() [instance]
float FrostedGlass::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance]
void FrostedGlass::Radius(float value)
{
    if (_radius != value)
    {
        _radius = value;
        OnRenderingChanged();
        OnRenderBoundsChanged();
    }
}

// internal float get_Sigma() [instance]
float FrostedGlass::Sigma()
{
    return ::g::Uno::Math::Max1(Radius(), 1e-05f);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/Halftone.uno
// -----------------------------------------------------------------

// public sealed class Halftone
// {
static void Halftone_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::IRenderViewport_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Effects::BasicEffect_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Effects::BasicEffect_type, interface6));
    type->SetFields(21,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _spacing), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _intensity), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _smoothness), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _dotTint), 0,
        ::g::Uno::Float_typeof(), offsetof(Halftone, _paperTint), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Halftone, OnRender_VertexData_5200158f_7_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Halftone, OnRender_LocalTransform_5200158f_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Halftone, OnRender_LocalTransform_5200158f_4_9_3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Halftone, _draw_5200158f), 0);
}

::g::Fuse::Effects::BasicEffect_type* Halftone_typeof()
{
    static uSStrong< ::g::Fuse::Effects::BasicEffect_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 30;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Halftone);
    options.TypeSize = sizeof(::g::Fuse::Effects::BasicEffect_type);
    type = (::g::Fuse::Effects::BasicEffect_type*)uClassType::New("Fuse.Effects.Halftone", options);
    type->fp_build_ = Halftone_build;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Halftone__OnRender_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public float get_DotTint()
void Halftone__get_DotTint_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->DotTint();
}

// public void set_DotTint(float value)
void Halftone__set_DotTint_fn(Halftone* __this, float* value)
{
    __this->DotTint(*value);
}

// public float get_Intensity()
void Halftone__get_Intensity_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Intensity();
}

// public void set_Intensity(float value)
void Halftone__set_Intensity_fn(Halftone* __this, float* value)
{
    __this->Intensity(*value);
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect)
void Halftone__OnRender_fn(Halftone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__op_Implicit1(::g::Uno::Int2__New1(0)));

    if (original == nullptr)
        return;

    float tSpacing = __this->Spacing();
    float angle = 0.7853982f;
    ::g::Uno::Float2x2 rot = ::g::Uno::Float2x2__New1(::g::Uno::Math::Cos1(angle), ::g::Uno::Math::Sin1(angle), -::g::Uno::Math::Sin1(angle), ::g::Uno::Math::Cos1(angle));
    ::g::Uno::Float2x2 rotI = ::g::Uno::Float2x2__New1(::g::Uno::Math::Cos1(-angle), ::g::Uno::Math::Sin1(-angle), -::g::Uno::Math::Sin1(-angle), ::g::Uno::Math::Cos1(-angle));
    ::g::Uno::Float4x4 LocalTransform_5200158f_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_5200158f_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_5200158f_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
    __this->_draw_5200158f.BlendEnabled(true);
    __this->_draw_5200158f.DepthTestEnabled(false);
    __this->_draw_5200158f.CullFace(uPtr(dc)->CullFace());
    __this->_draw_5200158f.BlendSrcRgb(2);
    __this->_draw_5200158f.BlendDstRgb(3);
    __this->_draw_5200158f.BlendDstAlpha(3);
    __this->_draw_5200158f.Use();
    __this->_draw_5200158f.Attrib1(0, 2, __this->OnRender_VertexData_5200158f_7_2_1, 8, 0);
    __this->_draw_5200158f.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
    __this->_draw_5200158f.Uniform(2, __this->PaperTint());
    __this->_draw_5200158f.Uniform(3, __this->DotTint());
    __this->_draw_5200158f.Uniform(4, tSpacing);
    __this->_draw_5200158f.Uniform(5, __this->Intensity());
    __this->_draw_5200158f.Uniform2(6, elementRect_.Size());
    __this->_draw_5200158f.Uniform2(7, elementRect_.Minimum());
    __this->_draw_5200158f.Uniform4(8, rot);
    __this->_draw_5200158f.Uniform4(9, rotI);
    __this->_draw_5200158f.Uniform(10, dc->ViewportPixelsPerPoint());
    __this->_draw_5200158f.Uniform(11, 1.0f / __this->Smoothness());
    __this->_draw_5200158f.Uniform12(12, (__this->Element() != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_5200158f_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_5200158f_4_9_4);
    __this->_draw_5200158f.Sampler3(13, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
    __this->_draw_5200158f.DrawArrays(6);
    ::g::Fuse::FramebufferPool::Release(original);
}

// public float get_PaperTint()
void Halftone__get_PaperTint_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->PaperTint();
}

// public void set_PaperTint(float value)
void Halftone__set_PaperTint_fn(Halftone* __this, float* value)
{
    __this->PaperTint(*value);
}

// public float get_Smoothness()
void Halftone__get_Smoothness_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Smoothness();
}

// public void set_Smoothness(float value)
void Halftone__set_Smoothness_fn(Halftone* __this, float* value)
{
    __this->Smoothness(*value);
}

// public float get_Spacing()
void Halftone__get_Spacing_fn(Halftone* __this, float* __retval)
{
    *__retval = __this->Spacing();
}

// public void set_Spacing(float value)
void Halftone__set_Spacing_fn(Halftone* __this, float* value)
{
    __this->Spacing(*value);
}

// public float get_DotTint() [instance]
float Halftone::DotTint()
{
    return _dotTint;
}

// public void set_DotTint(float value) [instance]
void Halftone::DotTint(float value)
{
    if (_dotTint != value)
    {
        _dotTint = value;
        OnRenderingChanged();
    }
}

// public float get_Intensity() [instance]
float Halftone::Intensity()
{
    return _intensity;
}

// public void set_Intensity(float value) [instance]
void Halftone::Intensity(float value)
{
    if (_intensity != value)
    {
        _intensity = value;
        OnRenderingChanged();
    }
}

// public float get_PaperTint() [instance]
float Halftone::PaperTint()
{
    return _paperTint;
}

// public void set_PaperTint(float value) [instance]
void Halftone::PaperTint(float value)
{
    if (_paperTint != value)
    {
        _paperTint = value;
        OnRenderingChanged();
    }
}

// public float get_Smoothness() [instance]
float Halftone::Smoothness()
{
    return _smoothness;
}

// public void set_Smoothness(float value) [instance]
void Halftone::Smoothness(float value)
{
    if (_smoothness != value)
    {
        _smoothness = value;
        OnRenderingChanged();
    }
}

// public float get_Spacing() [instance]
float Halftone::Spacing()
{
    return _spacing;
}

// public void set_Spacing(float value) [instance]
void Halftone::Spacing(float value)
{
    if (_spacing != value)
    {
        _spacing = value;
        OnRenderingChanged();
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/Mask.uno
// -------------------------------------------------------------

// public sealed class Mask
// {
static void Mask_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::VisualBounds_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Mask_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Mask_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Mask_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Mask_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Mask_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Mask_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Mask_type, interface6),
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(Mask_type, interface7));
    type->SetFields(21,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(Mask, _container), 0,
        Mask__MaskMode_typeof(), offsetof(Mask, _mode), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Mask, OnRender_VertexData_c63fd577_7_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Mask, OnRender_LocalTransform_c63fd577_4_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(Mask, OnRender_LocalTransform_c63fd577_4_9_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Mask, OnRender_VertexData_a7f41733_7_2_1), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Mask, OnRender_VertexData_dd716216_7_2_1), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Mask, _draw_c63fd577), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Mask, _draw_a7f41733), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Mask, _draw_dd716216), 0);
}

Mask_type* Mask_typeof()
{
    static uSStrong<Mask_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Effects::BasicEffect_typeof();
    options.FieldCount = 31;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Mask);
    options.TypeSize = sizeof(Mask_type);
    type = (Mask_type*)uClassType::New("Fuse.Effects.Mask", options);
    type->fp_build_ = Mask_build;
    type->fp_ModifyRenderBounds = (void(*)(::g::Fuse::Effects::Effect*, ::g::Fuse::VisualBounds*, ::g::Fuse::VisualBounds**))Mask__ModifyRenderBounds_fn;
    type->fp_OnRender = (void(*)(::g::Fuse::Effects::BasicEffect*, ::g::Fuse::DrawContext*, ::g::Uno::Rect*))Mask__OnRender_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Mask__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Mask__OnUnrooted_fn;
    type->interface7.fp_OnSourceChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn;
    type->interface7.fp_OnParamChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn;
    type->interface7.fp_OnSizingChanged = (void(*)(uObject*))Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged()
void Mask__FuseInternalIImageContainerOwnerOnParamChanged_fn(Mask* __this)
{
    __this->OnRenderingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged()
void Mask__FuseInternalIImageContainerOwnerOnSizingChanged_fn(Mask* __this)
{
    __this->OnRenderingChanged();
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged()
void Mask__FuseInternalIImageContainerOwnerOnSourceChanged_fn(Mask* __this)
{
    __this->OnRenderingChanged();
}

// public override sealed Fuse.VisualBounds ModifyRenderBounds(Fuse.VisualBounds inBounds)
void Mask__ModifyRenderBounds_fn(Mask* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval)
{
    return *__retval = ::g::Fuse::VisualBounds::Rect(::g::Uno::Float2__New1(0.0f), uPtr(__this->Element())->ActualSize()), void();
}

// protected override sealed void OnRender(Fuse.DrawContext dc, Uno.Rect elementRect)
void Mask__OnRender_fn(Mask* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect)
{
    ::g::Uno::Rect elementRect_ = *elementRect;
    elementRect_ = ::g::Uno::Rect__Intersect(::g::Uno::Rect__New2(::g::Uno::Float2__New1(0.0f), uPtr(__this->Element())->ActualSize()), elementRect_);
    ::g::Uno::Graphics::Texture2D* texture = uPtr(__this->_container)->GetTexture();

    if (texture == nullptr)
        return;

    ::g::Uno::Graphics::Framebuffer* original = uPtr(__this->Element())->CaptureRegion(dc, elementRect_, ::g::Uno::Float2__New1(0.0f));

    if (original == nullptr)
        return;

    ::g::Uno::Float2 scale = ::g::Uno::Float2__op_Division2(elementRect_.Size(), uPtr(__this->Element())->ActualSize());
    ::g::Uno::Float2 bias = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Division2(elementRect_.LeftTop(), elementRect_.Size()), scale);

    switch (__this->_mode)
    {
        case 0:
        {
            ::g::Uno::Float4x4 LocalTransform_c63fd577_4_9_4 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_c63fd577_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_c63fd577_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_c63fd577.BlendEnabled(true);
            __this->_draw_c63fd577.DepthTestEnabled(false);
            __this->_draw_c63fd577.CullFace(uPtr(dc)->CullFace());
            __this->_draw_c63fd577.BlendSrcAlpha(7);
            __this->_draw_c63fd577.BlendDstRgb(3);
            __this->_draw_c63fd577.Use();
            __this->_draw_c63fd577.Attrib1(0, 2, __this->OnRender_VertexData_c63fd577_7_2_1, 8, 0);
            __this->_draw_c63fd577.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
            __this->_draw_c63fd577.Uniform2(2, scale);
            __this->_draw_c63fd577.Uniform2(3, bias);
            __this->_draw_c63fd577.Uniform12(4, (__this->Element() != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_c63fd577_4_9_4, uPtr(__this->Element())->WorldTransform()) : LocalTransform_c63fd577_4_9_4);
            __this->_draw_c63fd577.Sampler3(5, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_c63fd577.Sampler3(6, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_c63fd577.DrawArrays(6);
            break;
        }
        case 1:
        {
            ::g::Uno::Float4x4 LocalTransform_a7f41733_4_9_2 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_c63fd577_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_c63fd577_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_a7f41733.BlendEnabled(true);
            __this->_draw_a7f41733.DepthTestEnabled(false);
            __this->_draw_a7f41733.CullFace(uPtr(dc)->CullFace());
            __this->_draw_a7f41733.BlendSrcAlpha(7);
            __this->_draw_a7f41733.BlendDstRgb(3);
            __this->_draw_a7f41733.Use();
            __this->_draw_a7f41733.Attrib1(0, 2, __this->OnRender_VertexData_a7f41733_7_2_1, 8, 0);
            __this->_draw_a7f41733.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
            __this->_draw_a7f41733.Uniform2(2, scale);
            __this->_draw_a7f41733.Uniform2(3, bias);
            __this->_draw_a7f41733.Uniform12(4, (__this->Element() != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_a7f41733_4_9_2, uPtr(__this->Element())->WorldTransform()) : LocalTransform_a7f41733_4_9_2);
            __this->_draw_a7f41733.Sampler3(5, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_a7f41733.Sampler3(6, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_a7f41733.DrawArrays(6);
            break;
        }
        case 2:
        {
            ::g::Uno::Float4x4 LocalTransform_dd716216_4_9_2 = ::g::Uno::Matrix::Mul10(__this->OnRender_LocalTransform_c63fd577_4_9_2, ::g::Uno::Matrix::Scaling1(elementRect_.Size().X, elementRect_.Size().Y, 1.0f), __this->OnRender_LocalTransform_c63fd577_4_9_3, ::g::Uno::Matrix::Translation(elementRect_.Minimum().X, elementRect_.Minimum().Y, 0.0f));
            __this->_draw_dd716216.BlendEnabled(true);
            __this->_draw_dd716216.DepthTestEnabled(false);
            __this->_draw_dd716216.CullFace(uPtr(dc)->CullFace());
            __this->_draw_dd716216.BlendSrcAlpha(7);
            __this->_draw_dd716216.BlendDstRgb(3);
            __this->_draw_dd716216.Use();
            __this->_draw_dd716216.Attrib1(0, 2, __this->OnRender_VertexData_dd716216_7_2_1, 8, 0);
            __this->_draw_dd716216.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[0/*Fuse.IRenderViewport*/])));
            __this->_draw_dd716216.Uniform2(2, scale);
            __this->_draw_dd716216.Uniform2(3, bias);
            __this->_draw_dd716216.Uniform12(4, (__this->Element() != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_dd716216_4_9_2, uPtr(__this->Element())->WorldTransform()) : LocalTransform_dd716216_4_9_2);
            __this->_draw_dd716216.Sampler3(5, uPtr(original)->ColorBuffer(), ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_dd716216.Sampler3(6, texture, ::g::Uno::Graphics::SamplerState__LinearClamp());
            __this->_draw_dd716216.DrawArrays(6);
            break;
        }
    }

    ::g::Fuse::FramebufferPool::Release(original);
}

// protected override sealed void OnRooted()
void Mask__OnRooted_fn(Mask* __this)
{
    ::g::Fuse::Effects::Effect__OnRooted_fn(__this);
    uPtr(__this->_container)->IsRooted(true);
}

// protected override sealed void OnUnrooted()
void Mask__OnUnrooted_fn(Mask* __this)
{
    uPtr(__this->_container)->IsRooted(false);
    ::g::Fuse::Effects::Effect__OnUnrooted_fn(__this);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Effects/Mask.uno
// -------------------------------------------------------------

// public enum Mask.MaskMode
uEnumType* Mask__MaskMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Effects.Mask.MaskMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Alpha", 0LL,
        "Grayscale", 1LL,
        "RGBA", 2LL);
    return type;
}

}}} // ::g::Fuse::Effects
