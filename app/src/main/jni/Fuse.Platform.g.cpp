// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.Platform.AppEvents.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Platform.ScreenO-8a6241fe.h>
#include <Fuse.Platform.StatusBarStyle.h>
#include <Fuse.Platform.SystemU-4e040bc7.h>
#include <Fuse.Platform.SystemUI.h>
#include <Fuse.Platform.SysUIState.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Char.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Int3.h>
#include <Uno.Object.h>
#include <Uno.Platform.Applicat-9e948ea1.h>
#include <Uno.Platform.ApplicationState.h>
#include <Uno.Platform.CoreApp.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Platform{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/AppAlerts.uno
// -------------------------------------------------------------------

// internal static class AppEvents
// {
// static AppEvents()
static void AppEvents__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_ReceivedLowMemoryWarning(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)AppEvents__OnLowMemoryWarning_fn));
}

static void AppEvents_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    type->SetFields(0,
        ::TYPES[1/*Uno.Action*/], (uintptr_t)&AppEvents::LowMemoryWarning1_, uFieldFlagsStatic);
}

uClassType* AppEvents_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.AppEvents", options);
    type->fp_build_ = AppEvents_build;
    type->fp_cctor_ = AppEvents__cctor__fn;
    return type;
}

// internal static generated void add_LowMemoryWarning(Uno.Action value)
void AppEvents__add_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::add_LowMemoryWarning(value);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value)
void AppEvents__remove_LowMemoryWarning_fn(uDelegate* value)
{
    AppEvents::remove_LowMemoryWarning(value);
}

// private static void OnLowMemoryWarning(object s, object a)
void AppEvents__OnLowMemoryWarning_fn(uObject* s, uObject* a)
{
    AppEvents::OnLowMemoryWarning(s, a);
}

uSStrong<uDelegate*> AppEvents::LowMemoryWarning1_;

// private static void OnLowMemoryWarning(object s, object a) [static]
void AppEvents::OnLowMemoryWarning(uObject* s, uObject* a)
{
    AppEvents_typeof()->Init();
    uDelegate* handler = AppEvents::LowMemoryWarning1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid();
}

// internal static generated void add_LowMemoryWarning(Uno.Action value) [static]
void AppEvents::add_LowMemoryWarning(uDelegate* value)
{
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}

// internal static generated void remove_LowMemoryWarning(Uno.Action value) [static]
void AppEvents::remove_LowMemoryWarning(uDelegate* value)
{
    AppEvents_typeof()->Init();
    AppEvents::LowMemoryWarning1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(AppEvents::LowMemoryWarning1_, value), ::TYPES[1/*Uno.Action*/]);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/Lifecycle.uno
// -------------------------------------------------------------------

// public enum ApplicationState
uEnumType* ApplicationState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Platform.ApplicationState", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Uninitialized", 0LL,
        "Background", 1LL,
        "Foreground", 2LL,
        "Interactive", 3LL,
        "Terminating", -1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/Lifecycle.uno
// -------------------------------------------------------------------

// public static class Lifecycle
// {
// static Lifecycle()
static void Lifecycle__cctor__fn(uType* __type)
{
    ::g::Uno::Platform::CoreApp_typeof()->Init();
    ::g::Uno::Platform::CoreApp::add_Started(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnStarted_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringForeground(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringForeground_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringInteractive(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_ExitedInteractive(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnExitedInteractive_fn));
    ::g::Uno::Platform::CoreApp::add_EnteringBackground(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnEnteringBackground_fn));
    ::g::Uno::Platform::CoreApp::add_Terminating(uDelegate::New(::TYPES[2/*Uno.Platform.ApplicationStateTransitionHandler*/], (void*)Lifecycle__OnTerminating_fn));
}

static void Lifecycle_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Platform::ApplicationStateTransitionHandler_typeof();
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Platform::CoreApp_typeof());
    type->SetFields(0,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringBackground1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringForeground1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::EnteringInteractive1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::ExitedInteractive1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Started1_, uFieldFlagsStatic,
        ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/], (uintptr_t)&Lifecycle::Terminating1_, uFieldFlagsStatic);
}

uClassType* Lifecycle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_cctor_ = Lifecycle__cctor__fn;
    return type;
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__add_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringBackground(value);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__remove_EnteringBackground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringBackground(value);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__add_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::add_EnteringForeground(value);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__remove_EnteringForeground_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringForeground(value);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__add_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::add_EnteringInteractive(value);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__remove_EnteringInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_EnteringInteractive(value);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__add_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::add_ExitedInteractive(value);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__remove_ExitedInteractive_fn(uDelegate* value)
{
    Lifecycle::remove_ExitedInteractive(value);
}

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState)
void Lifecycle__OnEnteringBackground_fn(int32_t* newState)
{
    Lifecycle::OnEnteringBackground(*newState);
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState)
void Lifecycle__OnEnteringForeground_fn(int32_t* newState)
{
    Lifecycle::OnEnteringForeground(*newState);
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState)
void Lifecycle__OnEnteringInteractive_fn(int32_t* newState)
{
    Lifecycle::OnEnteringInteractive(*newState);
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState)
void Lifecycle__OnExitedInteractive_fn(int32_t* newState)
{
    Lifecycle::OnExitedInteractive(*newState);
}

