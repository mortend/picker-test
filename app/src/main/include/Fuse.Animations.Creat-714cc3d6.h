// This file was generated based on '../Source/Fuse.Animations/Animator.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class CreateStateParams
// {
uType* CreateStateParams_typeof();
void CreateStateParams__ctor__fn(CreateStateParams* __this);
void CreateStateParams__New1_fn(CreateStateParams** __retval);

struct CreateStateParams : uObject
{
    int32_t Variant;
    double TotalDuration;
    uStrong< ::g::Fuse::Visual*> Attached;

    void ctor_();
    static CreateStateParams* New1();
};
// }

}}} // ::g::Fuse::Animations
