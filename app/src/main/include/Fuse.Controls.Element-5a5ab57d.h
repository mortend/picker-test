// This file was generated based on '../Source/Fuse.Controls.Navigation/Navigator.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float.h>
#include <Uno.UX.Property1-1.h>
namespace g{namespace Fuse{namespace Controls{struct Element_Opacity_Property;}}}
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Controls{

// internal sealed class Element_Opacity_Property
// {
::g::Uno::UX::Property1_type* Element_Opacity_Property_typeof();
void Element_Opacity_Property__ctor_3_fn(Element_Opacity_Property* __this, ::g::Fuse::Elements::Element* obj);
void Element_Opacity_Property__Get1_fn(Element_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval);
void Element_Opacity_Property__New1_fn(::g::Fuse::Elements::Element* obj, Element_Opacity_Property** __retval);
void Element_Opacity_Property__get_Object_fn(Element_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval);
void Element_Opacity_Property__Set1_fn(Element_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin);
void Element_Opacity_Property__get_SupportsOriginSetter_fn(Element_Opacity_Property* __this, bool* __retval);

struct Element_Opacity_Property : ::g::Uno::UX::Property1
{
    uStrong< ::g::Fuse::Elements::Element*> _obj;

    void ctor_3(::g::Fuse::Elements::Element* obj);
    static Element_Opacity_Property* New1(::g::Fuse::Elements::Element* obj);
};
// }

}}} // ::g::Fuse::Controls