// private static void OnStarted(Uno.Platform.ApplicationState newState)
void Lifecycle__OnStarted_fn(int32_t* newState)
{
    Lifecycle::OnStarted(*newState);
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState)
void Lifecycle__OnTerminating_fn(int32_t* newState)
{
    Lifecycle::OnTerminating(*newState);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__add_Started_fn(uDelegate* value)
{
    Lifecycle::add_Started(value);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__remove_Started_fn(uDelegate* value)
{
    Lifecycle::remove_Started(value);
}

// public static Fuse.Platform.ApplicationState get_State()
void Lifecycle__get_State_fn(int32_t* __retval)
{
    *__retval = Lifecycle::State();
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__add_Terminating_fn(uDelegate* value)
{
    Lifecycle::add_Terminating(value);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value)
void Lifecycle__remove_Terminating_fn(uDelegate* value)
{
    Lifecycle::remove_Terminating(value);
}

uSStrong<uDelegate*> Lifecycle::EnteringBackground1_;
uSStrong<uDelegate*> Lifecycle::EnteringForeground1_;
uSStrong<uDelegate*> Lifecycle::EnteringInteractive1_;
uSStrong<uDelegate*> Lifecycle::ExitedInteractive1_;
uSStrong<uDelegate*> Lifecycle::Started1_;
uSStrong<uDelegate*> Lifecycle::Terminating1_;

// private static void OnEnteringBackground(Uno.Platform.ApplicationState newState) [static]
void Lifecycle::OnEnteringBackground(int32_t newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringBackground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnEnteringForeground(Uno.Platform.ApplicationState newState) [static]
void Lifecycle::OnEnteringForeground(int32_t newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringForeground1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnEnteringInteractive(Uno.Platform.ApplicationState newState) [static]
void Lifecycle::OnEnteringInteractive(int32_t newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::EnteringInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnExitedInteractive(Uno.Platform.ApplicationState newState) [static]
void Lifecycle::OnExitedInteractive(int32_t newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::ExitedInteractive1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnStarted(Uno.Platform.ApplicationState newState) [static]
void Lifecycle::OnStarted(int32_t newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Started1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// private static void OnTerminating(Uno.Platform.ApplicationState newState) [static]
void Lifecycle::OnTerminating(int32_t newState)
{
    Lifecycle_typeof()->Init();
    uDelegate* handler = Lifecycle::Terminating1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid(uCRef<int32_t>(newState));
}

// public static Fuse.Platform.ApplicationState get_State() [static]
int32_t Lifecycle::State()
{
    Lifecycle_typeof()->Init();
    return ::g::Uno::Platform::CoreApp::State();
}

// public static generated void add_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::add_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringBackground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringBackground(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::remove_EnteringBackground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringBackground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringBackground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::add_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringForeground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringForeground(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::remove_EnteringForeground(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringForeground1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringForeground1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::add_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::EnteringInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_EnteringInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::remove_EnteringInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::EnteringInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::EnteringInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::add_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::ExitedInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_ExitedInteractive(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::remove_ExitedInteractive(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::ExitedInteractive1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::ExitedInteractive1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::add_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Started1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Started(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::remove_Started(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Started1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Started1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void add_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::add_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Lifecycle::Terminating1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}

// public static generated void remove_Terminating(Uno.Action<Fuse.Platform.ApplicationState> value) [static]
void Lifecycle::remove_Terminating(uDelegate* value)
{
    Lifecycle_typeof()->Init();
    Lifecycle::Terminating1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Lifecycle::Terminating1_, value), ::TYPES[3/*Uno.Action<Fuse.Platform.ApplicationState>*/]);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/SystemUI.uno
// ------------------------------------------------------------------

// public enum ScreenOrientation
uEnumType* ScreenOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Platform.ScreenOrientation", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Portrait", 0LL,
        "LandscapeLeft", 1LL,
        "LandscapeRight", 2LL,
        "PortraitUpsideDown", 3LL,
        "Default", 4LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/iOS/SystemUI.uno
// ----------------------------------------------------------------------

// public enum StatusBarStyle
uEnumType* StatusBarStyle_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Platform.StatusBarStyle", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Dark", 0LL,
        "Light", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/Android/SystemUI.uno
// --------------------------------------------------------------------------

// internal static extern class SystemUI
// {
// static generated SystemUI()
static void SystemUI__cctor__fn(uType* __type)
{
    SystemUI::_textScaleFactor_ = 1.0f;
    SystemUI::firstSizing_ = true;
    SystemUI::_density_ = 1.0f;
}

static void SystemUI_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Exception_typeof();
    ::TYPES[5] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ScreenOrientation_typeof(), nullptr);
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Float_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::g::Uno::Float_typeof(), (uintptr_t)&SystemUI::_textScaleFactor_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::_keyboardListener_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::SuperLayout_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::RootLayout_, uFieldFlagsStatic,
        ::g::Java::Object_typeof(), (uintptr_t)&SystemUI::layoutAttachedTo_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::realWidth_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::realHeight_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::firstSizing_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::keyboardVisible_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::lastKeyboardHeight_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&SystemUI::hasCachedStatusBarSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::cachedOpenSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_systemUIState_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_statusbarStyle_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_topFrameSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_bottomFrameSize_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&SystemUI::_staticBottomFrameSize_, uFieldFlagsStatic,
        ::g::Uno::Float_typeof(), (uintptr_t)&SystemUI::_density_, uFieldFlagsStatic,
        ::g::Uno::Rect_typeof(), (uintptr_t)&SystemUI::_frame_, uFieldFlagsStatic,
        ::TYPES[6/*Uno.Action<Fuse.Platform.ScreenOrientation>*/], (uintptr_t)&SystemUI::DeviceOrientationChanged1_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.EventHandler*/], (uintptr_t)&SystemUI::FrameChanged1_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.Action*/], (uintptr_t)&SystemUI::MarginsChanged1_, uFieldFlagsStatic,
        ::TYPES[7/*Uno.Action<float>*/], (uintptr_t)&SystemUI::TextScaleFactorChanged1_, uFieldFlagsStatic);
}

uClassType* SystemUI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 23;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Platform.SystemUI", options);
    type->fp_build_ = SystemUI_build;
    type->fp_cctor_ = SystemUI__cctor__fn;
    return type;
}

// private static float2 _GetRootDisplaySize()
void SystemUI___GetRootDisplaySize_fn(::g::Uno::Float2* __retval)
{
    *__retval = SystemUI::_GetRootDisplaySize();
}

// public static int get_APILevel()
void SystemUI__get_APILevel_fn(int32_t* __retval)
{
    *__retval = SystemUI::APILevel();
}

// public static void Attach(Java.Object _layout)
void SystemUI__Attach_fn(::g::Java::Object* _layout)
{
    SystemUI::Attach(_layout);
}

// private static Uno.Rect get_BottomFrame()
void SystemUI__get_BottomFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::BottomFrame();
}

