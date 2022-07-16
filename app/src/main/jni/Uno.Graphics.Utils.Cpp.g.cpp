// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <uBase/Buffer.h>
#include <uBase/BufferStream.h>
#include <uBase/Bundle.h>
#include <uBase/Memory.h>
#include <uImage/Bitmap.h>
#include <uImage/Jpeg.h>
#include <uImage/Png.h>
#include <uImage/Texture.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.Utils.Cp-4d8fcd80.h>
#include <Uno.Graphics.Utils.Cp-81b1e966.h>
#include <Uno.Graphics.Utils.Cp-88e5de11.h>
#include <Uno.Graphics.Utils.Cp-a773b487.h>
#include <Uno.Graphics.Utils.Cp-b7418cb3.h>
#include <Uno.Graphics.Utils.Cp-f6382830.h>
#include <Uno.Graphics.Utils.Te-a0d8914a.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.String.h>
#include <Uno.UInt.h>
#include <Uno/GLHelper.h>

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Cpp{

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppFontFace.uno
// -------------------------------------------------------------------------------------------------------------------

// internal sealed extern class CppFontFace
// {
static void CppFontFace_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Graphics::Utils::Text::FontFace_type, interface0));
    type->SetFields(0,
        ::g::Uno::Graphics::Utils::Cpp::CppFontFaceHandle_typeof(), offsetof(CppFontFace, _handle), 0);
}

::g::Uno::Graphics::Utils::Text::FontFace_type* CppFontFace_typeof()
{
    static uSStrong< ::g::Uno::Graphics::Utils::Text::FontFace_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Graphics::Utils::Text::FontFace_typeof();
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(CppFontFace);
    options.TypeSize = sizeof(::g::Uno::Graphics::Utils::Text::FontFace_type);
    type = (::g::Uno::Graphics::Utils::Text::FontFace_type*)uClassType::New("Uno.Graphics.Utils.Cpp.CppFontFace", options);
    type->fp_build_ = CppFontFace_build;
    type->fp_ContainsGlyph = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, char16_t*, bool*))CppFontFace__ContainsGlyph_fn;
    type->fp_Dispose = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*))CppFontFace__Dispose_fn;
    type->fp_get_FamilyName = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, uString**))CppFontFace__get_FamilyName_fn;
    type->fp_GetAscender = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, float*))CppFontFace__GetAscender_fn;
    type->fp_GetDescender = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, float*))CppFontFace__GetDescender_fn;
    type->fp_GetLineHeight = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, float*))CppFontFace__GetLineHeight_fn;
    type->fp_RenderGlyph = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, char16_t*, ::g::Uno::Graphics::Utils::Text::RenderedGlyph*))CppFontFace__RenderGlyph_fn;
    type->fp_get_StyleName = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, uString**))CppFontFace__get_StyleName_fn;
    type->fp_TryGetKerning = (void(*)(::g::Uno::Graphics::Utils::Text::FontFace*, float*, char16_t*, char16_t*, ::g::Uno::Float2*, bool*))CppFontFace__TryGetKerning_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))CppFontFace__Dispose_fn;
    return type;
}

// public CppFontFace(byte[] data, int offset, int length)
void CppFontFace__ctor_1_fn(CppFontFace* __this, uArray* data, int32_t* offset, int32_t* length)
{
    __this->ctor_1(data, *offset, *length);
}

// public CppFontFace(Uno.IO.BundleFile file)
void CppFontFace__ctor_2_fn(CppFontFace* __this, ::g::Uno::IO::BundleFile* file)
{
    __this->ctor_2(file);
}

// public override sealed bool ContainsGlyph(float size, char glyph)
void CppFontFace__ContainsGlyph_fn(CppFontFace* __this, float* size, char16_t* glyph, bool* __retval)
{
    float size_ = *size;
    char16_t glyph_ = *glyph;
    return *__retval = __this->_handle->ContainsGlyph(size_, glyph_), void();
}

// public override sealed void Dispose()
void CppFontFace__Dispose_fn(CppFontFace* __this)
{
    __this->_handle->Release();
    __this->_handle = 0;
}

