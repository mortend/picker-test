// This file was generated based on '../Source/Fuse.Navigation/Navigation.Events.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Navigation{struct NavigationArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// public sealed class NavigationArgs
// {
uType* NavigationArgs_typeof();
void NavigationArgs__ctor_1_fn(NavigationArgs* __this, double* progress, double* prevProgress, int32_t* mode);
void NavigationArgs__get_Mode_fn(NavigationArgs* __this, int32_t* __retval);
void NavigationArgs__set_Mode_fn(NavigationArgs* __this, int32_t* value);
void NavigationArgs__New2_fn(double* progress, double* prevProgress, int32_t* mode, NavigationArgs** __retval);
void NavigationArgs__get_PreviousProgress_fn(NavigationArgs* __this, double* __retval);
void NavigationArgs__set_PreviousProgress_fn(NavigationArgs* __this, double* value);
void NavigationArgs__get_Progress_fn(NavigationArgs* __this, double* __retval);
void NavigationArgs__set_Progress_fn(NavigationArgs* __this, double* value);

struct NavigationArgs : ::g::Uno::EventArgs
{
    int32_t _Mode;
    double _PreviousProgress;
    double _Progress;

    void ctor_1(double progress, double prevProgress, int32_t mode);
    int32_t Mode();
    void Mode(int32_t value);
    double PreviousProgress();
    void PreviousProgress(double value);
    double Progress();
    void Progress(double value);
    static NavigationArgs* New2(double progress, double prevProgress, int32_t mode);
};
// }

}}} // ::g::Fuse::Navigation
