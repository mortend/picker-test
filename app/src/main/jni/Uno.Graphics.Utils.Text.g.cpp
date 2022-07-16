// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.UnoGraphicsUtils_bundle.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.ByteArrayExtensions.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dicti-5d5b73f.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Diagnostics.Log.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.DeviceBuffer.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.FormatHelpers.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.OpenGL.GLProgram.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.Utils.Bitmap.h>
#include <Uno.Graphics.Utils.Te-29303b86.h>
#include <Uno.Graphics.Utils.Te-307fafa2.h>
#include <Uno.Graphics.Utils.Te-64d66549.h>
#include <Uno.Graphics.Utils.Te-831281eb.h>
#include <Uno.Graphics.Utils.Te-932dbf58.h>
#include <Uno.Graphics.Utils.Te-954d55b5.h>
#include <Uno.Graphics.Utils.Te-9b55f898.h>
#include <Uno.Graphics.Utils.Te-a0d8914a.h>
#include <Uno.Graphics.Utils.Te-c09ec780.h>
#include <Uno.Graphics.Utils.Te-c6a0594c.h>
#include <Uno.Graphics.Utils.Te-cf96fe95.h>
#include <Uno.Graphics.Utils.Te-e6138268.h>
#include <Uno.Graphics.VertexAt-13489a6d.h>
#include <Uno.Graphics.VertexAt-20e40bee.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.UShort.h>
#include <Uno.UShort2.h>
static uString* STRINGS[3];
static uType* TYPES[6];

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/BitmapFont.uno
// -------------------------------------------------------------------------------------------------------------------

// public sealed class BitmapFont
// {
static void BitmapFont_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(BitmapFont_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), BitmapFont__GlyphInfo_typeof(), nullptr), offsetof(BitmapFont, Glyphs), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Float_typeof(), nullptr), offsetof(BitmapFont, Advances), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof(), nullptr), offsetof(BitmapFont, Kernings), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(BitmapFont, Texture), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, Ascent), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, Descent), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, LineHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, PixelSize), 0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont, PixelSpread), 0,
        ::g::Uno::String_typeof(), offsetof(BitmapFont, FamilyName), 0,
        ::g::Uno::String_typeof(), offsetof(BitmapFont, StyleName), 0,
        ::g::Uno::Graphics::Utils::Text::FontFace_typeof(), offsetof(BitmapFont, FontFace), 0);
}

BitmapFont_type* BitmapFont_typeof()
{
    static uSStrong<BitmapFont_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(BitmapFont);
    options.TypeSize = sizeof(BitmapFont_type);
    type = (BitmapFont_type*)uClassType::New("Uno.Graphics.Utils.Text.BitmapFont", options);
    type->fp_build_ = BitmapFont_build;
    type->fp_ctor_ = (void*)BitmapFont__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))BitmapFont__Dispose_fn;
    return type;
}

// public generated BitmapFont()
void BitmapFont__ctor__fn(BitmapFont* __this)
{
    __this->ctor_();
}

// public void Dispose()
void BitmapFont__Dispose_fn(BitmapFont* __this)
{
    __this->Dispose();
}

// public generated BitmapFont New()
void BitmapFont__New1_fn(BitmapFont** __retval)
{
    *__retval = BitmapFont::New1();
}

// public generated BitmapFont() [instance]
void BitmapFont::ctor_()
{
    Glyphs = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[4/*char*/], BitmapFont__GlyphInfo_typeof(), nullptr)));
    Advances = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[4/*char*/], ::g::Uno::Float_typeof(), nullptr)));
    Kernings = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(BitmapFont__CharPair_typeof(), ::g::Uno::Float_typeof(), nullptr)));
}

// public void Dispose() [instance]
void BitmapFont::Dispose()
{
    if (Texture != nullptr)
        uPtr(Texture)->Dispose();
}

// public generated BitmapFont New() [static]
BitmapFont* BitmapFont::New1()
{
    BitmapFont* obj1 = (BitmapFont*)uNew(BitmapFont_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/BitmapFont.uno
// -------------------------------------------------------------------------------------------------------------------

// public struct BitmapFont.CharPair
// {
static void BitmapFont__CharPair_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Char_typeof(), offsetof(BitmapFont__CharPair, Left), 0,
        ::g::Uno::Char_typeof(), offsetof(BitmapFont__CharPair, Right), 0);
}

uStructType* BitmapFont__CharPair_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(BitmapFont__CharPair);
    options.ValueSize = sizeof(BitmapFont__CharPair);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.Utils.Text.BitmapFont.CharPair", options);
    type->fp_build_ = BitmapFont__CharPair_build;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))BitmapFont__CharPair__GetHashCode_fn;
    return type;
}

// public CharPair(char left, char right)
void BitmapFont__CharPair__ctor_1_fn(BitmapFont__CharPair* __this, char16_t* left, char16_t* right)
{
    __this->ctor_1(*left, *right);
}

// public override sealed int GetHashCode()
void BitmapFont__CharPair__GetHashCode_fn(BitmapFont__CharPair* __this, uType* __type, int32_t* __retval)
{
    int32_t hash = 27;
    hash = (hash * 13) + (int32_t)__this->Left;
    hash = (hash * 13) + (int32_t)__this->Right;
    return *__retval = hash, void();
}

// public CharPair New(char left, char right)
void BitmapFont__CharPair__New1_fn(char16_t* left, char16_t* right, BitmapFont__CharPair* __retval)
{
    *__retval = BitmapFont__CharPair__New1(*left, *right);
}

// public CharPair(char left, char right) [instance]
void BitmapFont__CharPair::ctor_1(char16_t left, char16_t right)
{
    Left = left;
    Right = right;
}

