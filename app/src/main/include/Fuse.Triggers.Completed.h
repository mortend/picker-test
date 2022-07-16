// This file was generated based on '../Source/Fuse.Triggers/Completed.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-3168404.h>
#include <Fuse.Animations.IUnwr-29908c99.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Complet-c0495e7e.h>
#include <Fuse.Triggers.PulseTrigger-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct Completed;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public partial sealed class Completed
// {
::g::Fuse::Triggers::Trigger_type* Completed_typeof();
void Completed__get_Activation_fn(Completed* __this, int32_t* __retval);
void Completed__set_Activation_fn(Completed* __this, int32_t* value);
void Completed__get_Activity_fn(Completed* __this, int32_t* __retval);
void Completed__set_Activity_fn(Completed* __this, int32_t* value);
void Completed__Cleanup_fn(Completed* __this, bool* unroot);
void Completed__DoPulse_fn(Completed* __this);
void Completed__get_IsBusy_fn(Completed* __this, bool* __retval);
void Completed__get_Match_fn(Completed* __this, int32_t* __retval);
void Completed__set_Match_fn(Completed* __this, int32_t* value);
void Completed__OnRooted_fn(Completed* __this);
void Completed__OnUnrooted_fn(Completed* __this);
void Completed__get_Repeat_fn(Completed* __this, bool* __retval);
void Completed__set_Repeat_fn(Completed* __this, bool* value);
void Completed__reset_fn(Completed* cp);
void Completed__Reset_fn(Completed* __this);
void Completed__Setup_fn(Completed* __this);
void Completed__Update_fn(Completed* __this);

struct Completed : ::g::Fuse::Triggers::PulseTrigger
{
    bool _pulsed;
    bool _listening;
    int32_t _activation;
    int32_t _activity;
    int32_t _match;
    bool _repeat;

    int32_t Activation();
    void Activation(int32_t value);
    int32_t Activity();
    void Activity(int32_t value);
    void Cleanup(bool unroot);
    void DoPulse();
    bool IsBusy();
    int32_t Match();
    void Match(int32_t value);
    bool Repeat();
    void Repeat(bool value);
    void Reset();
    void Setup();
    void Update();
    static void reset(Completed* cp);
};
// }

}}} // ::g::Fuse::Triggers