// public static void CalcRealSizes()
void SystemUI__CalcRealSizes_fn()
{
    SystemUI::CalcRealSizes();
}

// public static void CompensateRootLayoutForSystemUI()
void SystemUI__CompensateRootLayoutForSystemUI_fn()
{
    SystemUI::CompensateRootLayoutForSystemUI();
}

// private static void cppOnBottomFrameChanged(int height)
void SystemUI__cppOnBottomFrameChanged_fn(int32_t* height)
{
    SystemUI::cppOnBottomFrameChanged(*height);
}

// private static void cppOnConfigChanged()
void SystemUI__cppOnConfigChanged_fn()
{
    SystemUI::cppOnConfigChanged();
}

// private static void cppOnTopFrameChanged(int height)
void SystemUI__cppOnTopFrameChanged_fn(int32_t* height)
{
    SystemUI::cppOnTopFrameChanged(*height);
}

// public static void CreateLayouts()
void SystemUI__CreateLayouts_fn()
{
    SystemUI::CreateLayouts();
}

// public static float get_Density()
void SystemUI__get_Density_fn(float* __retval)
{
    *__retval = SystemUI::Density();
}

// private static void set_Density(float value)
void SystemUI__set_Density_fn(float* value)
{
    SystemUI::Density(*value);
}

// public static void Detach()
void SystemUI__Detach_fn()
{
    SystemUI::Detach();
}

// public static float4 get_DeviceMargins()
void SystemUI__get_DeviceMargins_fn(::g::Uno::Float4* __retval)
{
    *__retval = SystemUI::DeviceMargins();
}

// public static Fuse.Platform.ScreenOrientation get_DeviceOrientation()
void SystemUI__get_DeviceOrientation_fn(int32_t* __retval)
{
    *__retval = SystemUI::DeviceOrientation();
}

// public static void set_DeviceOrientation(Fuse.Platform.ScreenOrientation value)
void SystemUI__set_DeviceOrientation_fn(int32_t* value)
{
    SystemUI::DeviceOrientation(*value);
}

// public static generated void add_DeviceOrientationChanged(Uno.Action<Fuse.Platform.ScreenOrientation> value)
void SystemUI__add_DeviceOrientationChanged_fn(uDelegate* value)
{
    SystemUI::add_DeviceOrientationChanged(value);
}

// public static generated void remove_DeviceOrientationChanged(Uno.Action<Fuse.Platform.ScreenOrientation> value)
void SystemUI__remove_DeviceOrientationChanged_fn(uDelegate* value)
{
    SystemUI::remove_DeviceOrientationChanged(value);
}

// private static void EnterFullscreen()
void SystemUI__EnterFullscreen_fn()
{
    SystemUI::EnterFullscreen();
}

// public static Uno.Rect get_Frame()
void SystemUI__get_Frame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::Frame();
}

// private static void set_Frame(Uno.Rect value)
void SystemUI__set_Frame_fn(::g::Uno::Rect* value)
{
    SystemUI::Frame(*value);
}

// public static generated void add_FrameChanged(Uno.EventHandler value)
void SystemUI__add_FrameChanged_fn(uDelegate* value)
{
    SystemUI::add_FrameChanged(value);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value)
void SystemUI__remove_FrameChanged_fn(uDelegate* value)
{
    SystemUI::remove_FrameChanged(value);
}

// private static int GetAPILevel()
void SystemUI__GetAPILevel_fn(int32_t* __retval)
{
    *__retval = SystemUI::GetAPILevel();
}

// private static extern Uno.Rect GetBottomBarFrame()
void SystemUI__GetBottomBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetBottomBarFrame();
}

// private static int GetCurrentScreenOrientation()
void SystemUI__GetCurrentScreenOrientation_fn(int32_t* __retval)
{
    *__retval = SystemUI::GetCurrentScreenOrientation();
}

// private static float GetDensity()
void SystemUI__GetDensity_fn(float* __retval)
{
    *__retval = SystemUI::GetDensity();
}

// public static Java.Object GetDisplayMetrics()
void SystemUI__GetDisplayMetrics_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::GetDisplayMetrics();
}

// private static string GetOSVersion()
void SystemUI__GetOSVersion_fn(uString** __retval)
{
    *__retval = SystemUI::GetOSVersion();
}

// public static int GetRealDisplayHeight()
void SystemUI__GetRealDisplayHeight_fn(int32_t* __retval)
{
    *__retval = SystemUI::GetRealDisplayHeight();
}

// public static int GetRealDisplayWidth()
void SystemUI__GetRealDisplayWidth_fn(int32_t* __retval)
{
    *__retval = SystemUI::GetRealDisplayWidth();
}

// public static int GetStatusBarColor()
void SystemUI__GetStatusBarColor_fn(int32_t* __retval)
{
    *__retval = SystemUI::GetStatusBarColor();
}

// private static extern Uno.Rect GetStatusBarFrame()
void SystemUI__GetStatusBarFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::GetStatusBarFrame();
}

// private static float GetStatusBarHeight()
void SystemUI__GetStatusBarHeight_fn(float* __retval)
{
    *__retval = SystemUI::GetStatusBarHeight();
}

// private static int GetSuperLayoutHeight()
void SystemUI__GetSuperLayoutHeight_fn(int32_t* __retval)
{
    *__retval = SystemUI::GetSuperLayoutHeight();
}

// private static void HideActionBar()
void SystemUI__HideActionBar_fn()
{
    SystemUI::HideActionBar();
}

// public static void HideStatusBar()
void SystemUI__HideStatusBar_fn()
{
    SystemUI::HideStatusBar();
}

