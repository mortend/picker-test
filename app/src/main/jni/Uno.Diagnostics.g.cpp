// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <chrono>
#include <sys/time.h>
#include <time.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Asser-721aea07.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Diagnostics.Debug-20ee58c0.h>
#include <Uno.Diagnostics.Log.h>
#include <Uno.Diagnostics.LogLevel.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Object.h>
#include <Uno.String.h>
static uString* STRINGS[5];

namespace g{
namespace Uno{
namespace Diagnostics{

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Debug.uno
// ---------------------------------------------------------------------------------------------------------------------

// public delegate void AssertionHandler(bool value, string expression, string filename, int line, object[] operands)
uDelegateType* AssertionHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Uno.Diagnostics.AssertionHandler", 5, 0);
    type->SetSignature(uVoid_typeof(),
        ::g::Uno::Bool_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::String_typeof(),
        ::g::Uno::Int_typeof(),
        uObject_typeof()->Array());
    return type;
}

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Clock.uno
// ---------------------------------------------------------------------------------------------------------------------

// public static class Clock
// {
static void Clock_build(uType* type)
{
}

uClassType* Clock_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Clock", options);
    type->fp_build_ = Clock_build;
    return type;
}

// public static double GetSeconds()
void Clock__GetSeconds_fn(double* __retval)
{
    *__retval = Clock::GetSeconds();
}

// public static long GetTicks()
void Clock__GetTicks_fn(int64_t* __retval)
{
    *__retval = Clock::GetTicks();
}

// public static int GetTimezoneOffset(int year, int month, int day)
void Clock__GetTimezoneOffset_fn(int32_t* year, int32_t* month, int32_t* day, int32_t* __retval)
{
    *__retval = Clock::GetTimezoneOffset(*year, *month, *day);
}

// public static double GetSeconds() [static]
double Clock::GetSeconds()
{
    // this method is more accurate for android
    struct timespec now;
    clock_gettime(CLOCK_MONOTONIC, &now);
    return ((double)now.tv_sec) + (((double)now.tv_nsec) / 1000000000.0);
}

// public static long GetTicks() [static]
int64_t Clock::GetTicks()
{
    auto start = std::chrono::system_clock::now();
    return std::chrono::duration_cast<std::chrono::duration<int64_t, std::ratio<1, 10000000>>>(start.time_since_epoch()).count();
}

// public static int GetTimezoneOffset(int year, int month, int day) [static]
int32_t Clock::GetTimezoneOffset(int32_t year, int32_t month, int32_t day)
{
    struct tm stm;
    stm.tm_year = year - 1900;
    stm.tm_mon = month - 1;
    stm.tm_mday = day;
    stm.tm_hour = 0;
    stm.tm_min = 0;
    stm.tm_sec = 0;
    stm.tm_wday = 0;
    stm.tm_yday = 0;
    stm.tm_isdst = 0;
    time_t current_time = mktime(&stm);
    #ifdef WIN32
    gmtime_s(&stm, &current_time);
    time_t utc = mktime(&stm);
    
    localtime_s(&stm, &current_time);
    time_t local = mktime(&stm);
    #else
    struct tm *info;
    info = gmtime(&current_time);
    time_t utc = mktime(info);
    
    info = localtime(&current_time);
    time_t local = mktime(info);
    #endif
    return (int)(local - utc) / 60 + stm.tm_isdst * 60;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Debug.uno
// ---------------------------------------------------------------------------------------------------------------------

// public static class Debug
// {
// static generated Debug()
static void Debug__cctor__fn(uType* __type)
{
    Debug::_indentStr_ = ::STRINGS[0/*""*/];
}

static void Debug_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("Assertion Failed: '");
    ::STRINGS[2] = uString::Const("' in ");
    ::STRINGS[3] = uString::Const("(");
    ::STRINGS[4] = uString::Const(")");
    type->SetFields(0,
        ::g::Uno::Diagnostics::AssertionHandler_typeof(), (uintptr_t)&Debug::_assertionHandler_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Debug::_indentStr_, uFieldFlagsStatic);
}

uClassType* Debug_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Debug", options);
    type->fp_build_ = Debug_build;
    type->fp_cctor_ = Debug__cctor__fn;
    return type;
}

// public static void Assert(bool value, string expression, string filename, int line, object[] operands)
void Debug__Assert_fn(bool* value, uString* expression, uString* filename, int32_t* line, uArray* operands)
{
    Debug::Assert(*value, expression, filename, *line, operands);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type)
void Debug__EmitLog_fn(uString* message, int32_t* type)
{
    Debug::EmitLog(message, *type);
}

uSStrong<uDelegate*> Debug::_assertionHandler_;
uSStrong<uString*> Debug::_indentStr_;

// public static void Assert(bool value, string expression, string filename, int line, object[] operands) [static]
void Debug::Assert(bool value, uString* expression, uString* filename, int32_t line, uArray* operands)
{
    Debug_typeof()->Init();

    if (::g::Uno::Delegate::op_Inequality(Debug::_assertionHandler_, nullptr))
        uPtr(Debug::_assertionHandler_)->Invoke(5, uCRef(value), expression, filename, uCRef<int32_t>(line), operands);

    if (!value)
        Debug::EmitLog(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Assertion F...*/], expression), ::STRINGS[2/*"' in "*/]), filename), ::STRINGS[3/*"("*/]), uBox<int32_t>(::g::Uno::Int_typeof(), line)), ::STRINGS[4/*")"*/]), 3);
}

// private static void EmitLog(string message, Uno.Diagnostics.DebugMessageType type) [static]
void Debug::EmitLog(uString* message, int32_t type)
{
    Debug_typeof()->Init();
    ::g::Uno::Diagnostics::Log::WriteLine(type, message);
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Debug.uno
// ---------------------------------------------------------------------------------------------------------------------

// public enum DebugMessageType
uEnumType* DebugMessageType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Uno.Diagnostics.DebugMessageType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Debug", 0LL,
        "Information", 1LL,
        "Warning", 2LL,
        "Error", 3LL,
        "Fatal", 4LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Log.uno
// -------------------------------------------------------------------------------------------------------------------

// public static class Log
// {
static void Log_build(uType* type)
{
}

uClassType* Log_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Diagnostics.Log", options);
    type->fp_build_ = Log_build;
    return type;
}

// public static void Debug(string message)
void Log__Debug_fn(uString* message)
{
    Log::Debug(message);
}

// public static void Error(string message)
void Log__Error_fn(uString* message)
{
    Log::Error(message);
}

// public static void WriteLine(Uno.Diagnostics.LogLevel level, string message)
void Log__WriteLine_fn(int32_t* level, uString* message)
{
    Log::WriteLine(*level, message);
}

// public static void Debug(string message) [static]
void Log::Debug(uString* message)
{
    Log::WriteLine(0, message);
}

// public static void Error(string message) [static]
void Log::Error(uString* message)
{
    Log::WriteLine(3, message);
}

// public static void WriteLine(Uno.Diagnostics.LogLevel level, string message) [static]
void Log::WriteLine(int32_t level, uString* message)
{
    uCString cstr(message);
    uLog(level, "%s", cstr.Ptr);
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Diagnostics/Log.uno
// -------------------------------------------------------------------------------------------------------------------

// public enum LogLevel
uEnumType* LogLevel_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Uno.Diagnostics.LogLevel", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Debug", 0LL,
        "Information", 1LL,
        "Warning", 2LL,
        "Error", 3LL,
        "Fatal", 4LL);
    return type;
}

}}} // ::g::Uno::Diagnostics
