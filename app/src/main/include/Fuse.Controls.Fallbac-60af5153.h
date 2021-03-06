// This file was generated based on '../Source/Fuse.Controls.Primitives/TextControls/FallbackTextRenderer/DefaultTextRenderer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer;}}}}
namespace g{namespace Fuse{namespace Controls{namespace FallbackTextRenderer{struct DefaultTextRenderer__FontKey;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct BitmapFont;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct FontFace;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextRenderer;}}}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace FallbackTextRenderer{

// internal sealed class DefaultTextRenderer
// {
uType* DefaultTextRenderer_typeof();
void DefaultTextRenderer__ctor__fn(DefaultTextRenderer* __this, ::g::Uno::Graphics::Utils::Text::FontFace* fontFace);
void DefaultTextRenderer__BeginRendering_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* bounds, ::g::Uno::Float4* textColor, int32_t* maxTextLength);
void DefaultTextRenderer__DrawLine_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc, float* x, float* y, uString* line);
void DefaultTextRenderer__EndRendering_fn(DefaultTextRenderer* __this, ::g::Fuse::DrawContext* dc);
void DefaultTextRenderer__EnsureRendererCapacity_fn(int32_t* maxCharCount);
void DefaultTextRenderer__get_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Graphics::Utils::Text::FontFace** __retval);
void DefaultTextRenderer__set_FontFace_fn(DefaultTextRenderer* __this, ::g::Uno::Graphics::Utils::Text::FontFace* value);
void DefaultTextRenderer__GetBitmapFont_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, bool* includeZoom, ::g::Uno::Graphics::Utils::Text::BitmapFont** __retval);
void DefaultTextRenderer__GetLineHeight_fn(DefaultTextRenderer* __this, float* fontSize, float* __retval);
void DefaultTextRenderer__MeasureString_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval);
void DefaultTextRenderer__MeasureStringVirtual_fn(DefaultTextRenderer* __this, float* fontSize, float* absoluteZoom, uString* s, ::g::Uno::Float2* __retval);
void DefaultTextRenderer__New1_fn(::g::Uno::Graphics::Utils::Text::FontFace* fontFace, DefaultTextRenderer** __retval);
void DefaultTextRenderer__get_renderer_fn(::g::Uno::Graphics::Utils::Text::TextRenderer** __retval);

struct DefaultTextRenderer : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _bitmapFonts_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _bitmapFonts() { return _bitmapFonts_; }
    static int32_t _maxCharCount_;
    static int32_t& _maxCharCount() { return _maxCharCount_; }
    static uSStrong< ::g::Uno::Graphics::Utils::Text::TextRenderer*> _renderer_;
    static uSStrong< ::g::Uno::Graphics::Utils::Text::TextRenderer*>& _renderer() { return _renderer_; }
    float _fontSize;
    float _absoluteZoom;
    ::g::Uno::Float4x4 _transform;
    uStrong< ::g::Uno::Graphics::Utils::Text::BitmapFont*> _bitmapFont;
    uStrong< ::g::Uno::Graphics::Utils::Text::FontFace*> _FontFace;

    void ctor_(::g::Uno::Graphics::Utils::Text::FontFace* fontFace);
    void BeginRendering(float fontSize, float absoluteZoom, ::g::Uno::Float4x4 transform, ::g::Uno::Float2 bounds, ::g::Uno::Float4 textColor, int32_t maxTextLength);
    void DrawLine(::g::Fuse::DrawContext* dc, float x, float y, uString* line);
    void EndRendering(::g::Fuse::DrawContext* dc);
    ::g::Uno::Graphics::Utils::Text::FontFace* FontFace();
    void FontFace(::g::Uno::Graphics::Utils::Text::FontFace* value);
    ::g::Uno::Graphics::Utils::Text::BitmapFont* GetBitmapFont(float fontSize, float absoluteZoom, bool includeZoom);
    float GetLineHeight(float fontSize);
    ::g::Uno::Float2 MeasureString(float fontSize, float absoluteZoom, uString* s);
    ::g::Uno::Float2 MeasureStringVirtual(float fontSize, float absoluteZoom, uString* s);
    static void EnsureRendererCapacity(int32_t maxCharCount);
    static DefaultTextRenderer* New1(::g::Uno::Graphics::Utils::Text::FontFace* fontFace);
    static ::g::Uno::Graphics::Utils::Text::TextRenderer* renderer();
};
// }

}}}} // ::g::Fuse::Controls::FallbackTextRenderer
