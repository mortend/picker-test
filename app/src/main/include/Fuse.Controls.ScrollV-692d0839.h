// This file was generated based on '../Source/Fuse.Controls.ScrollView/.uno/ux15/Fuse.Controls.ScrollView.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-3168404.h>
#include <Fuse.Animations.IUnwr-29908c99.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions-56de3533.h>
#include <Fuse.Triggers.IPulseTrigger.h>
#include <Fuse.Triggers.WhileTrue.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{struct ScrollView;}}}
namespace g{namespace Fuse{namespace Controls{struct ScrollView__DefaultTrigger;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public partial sealed class ScrollView.DefaultTrigger
// {
::g::Fuse::Triggers::WhileBool_type* ScrollView__DefaultTrigger_typeof();
void ScrollView__DefaultTrigger__ctor_9_fn(ScrollView__DefaultTrigger* __this, ::g::Fuse::Controls::ScrollView* parent);
void ScrollView__DefaultTrigger__InitializeUX_fn(ScrollView__DefaultTrigger* __this);
void ScrollView__DefaultTrigger__New3_fn(::g::Fuse::Controls::ScrollView* parent, ScrollView__DefaultTrigger** __retval);

struct ScrollView__DefaultTrigger : ::g::Fuse::Triggers::WhileTrue
{
    uStrong< ::g::Uno::UX::Property1*> this_Value_inst;
    uWeak< ::g::Fuse::Controls::ScrollView*> __parent1;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return ScrollView__DefaultTrigger_typeof()->Init(), __selector0_; }

    void ctor_9(::g::Fuse::Controls::ScrollView* parent);
    void InitializeUX();
    static ScrollView__DefaultTrigger* New3(::g::Fuse::Controls::ScrollView* parent);
};
// }

}}} // ::g::Fuse::Controls
