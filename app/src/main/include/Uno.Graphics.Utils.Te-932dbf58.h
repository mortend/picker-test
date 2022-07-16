// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/FontFace.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct FontFace;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct RenderedGlyph;}}}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public abstract class FontFace
// {
struct FontFace_type : uType
{
    ::g::Uno::IDisposable interface0;
    void(*fp_ContainsGlyph)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, char16_t*, bool*);
    void(*fp_Dispose)(::g::Uno::Graphics::Utils::Text::FontFace*);
    void(*fp_get_FamilyName)(::g::Uno::Graphics::Utils::Text::FontFace*, uString**);
    void(*fp_GetAscender)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, float*);
    void(*fp_GetDescender)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, float*);
    void(*fp_GetLineHeight)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, float*);
    void(*fp_RenderGlyph)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, char16_t*, ::g::Uno::Graphics::Utils::Text::RenderedGlyph*);
    void(*fp_get_StyleName)(::g::Uno::Graphics::Utils::Text::FontFace*, uString**);
    void(*fp_TryGetKerning)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, char16_t*, char16_t*, ::g::Uno::Float2*, bool*);
};

FontFace_type* FontFace_typeof();
void FontFace__ctor__fn(FontFace* __this);

struct FontFace : uObject
{
    void ctor_();
    bool ContainsGlyph(float size, char16_t glyph) { bool __retval; return (((FontFace_type*)__type)->fp_ContainsGlyph)(this, &size, &glyph, &__retval), __retval; }
    void Dispose() { (((FontFace_type*)__type)->fp_Dispose)(this); }
    uString* FamilyName() { uString* __retval; return (((FontFace_type*)__type)->fp_get_FamilyName)(this, &__retval), __retval; }
    float GetAscender(float size) { float __retval; return (((FontFace_type*)__type)->fp_GetAscender)(this, &size, &__retval), __retval; }
    float GetDescender(float size) { float __retval; return (((FontFace_type*)__type)->fp_GetDescender)(this, &size, &__retval), __retval; }
    float GetLineHeight(float size) { float __retval; return (((FontFace_type*)__type)->fp_GetLineHeight)(this, &size, &__retval), __retval; }
    ::g::Uno::Graphics::Utils::Text::RenderedGlyph RenderGlyph(float size, char16_t glyph);
    uString* StyleName() { uString* __retval; return (((FontFace_type*)__type)->fp_get_StyleName)(this, &__retval), __retval; }
    bool TryGetKerning(float size, char16_t left, char16_t right, ::g::Uno::Float2* result) { bool __retval; return (((FontFace_type*)__type)->fp_TryGetKerning)(this, &size, &left, &right, result, &__retval), __retval; }
};

}}}}} // ::g::Uno::Graphics::Utils::Text

#include <Uno.Graphics.Utils.Te-a0d8914a.h>

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

inline ::g::Uno::Graphics::Utils::Text::RenderedGlyph FontFace::RenderGlyph(float size, char16_t glyph) { ::g::Uno::Graphics::Utils::Text::RenderedGlyph __retval; return (((FontFace_type*)__type)->fp_RenderGlyph)(this, &size, &glyph, &__retval), __retval; }
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
