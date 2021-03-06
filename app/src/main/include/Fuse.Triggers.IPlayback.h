// This file was generated based on '../Source/Fuse.Triggers/Actions/Playback.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Triggers.IProgress.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract interface IPlayback
// {
uInterfaceType* IPlayback_typeof();

struct IPlayback
{
    void(*fp_Pause)(uObject*);
    void(*fp_get_Progress)(uObject*, double*);
    void(*fp_set_Progress)(uObject*, double*);
    void(*fp_Resume)(uObject*);
    void(*fp_Stop)(uObject*);
    static void Pause(const uInterface& __this) { __this.VTable<IPlayback>()->fp_Pause(__this); }
    static double Progress(const uInterface& __this) { double __retval; return __this.VTable<IPlayback>()->fp_get_Progress(__this, &__retval), __retval; }
    static void Progress(const uInterface& __this, double value) { __this.VTable<IPlayback>()->fp_set_Progress(__this, &value); }
    static void Resume(const uInterface& __this) { __this.VTable<IPlayback>()->fp_Resume(__this); }
    static void Stop(const uInterface& __this) { __this.VTable<IPlayback>()->fp_Stop(__this); }
};
// }

}}} // ::g::Fuse::Triggers
