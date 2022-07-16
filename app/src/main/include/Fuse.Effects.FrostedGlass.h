// This file was generated based on '../Source/Fuse.Controls.Primitives/Behaviors/Glass.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.Effects.BasicEffect.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Float3.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct FrostedGlass;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct VisualBounds;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// internal sealed class FrostedGlass
// {
::g::Fuse::Effects::BasicEffect_type* FrostedGlass_typeof();
void FrostedGlass__get_Active_fn(FrostedGlass* __this, bool* __retval);
void FrostedGlass__get_Background_fn(FrostedGlass* __this, ::g::Fuse::Elements::Element** __retval);
void FrostedGlass__set_Background_fn(FrostedGlass* __this, ::g::Fuse::Elements::Element* value);
void FrostedGlass__get_LumaRange_fn(FrostedGlass* __this, ::g::Uno::Float3* __retval);
void FrostedGlass__set_LumaRange_fn(FrostedGlass* __this, ::g::Uno::Float3* value);
void FrostedGlass__ModifyRenderBounds_fn(FrostedGlass* __this, ::g::Fuse::VisualBounds* inBounds, ::g::Fuse::VisualBounds** __retval);
void FrostedGlass__OnRender_fn(FrostedGlass* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);
void FrostedGlass__get_Padding_fn(FrostedGlass* __this, float* __retval);
void FrostedGlass__get_Radius_fn(FrostedGlass* __this, float* __retval);
void FrostedGlass__set_Radius_fn(FrostedGlass* __this, float* value);
void FrostedGlass__get_Sigma_fn(FrostedGlass* __this, float* __retval);

struct FrostedGlass : ::g::Fuse::Effects::BasicEffect
{
    ::g::Uno::Float3 _lumaRange;
    float _radius;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_dae4f2a4_7_2_1;
    ::g::Uno::Float4x4 OnRender_LocalTransform_dae4f2a4_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_dae4f2a4_4_9_3;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_dae4f2a4;
    uStrong< ::g::Fuse::Elements::Element*> _Background;

    ::g::Fuse::Elements::Element* Background();
    void Background(::g::Fuse::Elements::Element* value);
    ::g::Uno::Float3 LumaRange();
    void LumaRange(::g::Uno::Float3 value);
    float Padding();
    float Radius();
    void Radius(float value);
    float Sigma();
};
// }

}}} // ::g::Fuse::Effects
