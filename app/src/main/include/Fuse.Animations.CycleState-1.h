// This file was generated based on '../Source/Fuse.Animations/Cycle.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.OpenA-7fd80330.h>
namespace g{namespace Fuse{namespace Animations{struct CreateStateParams;}}}
namespace g{namespace Fuse{namespace Animations{struct Cycle;}}}
namespace g{namespace Fuse{namespace Animations{struct CycleState;}}}
namespace g{namespace Fuse{namespace Internal{struct Blender;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class CycleState<T>
// {
::g::Fuse::Animations::OpenAnimatorState_type* CycleState_typeof();
void CycleState__ctor_2_fn(CycleState* __this, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p);
void CycleState__Disable_fn(CycleState* __this);
void CycleState__New1_fn(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p, CycleState** __retval);
void CycleState__Seek_fn(CycleState* __this, bool* on, float* interval, float* strength, int32_t* dir, bool* __retval);

struct CycleState : ::g::Fuse::Animations::OpenAnimatorState
{
    uStrong<uObject*> mixHandle;
    uStrong< ::g::Fuse::Animations::Cycle*> Animator1;
    uStrong< ::g::Fuse::Internal::Blender*> blender;
    double progress;

    void ctor_2(::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p);
    static CycleState* New1(uType* __type, ::g::Fuse::Animations::Cycle* animator, ::g::Fuse::Animations::CreateStateParams* p);
};
// }

}}} // ::g::Fuse::Animations
