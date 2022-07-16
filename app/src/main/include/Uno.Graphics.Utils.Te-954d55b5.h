// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/TextShader.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextShader;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextShaderData;}}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public abstract class TextShader
// {
struct TextShader_type : uType
{
    void(*fp_Draw)(::g::Uno::Graphics::Utils::Text::TextShader*, ::g::Uno::Graphics::Utils::Text::TextShaderData*);
};

TextShader_type* TextShader_typeof();
void TextShader__ctor__fn(TextShader* __this);

struct TextShader : uObject
{
    void ctor_();
    void Draw(::g::Uno::Graphics::Utils::Text::TextShaderData* data) { (((TextShader_type*)__type)->fp_Draw)(this, data); }
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
