// This file was generated based on '../Source/Fuse.Controls.TimePicker/iOS/TimePicker.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace iOS{struct TimePickerView;}}}}}
namespace g{namespace Fuse{namespace Controls{struct TimePicker;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// internal sealed extern class TimePickerView
// {
uType* TimePickerView_typeof();
void TimePickerView__ctor__fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host);
void TimePickerView__New1_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval);

struct TimePickerView : uObject
{
    void ctor_(::g::Fuse::Controls::TimePicker* host);
    static TimePickerView* New1(::g::Fuse::Controls::TimePicker* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
