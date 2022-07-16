// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/FontFaceSpriteFont.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct BitmapFont;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct FontFace;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct FontFaceSpriteFont;}}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public static class FontFaceSpriteFont
// {
uClassType* FontFaceSpriteFont_typeof();
void FontFaceSpriteFont__RenderSpriteFont_fn(::g::Uno::Graphics::Utils::Text::FontFace* font, float* size, uString* charset, ::g::Uno::Graphics::Utils::Text::BitmapFont** __retval);

struct FontFaceSpriteFont : uObject
{
    static ::g::Uno::Graphics::Utils::Text::BitmapFont* RenderSpriteFont(::g::Uno::Graphics::Utils::Text::FontFace* font, float size, uString* charset);
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