// public CharPair New(char left, char right) [static]
BitmapFont__CharPair BitmapFont__CharPair__New1(char16_t left, char16_t right)
{
    BitmapFont__CharPair obj1;
    obj1.ctor_1(left, right);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/DefaultTextTransform.uno
// -----------------------------------------------------------------------------------------------------------------------------

// public sealed class DefaultTextTransform
// {
static void DefaultTextTransform_build(uType* type)
{
    ::STRINGS[0] = uString::Const("DefaultTextTransform: Not implemented on mobile");
    type->SetFields(1);
}

::g::Uno::Graphics::Utils::Text::TextTransform_type* DefaultTextTransform_typeof()
{
    static uSStrong< ::g::Uno::Graphics::Utils::Text::TextTransform_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Graphics::Utils::Text::TextTransform_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(DefaultTextTransform);
    options.TypeSize = sizeof(::g::Uno::Graphics::Utils::Text::TextTransform_type);
    type = (::g::Uno::Graphics::Utils::Text::TextTransform_type*)uClassType::New("Uno.Graphics.Utils.Text.DefaultTextTransform", options);
    type->fp_build_ = DefaultTextTransform_build;
    type->fp_ctor_ = (void*)DefaultTextTransform__New1_fn;
    type->fp_ResolveClipSpaceMatrix = (void(*)(::g::Uno::Graphics::Utils::Text::TextTransform*, ::g::Uno::Float4x4*))DefaultTextTransform__ResolveClipSpaceMatrix_fn;
    return type;
}

// public generated DefaultTextTransform()
void DefaultTextTransform__ctor_1_fn(DefaultTextTransform* __this)
{
    __this->ctor_1();
}

// public generated DefaultTextTransform New()
void DefaultTextTransform__New1_fn(DefaultTextTransform** __retval)
{
    *__retval = DefaultTextTransform::New1();
}

// public override sealed extern float4x4 ResolveClipSpaceMatrix()
void DefaultTextTransform__ResolveClipSpaceMatrix_fn(DefaultTextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    ::g::Uno::Diagnostics::Log::Debug(::STRINGS[0/*"DefaultText...*/]);
    return *__retval = __this->Matrix(), void();
}

// public generated DefaultTextTransform() [instance]
void DefaultTextTransform::ctor_1()
{
    ctor_();
}

// public generated DefaultTextTransform New() [static]
DefaultTextTransform* DefaultTextTransform::New1()
{
    DefaultTextTransform* obj1 = (DefaultTextTransform*)uNew(DefaultTextTransform_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/FontFace.uno
// -----------------------------------------------------------------------------------------------------------------

// public abstract class FontFace
// {
static void FontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(FontFace_type, interface0));
}

FontFace_type* FontFace_typeof()
{
    static uSStrong<FontFace_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FontFace);
    options.TypeSize = sizeof(FontFace_type);
    type = (FontFace_type*)uClassType::New("Uno.Graphics.Utils.Text.FontFace", options);
    type->fp_build_ = FontFace_build;
    return type;
}

// protected generated FontFace()
void FontFace__ctor__fn(FontFace* __this)
{
    __this->ctor_();
}

// protected generated FontFace() [instance]
void FontFace::ctor_()
{
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/FontFaceSpriteFont.uno
// ---------------------------------------------------------------------------------------------------------------------------

// public static class FontFaceSpriteFont
// {
static void FontFaceSpriteFont_build(uType* type)
{
    ::STRINGS[1] = uString::Const(" \300\200");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Graphics::Utils::Text::RenderedGlyph_typeof(), nullptr);
    ::TYPES[1] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Graphics::Utils::Text::RenderedGlyph_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Char_typeof(), ::g::Uno::Graphics::Utils::Text::RenderedGlyph_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

uClassType* FontFaceSpriteFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.Utils.Text.FontFaceSpriteFont", options);
    type->fp_build_ = FontFaceSpriteFont_build;
    return type;
}

// public static Uno.Graphics.Utils.Text.BitmapFont RenderSpriteFont(Uno.Graphics.Utils.Text.FontFace font, float size, string charset)
void FontFaceSpriteFont__RenderSpriteFont_fn(::g::Uno::Graphics::Utils::Text::FontFace* font, float* size, uString* charset, ::g::Uno::Graphics::Utils::Text::BitmapFont** __retval)
{
    *__retval = FontFaceSpriteFont::RenderSpriteFont(font, *size, charset);
}