// public override sealed string get_FamilyName()
void CppFontFace__get_FamilyName_fn(CppFontFace* __this, uString** __retval)
{
    const auto temp = __this->_handle->GetFamilyName();
    return *__retval = uString::Utf8(temp.Ptr(), temp.Length()), void();
}

// public override sealed float GetAscender(float size)
void CppFontFace__GetAscender_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetAscender(size_), void();
}

// public override sealed float GetDescender(float size)
void CppFontFace__GetDescender_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetDescender(size_), void();
}

// public override sealed float GetLineHeight(float size)
void CppFontFace__GetLineHeight_fn(CppFontFace* __this, float* size, float* __retval)
{
    float size_ = *size;
    return *__retval = __this->_handle->GetLineHeight(size_), void();
}

// private static Uno.Graphics.Utils.Cpp.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length)
void CppFontFace__LoadFontFaceHandle_fn(uArray* data, int32_t* offset, int32_t* length, uImage::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle(data, *offset, *length);
}

// private static Uno.Graphics.Utils.Cpp.CppFontFaceHandle LoadFontFaceHandle(string filename)
void CppFontFace__LoadFontFaceHandle1_fn(uString* filename, uImage::FontFace** __retval)
{
    *__retval = CppFontFace::LoadFontFaceHandle1(filename);
}

// public CppFontFace New(byte[] data, int offset, int length)
void CppFontFace__New1_fn(uArray* data, int32_t* offset, int32_t* length, CppFontFace** __retval)
{
    *__retval = CppFontFace::New1(data, *offset, *length);
}

// public CppFontFace New(Uno.IO.BundleFile file)
void CppFontFace__New2_fn(::g::Uno::IO::BundleFile* file, CppFontFace** __retval)
{
    *__retval = CppFontFace::New2(file);
}

// public override sealed Uno.Graphics.Utils.Text.RenderedGlyph RenderGlyph(float size, char glyph)
void CppFontFace__RenderGlyph_fn(CppFontFace* __this, float* size, char16_t* glyph, ::g::Uno::Graphics::Utils::Text::RenderedGlyph* __retval)
{
    float size_ = *size;
    char16_t glyph_ = *glyph;
    uBase::Vector2 advance, bearing;
    uBase::Auto<uImage::Bitmap> bitmap = __this->_handle->RenderGlyph(size_, glyph_, uImage::FontRenderModeNormal, &advance, &bearing);
    uArray* bytes = uArray::New(::g::Uno::Byte_typeof()->Array(), bitmap->GetSizeInBytes(), bitmap->GetPtr());
    
    return *__retval = ::g::Uno::Graphics::Utils::Text::RenderedGlyph__New1(::g::Uno::Float2__New2(advance.X, advance.Y), ::g::Uno::Float2__New2(bearing.X, bearing.Y), ::g::Uno::Int2__New2(bitmap->GetWidth(), bitmap->GetHeight()), 1, bytes), void();
}

// public override sealed string get_StyleName()
void CppFontFace__get_StyleName_fn(CppFontFace* __this, uString** __retval)
{
    const auto temp = __this->_handle->GetStyleName();
    return *__retval = uString::Utf8(temp.Ptr(), temp.Length()), void();
}

// public override sealed bool TryGetKerning(float size, char left, char right, float2& result)
void CppFontFace__TryGetKerning_fn(CppFontFace* __this, float* size, char16_t* left, char16_t* right, ::g::Uno::Float2* result, bool* __retval)
{
    float size_ = *size;
    char16_t left_ = *left;
    char16_t right_ = *right;
    uBase::Vector2 kerning;
    if (__this->_handle->TryGetKerning(size_, left_, right_, &kerning))
    {
        result->X = kerning.X;
        result->Y = kerning.Y;
        return *__retval = true, void();
    }
    
    result->X = result->Y = 0;
    return *__retval = false, void();
}

// public CppFontFace(byte[] data, int offset, int length) [instance]
void CppFontFace::ctor_1(uArray* data, int32_t offset, int32_t length)
{
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle(data, offset, length);
}

// public CppFontFace(Uno.IO.BundleFile file) [instance]
void CppFontFace::ctor_2(::g::Uno::IO::BundleFile* file)
{
    ctor_();
    _handle = CppFontFace::LoadFontFaceHandle1(uPtr(file)->BundlePath());
}

