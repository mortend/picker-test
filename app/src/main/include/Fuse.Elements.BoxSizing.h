// This file was generated based on '../Source/Fuse.Elements/BoxSizing.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct BoxPlacement;}}}
namespace g{namespace Fuse{namespace Elements{struct BoxSizing;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{struct LayoutParams;}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float2;}}

namespace g{
namespace Fuse{
namespace Elements{

// internal abstract class BoxSizing
// {
struct BoxSizing_type : uType
{
    void(*fp_CalcArrangePaddingSize)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_CalcBoxPlacement)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Fuse::Elements::BoxPlacement*);
    void(*fp_CalcMarginSize)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*);
    void(*fp_IsContentRelativeSize)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*, int32_t*);
    void(*fp_RequestLayout)(::g::Fuse::Elements::BoxSizing*, ::g::Fuse::Elements::Element*);
};

BoxSizing_type* BoxSizing_typeof();
void BoxSizing__ctor__fn(BoxSizing* __this);
void BoxSizing__EffectiveAnchor_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* halign, int32_t* valign, ::g::Uno::UX::Size2* anchor);
void BoxSizing__EffectiveHorizontalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval);
void BoxSizing__EffectiveVerticalAlignment_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval);
void BoxSizing__GetConstraints_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams* lp, int32_t* flags, ::g::Fuse::LayoutParams* __retval);
void BoxSizing__IsContentRelativeSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, int32_t* __retval);
void BoxSizing__RequestLayout_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element);
void BoxSizing__SimpleToAnchor_fn(BoxSizing* __this, int32_t* align, float* __retval);
void BoxSizing__UnitSize_fn(BoxSizing* __this, ::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size* value, float* relative, bool* hasRelative, bool* known, float* __retval);

struct BoxSizing : uObject
{
    void ctor_();
    ::g::Uno::Float2 CalcArrangePaddingSize(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp);
    ::g::Fuse::Elements::BoxPlacement CalcBoxPlacement(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp);
    ::g::Uno::Float2 CalcMarginSize(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp);
    void EffectiveAnchor(::g::Fuse::Elements::Element* element, int32_t halign, int32_t valign, ::g::Uno::UX::Size2* anchor);
    int32_t EffectiveHorizontalAlignment(::g::Fuse::Elements::Element* element);
    int32_t EffectiveVerticalAlignment(::g::Fuse::Elements::Element* element);
    ::g::Fuse::LayoutParams GetConstraints(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp, int32_t flags);
    int32_t IsContentRelativeSize(::g::Fuse::Elements::Element* element) { int32_t __retval; return (((BoxSizing_type*)__type)->fp_IsContentRelativeSize)(this, element, &__retval), __retval; }
    void RequestLayout(::g::Fuse::Elements::Element* element) { (((BoxSizing_type*)__type)->fp_RequestLayout)(this, element); }
    float SimpleToAnchor(int32_t align);
    float UnitSize(::g::Fuse::Elements::Element* element, ::g::Uno::UX::Size value, float relative, bool hasRelative, bool* known);
    static int32_t IsContentRelativeSize(BoxSizing* __this, ::g::Fuse::Elements::Element* element) { int32_t __retval; return BoxSizing__IsContentRelativeSize_fn(__this, element, &__retval), __retval; }
    static void RequestLayout(BoxSizing* __this, ::g::Fuse::Elements::Element* element) { BoxSizing__RequestLayout_fn(__this, element); }
};

}}} // ::g::Fuse::Elements

#include <Fuse.Elements.BoxPlacement.h>
#include <Fuse.LayoutParams.h>
#include <Uno.Float2.h>
#include <Uno.UX.Size.h>

namespace g{
namespace Fuse{
namespace Elements{

inline ::g::Uno::Float2 BoxSizing::CalcArrangePaddingSize(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return (((BoxSizing_type*)__type)->fp_CalcArrangePaddingSize)(this, element, &lp, &__retval), __retval; }
inline ::g::Fuse::Elements::BoxPlacement BoxSizing::CalcBoxPlacement(::g::Fuse::Elements::Element* element, ::g::Uno::Float2 position, ::g::Fuse::LayoutParams lp) { ::g::Fuse::Elements::BoxPlacement __retval; return (((BoxSizing_type*)__type)->fp_CalcBoxPlacement)(this, element, &position, &lp, &__retval), __retval; }
inline ::g::Uno::Float2 BoxSizing::CalcMarginSize(::g::Fuse::Elements::Element* element, ::g::Fuse::LayoutParams lp) { ::g::Uno::Float2 __retval; return (((BoxSizing_type*)__type)->fp_CalcMarginSize)(this, element, &lp, &__retval), __retval; }
// }

}}} // ::g::Fuse::Elements
