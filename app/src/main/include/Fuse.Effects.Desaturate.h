// This file was generated based on '../Source/Fuse.Effects/Desaturate.uno'.
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
#include <Uno.Float4x4.h>
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
namespace g{namespace Fuse{namespace Effects{struct Desaturate;}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Rect;}}

namespace g{
namespace Fuse{
namespace Effects{

// public sealed class Desaturate
// {
::g::Fuse::Effects::BasicEffect_type* Desaturate_typeof();
void Desaturate__get_Amount_fn(Desaturate* __this, float* __retval);
void Desaturate__set_Amount_fn(Desaturate* __this, float* value);
void Desaturate__OnRender_fn(Desaturate* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Rect* elementRect);

struct Desaturate : ::g::Fuse::Effects::BasicEffect
{
    float _amount;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> OnRender_VertexData_b556a599_7_2_1;
    ::g::Uno::Float4x4 OnRender_LocalTransform_b556a599_4_9_2;
    ::g::Uno::Float4x4 OnRender_LocalTransform_b556a599_4_9_3;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_b556a599;

    float Amount();
    void Amount(float value);
};
// }

}}} // ::g::Fuse::Effects