// public static Uno.Graphics.Utils.Text.BitmapFont RenderSpriteFont(Uno.Graphics.Utils.Text.FontFace font, float size, string charset) [static]
::g::Uno::Graphics::Utils::Text::BitmapFont* FontFaceSpriteFont::RenderSpriteFont(::g::Uno::Graphics::Utils::Text::FontFace* font, float size, uString* charset)
{
    ::g::Uno::Graphics::Utils::Text::BitmapFont* collection1;
    bool ret3;
    ::g::Uno::Collections::Dictionary__Enumerator<char16_t, ::g::Uno::Graphics::Utils::Text::RenderedGlyph> ret4;
    ::g::Uno::Collections::Dictionary* glyphs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<char, Uno.Graphics.Utils.Text.RenderedGlyph>*/]);
    uString* charsetInclWs = ::g::Uno::String::op_Addition2(charset, ::STRINGS[1/*" \0"*/]);
    int32_t maxSize = 0;

    for (int32_t i = 0; i < uPtr(charsetInclWs)->Length(); i++)
    {
        char16_t c = uPtr(charsetInclWs)->Item(i);

        if (uPtr(font)->ContainsGlyph(size, c))
        {
            if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(glyphs), uCRef<char16_t>(c), &ret3), ret3))
                continue;

            ::g::Uno::Graphics::Utils::Text::RenderedGlyph g = uPtr(font)->RenderGlyph(size, c);
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(glyphs), uCRef<char16_t>(c), uCRef(g));

            if (g.Data != nullptr)
            {
                maxSize = ::g::Uno::Math::Max8(maxSize, g.Size.X);
                maxSize = ::g::Uno::Math::Max8(maxSize, g.Size.Y);
            }
        }
    }

    int32_t sideCount = (int32_t)::g::Uno::Math::Ceil1(::g::Uno::Math::Sqrt1((float)glyphs->Count()));
    int32_t sideSize = ::g::Uno::Math::NextPow2(sideCount * maxSize);
    ::g::Uno::Graphics::Utils::Bitmap* dst = ::g::Uno::Graphics::Utils::Bitmap::New1(::g::Uno::Int2__New2(sideSize, sideSize), 1, nullptr);
    ::g::Uno::Graphics::Texture2D* tex = ::g::Uno::Graphics::Texture2D::New1(dst->Size(), dst->Format(), true);
    collection1 = ::g::Uno::Graphics::Utils::Text::BitmapFont::New1();
    uPtr(collection1)->Texture = tex;
    uPtr(collection1)->Ascent = ::g::Uno::Math::Floor1(uPtr(font)->GetAscender(size) + 0.5f);
    uPtr(collection1)->Descent = ::g::Uno::Math::Floor1(uPtr(font)->GetDescender(size) + 0.5f);
    uPtr(collection1)->LineHeight = ::g::Uno::Math::Floor1(uPtr(font)->GetLineHeight(size) + 0.5f);
    uPtr(collection1)->PixelSize = size;
    uPtr(collection1)->PixelSpread = 0.0f;
    uPtr(collection1)->FontFace = font;
    uPtr(collection1)->FamilyName = uPtr(font)->FamilyName();
    uPtr(collection1)->StyleName = uPtr(font)->StyleName();
    ::g::Uno::Graphics::Utils::Text::BitmapFont* result = collection1;
    int32_t gi = 0;
    ::g::Uno::Collections::Dictionary__Enumerator<char16_t, ::g::Uno::Graphics::Utils::Text::RenderedGlyph> enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(glyphs), &ret4), ret4);

    {
        try
        {
            {
                while (enum2.MoveNext(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Graphics.Utils.Text.RenderedGlyph>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<char16_t, ::g::Uno::Graphics::Utils::Text::RenderedGlyph> e = enum2.Current(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Graphics.Utils.Text.RenderedGlyph>.Enumerator*/]);
                    int32_t dstX = (gi % sideCount) * (sideSize / sideCount);
                    int32_t dstY = ((gi / sideCount) % sideCount) * (sideSize / sideCount);
                    gi++;
                    ::g::Uno::Graphics::Utils::Text::RenderedGlyph src = e.Value(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Graphics.Utils.Text.RenderedGlyph>*/]);
                    ::g::Uno::Float2 srcSize = ::g::Uno::Float2__New2(0.0f, 0.0f);

                    if (src.Data != nullptr)
                    {
                        srcSize = ::g::Uno::Float2__op_Implicit1(src.Size);
                        int32_t bpp = ::g::Uno::Graphics::FormatHelpers::GetStrideInBytes(src.Format);

                        for (int32_t srcY = 0; srcY < src.Size.Y; srcY++)

                            for (int32_t srcX = 0; srcX < src.Size.X; srcX++)
                                uPtr(uPtr(dst)->Data())->Item<uint8_t>((((dstY + srcY) * uPtr(dst)->Size().X) + dstX) + srcX) = uPtr(src.Data)->Item<uint8_t>(((srcY * src.Size.X) + srcX) * bpp);
                    }

                    ::g::Uno::Graphics::Utils::Text::BitmapFont__GlyphInfo g1;
                    g1.Advance = ::g::Uno::Math::Floor1(e.Value(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Graphics.Utils.Text.RenderedGlyph>*/]).Advance.X + 0.5f);
                    g1.Bearing = ::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition1(e.Value(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Graphics.Utils.Text.RenderedGlyph>*/]).Bearing, 0.5f));
                    g1.Size = srcSize;
                    g1.UpperLeft.X = (uint16_t)((65535.0 * (double)dstX) / (double)uPtr(dst)->Size().X);
                    g1.UpperLeft.Y = (uint16_t)((65535.0 * (double)dstY) / (double)dst->Size().Y);
                    g1.LowerRight.X = (uint16_t)((65535.0 * (double)((float)dstX + srcSize.X)) / (double)dst->Size().X);
                    g1.LowerRight.Y = (uint16_t)((65535.0 * (double)((float)dstY + srcSize.Y)) / (double)dst->Size().Y);
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(uPtr(result)->Glyphs), uCRef<char16_t>(e.Key(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Graphics.Utils.Text.RenderedGlyph>*/])), uCRef(g1));
                    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(result->Advances), uCRef<char16_t>(e.Key(::TYPES[2/*Uno.Collections.KeyValuePair<char, Uno.Graphics.Utils.Text.RenderedGlyph>*/])), uCRef(g1.Advance));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Graphics.Utils.Text.RenderedGlyph>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum2.Dispose(::TYPES[1/*Uno.Collections.Dictionary<char, Uno.Graphics.Utils.Text.RenderedGlyph>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    tex->Update(dst->Data());

    if (tex->IsMipmap())
        uPtr(tex)->GenerateMipmap();

    for (int32_t i1 = 0; i1 < uPtr(charsetInclWs)->Length(); i1++)
    {
        char16_t left = uPtr(charsetInclWs)->Item(i1);

        for (int32_t j = 0; j < charsetInclWs->Length(); j++)
        {
            char16_t right = uPtr(charsetInclWs)->Item(j);
            ::g::Uno::Float2 kerning;

            if (uPtr(font)->TryGetKerning(size, left, right, &kerning) && (::g::Uno::Math::Abs1(kerning.X) > 0.0f))
                ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(uPtr(result)->Kernings), uCRef(::g::Uno::Graphics::Utils::Text::BitmapFont__CharPair__New1(left, right)), uCRef(kerning.X));
        }
    }

    return result;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/BitmapFont.uno
// -------------------------------------------------------------------------------------------------------------------

// public struct BitmapFont.GlyphInfo
// {
static void BitmapFont__GlyphInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(BitmapFont__GlyphInfo, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(BitmapFont__GlyphInfo, Bearing), 0,
        ::g::Uno::Float2_typeof(), offsetof(BitmapFont__GlyphInfo, Size), 0,
        ::g::Uno::UShort2_typeof(), offsetof(BitmapFont__GlyphInfo, UpperLeft), 0,
        ::g::Uno::UShort2_typeof(), offsetof(BitmapFont__GlyphInfo, LowerRight), 0);
}

uStructType* BitmapFont__GlyphInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.Alignment = alignof(BitmapFont__GlyphInfo);
    options.ValueSize = sizeof(BitmapFont__GlyphInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.Utils.Text.BitmapFont.GlyphInfo", options);
    type->fp_build_ = BitmapFont__GlyphInfo_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/RenderedGlyph.uno
// ----------------------------------------------------------------------------------------------------------------------

// public struct RenderedGlyph
// {
static void RenderedGlyph_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(RenderedGlyph, Advance), 0,
        ::g::Uno::Float2_typeof(), offsetof(RenderedGlyph, Bearing), 0,
        ::g::Uno::Int2_typeof(), offsetof(RenderedGlyph, Size), 0,
        ::g::Uno::Graphics::Format_typeof(), offsetof(RenderedGlyph, Format), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(RenderedGlyph, Data), 0);
}

uStructType* RenderedGlyph_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.Alignment = alignof(RenderedGlyph);
    options.ValueSize = sizeof(RenderedGlyph);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.Utils.Text.RenderedGlyph", options);
    type->fp_build_ = RenderedGlyph_build;
    return type;
}

// public RenderedGlyph(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data)
void RenderedGlyph__ctor_1_fn(RenderedGlyph* __this, ::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Int2* size, int32_t* format, uArray* data)
{
    __this->ctor_1(*advance, *bearing, *size, *format, data);
}

// public RenderedGlyph New(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data)
void RenderedGlyph__New1_fn(::g::Uno::Float2* advance, ::g::Uno::Float2* bearing, ::g::Uno::Int2* size, int32_t* format, uArray* data, RenderedGlyph* __retval)
{
    *__retval = RenderedGlyph__New1(*advance, *bearing, *size, *format, data);
}

// public RenderedGlyph(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data) [instance]
void RenderedGlyph::ctor_1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Int2 size, int32_t format, uArray* data)
{
    Advance = advance;
    Bearing = bearing;
    Size = size;
    Format = format;
    Data = data;
}

// public RenderedGlyph New(float2 advance, float2 bearing, int2 size, Uno.Graphics.Format format, byte[] data) [static]
RenderedGlyph RenderedGlyph__New1(::g::Uno::Float2 advance, ::g::Uno::Float2 bearing, ::g::Uno::Int2 size, int32_t format, uArray* data)
{
    RenderedGlyph obj1;
    obj1.ctor_1(advance, bearing, size, format, data);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/SpriteFontShader.uno
// -------------------------------------------------------------------------------------------------------------------------

// public sealed class SpriteFontShader
// {
static void SpriteFontShader_build(uType* type)
{
    type->SetDependencies(
        ::g::UnoGraphicsUtils_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(SpriteFontShader, _draw_eee196bc), 0);
}

::g::Uno::Graphics::Utils::Text::TextShader_type* SpriteFontShader_typeof()
{
    static uSStrong< ::g::Uno::Graphics::Utils::Text::TextShader_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Graphics::Utils::Text::TextShader_typeof();
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SpriteFontShader);
    options.TypeSize = sizeof(::g::Uno::Graphics::Utils::Text::TextShader_type);
    type = (::g::Uno::Graphics::Utils::Text::TextShader_type*)uClassType::New("Uno.Graphics.Utils.Text.SpriteFontShader", options);
    type->fp_build_ = SpriteFontShader_build;
    type->fp_ctor_ = (void*)SpriteFontShader__New1_fn;
    type->fp_Draw = (void(*)(::g::Uno::Graphics::Utils::Text::TextShader*, ::g::Uno::Graphics::Utils::Text::TextShaderData*))SpriteFontShader__Draw_fn;
    return type;
}

// public generated SpriteFontShader()
void SpriteFontShader__ctor_1_fn(SpriteFontShader* __this)
{
    __this->ctor_1();
}

// public override sealed void Draw(Uno.Graphics.Utils.Text.TextShaderData data)
void SpriteFontShader__Draw_fn(SpriteFontShader* __this, ::g::Uno::Graphics::Utils::Text::TextShaderData* data)
{
    __this->_draw_eee196bc.BlendEnabled(true);
    __this->_draw_eee196bc.DepthTestEnabled(false);
    __this->_draw_eee196bc.CullFace(uPtr(data)->DataCullFace);
    __this->_draw_eee196bc.BlendSrcRgb(2);
    __this->_draw_eee196bc.BlendDstRgb(3);
    __this->_draw_eee196bc.BlendDstAlpha(3);
    __this->_draw_eee196bc.Use();
    __this->_draw_eee196bc.Attrib1(0, data->PositionInfo.Type, data->PositionInfo.Buffer, data->PositionInfo.BufferStride, data->PositionInfo.BufferOffset);
    __this->_draw_eee196bc.Attrib1(1, data->ColorInfo.Type, data->ColorInfo.Buffer, data->ColorInfo.BufferStride, data->ColorInfo.BufferOffset);
    __this->_draw_eee196bc.Attrib1(2, data->TexCoordInfo.Type, data->TexCoordInfo.Buffer, data->TexCoordInfo.BufferStride, data->TexCoordInfo.BufferOffset);
    __this->_draw_eee196bc.Uniform12(3, data->ClipSpaceMatrix);
    __this->_draw_eee196bc.Sampler3(4, data->FontTexture, ::g::Uno::Graphics::SamplerState__TrilinearClamp());
    __this->_draw_eee196bc.Draw(data->CharCount * 6, data->IndexType, data->IndexBuffer);
}

// private generated void init_DrawCalls()
void SpriteFontShader__init_DrawCalls_fn(SpriteFontShader* __this)
{
    __this->init_DrawCalls();
}

// public generated SpriteFontShader New()
void SpriteFontShader__New1_fn(SpriteFontShader** __retval)
{
    *__retval = SpriteFontShader::New1();
}

// public generated SpriteFontShader() [instance]
void SpriteFontShader::ctor_1()
{
    ctor_();
    init_DrawCalls();
}

// private generated void init_DrawCalls() [instance]
void SpriteFontShader::init_DrawCalls()
{
    _draw_eee196bc = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::UnoGraphicsUtils_bundle::SpriteFontShaderf1bd4d8d());
}

// public generated SpriteFontShader New() [static]
SpriteFontShader* SpriteFontShader::New1()
{
    SpriteFontShader* obj1 = (SpriteFontShader*)uNew(SpriteFontShader_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/TextRenderer.uno
// ---------------------------------------------------------------------------------------------------------------------

// public sealed class TextRenderer
// {
static void TextRenderer_build(uType* type)
{
    ::STRINGS[2] = uString::Const("font");
    ::TYPES[3] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Char_typeof();
    ::TYPES[5] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(TextRenderer, _maxCharCount), 0,
        ::g::Uno::Float_typeof(), offsetof(TextRenderer, _tracking), 0,
        ::g::Uno::Byte4_typeof(), offsetof(TextRenderer, _color), 0,
        ::g::Uno::Graphics::Utils::Text::BitmapFont_typeof(), offsetof(TextRenderer, _font), 0,
        ::g::Uno::Graphics::Utils::Text::TextShader_typeof(), offsetof(TextRenderer, _shader), 0,
        ::g::Uno::Graphics::Utils::Text::TextTransform_typeof(), offsetof(TextRenderer, _transform), 0,
        ::TYPES[3/*byte[]*/], offsetof(TextRenderer, _buffer), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(TextRenderer, _vbo), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(TextRenderer, _ibo), 0,
        ::g::Uno::Graphics::Utils::Text::TextShaderData_typeof(), offsetof(TextRenderer, _data), 0,
        ::g::Uno::Bool_typeof(), offsetof(TextRenderer, _HasBegun), 0);
}

