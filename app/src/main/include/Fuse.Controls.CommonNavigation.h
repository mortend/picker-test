// This file was generated based on '../Source/Fuse.Controls.Navigation/CommonNavigation.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Controls{struct CommonNavigation;}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Fuse{namespace Navigation{struct RouterPage;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Controls{

// internal static class CommonNavigation
// {
uClassType* CommonNavigation_typeof();
void CommonNavigation__CompareCurrent_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* current, ::g::Fuse::Navigation::RouterPage* routerPage, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void CommonNavigation__CompatibleParameter_fn(uString* a, uString* b, bool* __retval);
void CommonNavigation__FindPath_fn(::g::Fuse::Visual* parent, uString* path, ::g::Fuse::Visual** __retval);
void CommonNavigation__Goto_fn(::g::Fuse::Controls::NavigationControl* nav, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t* gotoMode, int32_t* operation, uString* operationStyle, ::g::Fuse::Visual** pageVisual, int32_t* __retval);
void CommonNavigation__IsEmptyParameter_fn(uString* a, bool* __retval);

struct CommonNavigation : uObject
{
    static int32_t CompareCurrent(::g::Fuse::Visual* parent, ::g::Fuse::Visual* current, ::g::Fuse::Navigation::RouterPage* routerPage, ::g::Fuse::Visual** pageVisual);
    static bool CompatibleParameter(uString* a, uString* b);
    static ::g::Fuse::Visual* FindPath(::g::Fuse::Visual* parent, uString* path);
    static int32_t Goto(::g::Fuse::Controls::NavigationControl* nav, ::g::Fuse::Navigation::RouterPage* routerPage, int32_t gotoMode, int32_t operation, uString* operationStyle, ::g::Fuse::Visual** pageVisual);
    static bool IsEmptyParameter(uString* a);
};
// }

}}} // ::g::Fuse::Controls