// private static void HookOntoRawActivityEvents()
void SystemUI__HookOntoRawActivityEvents_fn()
{
    SystemUI::HookOntoRawActivityEvents();
}

// public static bool get_IsTopFrameVisible()
void SystemUI__get_IsTopFrameVisible_fn(bool* __retval)
{
    *__retval = SystemUI::IsTopFrameVisible();
}

// public static void set_IsTopFrameVisible(bool value)
void SystemUI__set_IsTopFrameVisible_fn(bool* value)
{
    SystemUI::IsTopFrameVisible(*value);
}

// private static Java.Object MakePostV11LayoutChangeListener()
void SystemUI__MakePostV11LayoutChangeListener_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::MakePostV11LayoutChangeListener();
}

// public static generated void add_MarginsChanged(Uno.Action value)
void SystemUI__add_MarginsChanged_fn(uDelegate* value)
{
    SystemUI::add_MarginsChanged(value);
}

// public static generated void remove_MarginsChanged(Uno.Action value)
void SystemUI__remove_MarginsChanged_fn(uDelegate* value)
{
    SystemUI::remove_MarginsChanged(value);
}

// private static void OnConfigChanged()
void SystemUI__OnConfigChanged_fn()
{
    SystemUI::OnConfigChanged();
}

// public static void OnCreate()
void SystemUI__OnCreate_fn()
{
    SystemUI::OnCreate();
}

// private static void OnDestroy()
void SystemUI__OnDestroy_fn()
{
    SystemUI::OnDestroy();
}

// private static void OnFrameChanged()
void SystemUI__OnFrameChanged_fn()
{
    SystemUI::OnFrameChanged();
}

// private static void onHideKeyboard(int keyboardHeight, bool force)
void SystemUI__onHideKeyboard_fn(int32_t* keyboardHeight, bool* force)
{
    SystemUI::onHideKeyboard(*keyboardHeight, *force);
}

// private static void OnPause()
void SystemUI__OnPause_fn()
{
    SystemUI::OnPause();
}

// private static void OnResume()
void SystemUI__OnResume_fn()
{
    SystemUI::OnResume();
}

// private static void onShowKeyboard(int keyboardHeight, bool force)
void SystemUI__onShowKeyboard_fn(int32_t* keyboardHeight, bool* force)
{
    SystemUI::onShowKeyboard(*keyboardHeight, *force);
}

// private static void OnWillResize()
void SystemUI__OnWillResize_fn()
{
    SystemUI::OnWillResize();
}

// public static int3 get_OSVersion()
void SystemUI__get_OSVersion_fn(::g::Uno::Int3* __retval)
{
    *__retval = SystemUI::OSVersion();
}

// public static void ReadConfiguration()
void SystemUI__ReadConfiguration_fn()
{
    SystemUI::ReadConfiguration();
}

// public static void ResendFrameSizes()
void SystemUI__ResendFrameSizes_fn()
{
    SystemUI::ResendFrameSizes();
}

// private static void ResetGeometry()
void SystemUI__ResetGeometry_fn()
{
    SystemUI::ResetGeometry();
}

// public static Java.Object get_RootView()
void SystemUI__get_RootView_fn(::g::Java::Object** __retval)
{
    *__retval = SystemUI::RootView();
}

// public static void set_RootView(Java.Object value)
void SystemUI__set_RootView_fn(::g::Java::Object* value)
{
    SystemUI::RootView(value);
}

// public static float4 get_SafeMargins()
void SystemUI__get_SafeMargins_fn(::g::Uno::Float4* __retval)
{
    *__retval = SystemUI::SafeMargins();
}

// private static void SetAsRootView(Java.Object view)
void SystemUI__SetAsRootView_fn(::g::Java::Object* view)
{
    SystemUI::SetAsRootView(view);
}

// private static void SetCurrentScreenOrientation(int orientation)
void SystemUI__SetCurrentScreenOrientation_fn(int32_t* orientation)
{
    SystemUI::SetCurrentScreenOrientation(*orientation);
}

// public static bool SetDarkStatusBarStyle()
void SystemUI__SetDarkStatusBarStyle_fn(bool* __retval)
{
    *__retval = SystemUI::SetDarkStatusBarStyle();
}

// private static void SetFrame(Java.Object view, int originX, int originY, int height)
void SystemUI__SetFrame_fn(::g::Java::Object* view, int32_t* originX, int32_t* originY, int32_t* height)
{
    SystemUI::SetFrame(view, *originX, *originY, *height);
}

// public static bool SetLightStatusBarStyle()
void SystemUI__SetLightStatusBarStyle_fn(bool* __retval)
{
    *__retval = SystemUI::SetLightStatusBarStyle();
}

// public static bool SetStatusBarColor(int color)
void SystemUI__SetStatusBarColor_fn(int32_t* color, bool* __retval)
{
    *__retval = SystemUI::SetStatusBarColor(*color);
}

// public static void ShowStatusBar()
void SystemUI__ShowStatusBar_fn()
{
    SystemUI::ShowStatusBar();
}

// public static float4 get_StaticMargins()
void SystemUI__get_StaticMargins_fn(::g::Uno::Float4* __retval)
{
    *__retval = SystemUI::StaticMargins();
}

// public static float get_TextScaleFactor()
void SystemUI__get_TextScaleFactor_fn(float* __retval)
{
    *__retval = SystemUI::TextScaleFactor();
}

// private static void set_TextScaleFactor(float value)
void SystemUI__set_TextScaleFactor_fn(float* value)
{
    SystemUI::TextScaleFactor(*value);
}

// public static generated void add_TextScaleFactorChanged(Uno.Action<float> value)
void SystemUI__add_TextScaleFactorChanged_fn(uDelegate* value)
{
    SystemUI::add_TextScaleFactorChanged(value);
}