uType* TextRenderer_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(TextRenderer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Graphics.Utils.Text.TextRenderer", options);
    type->fp_build_ = TextRenderer_build;
    return type;
}

// public TextRenderer(int maxCharCount, Uno.Graphics.Utils.Text.TextShader shader, [Uno.Graphics.Utils.Text.TextTransform transform])
void TextRenderer__ctor__fn(TextRenderer* __this, int32_t* maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform)
{
    __this->ctor_(*maxCharCount, shader, transform);
}

// public void Begin(Uno.Graphics.Utils.Text.BitmapFont font)
void TextRenderer__Begin_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::BitmapFont* font)
{
    __this->Begin(font);
}

// public float4 get_Color()
void TextRenderer__get_Color_fn(TextRenderer* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void TextRenderer__set_Color_fn(TextRenderer* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public void End()
void TextRenderer__End_fn(TextRenderer* __this)
{
    __this->End();
}

// public generated bool get_HasBegun()
void TextRenderer__get_HasBegun_fn(TextRenderer* __this, bool* __retval)
{
    *__retval = __this->HasBegun();
}

// private generated void set_HasBegun(bool value)
void TextRenderer__set_HasBegun_fn(TextRenderer* __this, bool* value)
{
    __this->HasBegun(*value);
}

// public float2 MeasureString(string text)
void TextRenderer__MeasureString_fn(TextRenderer* __this, uString* text, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString(text);
}

// public float2 MeasureString(string text, int startIndex, int length)
void TextRenderer__MeasureString1_fn(TextRenderer* __this, uString* text, int32_t* startIndex, int32_t* length, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureString1(text, *startIndex, *length);
}

// public TextRenderer New(int maxCharCount, Uno.Graphics.Utils.Text.TextShader shader, [Uno.Graphics.Utils.Text.TextTransform transform])
void TextRenderer__New1_fn(int32_t* maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform, TextRenderer** __retval)
{
    *__retval = TextRenderer::New1(*maxCharCount, shader, transform);
}

// public Uno.Graphics.Utils.Text.TextTransform get_Transform()
void TextRenderer__get_Transform_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::TextTransform** __retval)
{
    *__retval = __this->Transform();
}

// public void set_Transform(Uno.Graphics.Utils.Text.TextTransform value)
void TextRenderer__set_Transform_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::TextTransform* value)
{
    __this->Transform(value);
}

