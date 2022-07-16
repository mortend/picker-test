// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/TextTransform.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextTransform;}}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public abstract class TextTransform
// {
struct TextTransform_type : uType
{
    void(*fp_get_CullFace)(::g::Uno::Graphics::Utils::Text::TextTransform*, int32_t*);
    void(*fp_ResolveClipSpaceMatrix)(::g::Uno::Graphics::Utils::Text::TextTransform*, ::g::Uno::Float4x4*);
};

TextTransform_type* TextTransform_typeof();
void TextTransform__ctor__fn(TextTransform* __this);
void TextTransform__get_CullFace_fn(TextTransform* __this, int32_t* __retval);
void TextTransform__get_Matrix_fn(TextTransform* __this, ::g::Uno::Float4x4* __retval);
void TextTransform__set_Matrix_fn(TextTransform* __this, ::g::Uno::Float4x4* value);

struct TextTransform : uObject
{
    ::g::Uno::Float4x4 _Matrix;

    void ctor_();
    int32_t CullFace() { int32_t __retval; return (((TextTransform_type*)__type)->fp_get_CullFace)(this, &__retval), __retval; }
    ::g::Uno::Float4x4 Matrix();
    void Matrix(::g::Uno::Float4x4 value);
    ::g::Uno::Float4x4 ResolveClipSpaceMatrix() { ::g::Uno::Float4x4 __retval; return (((TextTransform_type*)__type)->fp_ResolveClipSpaceMatrix)(this, &__retval), __retval; }
    static int32_t CullFace(TextTransform* __this) { int32_t __retval; return TextTransform__get_CullFace_fn(__this, &__retval), __retval; }
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
