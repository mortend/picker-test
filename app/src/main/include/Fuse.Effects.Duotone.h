// This file was generated based on '../Source/Fuse.Effects/Duotone.uno'.
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
namespace g{namespace Fuse{namespace Effects{struct Duotone;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Duotone
// {
::g::Fuse::Effects::BasicEffect_type* Duotone_typeof();
void Duotone__get_Amount_fn(Duotone* __this, float* __retval);
void Duotone__set_Amount_fn(Duotone* __this, float* value);
void Duotone__OnRender_fn(Duotone* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);

struct Duotone : ::g::Fuse::Effects::BasicEffect
{
    float _amount;
    ::g::Uno::Float3 _light;
    ::g::Uno::Float3 _shadow;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_3c61d4eb_7_2_1;
    ::g::Uno::Float4x4 OnRender_LocalTransform_3c61d4eb_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_3c61d4eb_4_9_3;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_3c61d4eb;

    float Amount();
    void Amount(float value);
};
// }

}}} // ::g::Fuse::Effects