// private void WriteGlyph(Uno.Graphics.Utils.Text.BitmapFont.GlyphInfo ci, float2 caret)
void TextRenderer__WriteGlyph_fn(TextRenderer* __this, ::g::Uno::Graphics::Utils::Text::BitmapFont__GlyphInfo* ci, ::g::Uno::Float2* caret)
{
    __this->WriteGlyph(*ci, *caret);
}

// public void WriteString(float2 caret, string text)
void TextRenderer__WriteString_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text)
{
    __this->WriteString(*caret, text);
}

// public void WriteString(float2 caret, string text, int startIndex, int length)
void TextRenderer__WriteString1_fn(TextRenderer* __this, ::g::Uno::Float2* caret, uString* text, int32_t* startIndex, int32_t* length)
{
    __this->WriteString1(*caret, text, *startIndex, *length);
}

// public TextRenderer(int maxCharCount, Uno.Graphics.Utils.Text.TextShader shader, [Uno.Graphics.Utils.Text.TextTransform transform]) [instance]
void TextRenderer::ctor_(int32_t maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform)
{
    _color = ::g::Uno::Byte4__New2(255, 255, 255, 255);
    _maxCharCount = maxCharCount;
    uArray* indexBuffer = uArray::New(::TYPES[3/*byte[]*/], (maxCharCount * 6) * 2);

    for (int32_t i = 0; i < maxCharCount; i++)
    {
        ::g::Uno::ByteArrayExtensions::Set23(indexBuffer, i * 12, (uint16_t)(i * 4), true);
        ::g::Uno::ByteArrayExtensions::Set23(indexBuffer, (i * 12) + 2, (uint16_t)((i * 4) + 1), true);
        ::g::Uno::ByteArrayExtensions::Set23(indexBuffer, (i * 12) + 4, (uint16_t)((i * 4) + 2), true);
        ::g::Uno::ByteArrayExtensions::Set23(indexBuffer, (i * 12) + 6, (uint16_t)(i * 4), true);
        ::g::Uno::ByteArrayExtensions::Set23(indexBuffer, (i * 12) + 8, (uint16_t)((i * 4) + 2), true);
        ::g::Uno::ByteArrayExtensions::Set23(indexBuffer, (i * 12) + 10, (uint16_t)((i * 4) + 3), true);
    }

    _ibo = ::g::Uno::Graphics::IndexBuffer::New1(indexBuffer, 0);
    _vbo = ::g::Uno::Graphics::VertexBuffer::New7(2);
    _buffer = uArray::New(::TYPES[3/*byte[]*/], (maxCharCount * 4) * 16);
    _data = ::g::Uno::Graphics::Utils::Text::TextShaderData::New1(_ibo, _vbo);
    _shader = shader;
    _transform = ((transform != nullptr) ? transform : (::g::Uno::Graphics::Utils::Text::DefaultTextTransform*)::g::Uno::Graphics::Utils::Text::DefaultTextTransform::New1());
}