// public static generated void remove_TextScaleFactorChanged(Uno.Action<float> value)
void SystemUI__remove_TextScaleFactorChanged_fn(uDelegate* value)
{
    SystemUI::remove_TextScaleFactorChanged(value);
}

// private static Uno.Rect get_TopFrame()
void SystemUI__get_TopFrame_fn(::g::Uno::Rect* __retval)
{
    *__retval = SystemUI::TopFrame();
}

// private static void unoOnGlobalLayout()
void SystemUI__unoOnGlobalLayout_fn()
{
    SystemUI::unoOnGlobalLayout();
}

// public static void UpdateStatusBar()
void SystemUI__UpdateStatusBar_fn()
{
    SystemUI::UpdateStatusBar();
}

// private static void UpdateTextScaleFactor(float _textScaleFactor)
void SystemUI__UpdateTextScaleFactor_fn(float* _textScaleFactor1)
{
    SystemUI::UpdateTextScaleFactor(*_textScaleFactor1);
}

float SystemUI::_textScaleFactor_;
uSStrong< ::g::Java::Object*> SystemUI::_keyboardListener_;
uSStrong< ::g::Java::Object*> SystemUI::SuperLayout_;
uSStrong< ::g::Java::Object*> SystemUI::RootLayout_;
uSStrong< ::g::Java::Object*> SystemUI::layoutAttachedTo_;
int32_t SystemUI::realWidth_;
int32_t SystemUI::realHeight_;
bool SystemUI::firstSizing_;
bool SystemUI::keyboardVisible_;
int32_t SystemUI::lastKeyboardHeight_;
bool SystemUI::hasCachedStatusBarSize_;
int32_t SystemUI::cachedOpenSize_;
int32_t SystemUI::_systemUIState_;
int32_t SystemUI::_statusbarStyle_;
int32_t SystemUI::_topFrameSize_;
int32_t SystemUI::_bottomFrameSize_;
int32_t SystemUI::_staticBottomFrameSize_;
float SystemUI::_density_;
::g::Uno::Rect SystemUI::_frame_;
uSStrong<uDelegate*> SystemUI::DeviceOrientationChanged1_;
uSStrong<uDelegate*> SystemUI::FrameChanged1_;
uSStrong<uDelegate*> SystemUI::MarginsChanged1_;
uSStrong<uDelegate*> SystemUI::TextScaleFactorChanged1_;

// private static float2 _GetRootDisplaySize() [static]
::g::Uno::Float2 SystemUI::_GetRootDisplaySize()
{
    SystemUI_typeof()->Init();
    float w = (float)SystemUI::GetRealDisplayWidth();
    float h = (float)SystemUI::GetRealDisplayHeight();
    return ::g::Uno::Float2__New2(w, h);
}

// public static void Attach(Java.Object _layout) [static]
void SystemUI::Attach(::g::Java::Object* _layout)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Attach67", "(Ljava/lang/Object;)V");
        ::g::Java::Object* __u_layout=_layout;
        jobject ___layout = (__u_layout==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_layout, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,___layout);
        
        if (___layout!=nullptr) { U_JNIVAR->DeleteLocalRef(___layout); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void CalcRealSizes() [static]
void SystemUI::CalcRealSizes()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CalcRealSizes70", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void CompensateRootLayoutForSystemUI() [static]
void SystemUI::CompensateRootLayoutForSystemUI()
{
    SystemUI_typeof()->Init();
    SystemUI::CalcRealSizes();

    if (SystemUI::RootLayout_ != nullptr)
    {
        int32_t compensation = -((int32_t)SystemUI::GetStatusBarHeight());
        SystemUI::SetFrame(SystemUI::RootLayout_, 0, compensation, SystemUI::GetRealDisplayHeight());
    }
}

// private static void cppOnBottomFrameChanged(int height) [static]
void SystemUI::cppOnBottomFrameChanged(int32_t height)
{
    SystemUI_typeof()->Init();
    int32_t resizeReason = 1;
    ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
    ::g::Uno::Float2 start_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)SystemUI::_bottomFrameSize_);
    ::g::Uno::Float2 start_size = ::g::Uno::Float2__New2(size.X, (float)SystemUI::_bottomFrameSize_);
    ::g::Uno::Float2 end_pos = ::g::Uno::Float2__New2(0.0f, size.Y - (float)height);
    ::g::Uno::Float2 end_size = ::g::Uno::Float2__New2(size.X, (float)height);
    ::g::Uno::Rect startFrame = ::g::Uno::Rect__New2(start_pos, start_size);
    ::g::Uno::Rect endFrame = ::g::Uno::Rect__New2(end_pos, end_size);
    SystemUI::_bottomFrameSize_ = height;

    if (height < 150)
        SystemUI::_staticBottomFrameSize_ = height;

    SystemUI::OnWillResize();
}

// private static void cppOnConfigChanged() [static]
void SystemUI::cppOnConfigChanged()
{
    SystemUI_typeof()->Init();
    GLHelper::SwapBackToBackgroundSurface();
    SystemUI::ResetGeometry();
}

// private static void cppOnTopFrameChanged(int height) [static]
void SystemUI::cppOnTopFrameChanged(int32_t height)
{
    SystemUI_typeof()->Init();

    if (SystemUI::_topFrameSize_ != height)
    {
        SystemUI::_topFrameSize_ = height;
        SystemUI::OnWillResize();
    }
}

// public static void CreateLayouts() [static]
void SystemUI::CreateLayouts()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateLayouts74", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void Detach() [static]
void SystemUI::Detach()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Detach80", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void EnterFullscreen() [static]
void SystemUI::EnterFullscreen()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EnterFullscreen81", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static int GetAPILevel() [static]
int32_t SystemUI::GetAPILevel()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetAPILevel86", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern Uno.Rect GetBottomBarFrame() [static]
::g::Uno::Rect SystemUI::GetBottomBarFrame()
{
    SystemUI_typeof()->Init();
    ::g::Uno::Float2 dispSize = SystemUI::_GetRootDisplaySize();
    int32_t height = SystemUI::_bottomFrameSize_;
    return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(dispSize.X, (float)height));
}

