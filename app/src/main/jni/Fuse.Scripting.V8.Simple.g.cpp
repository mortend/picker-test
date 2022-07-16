// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Scripting.V8.Handle.h>
#include <Fuse.Scripting.V8.Sim-130b432b.h>
#include <Fuse.Scripting.V8.Sim-2e31f57f.h>
#include <Fuse.Scripting.V8.Sim-2f1d122d.h>
#include <Fuse.Scripting.V8.Sim-468d9e54.h>
#include <Fuse.Scripting.V8.Sim-8f7a590.h>
#include <Fuse.Scripting.V8.Sim-9a7d2f6a.h>
#include <Fuse.Scripting.V8.Sim-9e7ac08.h>
#include <Fuse.Scripting.V8.Sim-b3c74f3f.h>
#include <Fuse.Scripting.V8.Sim-c25f0574.h>
#include <Fuse.Scripting.V8.Sim-ccbad846.h>
#include <Fuse.Scripting.V8.Sim-d516fd10.h>
#include <Fuse.Scripting.V8.Sim-dd4d12d9.h>
#include <Fuse.Scripting.V8.Sim-e2cfd08.h>
#include <Fuse.Scripting.V8.Simple.Value.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Int.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#undef GetMessage
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Scripting{
namespace V8{
namespace Simple{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal static extern class Context
// {
static void Context_build(uType* type)
{
}

uClassType* Context_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.Context", options);
    type->fp_build_ = Context_build;
    return type;
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CopyGlobalObject(Fuse.Scripting.V8.Simple.JSContext context)
void Context__CopyGlobalObject_fn(::JSContext** context, ::JSObject** __retval)
{
    *__retval = Context::CopyGlobalObject(*context);
}

// public static extern Fuse.Scripting.V8.Simple.JSContext Create()
void Context__Create_fn(::JSContext** __retval)
{
    *__retval = Context::Create();
}

// public static extern Fuse.Scripting.V8.Simple.JSValue EvaluateCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString fileName, Fuse.Scripting.V8.Simple.JSString code, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Context__EvaluateCreate_fn(::JSContext** context, ::JSString** fileName, ::JSString** code, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Context::EvaluateCreate(*context, *fileName, *code, error);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context)
void Context__Release_fn(::JSContext** context)
{
    Context::Release(*context);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CopyGlobalObject(Fuse.Scripting.V8.Simple.JSContext context) [static]
::JSObject* Context::CopyGlobalObject(::JSContext* context)
{
    return ::JSContextCopyGlobalObject(context);
}

// public static extern Fuse.Scripting.V8.Simple.JSContext Create() [static]
::JSContext* Context::Create()
{
    return ::CreateJSContext(
    	([] (void* data) -> void
    	{
    		::g::Fuse::Scripting::V8::Handle::Free(data);
    	}),
    	([] (void* external) -> void
    	{
    		::g::Fuse::Scripting::V8::Handle::Free(external);
    	}));
}

// public static extern Fuse.Scripting.V8.Simple.JSValue EvaluateCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString fileName, Fuse.Scripting.V8.Simple.JSString code, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
::JSValue* Context::EvaluateCreate(::JSContext* context, ::JSString* fileName, ::JSString* code, ::JSScriptException** error)
{
    return ::JSContextEvaluateCreate(context, fileName, code, error);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context) [static]
void Context::Release(::JSContext* context)
{
    ::ReleaseJSContext(context);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSArray
// {
static void JSArray_build(uType* type)
{
}

uStructType* JSArray_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSArray*);
    options.ValueSize = sizeof(::JSArray*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSArray", options);
    type->fp_build_ = JSArray_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern delegate Fuse.Scripting.V8.Simple.JSValue JSCallback(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSValue& error)
uDelegateType* JSCallback_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Scripting.V8.Simple.JSCallback", 5, 0);
    type->SetSignature(::g::Fuse::Scripting::V8::Simple::JSValue_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSContext_typeof(),
        ::g::Uno::IntPtr_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->Array(),
        ::g::Uno::Int_typeof(),
        ::g::Fuse::Scripting::V8::Simple::JSValue_typeof()->ByRef());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSContext
// {
static void JSContext_build(uType* type)
{
}

uStructType* JSContext_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSContext*);
    options.ValueSize = sizeof(::JSContext*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSContext", options);
    type->fp_build_ = JSContext_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSExternal
// {
static void JSExternal_build(uType* type)
{
}

uStructType* JSExternal_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSExternal*);
    options.ValueSize = sizeof(::JSExternal*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSExternal", options);
    type->fp_build_ = JSExternal_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSFunction
// {
static void JSFunction_build(uType* type)
{
}

uStructType* JSFunction_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSFunction*);
    options.ValueSize = sizeof(::JSFunction*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSFunction", options);
    type->fp_build_ = JSFunction_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSObject
// {
static void JSObject_build(uType* type)
{
}

uStructType* JSObject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSObject*);
    options.ValueSize = sizeof(::JSObject*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSObject", options);
    type->fp_build_ = JSObject_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern enum JSRuntimeError
uEnumType* JSRuntimeError_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Scripting.V8.Simple.JSRuntimeError", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "NoError", 0LL,
        "InvalidCast", 1LL,
        "StringTooLong", 2LL,
        "TypeError", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSScriptException
// {
static void JSScriptException_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::IntPtr_typeof();
}

uStructType* JSScriptException_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSScriptException*);
    options.ValueSize = sizeof(::JSScriptException*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSScriptException", options);
    type->fp_build_ = JSScriptException_build;
    type->fp_Equals_struct = (void(*)(void*, uType*, uObject*, bool*))JSScriptException__Equals_fn;
    type->fp_GetHashCode_struct = (void(*)(void*, uType*, int32_t*))JSScriptException__GetHashCode_fn;
    return type;
}

// public override sealed bool Equals(object that)
void JSScriptException__Equals_fn(::JSScriptException** __this, uType* __type, uObject* that, bool* __retval)
{
    return *__retval = uIs(that, __type) ? JSScriptException::op_Equality(*__this, uUnbox< ::JSScriptException*>(__type, that)) : false, void();
}

// public override sealed int GetHashCode()
void JSScriptException__GetHashCode_fn(::JSScriptException** __this, uType* __type, int32_t* __retval)
{
    return *__retval = ::g::Uno::IntPtr::GetHashCode(*__this, ::TYPES[0/*Uno.IntPtr*/]), void();
}

// public static operator ==(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2)
void JSScriptException__op_Equality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval)
{
    *__retval = JSScriptException::op_Equality(*e1, *e2);
}

// public static operator !=(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2)
void JSScriptException__op_Inequality_fn(::JSScriptException** e1, ::JSScriptException** e2, bool* __retval)
{
    *__retval = JSScriptException::op_Inequality(*e1, *e2);
}

// public static operator ==(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2) [static]
bool JSScriptException::op_Equality(::JSScriptException* e1, ::JSScriptException* e2)
{
    return ::g::Uno::IntPtr::op_Equality(e1, e2);
}

// public static operator !=(Fuse.Scripting.V8.Simple.JSScriptException e1, Fuse.Scripting.V8.Simple.JSScriptException e2) [static]
bool JSScriptException::op_Inequality(::JSScriptException* e1, ::JSScriptException* e2)
{
    return ::g::Uno::IntPtr::op_Inequality(e1, e2);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSString
// {
static void JSString_build(uType* type)
{
}

uStructType* JSString_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSString*);
    options.ValueSize = sizeof(::JSString*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSString", options);
    type->fp_build_ = JSString_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern enum JSType
uEnumType* JSType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Scripting.V8.Simple.JSType", ::g::Uno::Int_typeof(), 9);
    type->SetLiterals(
        "Null", 0LL,
        "Int", 1LL,
        "Double", 2LL,
        "String", 3LL,
        "Bool", 4LL,
        "Object", 5LL,
        "Array", 6LL,
        "Function", 7LL,
        "External", 8LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal extern struct JSValue
// {
static void JSValue_build(uType* type)
{
}

uStructType* JSValue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(::JSValue*);
    options.ValueSize = sizeof(::JSValue*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Scripting.V8.Simple.JSValue", options);
    type->fp_build_ = JSValue_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal static extern class ScriptException
// {
static void ScriptException_build(uType* type)
{
}

uClassType* ScriptException_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.ScriptException", options);
    type->fp_build_ = ScriptException_build;
    return type;
}

// public static extern Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException e)
void ScriptException__GetException_fn(::JSScriptException** e, ::JSValue** __retval)
{
    *__retval = ScriptException::GetException(*e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetFileName(Fuse.Scripting.V8.Simple.JSScriptException e)
void ScriptException__GetFileName_fn(::JSScriptException** e, ::JSString** __retval)
{
    *__retval = ScriptException::GetFileName(*e);
}

// public static extern int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException e)
void ScriptException__GetLineNumber_fn(::JSScriptException** e, int32_t* __retval)
{
    *__retval = ScriptException::GetLineNumber(*e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetMessage(Fuse.Scripting.V8.Simple.JSScriptException e)
void ScriptException__GetMessage_fn(::JSScriptException** e, ::JSString** __retval)
{
    *__retval = ScriptException::GetMessage(*e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException e)
void ScriptException__GetStackTrace_fn(::JSScriptException** e, ::JSString** __retval)
{
    *__retval = ScriptException::GetStackTrace(*e);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException e)
void ScriptException__Release_fn(::JSContext** context, ::JSScriptException** e)
{
    ScriptException::Release(*context, *e);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue GetException(Fuse.Scripting.V8.Simple.JSScriptException e) [static]
::JSValue* ScriptException::GetException(::JSScriptException* e)
{
    return ::GetJSScriptException(e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetFileName(Fuse.Scripting.V8.Simple.JSScriptException e) [static]
::JSString* ScriptException::GetFileName(::JSScriptException* e)
{
    return ::GetJSScriptExceptionFileName(e);
}

// public static extern int GetLineNumber(Fuse.Scripting.V8.Simple.JSScriptException e) [static]
int32_t ScriptException::GetLineNumber(::JSScriptException* e)
{
    return ::GetJSScriptExceptionLineNumber(e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetMessage(Fuse.Scripting.V8.Simple.JSScriptException e) [static]
::JSString* ScriptException::GetMessage(::JSScriptException* e)
{
    return ::GetJSScriptExceptionMessage(e);
}

// public static extern Fuse.Scripting.V8.Simple.JSString GetStackTrace(Fuse.Scripting.V8.Simple.JSScriptException e) [static]
::JSString* ScriptException::GetStackTrace(::JSScriptException* e)
{
    return ::GetJSScriptExceptionStackTrace(e);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSScriptException e) [static]
void ScriptException::Release(::JSContext* context, ::JSScriptException* e)
{
    ::ReleaseJSScriptException(context, e);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Scripting.JavaScript/V8/V8Simple.uno
// ---------------------------------------------------------------------------------

// internal static extern class Value
// {
static void Value_build(uType* type)
{
}

uClassType* Value_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Scripting.V8.Simple.Value", options);
    type->fp_build_ = Value_build;
    return type;
}

// public static extern Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsArray_fn(::JSValue** value, int32_t* error, ::JSArray** __retval)
{
    *__retval = Value::AsArray(*value, error);
}

// public static extern bool AsBool(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsBool_fn(::JSValue** value, int32_t* error, bool* __retval)
{
    *__retval = Value::AsBool(*value, error);
}

// public static extern double AsDouble(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsDouble_fn(::JSValue** value, int32_t* error, double* __retval)
{
    *__retval = Value::AsDouble(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsExternal_fn(::JSValue** value, int32_t* error, ::JSExternal** __retval)
{
    *__retval = Value::AsExternal(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsFunction_fn(::JSValue** value, int32_t* error, ::JSFunction** __retval)
{
    *__retval = Value::AsFunction(*value, error);
}

// public static extern int AsInt(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsInt_fn(::JSValue** value, int32_t* error, int32_t* __retval)
{
    *__retval = Value::AsInt(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsObject_fn(::JSValue** value, int32_t* error, ::JSObject** __retval)
{
    *__retval = Value::AsObject(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__AsString_fn(::JSValue** value, int32_t* error, ::JSString** __retval)
{
    *__retval = Value::AsString(*value, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr)
void Value__AsValue_fn(::JSArray** arr, ::JSValue** __retval)
{
    *__retval = Value::AsValue(*arr);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal external)
void Value__AsValue1_fn(::JSExternal** external, ::JSValue** __retval)
{
    *__retval = Value::AsValue1(*external);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun)
void Value__AsValue2_fn(::JSFunction** fun, ::JSValue** __retval)
{
    *__retval = Value::AsValue2(*fun);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj)
void Value__AsValue3_fn(::JSObject** obj, ::JSValue** __retval)
{
    *__retval = Value::AsValue3(*obj);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str)
void Value__AsValue4_fn(::JSString** str, ::JSValue** __retval)
{
    *__retval = Value::AsValue4(*str);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CallCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__CallCreate_fn(::JSContext** context, ::JSFunction** function, ::JSObject** thisObject, uArray* args, int32_t* numArgs, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Value::CallCreate(*context, *function, *thisObject, args, *numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject ConstructCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__ConstructCreate_fn(::JSContext** context, ::JSFunction** function, uArray* args, int32_t* numArgs, ::JSScriptException** error, ::JSObject** __retval)
{
    *__retval = Value::ConstructCreate(*context, *function, args, *numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSArray CopyOwnPropertyNames(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__CopyOwnPropertyNames_fn(::JSContext** context, ::JSObject** obj, ::JSScriptException** error, ::JSArray** __retval)
{
    *__retval = Value::CopyOwnPropertyNames(*context, *obj, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__CopyProperty_fn(::JSContext** context, ::JSArray** arr, int32_t* index, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Value::CopyProperty(*context, *arr, *index, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__CopyProperty1_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSScriptException** error, ::JSValue** __retval)
{
    *__retval = Value::CopyProperty1(*context, *obj, *key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateBool(bool value)
void Value__CreateBool_fn(bool* value, ::JSValue** __retval)
{
    *__retval = Value::CreateBool(*value);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateDouble(double value)
void Value__CreateDouble_fn(double* value, ::JSValue** __retval)
{
    *__retval = Value::CreateDouble(*value);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal CreateExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value)
void Value__CreateExternal_fn(::JSContext** context, void** value, ::JSExternal** __retval)
{
    *__retval = Value::CreateExternal(*context, *value);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CreateExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength)
void Value__CreateExternalArrayBuffer_fn(::JSContext** context, void** data, int32_t* byteLength, ::JSObject** __retval)
{
    *__retval = Value::CreateExternalArrayBuffer(*context, *data, *byteLength);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateInt(int value)
void Value__CreateInt_fn(int32_t* value, ::JSValue** __retval)
{
    *__retval = Value::CreateInt(*value);
}

// public static extern Fuse.Scripting.V8.Simple.JSString CreateString(Fuse.Scripting.V8.Simple.JSContext context, string buffer, int length, Fuse.Scripting.V8.Simple.JSRuntimeError& error)
void Value__CreateString_fn(::JSContext** context, uString* buffer, int32_t* length, int32_t* error, ::JSString** __retval)
{
    *__retval = Value::CreateString(*context, buffer, *length, error);
}

// public static extern Uno.IntPtr GetArrayBufferData(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSRuntimeError& outError)
void Value__GetArrayBufferData_fn(::JSContext** context, ::JSObject** obj, int32_t* outError, void** __retval)
{
    *__retval = Value::GetArrayBufferData(*context, *obj, outError);
}

// public static extern Uno.IntPtr GetExternalValue(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSExternal external)
void Value__GetExternalValue_fn(::JSContext** context, ::JSExternal** external, void** __retval)
{
    *__retval = Value::GetExternalValue(*context, *external);
}

// public static extern Fuse.Scripting.V8.Simple.JSType GetType(Fuse.Scripting.V8.Simple.JSValue value)
void Value__GetType_fn(::JSValue** value, int32_t* __retval)
{
    *__retval = Value::GetType(*value);
}

// public static extern bool HasProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__HasProperty_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSScriptException** error, bool* __retval)
{
    *__retval = Value::HasProperty(*context, *obj, *key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue JSNull()
void Value__JSNull_fn(::JSValue** __retval)
{
    *__retval = Value::JSNull();
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr)
void Value__Length_fn(::JSContext** context, ::JSArray** arr, int32_t* __retval)
{
    *__retval = Value::Length(*context, *arr);
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str)
void Value__Length1_fn(::JSContext** context, ::JSString** str, int32_t* __retval)
{
    *__retval = Value::Length1(*context, *str);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value)
void Value__Release_fn(::JSContext** context, ::JSValue** value)
{
    Value::Release(*context, *value);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value)
void Value__Retain_fn(::JSContext** context, ::JSValue** value)
{
    Value::Retain(*context, *value);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__SetProperty_fn(::JSContext** context, ::JSArray** arr, int32_t* index, ::JSValue** value, ::JSScriptException** error)
{
    Value::SetProperty(*context, *arr, *index, *value, error);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error)
void Value__SetProperty1_fn(::JSContext** context, ::JSObject** obj, ::JSString** key, ::JSValue** value, ::JSScriptException** error)
{
    Value::SetProperty1(*context, *obj, *key, *value, error);
}

// public static extern string ToString(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str)
void Value__ToString_fn(::JSContext** context, ::JSString** str, uString** __retval)
{
    *__retval = Value::ToString(*context, *str);
}

// public static extern Fuse.Scripting.V8.Simple.JSArray AsArray(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
::JSArray* Value::AsArray(::JSValue* value, int32_t* error)
{
    return ::JSValueAsArray(value, (::JSRuntimeError*)error);
}

// public static extern bool AsBool(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
bool Value::AsBool(::JSValue* value, int32_t* error)
{
    return ::JSValueAsBool(value, (::JSRuntimeError*)error);
}

// public static extern double AsDouble(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
double Value::AsDouble(::JSValue* value, int32_t* error)
{
    return ::JSValueAsDouble(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal AsExternal(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
::JSExternal* Value::AsExternal(::JSValue* value, int32_t* error)
{
    return ::JSValueAsExternal(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSFunction AsFunction(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
::JSFunction* Value::AsFunction(::JSValue* value, int32_t* error)
{
    return ::JSValueAsFunction(value, (::JSRuntimeError*)error);
}

// public static extern int AsInt(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
int32_t Value::AsInt(::JSValue* value, int32_t* error)
{
    return ::JSValueAsInt(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject AsObject(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
::JSObject* Value::AsObject(::JSValue* value, int32_t* error)
{
    return ::JSValueAsObject(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSString AsString(Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
::JSString* Value::AsString(::JSValue* value, int32_t* error)
{
    return ::JSValueAsString(value, (::JSRuntimeError*)error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSArray arr) [static]
::JSValue* Value::AsValue(::JSArray* arr)
{
    return ::JSArrayAsValue(arr);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSExternal external) [static]
::JSValue* Value::AsValue1(::JSExternal* external)
{
    return ::JSExternalAsValue(external);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSFunction fun) [static]
::JSValue* Value::AsValue2(::JSFunction* fun)
{
    return ::JSFunctionAsValue(fun);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSObject obj) [static]
::JSValue* Value::AsValue3(::JSObject* obj)
{
    return ::JSObjectAsValue(obj);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue AsValue(Fuse.Scripting.V8.Simple.JSString str) [static]
::JSValue* Value::AsValue4(::JSString* str)
{
    return ::JSStringAsValue(str);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CallCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSObject thisObject, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
::JSValue* Value::CallCreate(::JSContext* context, ::JSFunction* function, ::JSObject* thisObject, uArray* args, int32_t numArgs, ::JSScriptException** error)
{
    return ::CallJSFunctionCreate(context, function, thisObject, (::JSValue**)args->Ptr(), numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject ConstructCreate(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSFunction function, Fuse.Scripting.V8.Simple.JSValue[] args, int numArgs, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
::JSObject* Value::ConstructCreate(::JSContext* context, ::JSFunction* function, uArray* args, int32_t numArgs, ::JSScriptException** error)
{
    return ::ConstructJSFunctionCreate(context, function, (::JSValue**)args->Ptr(), numArgs, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSArray CopyOwnPropertyNames(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
::JSArray* Value::CopyOwnPropertyNames(::JSContext* context, ::JSObject* obj, ::JSScriptException** error)
{
    return ::CopyJSObjectOwnPropertyNames(context, obj, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
::JSValue* Value::CopyProperty(::JSContext* context, ::JSArray* arr, int32_t index, ::JSScriptException** error)
{
    return ::CopyJSArrayPropertyAtIndex(context, arr, index, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CopyProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
::JSValue* Value::CopyProperty1(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSScriptException** error)
{
    return ::CopyJSObjectProperty(context, obj, key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateBool(bool value) [static]
::JSValue* Value::CreateBool(bool value)
{
    return ::CreateJSBool(value);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateDouble(double value) [static]
::JSValue* Value::CreateDouble(double value)
{
    return ::CreateJSDouble(value);
}

// public static extern Fuse.Scripting.V8.Simple.JSExternal CreateExternal(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr value) [static]
::JSExternal* Value::CreateExternal(::JSContext* context, void* value)
{
    return ::CreateJSExternal(context, value);
}

// public static extern Fuse.Scripting.V8.Simple.JSObject CreateExternalArrayBuffer(Fuse.Scripting.V8.Simple.JSContext context, Uno.IntPtr data, int byteLength) [static]
::JSObject* Value::CreateExternalArrayBuffer(::JSContext* context, void* data, int32_t byteLength)
{
    return ::CreateExternalJSArrayBuffer(context, data, byteLength);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue CreateInt(int value) [static]
::JSValue* Value::CreateInt(int32_t value)
{
    return ::CreateJSInt(value);
}

// public static extern Fuse.Scripting.V8.Simple.JSString CreateString(Fuse.Scripting.V8.Simple.JSContext context, string buffer, int length, Fuse.Scripting.V8.Simple.JSRuntimeError& error) [static]
::JSString* Value::CreateString(::JSContext* context, uString* buffer, int32_t length, int32_t* error)
{
    return ::CreateJSString(context, (uint16_t*)buffer->Ptr(), length, (::JSRuntimeError*)error);
}

// public static extern Uno.IntPtr GetArrayBufferData(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSRuntimeError& outError) [static]
void* Value::GetArrayBufferData(::JSContext* context, ::JSObject* obj, int32_t* outError)
{
    return ::GetJSObjectArrayBufferData(context, obj, (::JSRuntimeError*)outError);
}

// public static extern Uno.IntPtr GetExternalValue(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSExternal external) [static]
void* Value::GetExternalValue(::JSContext* context, ::JSExternal* external)
{
    return ::GetJSExternalValue(context, external);
}

// public static extern Fuse.Scripting.V8.Simple.JSType GetType(Fuse.Scripting.V8.Simple.JSValue value) [static]
int32_t Value::GetType(::JSValue* value)
{
    return (int32_t)::GetJSValueType(value);
}

// public static extern bool HasProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
bool Value::HasProperty(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSScriptException** error)
{
    return ::JSObjectHasProperty(context, obj, key, error);
}

// public static extern Fuse.Scripting.V8.Simple.JSValue JSNull() [static]
::JSValue* Value::JSNull()
{
    return ::JSNull();
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr) [static]
int32_t Value::Length(::JSContext* context, ::JSArray* arr)
{
    return ::JSArrayLength(context, arr);
}

// public static extern int Length(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str) [static]
int32_t Value::Length1(::JSContext* context, ::JSString* str)
{
    return ::JSStringLength(context, str);
}

// public static extern void Release(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value) [static]
void Value::Release(::JSContext* context, ::JSValue* value)
{
    ::ReleaseJSValue(context, value);
}

// public static extern void Retain(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSValue value) [static]
void Value::Retain(::JSContext* context, ::JSValue* value)
{
    ::RetainJSValue(context, value);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSArray arr, int index, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
void Value::SetProperty(::JSContext* context, ::JSArray* arr, int32_t index, ::JSValue* value, ::JSScriptException** error)
{
    ::SetJSArrayPropertyAtIndex(context, arr, index, value, error);
}

// public static extern void SetProperty(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSObject obj, Fuse.Scripting.V8.Simple.JSString key, Fuse.Scripting.V8.Simple.JSValue value, Fuse.Scripting.V8.Simple.JSScriptException& error) [static]
void Value::SetProperty1(::JSContext* context, ::JSObject* obj, ::JSString* key, ::JSValue* value, ::JSScriptException** error)
{
    ::SetJSObjectProperty(context, obj, key, value, error);
}

// public static extern string ToString(Fuse.Scripting.V8.Simple.JSContext context, Fuse.Scripting.V8.Simple.JSString str) [static]
uString* Value::ToString(::JSContext* context, ::JSString* str)
{
    int32_t len = Value::Length1(context, str);
    uString* result = ::uString::New(len);
    ::WriteJSStringBuffer(context, str, (uint16_t*)result->Ptr(), false);
    return result;
}
// }

}}}}} // ::g::Fuse::Scripting::V8::Simple
