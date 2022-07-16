// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.Controls.DatePicker.h>
#include <Fuse.Controls.Native.-1265214f.h>
#include <Fuse.Controls.Native.-27540f3a.h>
#include <Fuse.Controls.Native.-9055de0d.h>
#include <Fuse.Controls.Native.-9a326df6.h>
#include <Fuse.Controls.Native.-bb2cda96.h>
#include <Fuse.Controls.Native.-c95850ba.h>
#include <Fuse.Controls.Native.-f2ca26a3.h>
#include <Fuse.Controls.TimePicker.h>
#include <Fuse.Visual.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[7];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{
namespace iOS{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/DarkMode.uno
// -------------------------------------------------------------------------

// public sealed class DarkMode
// {
static void DarkMode_build(uType* type)
{
    ::STRINGS[0] = uString::Const("changed");
    ::STRINGS[1] = uString::Const("FuseJS/DarkMode");
    ::STRINGS[2] = uString::Const("Unspecified");
    ::STRINGS[3] = uString::Const("light");
    ::STRINGS[4] = uString::Const("Light");
    ::STRINGS[5] = uString::Const("Dark");
    ::STRINGS[6] = uString::Const("dark");
    ::TYPES[0] = uObject_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        type, (uintptr_t)&DarkMode::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* DarkMode_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DarkMode);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Controls.Native.iOS.DarkMode", options);
    type->fp_build_ = DarkMode_build;
    type->fp_ctor_ = (void*)DarkMode__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public DarkMode()
void DarkMode__ctor_3_fn(DarkMode* __this)
{
    __this->ctor_3();
}

// internal static void changeDarkMode(string modeValue)
void DarkMode__changeDarkMode_fn(uString* modeValue)
{
    DarkMode::changeDarkMode(modeValue);
}

// private static extern void checkForDarkThemeChange()
void DarkMode__checkForDarkThemeChange_fn()
{
    DarkMode::checkForDarkThemeChange();
}

// public DarkMode New()
void DarkMode__New3_fn(DarkMode** __retval)
{
    *__retval = DarkMode::New3();
}

// public void receivedDarkModeChangedEvent(string modeValue)
void DarkMode__receivedDarkModeChangedEvent_fn(DarkMode* __this, uString* modeValue)
{
    __this->receivedDarkModeChangedEvent(modeValue);
}

// private extern void SetupAndroidListener()
void DarkMode__SetupAndroidListener_fn(DarkMode* __this)
{
    __this->SetupAndroidListener();
}

uSStrong<DarkMode*> DarkMode::_instance_;

// public DarkMode() [instance]
void DarkMode::ctor_3()
{
    ctor_2(true, uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, ::STRINGS[0/*"changed"*/]));

