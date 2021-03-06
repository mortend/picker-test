// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppFontFace.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.Utils.Te-932dbf58.h>
#include <Uno.IDisposable.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Cpp{struct CppFontFace;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct RenderedGlyph;}}}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}
namespace g{namespace Uno{struct Float2;}}
namespace uImage { class FontFace; }

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Cpp{

// internal sealed extern class CppFontFace
// {
::g::Uno::Graphics::Utils::Text::FontFace_type* CppFontFace_typeof();
void CppFontFace__ctor_1_fn(CppFontFace* __this, uArray* data, int32_t* offset, int32_t* length);
void CppFontFace__ctor_2_fn(CppFontFace* __this, ::g::Uno::IO::BundleFile* file);
void CppFontFace__ContainsGlyph_fn(CppFontFace* __this, float* size, char16_t* glyph, bool* __retval);
void CppFontFace__Dispose_fn(CppFontFace* __this);
void CppFontFace__get_FamilyName_fn(CppFontFace* __this, uString** __retval);
void CppFontFace__GetAscender_fn(CppFontFace* __this, float* size, float* __retval);
void CppFontFace__GetDescender_fn(CppFontFace* __this, float* size, float* __retval);
void CppFontFace__GetLineHeight_fn(CppFontFace* __this, float* size, float* __retval);
void CppFontFace__LoadFontFaceHandle_fn(uArray* data, int32_t* offset, int32_t* length, uImage::FontFace** __retval);
void CppFontFace__LoadFontFaceHandle1_fn(uString* filename, uImage::FontFace** __retval);
void CppFontFace__New1_fn(uArray* data, int32_t* offset, int32_t* length, CppFontFace** __retval);
void CppFontFace__New2_fn(::g::Uno::IO::BundleFile* file, CppFontFace** __retval);
void CppFontFace__RenderGlyph_fn(CppFontFace* __this, float* size, char16_t* glyph, ::g::Uno::Graphics::Utils::Text::RenderedGlyph* __retval);
void CppFontFace__get_StyleName_fn(CppFontFace* __this, uString** __retval);
void CppFontFace__TryGetKerning_fn(CppFontFace* __this, float* size, char16_t* left, char16_t* right, ::g::Uno::Float2* result, bool* __retval);

struct CppFontFace : ::g::Uno::Graphics::Utils::Text::FontFace
{
    uImage::FontFace* _handle;

    void ctor_1(uArray* data, int32_t offset, int32_t length);
    void ctor_2(::g::Uno::IO::BundleFile* file);
    static uImage::FontFace* LoadFontFaceHandle(uArray* data, int32_t offset, int32_t length);
    static uImage::FontFace* LoadFontFaceHandle1(uString* filename);
    static CppFontFace* New1(uArray* data, int32_t offset, int32_t length);
    static CppFontFace* New2(::g::Uno::IO::BundleFile* file);
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Cpp
