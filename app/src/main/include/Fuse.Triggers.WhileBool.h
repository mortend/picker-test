// This file was generated based on '../Source/Fuse.Triggers/WhileBool.uno'.
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
#include <Fuse.Triggers.WhileValue-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Triggers{struct WhileBool;}}}

namespace g{
namespace Fuse{
namespace Triggers{

// public abstract class WhileBool
// {
struct WhileBool_type : ::g::Fuse::Triggers::WhileValue_type
{
    ::g::Fuse::Triggers::Actions::IToggleable interface10;
};

WhileBool_type* WhileBool_typeof();
void WhileBool__ctor_7_fn(WhileBool* __this);
void WhileBool__Toggle_fn(WhileBool* __this);
void WhileBool__get_Value1_fn(WhileBool* __this, bool* __retval);
void WhileBool__set_Value1_fn(WhileBool* __this, bool* value);

struct WhileBool : ::g::Fuse::Triggers::WhileValue
{
    void ctor_7();
    void Toggle();
    bool Value1();
    void Value1(bool value);
};
// }

}}} // ::g::Fuse::Triggers