// public void Begin(Uno.Graphics.Utils.Text.BitmapFont font) [instance]
void TextRenderer::Begin(::g::Uno::Graphics::Utils::Text::BitmapFont* font)
{
    if (font == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"font"*/]));

    _font = font;
    uPtr(_data)->CharCount = 0;
    HasBegun(true);
}

// public float4 get_Color() [instance]
::g::Uno::Float4 TextRenderer::Color()
{
    return ::g::Uno::Float4__New2((float)_color.X / 255.0f, (float)_color.Y / 255.0f, (float)_color.Z / 255.0f, (float)_color.W / 255.0f);
}

// public void set_Color(float4 value) [instance]
void TextRenderer::Color(::g::Uno::Float4 value)
{
    _color = ::g::Uno::Byte4__New2((uint8_t)(::g::Uno::Math::Saturate1(value.X) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Y) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.Z) * 255.0f), (uint8_t)(::g::Uno::Math::Saturate1(value.W) * 255.0f));
}

// public void End() [instance]
void TextRenderer::End()
{
    if (uPtr(_data)->CharCount > 0)
    {
        uPtr(_vbo)->Update(_buffer);
        uPtr(_data)->FontTexture = uPtr(_font)->Texture;
        uPtr(_data)->FontSpread = uPtr(_font)->PixelSpread;
        uPtr(_data)->ClipSpaceMatrix = uPtr(_transform)->ResolveClipSpaceMatrix();
        uPtr(_data)->DataCullFace = uPtr(_transform)->CullFace();
        uPtr(_shader)->Draw(_data);
        uPtr(_data)->CharCount = 0;
    }

    _font = nullptr;
    HasBegun(false);
}

// public generated bool get_HasBegun() [instance]
bool TextRenderer::HasBegun()
{
    return _HasBegun;
}

// private generated void set_HasBegun(bool value) [instance]
void TextRenderer::HasBegun(bool value)
{
    _HasBegun = value;
}

// public float2 MeasureString(string text) [instance]
::g::Uno::Float2 TextRenderer::MeasureString(uString* text)
{
    return MeasureString1(text, 0, uPtr(text)->Length());
}

// public float2 MeasureString(string text, int startIndex, int length) [instance]
::g::Uno::Float2 TextRenderer::MeasureString1(uString* text, int32_t startIndex, int32_t length)
{
    bool ret2;
    bool ret3;

    if ((_font == nullptr) || ::g::Uno::String::op_Equality(text, nullptr))
        return ::g::Uno::Float2__New1(0.0f);

    float caret = 0.0f;
    char16_t last = 0;

    for (int32_t i = startIndex; i < (startIndex + length); i++)
    {
        char16_t c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Graphics::Utils::Text::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<char16_t>(c), &ci, &ret2), ret2))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Graphics::Utils::Text::BitmapFont__CharPair__New1(last, c)), &kerning, &ret3), ret3))
                caret = caret + (kerning * uPtr(_data)->FontScale);

            caret = caret + ((ci.Advance * uPtr(_data)->FontScale) + _tracking);
        }
        else if ((uPtr(_font)->FontFace != nullptr) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Graphics::Utils::Text::RenderedGlyph rg = uPtr(uPtr(_font)->FontFace)->RenderGlyph(uPtr(_font)->PixelSize, c);
            ::g::Uno::Float2 kerning1;

            if (uPtr(uPtr(_font)->FontFace)->TryGetKerning(uPtr(_font)->PixelSize, last, c, &kerning1))
                caret = caret + (kerning1.X * uPtr(_data)->FontScale);

            caret = caret + ((::g::Uno::Math::Floor1(rg.Advance.X + 0.5f) * uPtr(_data)->FontScale) + _tracking);
        }

        last = c;
    }

    return ::g::Uno::Float2__New2(caret, uPtr(_font)->Ascent + uPtr(_font)->Descent);
}

