// This file was generated based on '../Source/Fuse.Common/Font.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Fuse{struct Font;}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public class Font
// {
uType* Font_typeof();
void Font__ctor__fn(Font* __this, ::g::Uno::Collections::List* descriptors);
void Font__get_FileSource_fn(Font* __this, ::g::Uno::UX::FileSource** __retval);
void Font__New1_fn(::g::Uno::Collections::List* descriptors, Font** __retval);
void Font__get_PlatformDefault_fn(Font** __retval);
void Font__get_PlatformDefaultSize_fn(float* __retval);
void Font__get_PlatformDefaultTextColor_fn(::g::Uno::Float4* __retval);

struct Font : uObject
{
    uStrong< ::g::Uno::Collections::List*> Descriptors;
    static uSStrong<Font*> _fallback_;
    static uSStrong<Font*>& _fallback() { return Font_typeof()->Init(), _fallback_; }
    static uSStrong<Font*> UltraLight_;
    static uSStrong<Font*>& UltraLight() { return Font_typeof()->Init(), UltraLight_; }
    static uSStrong<Font*> Thin_;
    static uSStrong<Font*>& Thin() { return Font_typeof()->Init(), Thin_; }
    static uSStrong<Font*> Light_;
    static uSStrong<Font*>& Light() { return Font_typeof()->Init(), Light_; }
    static uSStrong<Font*> Regular_;
    static uSStrong<Font*>& Regular() { return Font_typeof()->Init(), Regular_; }
    static uSStrong<Font*> Medium_;
    static uSStrong<Font*>& Medium() { return Font_typeof()->Init(), Medium_; }
    static uSStrong<Font*> Semibold_;
    static uSStrong<Font*>& Semibold() { return Font_typeof()->Init(), Semibold_; }
    static uSStrong<Font*> Bold_;
    static uSStrong<Font*>& Bold() { return Font_typeof()->Init(), Bold_; }
    static uSStrong<Font*> Heavy_;
    static uSStrong<Font*>& Heavy() { return Font_typeof()->Init(), Heavy_; }
    static uSStrong<Font*> Black_;
    static uSStrong<Font*>& Black() { return Font_typeof()->Init(), Black_; }
    static uSStrong<Font*> UltraLightItalic_;
    static uSStrong<Font*>& UltraLightItalic() { return Font_typeof()->Init(), UltraLightItalic_; }
    static uSStrong<Font*> ThinItalic_;
    static uSStrong<Font*>& ThinItalic() { return Font_typeof()->Init(), ThinItalic_; }
    static uSStrong<Font*> LightItalic_;
    static uSStrong<Font*>& LightItalic() { return Font_typeof()->Init(), LightItalic_; }
    static uSStrong<Font*> Italic_;
    static uSStrong<Font*>& Italic() { return Font_typeof()->Init(), Italic_; }
    static uSStrong<Font*> MediumItalic_;
    static uSStrong<Font*>& MediumItalic() { return Font_typeof()->Init(), MediumItalic_; }
    static uSStrong<Font*> SemiboldItalic_;
    static uSStrong<Font*>& SemiboldItalic() { return Font_typeof()->Init(), SemiboldItalic_; }
    static uSStrong<Font*> BoldItalic_;
    static uSStrong<Font*>& BoldItalic() { return Font_typeof()->Init(), BoldItalic_; }
    static uSStrong<Font*> HeavyItalic_;
    static uSStrong<Font*>& HeavyItalic() { return Font_typeof()->Init(), HeavyItalic_; }
    static uSStrong<Font*> BlackItalic_;
    static uSStrong<Font*>& BlackItalic() { return Font_typeof()->Init(), BlackItalic_; }

    void ctor_(::g::Uno::Collections::List* descriptors);
    ::g::Uno::UX::FileSource* FileSource();
    static Font* New1(::g::Uno::Collections::List* descriptors);
    static Font* PlatformDefault();
    static float PlatformDefaultSize();
    static ::g::Uno::Float4 PlatformDefaultTextColor();
};
// }

}} // ::g::Fuse
