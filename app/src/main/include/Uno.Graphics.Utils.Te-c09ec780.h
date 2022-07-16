// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/TextRenderer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Byte4.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct BitmapFont;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct BitmapFont__GlyphInfo;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextRenderer;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextShader;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextShaderData;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextTransform;}}}}}
namespace g{namespace Uno{namespace Graphics{struct IndexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public sealed class TextRenderer
// {
uType* TextRenderer_typeof();
void TextRenderer__ctor__fn(TextRenderer* __this, int32_t* maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform);
void TextRenderer__Begin_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::BitmapFont* font);
void TextRenderer__get_Color_fn(TextRenderer* __this, ::g::Uno::Float4* __retval);
void TextRenderer__set_Color_fn(TextRenderer* __this, ::g::Uno::Float4* value);
void TextRenderer__End_fn(TextRenderer* __this);
void TextRenderer__get_HasBegun_fn(TextRenderer* __this, bool* __retval);
void TextRenderer__set_HasBegun_fn(TextRenderer* __this, bool* value);
void TextRenderer__MeasureString_fn(TextRenderer* __this, uString* text, ::g::Uno::Float2* __retval);
void TextRenderer__MeasureString1_fn(TextRenderer* __this, uString* text, int32_t* startIndex, int32_t* length, ::g::Uno::Float2* __retval);
void TextRenderer__New1_fn(int32_t* maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform, TextRenderer** __retval);
void TextRenderer__get_Transform_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::TextTransform** __retval);
void TextRenderer__set_Transform_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::TextTransform* value);
void TextRenderer__WriteGlyph_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::BitmapFont__GlyphInfo* ci, ::g::Uno::Float2* caret);
void TextRenderer__WriteString_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text);
void TextRenderer__WriteString1_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text, int32_t* startIndex, int32_t* length);

struct TextRenderer : uObject
{
    int32_t _maxCharCount;
    float _tracking;
    ::g::Uno::Byte4 _color;
    uStrong< ::g::Uno::Graphics::Utils::Text::BitmapFont*> _font;
    uStrong< ::g::Uno::Graphics::Utils::Text::TextShader*> _shader;
    uStrong< ::g::Uno::Graphics::Utils::Text::TextTransform*> _transform;
    uStrong<uArray*> _buffer;
    uStrong< ::g::Uno::Graphics::VertexBuffer*> _vbo;
    uStrong< ::g::Uno::Graphics::IndexBuffer*> _ibo;
    uStrong< ::g::Uno::Graphics::Utils::Text::TextShaderData*> _data;
    bool _HasBegun;

    void ctor_(int32_t maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform);
    void Begin(::g::Uno::Graphics::Utils::Text::BitmapFont* font);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    void End();
    bool HasBegun();
    void HasBegun(bool value);
    ::g::Uno::Float2 MeasureString(uString* text);
    ::g::Uno::Float2 MeasureString1(uString* text, int32_t startIndex, int32_t length);
    ::g::Uno::Graphics::Utils::Text::TextTransform* Transform();
    void Transform(::g::Uno::Graphics::Utils::Text::TextTransform* value);
    void WriteGlyph(::g::Uno::Graphics::Utils::Text::BitmapFont__GlyphInfo ci, ::g::Uno::Float2 caret);
    void WriteString(::g::Uno::Float2 caret, uString* text);
    void WriteString1(::g::Uno::Float2 caret, uString* text, int32_t startIndex, int32_t length);
    static TextRenderer* New1(int32_t maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform);
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