// public Uno.Graphics.Utils.Text.TextTransform get_Transform() [instance]
::g::Uno::Graphics::Utils::Text::TextTransform* TextRenderer::Transform()
{
    return _transform;
}

// public void set_Transform(Uno.Graphics.Utils.Text.TextTransform value) [instance]
void TextRenderer::Transform(::g::Uno::Graphics::Utils::Text::TextTransform* value)
{
    _transform = value;
}

// private void WriteGlyph(Uno.Graphics.Utils.Text.BitmapFont.GlyphInfo ci, float2 caret) [instance]
void TextRenderer::WriteGlyph(::g::Uno::Graphics::Utils::Text::BitmapFont__GlyphInfo ci, ::g::Uno::Float2 caret)
{
    if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
    {
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Addition2(caret, ::g::Uno::Float2__op_Multiply1(ci.Bearing, uPtr(_data)->FontScale));
        int32_t o = uPtr(_data)->CharCount * 64;
        ::g::Uno::Float2 s = ::g::Uno::Float2__op_Multiply1(ci.Size, uPtr(_data)->FontScale);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o, p.X, true);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o + 4, p.Y + s.Y, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 8, ci.UpperLeft.X, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 10, ci.LowerRight.Y, true);
        ::g::Uno::ByteArrayExtensions::Set2(_buffer, o + 12, _color);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o + 16, p.X + s.X, true);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o + 20, p.Y + s.Y, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 24, ci.LowerRight.X, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 26, ci.LowerRight.Y, true);
        ::g::Uno::ByteArrayExtensions::Set2(_buffer, o + 28, _color);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o + 32, p.X + s.X, true);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o + 36, p.Y, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 40, ci.LowerRight.X, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 42, ci.UpperLeft.Y, true);
        ::g::Uno::ByteArrayExtensions::Set2(_buffer, o + 44, _color);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o + 48, p.X, true);
        ::g::Uno::ByteArrayExtensions::Set4(_buffer, o + 52, p.Y, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 56, ci.UpperLeft.X, true);
        ::g::Uno::ByteArrayExtensions::Set23(_buffer, o + 58, ci.UpperLeft.Y, true);
        ::g::Uno::ByteArrayExtensions::Set2(_buffer, o + 60, _color);
        uPtr(_data)->CharCount++;
    }
}

// public void WriteString(float2 caret, string text) [instance]
void TextRenderer::WriteString(::g::Uno::Float2 caret, uString* text)
{
    WriteString1(caret, text, 0, uPtr(text)->Length());
}

// public void WriteString(float2 caret, string text, int startIndex, int length) [instance]
void TextRenderer::WriteString1(::g::Uno::Float2 caret, uString* text, int32_t startIndex, int32_t length)
{
    bool ret4;
    bool ret5;
    bool ret6;
    bool ret7;
    char16_t last = 0;

    if (uPtr(_font)->PixelSpread > 0.0f)
        caret = ::g::Uno::Float2__op_Subtraction2(caret, ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__New1(uPtr(_font)->PixelSpread * uPtr(_data)->FontScale), ::g::Uno::Float2__New2(1.0f, 2.0f)));

    for (int32_t i = startIndex; i < (startIndex + length); i++)
    {
        char16_t c = uPtr(text)->Item(i);

        if ((i == 0) && (c == 8203))
            continue;

        ::g::Uno::Graphics::Utils::Text::BitmapFont__GlyphInfo ci;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Glyphs), uCRef<char16_t>(c), &ci, &ret4), ret4))
        {
            float kerning;

            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(_font)->Kernings), uCRef(::g::Uno::Graphics::Utils::Text::BitmapFont__CharPair__New1(last, c)), &kerning, &ret5), ret5))
                caret.X = (caret.X + (kerning * uPtr(_data)->FontScale));

            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
            {
                WriteGlyph(ci, caret);

                if (uPtr(_data)->CharCount == _maxCharCount)
                {
                    ::g::Uno::Graphics::Utils::Text::BitmapFont* temp = _font;
                    End();
                    Begin(temp);
                }
            }

            caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
        }
        else if ((uPtr(_font)->FontFace != nullptr) && uPtr(uPtr(_font)->FontFace)->ContainsGlyph(uPtr(_font)->PixelSize, c))
        {
            ::g::Uno::Graphics::Utils::Text::BitmapFont* oldFont = _font;
            ::g::Uno::Graphics::Utils::Text::BitmapFont* tempFont = ::g::Uno::Graphics::Utils::Text::FontFaceSpriteFont::RenderSpriteFont(uPtr(oldFont)->FontFace, uPtr(oldFont)->PixelSize, ::g::Uno::Char::ToString(c, ::TYPES[4/*char*/]));

            {
                try
                {
                    {
                        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Glyphs), uCRef<char16_t>(c), &ci, &ret6), ret6))
                        {
                            float kerning1;

                            if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(tempFont)->Kernings), uCRef(::g::Uno::Graphics::Utils::Text::BitmapFont__CharPair__New1(last, c)), &kerning1, &ret7), ret7))
                                caret.X = (caret.X + (kerning1 * uPtr(_data)->FontScale));

                            if ((ci.UpperLeft.X != ci.LowerRight.X) && (ci.UpperLeft.Y != ci.LowerRight.Y))
                            {
                                End();
                                Begin(tempFont);
                                WriteGlyph(ci, caret);
                                End();
                                Begin(oldFont);
                            }

                            caret.X = (caret.X + ((ci.Advance * uPtr(_data)->FontScale) + _tracking));
                        }
                    }
                }

                catch (const uThrowable& __t)
                {
                    {
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)tempFont), ::TYPES[5/*Uno.IDisposable*/]));
                    }
                                        throw __t;
                    goto __after_finally_1;
                }

                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)tempFont), ::TYPES[5/*Uno.IDisposable*/]));
                }
                __after_finally_1:;
            }
        }

        last = c;
    }
}

