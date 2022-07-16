// This file was generated based on '../Source/Fuse.Controls.DatePicker/Android/DatePicker.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.IDatePickerView.h>
#include <Fuse.Controls.Native.-c3ee8de8.h>
#include <Fuse.Controls.Native.IView.h>
#include <Uno.DateTime.h>
#include <Uno.IDisposable.h>
namespace g{namespace Fuse{namespace Controls{namespace Native{namespace Android{struct DatePickerView;}}}}}
namespace g{namespace Fuse{namespace Controls{struct DatePicker;}}}
namespace g{namespace Java{struct Object;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace Android{

// internal sealed extern class DatePickerView
// {
struct DatePickerView_type : ::g::Fuse::Controls::Native::Android::View_type
{
    ::g::Fuse::Controls::IDatePickerView interface2;
};

DatePickerView_type* DatePickerView_typeof();
void DatePickerView__ctor_9_fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host);
void DatePickerView__Create_fn(::g::Java::Object** __retval);
void DatePickerView__Dispose_fn(DatePickerView* __this);
void DatePickerView__GetDateInMsSince1970InUtc_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* __retval);
void DatePickerView__set_MaxValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value);
void DatePickerView__set_MinValue_fn(DatePickerView* __this, ::g::Uno::DateTime* value);
void DatePickerView__New5_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval);
void DatePickerView__OnRooted_fn(DatePickerView* __this);
void DatePickerView__OnSizeChanged_fn(DatePickerView* __this);
void DatePickerView__OnUnrooted_fn(DatePickerView* __this);
void DatePickerView__OnValueChanged_fn(DatePickerView* __this, ::g::Uno::DateTime* value);
void DatePickerView__PollViewValue_fn(DatePickerView* __this);
void DatePickerView__SetDate_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, ::g::Java::Object* dateLabelHandle, int64_t* msSince1970InUtc);
void DatePickerView__SetMaxValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc);
void DatePickerView__SetMinValue_fn(DatePickerView* __this, ::g::Java::Object* datePickerHandle, int64_t* msSince1970InUtc);
void DatePickerView__SetStyle_fn(DatePickerView* __this, ::g::Java::Object* handle, int32_t* style);
void DatePickerView__get_Style_fn(DatePickerView* __this, int32_t* __retval);
void DatePickerView__set_Style_fn(DatePickerView* __this, int32_t* value);
void DatePickerView__Update_fn(DatePickerView* __this);
void DatePickerView__UpdatePollValueCache_fn(DatePickerView* __this);
void DatePickerView__UpdateWriteback_fn(DatePickerView* __this);
void DatePickerView__get_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* __retval);
void DatePickerView__set_Value_fn(DatePickerView* __this, ::g::Uno::DateTime* value);

struct DatePickerView : ::g::Fuse::Controls::Native::Android::LeafView
{
    uStrong< ::g::Fuse::Controls::DatePicker*> _host;
    uStrong< ::g::Java::Object*> _datePicker;
    uStrong< ::g::Java::Object*> _dateLabel;
    int32_t _style;
    ::g::Uno::DateTime _pollValueCache;
    int32_t writebackFrameCounter;

    void ctor_9(::g::Fuse::Controls::DatePicker* host);
    int64_t GetDateInMsSince1970InUtc(::g::Java::Object* datePickerHandle);
    void MaxValue(::g::Uno::DateTime value);
    void MinValue(::g::Uno::DateTime value);
    void OnRooted();
    void OnUnrooted();
    void OnValueChanged(::g::Uno::DateTime value);
    void PollViewValue();
    void SetDate(::g::Java::Object* datePickerHandle, ::g::Java::Object* dateLabelHandle, int64_t msSince1970InUtc);
    void SetMaxValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc);
    void SetMinValue(::g::Java::Object* datePickerHandle, int64_t msSince1970InUtc);
    void SetStyle(::g::Java::Object* handle, int32_t style);
    int32_t Style();
    void Style(int32_t value);
    void Update();
    void UpdatePollValueCache();
    void UpdateWriteback();
    ::g::Uno::DateTime Value();
    void Value(::g::Uno::DateTime value);
    static ::g::Java::Object* Create();
    static DatePickerView* New5(::g::Fuse::Controls::DatePicker* host);
};
// }

}}}}} // ::g::Fuse::Controls::Native::Android
