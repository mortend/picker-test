// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/BitmapFont.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.Utils.Te-64d66549.h>
#include <Uno.Graphics.Utils.Te-9b55f898.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct BitmapFont;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct FontFace;}}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public sealed class BitmapFont
// {
struct BitmapFont_type : uType
{
    ::g::Uno::IDisposable interface0;
};

BitmapFont_type* BitmapFont_typeof();
void BitmapFont__ctor__fn(BitmapFont* __this);
void BitmapFont__Dispose_fn(BitmapFont* __this);
void BitmapFont__New1_fn(BitmapFont** __retval);

struct BitmapFont : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> Glyphs;
    uStrong< ::g::Uno::Collections::Dictionary*> Advances;
    uStrong< ::g::Uno::Collections::Dictionary*> Kernings;
    uStrong< ::g::Uno::Graphics::Texture2D*> Texture;
    float Ascent;
    float Descent;
    float LineHeight;
    float PixelSize;
    float PixelSpread;
    uStrong<uString*> FamilyName;
    uStrong<uString*> StyleName;
    uStrong< ::g::Uno::Graphics::Utils::Text::FontFace*> FontFace;

    void ctor_();
    void Dispose();
    static BitmapFont* New1();
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
