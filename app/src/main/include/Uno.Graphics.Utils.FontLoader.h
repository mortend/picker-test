// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/FontLoader.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct FontFace;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{struct FontLoader;}}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{

// public static class FontLoader
// {
uClassType* FontLoader_typeof();
void FontLoader__LoadFace_fn(uArray* data, ::g::Uno::Graphics::Utils::Text::FontFace** __retval);
void FontLoader__LoadFace1_fn(::g::Uno::IO::BundleFile* file, ::g::Uno::Graphics::Utils::Text::FontFace** __retval);

struct FontLoader : uObject
{
    static ::g::Uno::Graphics::Utils::Text::FontFace* LoadFace(uArray* data);
    static ::g::Uno::Graphics::Utils::Text::FontFace* LoadFace1(::g::Uno::IO::BundleFile* file);
};
// }

}}}} // ::g::Uno::Graphics::Utils