// private static Uno.Graphics.Utils.Cpp.CppFontFaceHandle LoadFontFaceHandle(byte[] data, int offset, int length) [static]
uImage::FontFace* CppFontFace::LoadFontFaceHandle(uArray* data, int32_t offset, int32_t length)
{
    uBase::BufferStream stream(new uBase::BufferPtr((char*)data->Ptr() + offset, length, false), true, false);
    return uImage::FontFace::Load(&stream);
}

// private static Uno.Graphics.Utils.Cpp.CppFontFaceHandle LoadFontFaceHandle(string filename) [static]
uImage::FontFace* CppFontFace::LoadFontFaceHandle1(uString* filename)
{
    uCString temp(filename);
    uBase::Auto<uBase::Stream> f = uBase::Bundle->OpenFile(uBase::String(temp.Ptr, (int)temp.Length));
    return uImage::FontFace::Load(f);
}

// public CppFontFace New(byte[] data, int offset, int length) [static]
CppFontFace* CppFontFace::New1(uArray* data, int32_t offset, int32_t length)
{
    CppFontFace* obj2 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj2->ctor_1(data, offset, length);
    return obj2;
}

// public CppFontFace New(Uno.IO.BundleFile file) [static]
CppFontFace* CppFontFace::New2(::g::Uno::IO::BundleFile* file)
{
    CppFontFace* obj1 = (CppFontFace*)uNew(CppFontFace_typeof());
    obj1->ctor_2(file);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppFontFace.uno
// -------------------------------------------------------------------------------------------------------------------

// internal extern struct CppFontFaceHandle
// {
static void CppFontFaceHandle_build(uType* type)
{
}

uStructType* CppFontFaceHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(uImage::FontFace*);
    options.ValueSize = sizeof(uImage::FontFace*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.Utils.Cpp.CppFontFaceHandle", options);
    type->fp_build_ = CppFontFaceHandle_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppTexture.uno
// ------------------------------------------------------------------------------------------------------------------

// internal static extern class CppTexture
// {
static void CppTexture_build(uType* type)
{
}

uClassType* CppTexture_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Graphics.Utils.Cpp.CppTexture", options);
    type->fp_build_ = CppTexture_build;
    return type;
}

// private static uint CreateGLTexture(Uno.Graphics.Utils.Cpp.CppTexture.TexturePtr texData, bool generateMips, Uno.Graphics.Utils.Cpp.CppTexture.GLTextureInfo& outInfo)
void CppTexture__CreateGLTexture_fn(::uImage::Texture** texData, bool* generateMips, CppTexture__GLTextureInfo* outInfo, uint32_t* __retval)
{
    *__retval = CppTexture::CreateGLTexture(*texData, *generateMips, outInfo);
}

// public static texture2D Load2DJpeg(byte[] bytes)
void CppTexture__Load2DJpeg_fn(uArray* bytes, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = CppTexture::Load2DJpeg(bytes);
}

// public static texture2D Load2DPng(byte[] bytes)
void CppTexture__Load2DPng_fn(uArray* bytes, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = CppTexture::Load2DPng(bytes);
}

// private static bool TryGetGLFormat(Uno.Graphics.Utils.Cpp.CppTexture.NativeFormat format, uint& glFormat, uint& glType)
void CppTexture__TryGetGLFormat_fn(::uImage::Format* format, uint32_t* glFormat, uint32_t* glType, bool* __retval)
{
    *__retval = CppTexture::TryGetGLFormat(*format, glFormat, glType);
}

// private static uint CreateGLTexture(Uno.Graphics.Utils.Cpp.CppTexture.TexturePtr texData, bool generateMips, Uno.Graphics.Utils.Cpp.CppTexture.GLTextureInfo& outInfo) [static]
uint32_t CppTexture::CreateGLTexture(::uImage::Texture* texData, bool generateMips, CppTexture__GLTextureInfo* outInfo)
{
    GLuint texHandle;
    glGenTextures(1, &texHandle);
    
    int width = texData->Faces[0].MipLevels[0]->GetWidth();
    int height = texData->Faces[0].MipLevels[0]->GetHeight();
    int mipCount = texData->Faces[0].MipLevels.Length();
    
    GLenum texTarget =
        texData->Type == uImage::TextureTypeCube ?
            GL_TEXTURE_CUBE_MAP :
            GL_TEXTURE_2D;
    
    glBindTexture(texTarget, texHandle);
    glPixelStorei(GL_UNPACK_ALIGNMENT, 1);
    glPixelStorei(GL_PACK_ALIGNMENT, 1);
    
    for (int i = 0; i < texData->Faces.Length(); i++)
    {
        GLenum texFace =
            texTarget == GL_TEXTURE_CUBE_MAP ?
                GL_TEXTURE_CUBE_MAP_POSITIVE_X + i :
                GL_TEXTURE_2D;
    
        for (int j = 0; j < texData->Faces[i].MipLevels.Length(); j++)
        {
            uImage::Image* mip = texData->Faces[i].MipLevels[j];
            uBase::Auto<uImage::Bitmap> bmp = mip->ToBitmap();
    
            GLenum glFormat, glType;
            if (!CppTexture::TryGetGLFormat(bmp->GetFormat(), &glFormat, &glType))
                U_THROW_IOE("Unsupported texture format");
    
            glTexImage2D(texFace, j, glFormat, bmp->GetWidth(), bmp->GetHeight(), 0, glFormat, glType, bmp->GetPtr());
        }
    }
    
    if (generateMips)
    {
        glGenerateMipmap(texTarget);
        GLenum err = glGetError();
    
        if (err == GL_NO_ERROR)
        {
            int w = width, h = height;
    
            while (w > 1 || h > 1)
            {
                w /= 2;
                h /= 2;
                mipCount++;
            }
        }
    }
    
    if (outInfo)
    {
        outInfo->GLTarget = texTarget;
        outInfo->Width = width;
        outInfo->Height = height;
        outInfo->Depth = 1;
        outInfo->MipCount = mipCount;
    }
    
    return texHandle;
}

// public static texture2D Load2DJpeg(byte[] bytes) [static]
::g::Uno::Graphics::Texture2D* CppTexture::Load2DJpeg(uArray* bytes)
{
    try
    {
        uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(bytes->Ptr(), bytes->Length(), false);
        uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
        uBase::Auto<uImage::ImageReader> ir = uImage::Jpeg::CreateReader(bs);
        uBase::Auto<uImage::Bitmap> bmp = ir->ReadBitmap();
        int originalWidth = bmp->GetWidth(), originalHeight = bmp->GetHeight();
    
        int maxTextureSize;
        glGetIntegerv(GL_MAX_TEXTURE_SIZE, &maxTextureSize);
        while (bmp->GetWidth() > maxTextureSize ||
                bmp->GetHeight() > maxTextureSize)
        {
            bmp = bmp->DownSample2x2();
        }
    
        uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
    
        CppTexture__GLTextureInfo info;
        GLuint handle = CppTexture::CreateGLTexture(tex, false, &info);
    
        return ::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(originalWidth, originalHeight), info.MipCount, 0);
    }
    catch (const uBase::Exception &e)
    {
        const auto temp = e.GetMessage();
        U_THROW(::g::Uno::Exception::New2(uString::Utf8(temp.Ptr(), temp.Length())));
    }
}

