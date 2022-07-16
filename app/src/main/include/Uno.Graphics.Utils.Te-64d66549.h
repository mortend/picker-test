// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/BitmapFont.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float2.h>
#include <Uno.UShort2.h>
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct BitmapFont__GlyphInfo;}}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public struct BitmapFont.GlyphInfo
// {
uStructType* BitmapFont__GlyphInfo_typeof();

struct BitmapFont__GlyphInfo
{
    float Advance;
    ::g::Uno::Float2 Bearing;
    ::g::Uno::Float2 Size;
    ::g::Uno::UShort2 UpperLeft;
    ::g::Uno::UShort2 LowerRight;
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
