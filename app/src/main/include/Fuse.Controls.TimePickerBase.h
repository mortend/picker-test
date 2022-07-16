// This file was generated based on '../Source/Fuse.Controls.TimePicker/TimePicker.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IResize.h>
#include <Fuse.Binding.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.IActualPlacement.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.ITemplateSource.h>
#include <Fuse.Node.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Fuse.Triggers.Actions.IHide.h>
#include <Fuse.Triggers.Actions.IShow.h>
#include <Fuse.Triggers.Actions-dceb929e.h>
#include <Fuse.Visual.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.DateTime.h>
#include <Uno.UX.IPropertyListener.h>
namespace g{namespace Fuse{namespace Controls{struct TimePickerBase;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public interfacemodifiers class TimePickerBase
// {
::g::Fuse::Controls::Panel_type* TimePickerBase_typeof();
void TimePickerBase__get_Is24HourView_fn(TimePickerBase* __this, bool* __retval);
void TimePickerBase__set_Is24HourView_fn(TimePickerBase* __this, bool* value);
void TimePickerBase__OnIs24HourViewChanged_fn(TimePickerBase* __this, uObject* origin);
void TimePickerBase__OnNativeViewValueChanged_fn(TimePickerBase* __this, ::g::Uno::DateTime* newValue);
void TimePickerBase__OnRooted_fn(TimePickerBase* __this);
void TimePickerBase__OnStyleValueChanged_fn(TimePickerBase* __this, uObject* origin);
void TimePickerBase__OnUnrooted_fn(TimePickerBase* __this);
void TimePickerBase__OnValueChanged_fn(TimePickerBase* __this, uObject* origin);
void TimePickerBase__SetIs24HourView_fn(TimePickerBase* __this, bool* value, uObject* origin);
void TimePickerBase__SetStyle_fn(TimePickerBase* __this, int32_t* value, uObject* origin);
void TimePickerBase__SetValue_fn(TimePickerBase* __this, ::g::Uno::DateTime* value, uObject* origin);
void TimePickerBase__get_Style_fn(TimePickerBase* __this, int32_t* __retval);
void TimePickerBase__set_Style_fn(TimePickerBase* __this, int32_t* value);
void TimePickerBase__get_TimePickerView_fn(TimePickerBase* __this, uObject** __retval);
void TimePickerBase__UpdateValue_fn(TimePickerBase* __this, ::g::Uno::DateTime* value, uObject* origin);
void TimePickerBase__get_Value_fn(TimePickerBase* __this, ::g::Uno::DateTime* __retval);
void TimePickerBase__set_Value_fn(TimePickerBase* __this, ::g::Uno::DateTime* value);

struct TimePickerBase : ::g::Fuse::Controls::Panel
{
    static ::g::Uno::UX::Selector _styleName_;
    static ::g::Uno::UX::Selector& _styleName() { return TimePickerBase_typeof()->Init(), _styleName_; }
    int32_t _style;
    static ::g::Uno::UX::Selector _valueName_;
    static ::g::Uno::UX::Selector& _valueName() { return TimePickerBase_typeof()->Init(), _valueName_; }
    ::g::Uno::DateTime _value;
    static ::g::Uno::UX::Selector _is24HourViewName_;
    static ::g::Uno::UX::Selector& _is24HourViewName() { return TimePickerBase_typeof()->Init(), _is24HourViewName_; }
    bool _is24HourView;

    bool Is24HourView();
    void Is24HourView(bool value);
    void OnIs24HourViewChanged(uObject* origin);
    void OnNativeViewValueChanged(::g::Uno::DateTime newValue);
    void OnStyleValueChanged(uObject* origin);
    void OnValueChanged(uObject* origin);
    void SetIs24HourView(bool value, uObject* origin);
    void SetStyle(int32_t value, uObject* origin);
    void SetValue(::g::Uno::DateTime value, uObject* origin);
    int32_t Style();
    void Style(int32_t value);
    uObject* TimePickerView();
    void UpdateValue(::g::Uno::DateTime value, uObject* origin);
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
};
// }

}}} // ::g::Fuse::Controls
