// This file was generated based on '../Source/Fuse.Controls.Primitives/TextControls/FallbackTextRenderer/DefaultTextRenderer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.Utils.Te-cf96fe95.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct ProperTextTransform;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class ProperTextTransform
// {
::g::Uno::Graphics::Utils::Text::TextTransform_type* ProperTextTransform_typeof();
void ProperTextTransform__ctor_1_fn(ProperTextTransform* __this);
void ProperTextTransform__get_CullFace_fn(ProperTextTransform* __this, int32_t* __retval);
void ProperTextTransform__New1_fn(ProperTextTransform** __retval);
void ProperTextTransform__ResolveClipSpaceMatrix_fn(ProperTextTransform* __this, ::g::Uno::Float4x4* __retval);

struct ProperTextTransform : ::g::Uno::Graphics::Utils::Text::TextTransform
{
    uStrong< ::g::Fuse::DrawContext*> DrawContext;

    void ctor_1();
    static ProperTextTransform* New1();
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
