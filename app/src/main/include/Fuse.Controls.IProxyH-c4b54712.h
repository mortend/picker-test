// This file was generated based on '../Source/Fuse.Controls.Panels/GraphicsView.ux.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Controls{struct IProxyHostExtensions;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static class IProxyHostExtensions
// {
uClassType* IProxyHostExtensions_typeof();
void IProxyHostExtensions__FindProxyHost_fn(::g::Fuse::Visual* visual, uObject** __retval);

struct IProxyHostExtensions : uObject
{
    static uObject* FindProxyHost(::g::Fuse::Visual* visual);
};
// }

}}} // ::g::Fuse::Controls