// private static int GetCurrentScreenOrientation() [static]
int32_t SystemUI::GetCurrentScreenOrientation()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCurrentScreenOrientation87", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static float GetDensity() [static]
float SystemUI::GetDensity()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDensity88", "()F");
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static Java.Object GetDisplayMetrics() [static]
::g::Java::Object* SystemUI::GetDisplayMetrics()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetDisplayMetrics89", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetOSVersion() [static]
uString* SystemUI::GetOSVersion()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetOSVersion90", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=nullptr && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static int GetRealDisplayHeight() [static]
int32_t SystemUI::GetRealDisplayHeight()
{
    SystemUI_typeof()->Init();
    SystemUI::CalcRealSizes();
    return SystemUI::realHeight_;
}

// public static int GetRealDisplayWidth() [static]
int32_t SystemUI::GetRealDisplayWidth()
{
    SystemUI_typeof()->Init();
    SystemUI::CalcRealSizes();
    return SystemUI::realWidth_;
}

// public static int GetStatusBarColor() [static]
int32_t SystemUI::GetStatusBarColor()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetStatusBarColor91", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern Uno.Rect GetStatusBarFrame() [static]
::g::Uno::Rect SystemUI::GetStatusBarFrame()
{
    SystemUI_typeof()->Init();
    ::g::Uno::Float2 dispSize = SystemUI::_GetRootDisplaySize();
    float height = SystemUI::GetStatusBarHeight();
    return ::g::Uno::Rect__New2(::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(dispSize.X, height));
}

// private static float GetStatusBarHeight() [static]
float SystemUI::GetStatusBarHeight()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetStatusBarHeight92", "()F");
        jfloat __jresult = U_JNIVAR->CallStaticFloatMethod(__cls,__mtd);
        float __result = (float)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetSuperLayoutHeight() [static]
int32_t SystemUI::GetSuperLayoutHeight()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetSuperLayoutHeight95", "()I");
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd);
        int32_t __result = (int32_t)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void HideActionBar() [static]
void SystemUI::HideActionBar()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideActionBar84", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void HideStatusBar() [static]
void SystemUI::HideStatusBar()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HideStatusBar83", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void HookOntoRawActivityEvents() [static]
void SystemUI::HookOntoRawActivityEvents()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "HookOntoRawActivityEvents96", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object MakePostV11LayoutChangeListener() [static]
::g::Java::Object* SystemUI::MakePostV11LayoutChangeListener()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "MakePostV11LayoutChangeListener76", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void OnConfigChanged() [static]
void SystemUI::OnConfigChanged()
{
    SystemUI_typeof()->Init();
    SystemUI::ReadConfiguration();
    SystemUI::CompensateRootLayoutForSystemUI();
}

// public static void OnCreate() [static]
void SystemUI::OnCreate()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnCreate104", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void OnDestroy() [static]
void SystemUI::OnDestroy()
{
    SystemUI_typeof()->Init();
    SystemUI::Detach();
    SystemUI::_bottomFrameSize_ = 0;
}