    if (DarkMode::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(DarkMode::_instance_ = this, ::STRINGS[1/*"FuseJS/Dark...*/]);
    SetupAndroidListener();
}

// public void receivedDarkModeChangedEvent(string modeValue) [instance]
void DarkMode::receivedDarkModeChangedEvent(uString* modeValue)
{
    Emit(uArray::Init<uObject*>(::TYPES[0/*object[]*/], 2, ::STRINGS[0/*"changed"*/], modeValue));
}

// private extern void SetupAndroidListener() [instance]
void DarkMode::SetupAndroidListener()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetupAndroidListener130", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal static void changeDarkMode(string modeValue) [static]
void DarkMode::changeDarkMode(uString* modeValue)
{
    if (DarkMode::_instance_ == nullptr)
        DarkMode::New3();

    if (::g::Uno::String::op_Equality(modeValue, ::STRINGS[2/*"Unspecified"*/]))
        modeValue = ::STRINGS[3/*"light"*/];
    else if (::g::Uno::String::op_Equality(modeValue, ::STRINGS[4/*"Light"*/]))
        modeValue = ::STRINGS[3/*"light"*/];
    else if (::g::Uno::String::op_Equality(modeValue, ::STRINGS[5/*"Dark"*/]))
        modeValue = ::STRINGS[6/*"dark"*/];

    uPtr(DarkMode::_instance_)->receivedDarkModeChangedEvent(modeValue);
}

// private static extern void checkForDarkThemeChange() [static]
void DarkMode::checkForDarkThemeChange()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "checkForDarkThemeChange128", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public DarkMode New() [static]
DarkMode* DarkMode::New3()
{
    DarkMode* obj1 = (DarkMode*)uNew(DarkMode_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.DatePicker/iOS/DatePicker.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class DatePickerView
// {
static void DatePickerView_build(uType* type)
{
}

uType* DatePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(DatePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.DatePickerView", options);
    type->fp_build_ = DatePickerView_build;
    return type;
}

// public DatePickerView(Fuse.Controls.DatePicker host)
void DatePickerView__ctor__fn(DatePickerView* __this, ::g::Fuse::Controls::DatePicker* host)
{
    __this->ctor_(host);
}

// public DatePickerView New(Fuse.Controls.DatePicker host)
void DatePickerView__New1_fn(::g::Fuse::Controls::DatePicker* host, DatePickerView** __retval)
{
    *__retval = DatePickerView::New1(host);
}

// public DatePickerView(Fuse.Controls.DatePicker host) [instance]
void DatePickerView::ctor_(::g::Fuse::Controls::DatePicker* host)
{
}

// public DatePickerView New(Fuse.Controls.DatePicker host) [static]
DatePickerView* DatePickerView::New1(::g::Fuse::Controls::DatePicker* host)
{
    DatePickerView* obj1 = (DatePickerView*)uNew(DatePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/iOS/GraphicsView.uno
// ---------------------------------------------------------------------------------

// public sealed extern class GraphicsView
// {
static void GraphicsView_build(uType* type)
{
}

uType* GraphicsView_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(GraphicsView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.GraphicsView", options);
    type->fp_build_ = GraphicsView_build;
    return type;
}

// public GraphicsView(Fuse.Visual host)
void GraphicsView__ctor__fn(GraphicsView* __this, ::g::Fuse::Visual* host)
{
    __this->ctor_(host);
}

// public GraphicsView New(Fuse.Visual host)
void GraphicsView__New1_fn(::g::Fuse::Visual* host, GraphicsView** __retval)
{
    *__retval = GraphicsView::New1(host);
}

// public GraphicsView(Fuse.Visual host) [instance]
void GraphicsView::ctor_(::g::Fuse::Visual* host)
{
}

// public GraphicsView New(Fuse.Visual host) [static]
GraphicsView* GraphicsView::New1(::g::Fuse::Visual* host)
{
    GraphicsView* obj1 = (GraphicsView*)uNew(GraphicsView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/iOS/ScrollView.uno
// -------------------------------------------------------------------------------

// public sealed extern class ScrollView
// {
static void ScrollView_build(uType* type)
{
}

uType* ScrollView_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ScrollView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.ScrollView", options);
    type->fp_build_ = ScrollView_build;
    return type;
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__ctor__fn(ScrollView* __this, uObject* host)
{
    __this->ctor_(host);
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host)
void ScrollView__New1_fn(uObject* host, ScrollView** __retval)
{
    *__retval = ScrollView::New1(host);
}

// public ScrollView(Fuse.Controls.Native.IScrollViewHost host) [instance]
void ScrollView::ctor_(uObject* host)
{
}

// public ScrollView New(Fuse.Controls.Native.IScrollViewHost host) [static]
ScrollView* ScrollView::New1(uObject* host)
{
    ScrollView* obj1 = (ScrollView*)uNew(ScrollView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/iOS/TextView.uno
// -----------------------------------------------------------------------------

// public sealed extern class TextView
// {
static void TextView_build(uType* type)
{
}

uType* TextView_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TextView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TextView", options);
    type->fp_build_ = TextView_build;
    type->fp_ctor_ = (void*)TextView__New1_fn;
    return type;
}

// public generated TextView()
void TextView__ctor__fn(TextView* __this)
{
    __this->ctor_();
}

// public generated TextView New()
void TextView__New1_fn(TextView** __retval)
{
    *__retval = TextView::New1();
}

// public generated TextView() [instance]
void TextView::ctor_()
{
}

// public generated TextView New() [static]
TextView* TextView::New1()
{
    TextView* obj1 = (TextView*)uNew(TextView_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.TimePicker/iOS/TimePicker.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class TimePickerView
// {
static void TimePickerView_build(uType* type)
{
}

uType* TimePickerView_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(TimePickerView);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.Native.iOS.TimePickerView", options);
    type->fp_build_ = TimePickerView_build;
    return type;
}

// public TimePickerView(Fuse.Controls.TimePicker host)
void TimePickerView__ctor__fn(TimePickerView* __this, ::g::Fuse::Controls::TimePicker* host)
{
    __this->ctor_(host);
}

// public TimePickerView New(Fuse.Controls.TimePicker host)
void TimePickerView__New1_fn(::g::Fuse::Controls::TimePicker* host, TimePickerView** __retval)
{
    *__retval = TimePickerView::New1(host);
}

// public TimePickerView(Fuse.Controls.TimePicker host) [instance]
void TimePickerView::ctor_(::g::Fuse::Controls::TimePicker* host)
{
}

// public TimePickerView New(Fuse.Controls.TimePicker host) [static]
TimePickerView* TimePickerView::New1(::g::Fuse::Controls::TimePicker* host)
{
    TimePickerView* obj1 = (TimePickerView*)uNew(TimePickerView_typeof());
    obj1->ctor_(host);
    return obj1;
}
// }

}}}}} // ::g::Fuse::Controls::Native::iOS
