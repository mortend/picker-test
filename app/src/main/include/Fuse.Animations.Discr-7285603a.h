// This file was generated based on '../Source/Fuse.Animations/DiscreteSingleTrack.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.Discr-cf5b5c15.h>
#include <Fuse.Animations.TrackProvider.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Animations{struct DiscreteSingleTrack;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimator;}}}
namespace g{namespace Fuse{namespace Animations{struct TrackAnimatorState;}}}

namespace g{
namespace Fuse{
namespace Animations{

// internal sealed class DiscreteSingleTrack
// {
struct DiscreteSingleTrack_type : uType
{
    ::g::Fuse::Animations::DiscreteTrackProvider interface0;
    ::g::Fuse::Animations::TrackProvider interface1;
};

DiscreteSingleTrack_type* DiscreteSingleTrack_typeof();
void DiscreteSingleTrack__ctor__fn(DiscreteSingleTrack* __this);
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekProgress_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* progress, double* interval, int32_t* dir, uObject** value, double* strength, int32_t* __retval);
void DiscreteSingleTrack__FuseAnimationsDiscreteTrackProviderGetSeekTime_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimatorState* tas, double* elapsed, double* interval, int32_t* dir, uObject** value, double* strength, int32_t* __retval);
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetAnimatorVariant_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int32_t* __retval);
void DiscreteSingleTrack__FuseAnimationsTrackProviderGetDuration_fn(DiscreteSingleTrack* __this, ::g::Fuse::Animations::TrackAnimator* ta, int32_t* variant, double* __retval);
void DiscreteSingleTrack__New1_fn(DiscreteSingleTrack** __retval);

struct DiscreteSingleTrack : uObject
{
    static uSStrong<DiscreteSingleTrack*> Singleton_;
    static uSStrong<DiscreteSingleTrack*>& Singleton() { return DiscreteSingleTrack_typeof()->Init(), Singleton_; }

    void ctor_();
    static DiscreteSingleTrack* New1();
};
// }

}}} // ::g::Fuse::Animations