// private static void OnFrameChanged() [static]
void SystemUI::OnFrameChanged()
{
    SystemUI_typeof()->Init();
    uDelegate* handler = SystemUI::FrameChanged1_;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->Invoke(2, nullptr, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private static void onHideKeyboard(int keyboardHeight, bool force) [static]
void SystemUI::onHideKeyboard(int32_t keyboardHeight, bool force)
{
    SystemUI_typeof()->Init();

    if (SystemUI::keyboardVisible_ || force)
    {
        SystemUI::keyboardVisible_ = false;
        SystemUI::lastKeyboardHeight_ = keyboardHeight;
        SystemUI::cppOnBottomFrameChanged(keyboardHeight);
    }
}

// private static void OnPause() [static]
void SystemUI::OnPause()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnPause97", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void OnResume() [static]
void SystemUI::OnResume()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "OnResume98", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void onShowKeyboard(int keyboardHeight, bool force) [static]
void SystemUI::onShowKeyboard(int32_t keyboardHeight, bool force)
{
    SystemUI_typeof()->Init();
    SystemUI::keyboardVisible_ = true;

    if ((SystemUI::lastKeyboardHeight_ != keyboardHeight) || force)
    {
        SystemUI::lastKeyboardHeight_ = keyboardHeight;
        SystemUI::cppOnBottomFrameChanged(keyboardHeight);
    }
}

// private static void OnWillResize() [static]
void SystemUI::OnWillResize()
{
    SystemUI_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(SystemUI::MarginsChanged1_, nullptr))
        uPtr(SystemUI::MarginsChanged1_)->InvokeVoid();
}

// public static void ReadConfiguration() [static]
void SystemUI::ReadConfiguration()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ReadConfiguration107", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ResendFrameSizes() [static]
void SystemUI::ResendFrameSizes()
{
    SystemUI_typeof()->Init();
    int32_t heightDiff = SystemUI::GetRealDisplayHeight() - SystemUI::GetSuperLayoutHeight();
    heightDiff = heightDiff - (int32_t)SystemUI::GetStatusBarHeight();
    SystemUI::lastKeyboardHeight_ = heightDiff;
    SystemUI::cppOnBottomFrameChanged(heightDiff);
}

// private static void ResetGeometry() [static]
void SystemUI::ResetGeometry()
{
    SystemUI_typeof()->Init();
    GLHelper::SwapBackToBackgroundSurface();
    float density = SystemUI::GetDensity();
    ::g::Uno::Float2 pos = ::g::Uno::Float2__New2(0.0f, 0.0f);
    ::g::Uno::Float2 size = SystemUI::_GetRootDisplaySize();
    ::g::Uno::Rect frame = ::g::Uno::Rect__New2(pos, size);
    SystemUI::Frame(frame);
    SystemUI::Density(density);
}

// private static void SetAsRootView(Java.Object view) [static]
void SystemUI::SetAsRootView(::g::Java::Object* view)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetAsRootView109", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _uview=view;
        jobject _view = (_uview==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uview, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_view);
        
        if (_view!=nullptr) { U_JNIVAR->DeleteLocalRef(_view); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void SetCurrentScreenOrientation(int orientation) [static]
void SystemUI::SetCurrentScreenOrientation(int32_t orientation)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCurrentScreenOrientation110", "(I)V");
        int32_t _uorientation=orientation;
        jint _orientation = (jint)_uorientation;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_orientation);
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static bool SetDarkStatusBarStyle() [static]
bool SystemUI::SetDarkStatusBarStyle()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetDarkStatusBarStyle111", "()Z");
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd);
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void SetFrame(Java.Object view, int originX, int originY, int height) [static]
void SystemUI::SetFrame(::g::Java::Object* view, int32_t originX, int32_t originY, int32_t height)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetFrame77", "(Ljava/lang/Object;III)V");
        ::g::Java::Object* _uview=view;
        jobject _view = (_uview==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uview, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uoriginX=originX;
        jint _originX = (jint)_uoriginX;
        int32_t _uoriginY=originY;
        jint _originY = (jint)_uoriginY;
        int32_t _uheight=height;
        jint _height = (jint)_uheight;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_view,_originX,_originY,_height);
        
        if (_view!=nullptr) { U_JNIVAR->DeleteLocalRef(_view); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static bool SetLightStatusBarStyle() [static]
bool SystemUI::SetLightStatusBarStyle()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetLightStatusBarStyle113", "()Z");
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd);
        bool __result = (bool)__jresult;
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static bool SetStatusBarColor(int color) [static]
bool SystemUI::SetStatusBarColor(int32_t color)
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetStatusBarColor114", "(I)Z");
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_color);
        bool __result = (bool)__jresult;
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static void ShowStatusBar() [static]
void SystemUI::ShowStatusBar()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ShowStatusBar115", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void unoOnGlobalLayout() [static]
void SystemUI::unoOnGlobalLayout()
{
    SystemUI_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "unoOnGlobalLayout105", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void UpdateStatusBar() [static]
void SystemUI::UpdateStatusBar()
{
    SystemUI_typeof()->Init();

    switch (SystemUI::_systemUIState_)
    {
        case 0:
        {
            SystemUI::ShowStatusBar();
            break;
        }
        case 1:
        {
            SystemUI::HideStatusBar();
            break;
        }
        case 2:
        {
            SystemUI::EnterFullscreen();
            break;
        }
    }

    switch (SystemUI::_statusbarStyle_)
    {
        case 0:
        {
            SystemUI::SetDarkStatusBarStyle();
            break;
        }
        case 1:
        {
            SystemUI::SetLightStatusBarStyle();
            break;
        }
    }
}

// private static void UpdateTextScaleFactor(float _textScaleFactor) [static]
void SystemUI::UpdateTextScaleFactor(float _textScaleFactor1)
{
    SystemUI_typeof()->Init();
    SystemUI::TextScaleFactor(_textScaleFactor1);
}

// public static int get_APILevel() [static]
int32_t SystemUI::APILevel()
{
    SystemUI_typeof()->Init();
    return SystemUI::GetAPILevel();
}

// private static Uno.Rect get_BottomFrame() [static]
::g::Uno::Rect SystemUI::BottomFrame()
{
    SystemUI_typeof()->Init();
    return SystemUI::GetBottomBarFrame();
}

// public static float get_Density() [static]
float SystemUI::Density()
{
    SystemUI_typeof()->Init();
    return SystemUI::_density_;
}

// private static void set_Density(float value) [static]
void SystemUI::Density(float value)
{
    SystemUI_typeof()->Init();
    SystemUI::_density_ = value;
}

// public static float4 get_DeviceMargins() [static]
::g::Uno::Float4 SystemUI::DeviceMargins()
{
    SystemUI_typeof()->Init();
    return ::g::Uno::Float4__New1(0.0f);
}

// public static Fuse.Platform.ScreenOrientation get_DeviceOrientation() [static]
int32_t SystemUI::DeviceOrientation()
{
    SystemUI_typeof()->Init();
    int32_t orientation = SystemUI::GetCurrentScreenOrientation();

    switch (orientation)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return 3;
        default:
            return 4;
    }
}

// public static void set_DeviceOrientation(Fuse.Platform.ScreenOrientation value) [static]
void SystemUI::DeviceOrientation(int32_t value)
{
    SystemUI_typeof()->Init();

    if (SystemUI::DeviceOrientation() != value)
    {
        SystemUI::SetCurrentScreenOrientation(value);

        if (::g::Uno::Delegate::op_Inequality(SystemUI::DeviceOrientationChanged1_, nullptr))
            uPtr(SystemUI::DeviceOrientationChanged1_)->InvokeVoid(uCRef<int32_t>(value));
    }
}

// public static Uno.Rect get_Frame() [static]
::g::Uno::Rect SystemUI::Frame()
{
    SystemUI_typeof()->Init();
    return SystemUI::_frame_;
}

// private static void set_Frame(Uno.Rect value) [static]
void SystemUI::Frame(::g::Uno::Rect value)
{
    SystemUI_typeof()->Init();

    if (::g::Uno::Rect__Equals2(SystemUI::_frame_, value))
        return;

    SystemUI::_frame_ = value;
    SystemUI::OnFrameChanged();
}

// public static bool get_IsTopFrameVisible() [static]
bool SystemUI::IsTopFrameVisible()
{
    SystemUI_typeof()->Init();
    return (double)SystemUI::GetStatusBarHeight() > 0.0;
}

// public static void set_IsTopFrameVisible(bool value) [static]
void SystemUI::IsTopFrameVisible(bool value)
{
    SystemUI_typeof()->Init();

    if (value)
        SystemUI::ShowStatusBar();
    else
        SystemUI::HideStatusBar();
}

