// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/TextureLoader.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{struct TextureLoader;}}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{

// public static class TextureLoader
// {
uClassType* TextureLoader_typeof();
void TextureLoader__Load2D1_fn(uString* filename, uArray* bytes, ::g::Uno::Graphics::Texture2D** __retval);
void TextureLoader__Load2DJpeg_fn(uArray* bytes, ::g::Uno::Graphics::Texture2D** __retval);
void TextureLoader__Load2DPng_fn(uArray* bytes, ::g::Uno::Graphics::Texture2D** __retval);

struct TextureLoader : uObject
{
    static ::g::Uno::Graphics::Texture2D* Load2D1(uString* filename, uArray* bytes);
    static ::g::Uno::Graphics::Texture2D* Load2DJpeg(uArray* bytes);
    static ::g::Uno::Graphics::Texture2D* Load2DPng(uArray* bytes);
};
// }

}}}} // ::g::Uno::Graphics::Utils
