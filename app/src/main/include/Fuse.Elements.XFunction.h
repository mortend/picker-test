// This file was generated based on '../Source/Fuse.Elements/LayoutFunctions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Elements.LayoutFunction.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Elements{struct Element;}}}
namespace g{namespace Fuse{namespace Elements{struct XFunction;}}}
namespace g{namespace Fuse{struct PlacedArgs;}}

namespace g{
namespace Fuse{
namespace Elements{

// public sealed class XFunction
// {
::g::Fuse::Elements::LayoutFunction_type* XFunction_typeof();
void XFunction__GetCurrentValue_fn(XFunction* __this, ::g::Fuse::Elements::Element* elm, uObject** __retval);
void XFunction__GetValue_fn(XFunction* __this, ::g::Fuse::PlacedArgs* args, uObject** __retval);

struct XFunction : ::g::Fuse::Elements::LayoutFunction
{
};
// }

}}} // ::g::Fuse::Elements
