// This file was generated based on '../Source/Fuse.Navigation/ExplicitNavigation.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IParentObserver.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.IBase-516f1dcd.h>
#include <Fuse.Navigation.INavigation.h>
#include <Fuse.Navigation.Visua-546531c3.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Navigation{struct ExplicitNavigation;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal sealed class ExplicitNavigation
// {
::g::Fuse::Navigation::VisualNavigation_type* ExplicitNavigation_typeof();
void ExplicitNavigation__get_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual** __retval);
void ExplicitNavigation__set_Active_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* value);
void ExplicitNavigation__Goto_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* visual, int32_t* mode);
void ExplicitNavigation__SetPageProgress_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, bool* update);
void ExplicitNavigation__SetPageProgress1_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update);
void ExplicitNavigation__SetPageProgress2_fn(ExplicitNavigation* __this, ::g::Fuse::Visual* page, float* progress, float* previous, bool* update, bool* havPrev);
void ExplicitNavigation__SetState_fn(ExplicitNavigation* __this, int32_t* state);
void ExplicitNavigation__UpdateProgress_fn(ExplicitNavigation* __this, int32_t* mode);

struct ExplicitNavigation : ::g::Fuse::Navigation::VisualNavigation
{
    uStrong< ::g::Fuse::Visual*> _active;

    void SetPageProgress(::g::Fuse::Visual* page, float progress, bool update);
    void SetPageProgress1(::g::Fuse::Visual* page, float progress, float previous, bool update);
    void SetPageProgress2(::g::Fuse::Visual* page, float progress, float previous, bool update, bool havPrev);
    void SetState(int32_t state);
    void UpdateProgress(int32_t mode);
};
// }

}}} // ::g::Fuse::Navigation
