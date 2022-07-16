// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/DefaultTextTransform.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.Utils.Te-cf96fe95.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct DefaultTextTransform;}}}}}
namespace g{namespace Uno{struct Float4x4;}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public sealed class DefaultTextTransform
// {
::g::Uno::Graphics::Utils::Text::TextTransform_type* DefaultTextTransform_typeof();
void DefaultTextTransform__ctor_1_fn(DefaultTextTransform* __this);
void DefaultTextTransform__New1_fn(DefaultTextTransform** __retval);
void DefaultTextTransform__ResolveClipSpaceMatrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval);

struct DefaultTextTransform : ::g::Uno::Graphics::Utils::Text::TextTransform
{
    void ctor_1();
    static DefaultTextTransform* New1();
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
