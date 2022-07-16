// This file was generated based on '../Source/Fuse.Drawing/Brushes/DashedColor.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Drawing.DynamicBrush.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Drawing{struct DashedColor;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// public sealed class DashedColor
// {
::g::Fuse::Drawing::Brush_type* DashedColor_typeof();
void DashedColor__ctor_4_fn(DashedColor* __this, ::g::Uno::Float4* color, float* dashedSize);
void DashedColor__get_Color_fn(DashedColor* __this, ::g::Uno::Float4* __retval);
void DashedColor__set_Color_fn(DashedColor* __this, ::g::Uno::Float4* value);
void DashedColor__get_DashedSize_fn(DashedColor* __this, float* __retval);
void DashedColor__set_DashedSize_fn(DashedColor* __this, float* value);
void DashedColor__get_IsCompletelyTransparent_fn(DashedColor* __this, bool* __retval);
void DashedColor__New3_fn(::g::Uno::Float4* color, float* dashedSize, DashedColor** __retval);

struct DashedColor : ::g::Fuse::Drawing::DynamicBrush
{
    static ::g::Uno::UX::Selector _colorName_;
    static ::g::Uno::UX::Selector& _colorName() { return DashedColor_typeof()->Init(), _colorName_; }
    static ::g::Uno::UX::Selector _dashedSizeName_;
    static ::g::Uno::UX::Selector& _dashedSizeName() { return DashedColor_typeof()->Init(), _dashedSizeName_; }
    ::g::Uno::Float4 _color;
    float _dashedSize;

    void ctor_4(::g::Uno::Float4 color, float dashedSize);
    ::g::Uno::Float4 Color();
    void Color(::g::Uno::Float4 value);
    float DashedSize();
    void DashedSize(float value);
    static DashedColor* New3(::g::Uno::Float4 color, float dashedSize);
};
// }

}}} // ::g::Fuse::Drawing
