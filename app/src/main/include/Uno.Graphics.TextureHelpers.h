// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Graphics/TextureHelpers.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace Graphics{struct TextureHelpers;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{
namespace Graphics{

// public static class TextureHelpers
// {
uClassType* TextureHelpers_typeof();
void TextureHelpers__GetMipCount1_fn(::g::Uno::Int2* size, int32_t* __retval);
void TextureHelpers__GetMipSize_fn(::g::Uno::Graphics::Texture2D* texture, int32_t* mip, ::g::Uno::Int2* __retval);

struct TextureHelpers : uObject
{
    static int32_t GetMipCount1(::g::Uno::Int2 size);
    static ::g::Uno::Int2 GetMipSize(::g::Uno::Graphics::Texture2D* texture, int32_t mip);
};
// }

}}} // ::g::Uno::Graphics