// public static texture2D Load2DPng(byte[] bytes) [static]
::g::Uno::Graphics::Texture2D* CppTexture::Load2DPng(uArray* bytes)
{
    try
    {
        uBase::Auto<uBase::BufferPtr> bp = new uBase::BufferPtr(bytes->Ptr(), bytes->Length(), false);
        uBase::Auto<uBase::BufferStream> bs = new uBase::BufferStream(bp, true, false);
        uBase::Auto<uImage::ImageReader> ir = uImage::Png::CreateReader(bs);
        uBase::Auto<uImage::Bitmap> bmp = ir->ReadBitmap();
        int originalWidth = bmp->GetWidth(), originalHeight = bmp->GetHeight();
    
        int maxTextureSize;
        glGetIntegerv(GL_MAX_TEXTURE_SIZE, &maxTextureSize);
        while (bmp->GetWidth() > maxTextureSize ||
                bmp->GetHeight() > maxTextureSize)
        {
            bmp = bmp->DownSample2x2();
        }
    
        uBase::Auto<uImage::Texture> tex = uImage::Texture::Create(bmp);
    
        CppTexture__GLTextureInfo info;
        GLuint handle = CppTexture::CreateGLTexture(tex, false, &info);
    
        return ::g::Uno::Graphics::Texture2D::New2(handle, ::g::Uno::Int2__New2(originalWidth, originalHeight), info.MipCount, 0);
    }
    catch (const uBase::Exception &e)
    {
        const auto temp = e.GetMessage();
        U_THROW(::g::Uno::Exception::New2(uString::Utf8(temp.Ptr(), temp.Length())));
    }
}

