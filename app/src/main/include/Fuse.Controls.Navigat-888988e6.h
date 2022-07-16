// This file was generated based on '../Source/Fuse.Controls.Navigation/NavigationControl.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{struct NavigationControl__ControlPageData;}}}
namespace g{namespace Fuse{namespace Triggers{struct Trigger;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class NavigationControl.ControlPageData
// {
uType* NavigationControl__ControlPageData_typeof();
void NavigationControl__ControlPageData__ctor__fn(NavigationControl__ControlPageData* __this);
void NavigationControl__ControlPageData__New1_fn(NavigationControl__ControlPageData** __retval);

struct NavigationControl__ControlPageData : uObject
{
    uStrong< ::g::Fuse::Triggers::Trigger*> Enter;
    uStrong< ::g::Fuse::Triggers::Trigger*> Exit;
    uStrong< ::g::Fuse::Triggers::Trigger*> Inactive;
    uStrong< ::g::Fuse::Triggers::Trigger*> Removing;
    bool FromTemplate;

    void ctor_();
    static NavigationControl__ControlPageData* New1();
};
// }

}}} // ::g::Fuse::Controls
