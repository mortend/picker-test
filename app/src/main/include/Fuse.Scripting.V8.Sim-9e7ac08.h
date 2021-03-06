// This file was generated based on '../Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <include/V8Simple.h>
#include <uno.h>
namespace g{namespace Fuse{namespace Scripting{namespace V8{namespace Simple{struct Context;}}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// internal static extern class Context
// {
uClassType* Context_typeof();
void Context__CopyGlobalObject_fn(::JSContext** context, ::JSObject** __retval);
void Context__Create_fn(::JSContext** __retval);
void Context__EvaluateCreate_fn(::JSContext** context, ::JSString** fileName, ::JSString** code, ::JSScriptException** error, ::JSValue** __retval);
void Context__Release_fn(::JSContext** context);

struct Context : uObject
{
    static ::JSObject* CopyGlobalObject(::JSContext* context);
    static ::JSContext* Create();
    static ::JSValue* EvaluateCreate(::JSContext* context, ::JSString* fileName, ::JSString* code, ::JSScriptException** error);
    static void Release(::JSContext* context);
};
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