// public static int3 get_OSVersion() [static]
::g::Uno::Int3 SystemUI::OSVersion()
{
    SystemUI_typeof()->Init();
    int32_t major = 0;
    int32_t minor = 0;
    int32_t revision = 0;

    try
    {
        {
            uString* ver = SystemUI::GetOSVersion();
            uArray* parts = ::g::Uno::String::Split(uPtr(ver), uArray::Init<int32_t>(::TYPES[5/*char[]*/], 1, '.'));

            if (uPtr(parts)->Length() > 0)
                ::g::Uno::Int::TryParse(uPtr(parts)->Strong<uString*>(0), &major);

            if (uPtr(parts)->Length() > 1)
                ::g::Uno::Int::TryParse(uPtr(parts)->Strong<uString*>(1), &minor);

            if (uPtr(parts)->Length() > 2)
                ::g::Uno::Int::TryParse(uPtr(parts)->Strong<uString*>(2), &revision);
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* ex = __t.Exception;
    }

    return ::g::Uno::Int3__New2(major, minor, revision);
}

// public static Java.Object get_RootView() [static]
::g::Java::Object* SystemUI::RootView()
{
    SystemUI_typeof()->Init();
    return SystemUI::RootLayout_;
}

// public static void set_RootView(Java.Object value) [static]
void SystemUI::RootView(::g::Java::Object* value)
{
    SystemUI_typeof()->Init();
    SystemUI::SetAsRootView(value);
}

// public static float4 get_SafeMargins() [static]
::g::Uno::Float4 SystemUI::SafeMargins()
{
    SystemUI_typeof()->Init();
    float top = SystemUI::TopFrame().Height();
    float bottom = SystemUI::BottomFrame().Height();
    return ::g::Uno::Float4__op_Division1(::g::Uno::Float4__New2(0.0f, top, 0.0f, bottom), SystemUI::Density());
}

// public static float4 get_StaticMargins() [static]
::g::Uno::Float4 SystemUI::StaticMargins()
{
    SystemUI_typeof()->Init();
    float top = SystemUI::TopFrame().Height();
    int32_t bottom = SystemUI::_staticBottomFrameSize_;
    return ::g::Uno::Float4__op_Division1(::g::Uno::Float4__New2(0.0f, top, 0.0f, (float)bottom), SystemUI::Density());
}

// public static float get_TextScaleFactor() [static]
float SystemUI::TextScaleFactor()
{
    SystemUI_typeof()->Init();
    return SystemUI::_textScaleFactor_;
}

// private static void set_TextScaleFactor(float value) [static]
void SystemUI::TextScaleFactor(float value)
{
    SystemUI_typeof()->Init();

    if (SystemUI::_textScaleFactor_ != value)
    {
        SystemUI::_textScaleFactor_ = value;

        if (::g::Uno::Delegate::op_Inequality(SystemUI::TextScaleFactorChanged1_, nullptr))
            uPtr(SystemUI::TextScaleFactorChanged1_)->InvokeVoid(uCRef(value));
    }
}

// private static Uno.Rect get_TopFrame() [static]
::g::Uno::Rect SystemUI::TopFrame()
{
    SystemUI_typeof()->Init();
    return SystemUI::GetStatusBarFrame();
}

// public static generated void add_DeviceOrientationChanged(Uno.Action<Fuse.Platform.ScreenOrientation> value) [static]
void SystemUI::add_DeviceOrientationChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::DeviceOrientationChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::DeviceOrientationChanged1_, value), ::TYPES[6/*Uno.Action<Fuse.Platform.ScreenOrientation>*/]);
}

// public static generated void remove_DeviceOrientationChanged(Uno.Action<Fuse.Platform.ScreenOrientation> value) [static]
void SystemUI::remove_DeviceOrientationChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::DeviceOrientationChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::DeviceOrientationChanged1_, value), ::TYPES[6/*Uno.Action<Fuse.Platform.ScreenOrientation>*/]);
}

// public static generated void add_FrameChanged(Uno.EventHandler value) [static]
void SystemUI::add_FrameChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::FrameChanged1_, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public static generated void remove_FrameChanged(Uno.EventHandler value) [static]
void SystemUI::remove_FrameChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::FrameChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::FrameChanged1_, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public static generated void add_MarginsChanged(Uno.Action value) [static]
void SystemUI::add_MarginsChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::MarginsChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::MarginsChanged1_, value), ::TYPES[1/*Uno.Action*/]);
}

// public static generated void remove_MarginsChanged(Uno.Action value) [static]
void SystemUI::remove_MarginsChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::MarginsChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::MarginsChanged1_, value), ::TYPES[1/*Uno.Action*/]);
}

// public static generated void add_TextScaleFactorChanged(Uno.Action<float> value) [static]
void SystemUI::add_TextScaleFactorChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::TextScaleFactorChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SystemUI::TextScaleFactorChanged1_, value), ::TYPES[7/*Uno.Action<float>*/]);
}

// public static generated void remove_TextScaleFactorChanged(Uno.Action<float> value) [static]
void SystemUI::remove_TextScaleFactorChanged(uDelegate* value)
{
    SystemUI_typeof()->Init();
    SystemUI::TextScaleFactorChanged1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SystemUI::TextScaleFactorChanged1_, value), ::TYPES[7/*Uno.Action<float>*/]);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/SystemUI.uno
// ------------------------------------------------------------------

// internal enum SystemUIResizeReason
uEnumType* SystemUIResizeReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Platform.SystemUIResizeReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "WillShow", 0LL,
        "WillChangeFrame", 1LL,
        "WillHide", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Platform/SystemUI.uno
// ------------------------------------------------------------------

// internal enum SysUIState
uEnumType* SysUIState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Platform.SysUIState", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "StatusBarHidden", 1LL,
        "Fullscreen", 2LL);
    return type;
}

}}} // ::g::Fuse::Platform
