// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Cpp/CppTexture.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uImage/Format.h>
#include <uImage/Texture.h>
#include <uno.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Cpp{struct CppTexture;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Cpp{struct CppTexture__GLTextureInfo;}}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Cpp{

// internal static extern class CppTexture
// {
uClassType* CppTexture_typeof();
void CppTexture__CreateGLTexture_fn(::uImage::Texture** texData, bool* generateMips, CppTexture__GLTextureInfo* outInfo, uint32_t* __retval);
void CppTexture__Load2DJpeg_fn(uArray* bytes, ::g::Uno::Graphics::Texture2D** __retval);
void CppTexture__Load2DPng_fn(uArray* bytes, ::g::Uno::Graphics::Texture2D** __retval);
void CppTexture__TryGetGLFormat_fn(::uImage::Format* format, uint32_t* glFormat, uint32_t* glType, bool* __retval);

struct CppTexture : uObject
{
    static uint32_t CreateGLTexture(::uImage::Texture* texData, bool generateMips, CppTexture__GLTextureInfo* outInfo);
    static ::g::Uno::Graphics::Texture2D* Load2DJpeg(uArray* bytes);
    static ::g::Uno::Graphics::Texture2D* Load2DPng(uArray* bytes);
    static bool TryGetGLFormat(::uImage::Format format, uint32_t* glFormat, uint32_t* glType);
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Cpp