// public TextRenderer New(int maxCharCount, Uno.Graphics.Utils.Text.TextShader shader, [Uno.Graphics.Utils.Text.TextTransform transform]) [static]
TextRenderer* TextRenderer::New1(int32_t maxCharCount, ::g::Uno::Graphics::Utils::Text::TextShader* shader, ::g::Uno::Graphics::Utils::Text::TextTransform* transform)
{
    TextRenderer* obj1 = (TextRenderer*)uNew(TextRenderer_typeof());
    obj1->ctor_(maxCharCount, shader, transform);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/TextShader.uno
// -------------------------------------------------------------------------------------------------------------------

// public abstract class TextShader
// {
static void TextShader_build(uType* type)
{
}

TextShader_type* TextShader_typeof()
{
    static uSStrong<TextShader_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextShader);
    options.TypeSize = sizeof(TextShader_type);
    type = (TextShader_type*)uClassType::New("Uno.Graphics.Utils.Text.TextShader", options);
    type->fp_build_ = TextShader_build;
    return type;
}

// protected generated TextShader()
void TextShader__ctor__fn(TextShader* __this)
{
    __this->ctor_();
}

// protected generated TextShader() [instance]
void TextShader::ctor_()
{
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/TextShader.uno
// -------------------------------------------------------------------------------------------------------------------

// public sealed class TextShaderData
// {
static void TextShaderData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(TextShaderData, FontScale), 0,
        ::g::Uno::Float_typeof(), offsetof(TextShaderData, FontSpread), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(TextShaderData, ClipSpaceMatrix), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextShaderData, FontTexture), 0,
        ::g::Uno::Graphics::PolygonFace_typeof(), offsetof(TextShaderData, DataCullFace), 0,
        ::g::Uno::Int_typeof(), offsetof(TextShaderData, CharCount), 0,
        ::g::Uno::Graphics::IndexType_typeof(), offsetof(TextShaderData, IndexType), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(TextShaderData, IndexBuffer), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(TextShaderData, PositionInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(TextShaderData, TexCoordInfo), 0,
        ::g::Uno::Graphics::VertexAttributeInfo_typeof(), offsetof(TextShaderData, ColorInfo), 0);
}

uType* TextShaderData_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.ObjectSize = sizeof(TextShaderData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Graphics.Utils.Text.TextShaderData", options);
    type->fp_build_ = TextShaderData_build;
    return type;
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo)
void TextShaderData__ctor__fn(TextShaderData* __this, ::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    __this->ctor_(ibo, vbo);
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo)
void TextShaderData__New1_fn(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo, TextShaderData** __retval)
{
    *__retval = TextShaderData::New1(ibo, vbo);
}

// internal TextShaderData(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [instance]
void TextShaderData::ctor_(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    FontScale = 1.0f;
    ClipSpaceMatrix = ::g::Uno::Float4x4__Identity();
    DataCullFace = 0;
    IndexType = 2;
    IndexBuffer = ibo;
    PositionInfo.Buffer = vbo;
    PositionInfo.BufferOffset = 0;
    PositionInfo.BufferStride = 16;
    PositionInfo.Type = 2;
    TexCoordInfo.Buffer = vbo;
    TexCoordInfo.BufferOffset = 8;
    TexCoordInfo.BufferStride = 16;
    TexCoordInfo.Type = 14;
    ColorInfo.Buffer = vbo;
    ColorInfo.BufferOffset = 12;
    ColorInfo.BufferStride = 16;
    ColorInfo.Type = 20;
}

// internal TextShaderData New(Uno.Graphics.IndexBuffer ibo, Uno.Graphics.VertexBuffer vbo) [static]
TextShaderData* TextShaderData::New1(::g::Uno::Graphics::IndexBuffer* ibo, ::g::Uno::Graphics::VertexBuffer* vbo)
{
    TextShaderData* obj1 = (TextShaderData*)uNew(TextShaderData_typeof());
    obj1->ctor_(ibo, vbo);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/TextTransform.uno
// ----------------------------------------------------------------------------------------------------------------------

// public abstract class TextTransform
// {
static void TextTransform_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4x4_typeof(), offsetof(TextTransform, _Matrix), 0);
}

TextTransform_type* TextTransform_typeof()
{
    static uSStrong<TextTransform_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(TextTransform);
    options.TypeSize = sizeof(TextTransform_type);
    type = (TextTransform_type*)uClassType::New("Uno.Graphics.Utils.Text.TextTransform", options);
    type->fp_build_ = TextTransform_build;
    type->fp_get_CullFace = TextTransform__get_CullFace_fn;
    return type;
}

// public TextTransform()
void TextTransform__ctor__fn(TextTransform* __this)
{
    __this->ctor_();
}

// public virtual Uno.Graphics.PolygonFace get_CullFace()
void TextTransform__get_CullFace_fn(TextTransform* __this, int32_t* __retval)
{
    return *__retval = 0, void();
}

// public generated float4x4 get_Matrix()
void TextTransform__get_Matrix_fn(TextTransform* __this, ::g::Uno::Float4x4* __retval)
{
    *__retval = __this->Matrix();
}

// public generated void set_Matrix(float4x4 value)
void TextTransform__set_Matrix_fn(TextTransform* __this, ::g::Uno::Float4x4* value)
{
    __this->Matrix(*value);
}

// public TextTransform() [instance]
void TextTransform::ctor_()
{
    Matrix(::g::Uno::Float4x4__Identity());
}

// public generated float4x4 get_Matrix() [instance]
::g::Uno::Float4x4 TextTransform::Matrix()
{
    return _Matrix;
}

// public generated void set_Matrix(float4x4 value) [instance]
void TextTransform::Matrix(::g::Uno::Float4x4 value)
{
    _Matrix = value;
}
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