// private static bool TryGetGLFormat(Uno.Graphics.Utils.Cpp.CppTexture.NativeFormat format, uint& glFormat, uint& glType) [static]
bool CppTexture::TryGetGLFormat(::uImage::Format format, uint32_t* glFormat, uint32_t* glType)
{
    switch (format)
    {
    case uImage::FormatRGBA_8_8_8_8_UInt_Normalize:
        *glFormat = GL_RGBA;
        *glType = GL_UNSIGNED_BYTE;
        return true;
    
    case uImage::FormatRGB_8_8_8_UInt_Normalize:
        *glFormat = GL_RGB;
        *glType = GL_UNSIGNED_BYTE;
        return true;
    
    case uImage::FormatR_8_UInt_Normalize:
    case uImage::FormatL_8_UInt_Normalize:
        *glFormat = GL_LUMINANCE;
        *glType = GL_UNSIGNED_BYTE;
        return true;
    
    case uImage::FormatRG_8_8_UInt_Normalize:
    case uImage::FormatLA_8_8_UInt_Normalize:
        *glFormat = GL_LUMINANCE_ALPHA;
        *glType = GL_UNSIGNED_BYTE;
        return true;
    
    default:
        return false;
    }
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppTexture.uno
// ------------------------------------------------------------------------------------------------------------------

// private struct CppTexture.GLTextureInfo
// {
static void CppTexture__GLTextureInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::UInt_typeof(), offsetof(CppTexture__GLTextureInfo, GLTarget), 0,
        ::g::Uno::Int_typeof(), offsetof(CppTexture__GLTextureInfo, Width), 0,
        ::g::Uno::Int_typeof(), offsetof(CppTexture__GLTextureInfo, Height), 0,
        ::g::Uno::Int_typeof(), offsetof(CppTexture__GLTextureInfo, Depth), 0,
        ::g::Uno::Int_typeof(), offsetof(CppTexture__GLTextureInfo, MipCount), 0);
}

uStructType* CppTexture__GLTextureInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.Alignment = alignof(CppTexture__GLTextureInfo);
    options.ValueSize = sizeof(CppTexture__GLTextureInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.Utils.Cpp.CppTexture.GLTextureInfo", options);
    type->fp_build_ = CppTexture__GLTextureInfo_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppTexture.uno
// ------------------------------------------------------------------------------------------------------------------

// private struct CppTexture.NativeFormat
// {
static void CppTexture__NativeFormat_build(uType* type)
{
}

uStructType* CppTexture__NativeFormat_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::uImage::Format);
    options.ValueSize = sizeof(::uImage::Format);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.Utils.Cpp.CppTexture.NativeFormat", options);
    type->fp_build_ = CppTexture__NativeFormat_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppTexture.uno
// ------------------------------------------------------------------------------------------------------------------

// private struct CppTexture.TexturePtr
// {
static void CppTexture__TexturePtr_build(uType* type)
{
}

uStructType* CppTexture__TexturePtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::uImage::Texture*);
    options.ValueSize = sizeof(::uImage::Texture*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Graphics.Utils.Cpp.CppTexture.TexturePtr", options);
    type->fp_build_ = CppTexture__TexturePtr_build;
    return type;
}
// }

}}}}} // ::g::Uno::Graphics::Utils::Cpp
