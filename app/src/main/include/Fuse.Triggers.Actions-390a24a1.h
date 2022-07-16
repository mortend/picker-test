// This file was generated based on '../Source/Fuse.Triggers/Actions/SetSystemUI.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
#include <Uno.Float4.h>
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct SetStatusBarUI;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class SetStatusBarUI
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* SetStatusBarUI_typeof();
void SetStatusBarUI__Perform_fn(SetStatusBarUI* __this, ::g::Fuse::Node* n);
void SetStatusBarUI__get_Style_fn(SetStatusBarUI* __this, int32_t* __retval);
void SetStatusBarUI__set_Style_fn(SetStatusBarUI* __this, int32_t* value);

struct SetStatusBarUI : ::g::Fuse::Triggers::Actions::TriggerAction
{
    ::g::Uno::Float4 _color;
    bool _isVisible;
    int32_t _Style;

    int32_t Style();
    void Style(int32_t value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
