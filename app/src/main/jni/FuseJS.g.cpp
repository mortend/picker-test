// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.AndroidProperties.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Node.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.Error.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.JSObjectUtils.h>
#include <Fuse.Scripting.Native-aec1d155.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeEvent.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativeModule.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-aef282d8.h>
#include <Fuse.Scripting.ResultFactory-1.h>
#include <Fuse.Scripting.ValueC-d6370e9c.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UserEventDispatch.h>
#include <FuseJS.Base64.h>
#include <FuseJS.Bundle.ExtractClosure.h>
#include <FuseJS.Bundle.h>
#include <FuseJS.Bundle.ReadBuf-7af83bf3.h>
#include <FuseJS.Bundle.ReadClosure.h>
#include <FuseJS.Environment.h>
#include <FuseJS.FileReaderImpl.h>
#include <FuseJS.FileReaderImpl-efe70a23.h>
#include <FuseJS.Globals.h>
#include <FuseJS.Latin1Helpers.h>
#include <FuseJS.Lifecycle.h>
#include <FuseJS.RaiseEvent.h>
#include <FuseJS.UserEvents.h>
#include <jni.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-9e7bc8e0.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Internal.ArrayEnumerable-1.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.Path.h>
#include <Uno.Object.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.Resource.h>
#include <Uno.UX.Selector.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[71];
static uType* TYPES[22];

namespace g{
namespace FuseJS{

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Base64.uno
// ---------------------------------------------------------

// public sealed class Base64
// {
static void Base64_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Base64");
    ::STRINGS[1] = uString::Const("encodeAscii");
    ::STRINGS[2] = uString::Const("decodeAscii");
    ::STRINGS[3] = uString::Const("encodeUtf8");
    ::STRINGS[4] = uString::Const("decodeUtf8");
    ::STRINGS[5] = uString::Const("encodeLatin1");
    ::STRINGS[6] = uString::Const("decodeLatin1");
    ::STRINGS[7] = uString::Const("encodeBuffer");
    ::STRINGS[8] = uString::Const("decodeBuffer");
    ::STRINGS[9] = uString::Const("Requires a base-64 encoded string as first argument");
    ::STRINGS[10] = uString::Const("Requires a base-64 encoded Latin-1 string as argument");
    ::STRINGS[11] = uString::Const("Requires an ArrayBuffer as the first argument.");
    ::STRINGS[12] = uString::Const("Requires 1 argument");
    ::STRINGS[13] = uString::Const("null");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[2] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(0/*FirstOrDefault<object>*/, uObject_typeof(), nullptr);
    ::TYPES[3] = ::g::Uno::Internal::ArrayEnumerable_typeof()->MakeType(uObject_typeof(), nullptr);
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Base64::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Base64_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Base64);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Base64", options);
    type->fp_build_ = Base64_build;
    type->fp_ctor_ = (void*)Base64__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Base64()
void Base64__ctor_2_fn(Base64* __this)
{
    __this->ctor_2();
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args)
void Base64__DecodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeAscii(context, args);
}

// private object DecodeBuffer(Fuse.Scripting.Context context, object[] args)
void Base64__DecodeBuffer_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeBuffer(context, args);
}

// private object DecodeLatin1(Fuse.Scripting.Context context, object[] args)
void Base64__DecodeLatin1_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeLatin1(context, args);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args)
void Base64__DecodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->DecodeUtf8(context, args);
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args)
void Base64__EncodeAscii_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeAscii(context, args);
}

// private object EncodeBuffer(Fuse.Scripting.Context context, object[] args)
void Base64__EncodeBuffer_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeBuffer(context, args);
}

// private object EncodeLatin1(Fuse.Scripting.Context context, object[] args)
void Base64__EncodeLatin1_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeLatin1(context, args);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args)
void Base64__EncodeUtf8_fn(Base64* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = __this->EncodeUtf8(context, args);
}

// public Base64 New()
void Base64__New2_fn(Base64** __retval)
{
    *__retval = Base64::New2();
}

uSStrong<Base64*> Base64::_instance_;

// public Base64() [instance]
void Base64::ctor_2()
{
    ctor_1();

    if (Base64::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Base64::_instance_ = this, ::STRINGS[0/*"FuseJS/Base64"*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"encodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"decodeAscii"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeAscii_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"encodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"decodeUtf8"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeUtf8_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[5/*"encodeLatin1"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeLatin1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[6/*"decodeLatin1"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeLatin1_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[7/*"encodeBuffer"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__EncodeBuffer_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[8/*"decodeBuffer"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Base64__DecodeBuffer_fn, this)));
}

// private object DecodeAscii(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::DecodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, nullptr))
            return ::g::Uno::Text::Ascii::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return nullptr;
}

// private object DecodeBuffer(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::DecodeBuffer(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret2;
    uString* base64Str = uAs<uString*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Internal::ArrayEnumerable*)::g::Uno::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Internal.ArrayEnumerable<object>*/], args)), &ret2), ret2), ::TYPES[1/*string*/]);

    if (::g::Uno::String::op_Equality(base64Str, nullptr))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[9/*"Requires a ...*/]));

    return ::g::Uno::Text::Base64::GetBytes(base64Str);
}

// private object DecodeLatin1(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::DecodeLatin1(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret3;
    uString* base64Str = uAs<uString*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Internal::ArrayEnumerable*)::g::Uno::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Internal.ArrayEnumerable<object>*/], args)), &ret3), ret3), ::TYPES[1/*string*/]);

    if (::g::Uno::String::op_Equality(base64Str, nullptr))
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[10/*"Requires a ...*/]));

    return ::g::FuseJS::Latin1Helpers::DecodeLatin1(base64Str);
}

// private object DecodeUtf8(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::DecodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, nullptr))
            return ::g::Uno::Text::Utf8::GetString(::g::Uno::Text::Base64::GetBytes(str));
    }

    return nullptr;
}

// private object EncodeAscii(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::EncodeAscii(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, nullptr))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Ascii::GetBytes(str));
    }

    return nullptr;
}

// private object EncodeBuffer(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::EncodeBuffer(::g::Fuse::Scripting::Context* context, uArray* args)
{
    uObject* ret4;
    uArray* buffer = uAs<uArray*>((::g::Uno::Collections::EnumerableExtensions__FirstOrDefault_fn(::TYPES[2/*Uno.Collections.EnumerableExtensions.FirstOrDefault<object>*/], (uObject*)((::g::Uno::Internal::ArrayEnumerable*)::g::Uno::Internal::ArrayEnumerable::New1(::TYPES[3/*Uno.Internal.ArrayEnumerable<object>*/], args)), &ret4), ret4), ::TYPES[4/*byte[]*/]);

    if (buffer == nullptr)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[11/*"Requires an...*/]));

    return ::g::Uno::Text::Base64::GetString(buffer);
}

// private object EncodeLatin1(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::EncodeLatin1(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() < 1)
        U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[12/*"Requires 1 ...*/]));

    uString* str = (uPtr(args)->Strong<uObject*>(0) == nullptr) ? ::STRINGS[13/*"null"*/] : (uString*)::g::Uno::Object::ToString(uPtr(uPtr(args)->Strong<uObject*>(0)));
    return ::g::FuseJS::Latin1Helpers::EncodeLatin1(str);
}

// private object EncodeUtf8(Fuse.Scripting.Context context, object[] args) [instance]
uObject* Base64::EncodeUtf8(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* str = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

        if (::g::Uno::String::op_Inequality(str, nullptr))
            return ::g::Uno::Text::Base64::GetString(::g::Uno::Text::Utf8::GetBytes(str));
    }

    return nullptr;
}

// public Base64 New() [static]
Base64* Base64::New2()
{
    Base64* obj1 = (Base64*)uNew(Base64_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Bundle.uno
// ---------------------------------------------------------

// public sealed class Bundle
// {
static void Bundle_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Bundle_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::g::Uno::Threading::Promise_typeof()->MakeType(type->MethodTypes[0]->U(0), nullptr));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Bundle::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Bundle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.MethodTypeCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Bundle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Bundle", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,0);
    type->fp_build_ = Bundle_build;
    type->fp_ctor_ = (void*)Bundle__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Bundle()
void Bundle__ctor_2_fn(Bundle* __this)
{
    __this->ctor_2();
}

// public static Uno.Threading.Future<string> Extract(object[] args)
void Bundle__Extract_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::Extract(args);
}

// public static Uno.Threading.Future<Uno.Collections.IEnumerable<Uno.IO.BundleFile>> GetList([object[] args])
void Bundle__GetList_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::GetList(args);
}

// private static Fuse.Scripting.Array ListConverter(Fuse.Scripting.Context context, Uno.Collections.IEnumerable<Uno.IO.BundleFile> list)
void Bundle__ListConverter_fn(::g::Fuse::Scripting::Context* context, uObject* list, ::g::Fuse::Scripting::Array** __retval)
{
    *__retval = Bundle::ListConverter(context, list);
}

// public Bundle New()
void Bundle__New2_fn(Bundle** __retval)
{
    *__retval = Bundle::New2();
}

// public static Uno.Threading.Future<string> ReadAsync(object[] args)
void Bundle__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync(args);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename)
void Bundle__ReadAsync1_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadAsync1(filename);
}

// public static Uno.Threading.Future<byte[]> ReadBuffer(object[] args)
void Bundle__ReadBuffer_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::ReadBuffer(args);
}

// private static object ReadSync(Fuse.Scripting.Context c, object[] args)
void Bundle__ReadSync_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = Bundle::ReadSync(c, args);
}

// public static string ReadSync(string filename)
void Bundle__ReadSync1_fn(uString* filename, uString** __retval)
{
    *__retval = Bundle::ReadSync1(filename);
}

// private static Uno.Threading.Future<T> Reject<T>(string reason)
void Bundle__Reject_fn(uType* __type, uString* reason, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = Bundle::Reject(__type, reason);
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile)
void Bundle__TryGetBundleFile_fn(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile, bool* __retval)
{
    *__retval = Bundle::TryGetBundleFile(sourcePath, bundleFile);
}

uSStrong<Bundle*> Bundle::_instance_;

// public Bundle() [instance]
void Bundle::ctor_2()
{
    ctor_1();

    if (Bundle::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Bundle::_instance_ = this, uString::Const("FuseJS/Bundle"));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(uString::Const("readSync"), uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)Bundle__ReadSync_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], uString::Const("read"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], nullptr), (void*)Bundle__ReadAsync_fn), nullptr));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::TYPES[1/*string*/], ::TYPES[19/*Fuse.Scripting.Object*/], nullptr), uString::Const("extract"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], nullptr), (void*)Bundle__Extract_fn), nullptr));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr), ::g::Fuse::Scripting::Array_typeof(), nullptr), uString::Const("list"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr), nullptr), (void*)Bundle__GetList_fn), uDelegate::New(::g::Fuse::Scripting::ResultConverter_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr), ::g::Fuse::Scripting::Array_typeof(), nullptr), (void*)Bundle__ListConverter_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::TYPES[4/*byte[]*/], ::TYPES[1/*string*/], nullptr), uString::Const("readBuffer"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[4/*byte[]*/], nullptr), (void*)Bundle__ReadBuffer_fn), nullptr));
}

// public static Uno.Threading.Future<string> Extract(object[] args) [static]
::g::Uno::Threading::Future1* Bundle::Extract(uArray* args)
{
    uString* ret4;
    uString* ret5;
    bool ret6;
    uString* searchPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<string>*/, ::TYPES[1/*string*/], nullptr), args, uCRef<int32_t>(0), ::STRINGS[38/*""*/], &ret4), ret4);
    uString* destinationPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<string>*/, ::TYPES[1/*string*/], nullptr), args, uCRef<int32_t>(1), ::STRINGS[38/*""*/], &ret5), ret5);
    bool overwrite = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<bool>*/, ::g::Uno::Bool_typeof(), nullptr), args, uCRef<int32_t>(2), uCRef(false), &ret6), ret6);

    if (::g::Uno::String::op_Equality(searchPath, ::STRINGS[38/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(Bundle_typeof()->MakeMethod(0/*Reject<string>*/, ::TYPES[1/*string*/], nullptr), uString::Const("Argument 0 (bundle path) can not be undefined"));

    if (::g::Uno::String::op_Equality(destinationPath, ::STRINGS[38/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(Bundle_typeof()->MakeMethod(0/*Reject<string>*/, ::TYPES[1/*string*/], nullptr), uString::Const("Argument 1 (destination path) can not be undefined"));

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], nullptr), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)Bundle__ExtractClosure__Invoke_fn, Bundle__ExtractClosure::New1(searchPath, destinationPath, overwrite)));
}

// public static Uno.Threading.Future<Uno.Collections.IEnumerable<Uno.IO.BundleFile>> GetList([object[] args]) [static]
::g::Uno::Threading::Future1* Bundle::GetList(uArray* args)
{
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr), nullptr));
    uObject* files = ::g::Uno::IO::Bundle::AllFiles();
    ::g::Uno::Threading::Promise__Resolve_fn(p, files);
    return p;
}

// private static Fuse.Scripting.Array ListConverter(Fuse.Scripting.Context context, Uno.Collections.IEnumerable<Uno.IO.BundleFile> list) [static]
::g::Fuse::Scripting::Array* Bundle::ListConverter(::g::Fuse::Scripting::Context* context, uObject* list)
{
    ::g::Uno::IO::BundleFile* ret7;
    ::g::Fuse::Scripting::Array* output = uPtr(context)->NewArray(uArray::New(::TYPES[14/*object[]*/], 0));
    int32_t i = 0;
    uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(list), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr)));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator_typeof())))
                {
                    ::g::Uno::IO::BundleFile* b = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr)), &ret7), ret7);
                    uPtr(output)->Item(i++, uPtr(b)->SourcePath());
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::g::Uno::IDisposable_typeof()));
        }
        __after_finally_0:;
    }

    return output;
}

// public Bundle New() [static]
Bundle* Bundle::New2()
{
    Bundle* obj3 = (Bundle*)uNew(Bundle_typeof());
    obj3->ctor_2();
    return obj3;
}

// public static Uno.Threading.Future<string> ReadAsync(object[] args) [static]
::g::Uno::Threading::Future1* Bundle::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::ReadAsync1((filename != nullptr) ? filename : ::STRINGS[38/*""*/]);
    }

    return Bundle::ReadAsync1(::STRINGS[38/*""*/]);
}

// private static Uno.Threading.Future<string> ReadAsync(string filename) [static]
::g::Uno::Threading::Future1* Bundle::ReadAsync1(uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], nullptr), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)Bundle__ReadClosure__Invoke_fn, Bundle__ReadClosure::New1(filename)));
}

// public static Uno.Threading.Future<byte[]> ReadBuffer(object[] args) [static]
::g::Uno::Threading::Future1* Bundle::ReadBuffer(uArray* args)
{
    uString* ret8;
    uString* searchPath = (::g::Fuse::Scripting::JSObjectUtils__ValueOrDefault1_fn(::g::Fuse::Scripting::JSObjectUtils_typeof()->MakeMethod(0/*ValueOrDefault<string>*/, ::TYPES[1/*string*/], nullptr), args, uCRef<int32_t>(0), ::STRINGS[38/*""*/], &ret8), ret8);

    if (::g::Uno::String::op_Equality(searchPath, ::STRINGS[38/*""*/]))
        return (::g::Uno::Threading::Future1*)Bundle::Reject(Bundle_typeof()->MakeMethod(0/*Reject<byte[]>*/, ::TYPES[4/*byte[]*/], nullptr), uString::Const("Argument 0 (bundle path) can not be undefined"));

    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[4/*byte[]*/], nullptr), uDelegate::New(::g::Uno::Func_typeof()->MakeType(::TYPES[4/*byte[]*/], nullptr), (void*)Bundle__ReadBufferClosure__Invoke_fn, Bundle__ReadBufferClosure::New1(searchPath)));
}

// private static object ReadSync(Fuse.Scripting.Context c, object[] args) [static]
uObject* Bundle::ReadSync(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
        return Bundle::ReadSync1(filename);
    }

    return ::STRINGS[38/*""*/];
}

// public static string ReadSync(string filename) [static]
uString* Bundle::ReadSync1(uString* filename)
{
    try
    {
        {
            ::g::Uno::IO::BundleFile* bundleFile;

            if (Bundle::TryGetBundleFile(filename, &bundleFile))
                return uPtr(bundleFile)->ReadAllText();

            return ::STRINGS[38/*""*/];
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        return ::STRINGS[38/*""*/];
    }
}

// private static Uno.Threading.Future<T> Reject<T>(string reason) [static]
::g::Uno::Threading::Future1* Bundle::Reject(uType* __type, uString* reason)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Threading.Promise<T>*/),
    };
    ::g::Uno::Threading::Promise* p = (::g::Uno::Threading::Promise*)::g::Uno::Threading::Promise::New1(__types[0]);
    p->Reject(::g::Uno::Exception::New2(reason));
    return p;
}

// private static bool TryGetBundleFile(string sourcePath, Uno.IO.BundleFile& bundleFile) [static]
bool Bundle::TryGetBundleFile(uString* sourcePath, ::g::Uno::IO::BundleFile** bundleFile)
{
    ::g::Uno::IO::BundleFile* ret9;
    *bundleFile = nullptr;
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(::g::Uno::IO::Bundle::AllFiles()), ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr)));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator_typeof())))
                {
                    ::g::Uno::IO::BundleFile* bf = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::IO::BundleFile_typeof(), nullptr)), &ret9), ret9);

                    if (::g::Uno::String::op_Equality(uPtr(bf)->SourcePath(), sourcePath))
                    {
                        *bundleFile = bf;
                        bool __uno_retval = true;
                        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::g::Uno::IDisposable_typeof()));
        }
        __after_finally_1:;
    }

    return false;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Environment.uno
// --------------------------------------------------------------

// public sealed class Environment
// {
// static generated Environment()
static void Environment__cctor__fn(uType* __type)
{
    Environment::versionNumber_ = ::STRINGS[14/*"0.1.0"*/];
    Environment::title_ = ::STRINGS[15/*"app"*/];
    Environment::publisher_ = ::STRINGS[16/*"[Publisher]"*/];
    Environment::copyright_ = ::STRINGS[17/*"Copyright (...*/];
    Environment::androidTitle_ = ::STRINGS[15/*"app"*/];
    Environment::androidVersionNumber_ = ::STRINGS[14/*"0.1.0"*/];
    Environment::androidVersionCode_ = ::STRINGS[18/*"1"*/];
    Environment::iosTitle_ = ::STRINGS[15/*"app"*/];
    Environment::iosVersionNumber_ = ::STRINGS[14/*"0.1.0"*/];
}

static void Environment_build(uType* type)
{
    ::STRINGS[14] = uString::Const("0.1.0");
    ::STRINGS[15] = uString::Const("app");
    ::STRINGS[16] = uString::Const("[Publisher]");
    ::STRINGS[17] = uString::Const("Copyright (C) 2022 [Publisher]");
    ::STRINGS[18] = uString::Const("1");
    ::STRINGS[19] = uString::Const("FuseJS/Environment");
    ::STRINGS[20] = uString::Const("android");
    ::STRINGS[21] = uString::Const("ios");
    ::STRINGS[22] = uString::Const("mobile");
    ::STRINGS[23] = uString::Const("desktop");
    ::STRINGS[24] = uString::Const("preview");
    ::STRINGS[25] = uString::Const("dotnet");
    ::STRINGS[26] = uString::Const("host_mac");
    ::STRINGS[27] = uString::Const("mobileOSVersion");
    ::STRINGS[28] = uString::Const("locale");
    ::STRINGS[29] = uString::Const("appVersion");
    ::STRINGS[30] = uString::Const("appTitle");
    ::STRINGS[31] = uString::Const("appPublisher");
    ::STRINGS[32] = uString::Const("copyright");
    ::STRINGS[33] = uString::Const("androidVersionNumber");
    ::STRINGS[34] = uString::Const("androidVersionCode");
    ::STRINGS[35] = uString::Const("androidTitle");
    ::STRINGS[36] = uString::Const("iosVersionNumber");
    ::STRINGS[37] = uString::Const("iosTitle");
    ::STRINGS[38] = uString::Const("");
    ::TYPES[5] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), nullptr);
    ::TYPES[6] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[7] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[8] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Environment::_instance_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::versionNumber_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::title_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::publisher_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::copyright_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::androidTitle_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::androidVersionNumber_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::androidVersionCode_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::iosTitle_, uFieldFlagsStatic,
        ::g::Uno::String_typeof(), (uintptr_t)&Environment::iosVersionNumber_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Environment_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Environment);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Environment", options);
    type->fp_build_ = Environment_build;
    type->fp_ctor_ = (void*)Environment__New2_fn;
    type->fp_cctor_ = Environment__cctor__fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Environment()
void Environment__ctor_2_fn(Environment* __this)
{
    __this->ctor_2();
}

// private static extern string GetCurrentLocale()
void Environment__GetCurrentLocale_fn(uString** __retval)
{
    *__retval = Environment::GetCurrentLocale();
}

// private static string GetMobileOSVersion()
void Environment__GetMobileOSVersion_fn(uString** __retval)
{
    *__retval = Environment::GetMobileOSVersion();
}

// public Environment New()
void Environment__New2_fn(Environment** __retval)
{
    *__retval = Environment::New2();
}

uSStrong<Environment*> Environment::_instance_;
uSStrong<uString*> Environment::versionNumber_;
uSStrong<uString*> Environment::title_;
uSStrong<uString*> Environment::publisher_;
uSStrong<uString*> Environment::copyright_;
uSStrong<uString*> Environment::androidTitle_;
uSStrong<uString*> Environment::androidVersionNumber_;
uSStrong<uString*> Environment::androidVersionCode_;
uSStrong<uString*> Environment::iosTitle_;
uSStrong<uString*> Environment::iosVersionNumber_;

// public Environment() [instance]
void Environment::ctor_2()
{
    ::g::Fuse::Scripting::NativeProperty* ret2;
    ::g::Fuse::Scripting::NativeProperty* ret3;
    ::g::Fuse::Scripting::NativeProperty* ret4;
    ::g::Fuse::Scripting::NativeProperty* ret5;
    ::g::Fuse::Scripting::NativeProperty* ret6;
    ::g::Fuse::Scripting::NativeProperty* ret7;
    ::g::Fuse::Scripting::NativeProperty* ret8;
    ::g::Fuse::Scripting::NativeProperty* ret9;
    ::g::Fuse::Scripting::NativeProperty* ret10;
    ::g::Fuse::Scripting::NativeProperty* ret11;
    ::g::Fuse::Scripting::NativeProperty* ret12;
    ::g::Fuse::Scripting::NativeProperty* ret13;
    ::g::Fuse::Scripting::NativeProperty* ret14;
    ::g::Fuse::Scripting::NativeProperty* ret15;
    ::g::Fuse::Scripting::NativeProperty* ret16;
    ::g::Fuse::Scripting::NativeProperty* ret17;
    ctor_1();

    if (Environment::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Environment::_instance_ = this, ::STRINGS[19/*"FuseJS/Envi...*/]);
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[20/*"android"*/], uCRef(true), &ret2), ret2));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[21/*"ios"*/], uCRef(false), &ret3), ret3));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[22/*"mobile"*/], uCRef(true), &ret4), ret4));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[23/*"desktop"*/], uCRef(false), &ret5), ret5));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[24/*"preview"*/], uCRef(false), &ret6), ret6));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[25/*"dotnet"*/], uCRef(false), &ret7), ret7));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[5/*Fuse.Scripting.NativeProperty<bool, bool>*/], ::STRINGS[26/*"host_mac"*/], uCRef(true), &ret8), ret8));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[27/*"mobileOSVer...*/], uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)Environment__GetMobileOSVersion_fn), nullptr, nullptr));
    AddMember((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[8/*Fuse.Scripting.NativeProperty<string, object>*/], ::STRINGS[28/*"locale"*/], uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)Environment__GetCurrentLocale_fn), nullptr, nullptr));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[29/*"appVersion"*/], Environment::versionNumber_, &ret9), ret9));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[30/*"appTitle"*/], Environment::title_, &ret10), ret10));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[31/*"appPublisher"*/], Environment::publisher_, &ret11), ret11));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[32/*"copyright"*/], Environment::copyright_, &ret12), ret12));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[33/*"androidVers...*/], Environment::androidVersionNumber_, &ret13), ret13));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[34/*"androidVers...*/], Environment::androidVersionCode_, &ret14), ret14));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[35/*"androidTitle"*/], Environment::androidTitle_, &ret15), ret15));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[36/*"iosVersionN...*/], Environment::iosVersionNumber_, &ret16), ret16));
    AddMember((::g::Fuse::Scripting::NativeProperty__New3_fn(::TYPES[6/*Fuse.Scripting.NativeProperty<string, string>*/], ::STRINGS[37/*"iosTitle"*/], Environment::iosTitle_, &ret17), ret17));
}

// private static extern string GetCurrentLocale() [static]
uString* Environment::GetCurrentLocale()
{
    Environment_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetCurrentLocale411", "()Ljava/lang/String;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (__jresult!=nullptr && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static string GetMobileOSVersion() [static]
uString* Environment::GetMobileOSVersion()
{
    Environment_typeof()->Init();
    return ::g::Fuse::AndroidProperties::ReleaseVersion();
    return ::STRINGS[38/*""*/];
}

// public Environment New() [static]
Environment* Environment::New2()
{
    Environment* obj1 = (Environment*)uNew(Environment_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Bundle.uno
// ---------------------------------------------------------

// private sealed class Bundle.ExtractClosure
// {
static void Bundle__ExtractClosure_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ExtractClosure, _searchPath), 0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ExtractClosure, _destPath), 0,
        ::g::Uno::Bool_typeof(), offsetof(Bundle__ExtractClosure, _overwrite), 0);
}

uType* Bundle__ExtractClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Bundle__ExtractClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ExtractClosure", options);
    type->fp_build_ = Bundle__ExtractClosure_build;
    return type;
}

// public ExtractClosure(string searchPath, string destinationPath, bool overwriteIfExists)
void Bundle__ExtractClosure__ctor__fn(Bundle__ExtractClosure* __this, uString* searchPath, uString* destinationPath, bool* overwriteIfExists)
{
    __this->ctor_(searchPath, destinationPath, *overwriteIfExists);
}

// public string Invoke()
void Bundle__ExtractClosure__Invoke_fn(Bundle__ExtractClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ExtractClosure New(string searchPath, string destinationPath, bool overwriteIfExists)
void Bundle__ExtractClosure__New1_fn(uString* searchPath, uString* destinationPath, bool* overwriteIfExists, Bundle__ExtractClosure** __retval)
{
    *__retval = Bundle__ExtractClosure::New1(searchPath, destinationPath, *overwriteIfExists);
}

// public ExtractClosure(string searchPath, string destinationPath, bool overwriteIfExists) [instance]
void Bundle__ExtractClosure::ctor_(uString* searchPath, uString* destinationPath, bool overwriteIfExists)
{
    _searchPath = searchPath;
    _destPath = destinationPath;
    _overwrite = overwriteIfExists;
}

// public string Invoke() [instance]
uString* Bundle__ExtractClosure::Invoke()
{
    ::g::Uno::IO::BundleFile* bfile;

    if (::g::FuseJS::Bundle::TryGetBundleFile(_searchPath, &bfile))
    {
        if (_overwrite || !::g::Uno::IO::File::Exists(_destPath))
        {
            ::g::Uno::IO::Directory::CreateDirectory(::g::Uno::IO::Path::GetDirectoryName(_destPath));
            ::g::Uno::IO::File::WriteAllBytes(_destPath, uPtr(bfile)->ReadAllBytes());
        }
    }

    return _destPath;
}

// public ExtractClosure New(string searchPath, string destinationPath, bool overwriteIfExists) [static]
Bundle__ExtractClosure* Bundle__ExtractClosure::New1(uString* searchPath, uString* destinationPath, bool overwriteIfExists)
{
    Bundle__ExtractClosure* obj1 = (Bundle__ExtractClosure*)uNew(Bundle__ExtractClosure_typeof());
    obj1->ctor_(searchPath, destinationPath, overwriteIfExists);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/FileReader.uno
// -------------------------------------------------------------

// private sealed class FileReaderImpl.FileReadCommand
// {
static void FileReaderImpl__FileReadCommand_build(uType* type)
{
    ::STRINGS[39] = uString::Const("PNG");
    ::STRINGS[40] = uString::Const("png");
    ::STRINGS[41] = uString::Const("jpeg");
    ::STRINGS[42] = uString::Const("data:image/");
    ::STRINGS[43] = uString::Const(";base64,");
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(FileReaderImpl__FileReadCommand, _path), 0);
}

uType* FileReaderImpl__FileReadCommand_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(FileReaderImpl__FileReadCommand);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.FileReaderImpl.FileReadCommand", options);
    type->fp_build_ = FileReaderImpl__FileReadCommand_build;
    return type;
}

// public FileReadCommand(string path)
void FileReaderImpl__FileReadCommand__ctor__fn(FileReaderImpl__FileReadCommand* __this, uString* path)
{
    __this->ctor_(path);
}

// public FileReadCommand New(string path)
void FileReaderImpl__FileReadCommand__New1_fn(uString* path, FileReaderImpl__FileReadCommand** __retval)
{
    *__retval = FileReaderImpl__FileReadCommand::New1(path);
}

// public string ReadAsDataURL()
void FileReaderImpl__FileReadCommand__ReadAsDataURL_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsDataURL();
}

// public string ReadAsText()
void FileReaderImpl__FileReadCommand__ReadAsText_fn(FileReaderImpl__FileReadCommand* __this, uString** __retval)
{
    *__retval = __this->ReadAsText();
}

// public FileReadCommand(string path) [instance]
void FileReaderImpl__FileReadCommand::ctor_(uString* path)
{
    _path = path;
}

// public string ReadAsDataURL() [instance]
uString* FileReaderImpl__FileReadCommand::ReadAsDataURL()
{
    uArray* file = ::g::Uno::IO::File::ReadAllBytes(_path);
    uString* type = ::g::Uno::String::EndsWith(uPtr(::g::Uno::String::ToUpper(uPtr(_path))), ::STRINGS[39/*"PNG"*/]) ? ::STRINGS[40/*"png"*/] : ::STRINGS[41/*"jpeg"*/];
    uString* base64 = ::g::Uno::Text::Base64::GetString(file);
    return ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[42/*"data:image/"*/], type), ::STRINGS[43/*";base64,"*/]), base64);
}

// public string ReadAsText() [instance]
uString* FileReaderImpl__FileReadCommand::ReadAsText()
{
    return ::g::Uno::IO::File::ReadAllText(_path);
}

// public FileReadCommand New(string path) [static]
FileReaderImpl__FileReadCommand* FileReaderImpl__FileReadCommand::New1(uString* path)
{
    FileReaderImpl__FileReadCommand* obj1 = (FileReaderImpl__FileReadCommand*)uNew(FileReaderImpl__FileReadCommand_typeof());
    obj1->ctor_(path);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/FileReader.uno
// -------------------------------------------------------------

// public sealed class FileReaderImpl
// {
static void FileReaderImpl_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&FileReaderImpl::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* FileReaderImpl_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileReaderImpl);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.FileReaderImpl", options);
    type->fp_build_ = FileReaderImpl_build;
    type->fp_ctor_ = (void*)FileReaderImpl__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public FileReaderImpl()
void FileReaderImpl__ctor_2_fn(FileReaderImpl* __this)
{
    __this->ctor_2();
}

// public FileReaderImpl New()
void FileReaderImpl__New2_fn(FileReaderImpl** __retval)
{
    *__retval = FileReaderImpl::New2();
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args)
void FileReaderImpl__readAsDataURL_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsDataURL(args);
}

// private static Uno.Threading.Future<string> readAsText(object[] args)
void FileReaderImpl__readAsText_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = FileReaderImpl::readAsText(args);
}

uSStrong<FileReaderImpl*> FileReaderImpl::_instance_;

// public FileReaderImpl() [instance]
void FileReaderImpl::ctor_2()
{
    ctor_1();

    if (FileReaderImpl::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(FileReaderImpl::_instance_ = this, uString::Const("FuseJS/FileReaderImpl"));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], uString::Const("readAsDataURL"), uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], nullptr), (void*)FileReaderImpl__readAsDataURL_fn), nullptr));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[45/*"readAsText"*/], uDelegate::New(::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::TYPES[1/*string*/], nullptr), (void*)FileReaderImpl__readAsText_fn), nullptr));
}

// public FileReaderImpl New() [static]
FileReaderImpl* FileReaderImpl::New2()
{
    FileReaderImpl* obj1 = (FileReaderImpl*)uNew(FileReaderImpl_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static Uno.Threading.Future<string> readAsDataURL(object[] args) [static]
::g::Uno::Threading::Future1* FileReaderImpl::readAsDataURL(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], nullptr), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsDataURL_fn, FileReaderImpl__FileReadCommand::New1(path)));
}

// private static Uno.Threading.Future<string> readAsText(object[] args) [static]
::g::Uno::Threading::Future1* FileReaderImpl::readAsText(uArray* args)
{
    uString* path = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[1/*string*/], nullptr), uDelegate::New(::TYPES[7/*Uno.Func<string>*/], (void*)FileReaderImpl__FileReadCommand__ReadAsText_fn, FileReaderImpl__FileReadCommand::New1(path)));
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Globals.uno
// ----------------------------------------------------------

// public sealed class Globals
// {
static void Globals_build(uType* type)
{
    ::STRINGS[44] = uString::Const("FuseJS/Globals");
    ::STRINGS[45] = uString::Const("readAsText");
    ::STRINGS[46] = uString::Const("Globals.readAsText(): Exactly one argument expected");
    ::STRINGS[47] = uString::Const("Globals.readAsText(): Argument must be string");
    ::STRINGS[48] = uString::Const("Globals.readAsText(): Global resource file '");
    ::STRINGS[49] = uString::Const("' not found");
    ::TYPES[9] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[10] = ::g::Fuse::Scripting::ResultFactory_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[11] = ::g::Uno::UX::BundleFileSource_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[12] = ::g::Uno::Predicate_typeof()->MakeType(uObject_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&Globals::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Globals_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Globals);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Globals", options);
    type->fp_build_ = Globals_build;
    type->fp_ctor_ = (void*)Globals__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Globals()
void Globals__ctor_2_fn(Globals* __this)
{
    __this->ctor_2();
}

// private static bool FileSourceAcceptor(object obj)
void Globals__FileSourceAcceptor_fn(uObject* obj, bool* __retval)
{
    *__retval = Globals::FileSourceAcceptor(obj);
}

// public Globals New()
void Globals__New2_fn(Globals** __retval)
{
    *__retval = Globals::New2();
}

// private static string readAsText(object[] args)
void Globals__readAsText_fn(uArray* args, uString** __retval)
{
    *__retval = Globals::readAsText(args);
}

uSStrong<Globals*> Globals::_instance_;

// public Globals() [instance]
void Globals::ctor_2()
{
    ctor_1();

    if (Globals::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Globals::_instance_ = this, ::STRINGS[44/*"FuseJS/Glob...*/]);
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New2(::TYPES[9/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[45/*"readAsText"*/], uDelegate::New(::TYPES[10/*Fuse.Scripting.ResultFactory<string>*/], (void*)Globals__readAsText_fn), nullptr));
}

// private static bool FileSourceAcceptor(object obj) [static]
bool Globals::FileSourceAcceptor(uObject* obj)
{
    return uIs(obj, ::TYPES[11/*Uno.UX.BundleFileSource*/]);
}

// public Globals New() [static]
Globals* Globals::New2()
{
    Globals* obj1 = (Globals*)uNew(Globals_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static string readAsText(object[] args) [static]
uString* Globals::readAsText(uArray* args)
{
    if (uPtr(args)->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[46/*"Globals.rea...*/]));

    uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);

    if (args->Length() != 1)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[47/*"Globals.rea...*/]));

    uObject* res;

    if (::g::Uno::UX::Resource::TryFindGlobal(key, uDelegate::New(::TYPES[12/*Uno.Predicate<object>*/], (void*)Globals__FileSourceAcceptor_fn), &res))
    {
        ::g::Uno::UX::BundleFileSource* fs = uCast< ::g::Uno::UX::BundleFileSource*>(res, ::TYPES[11/*Uno.UX.BundleFileSource*/]);
        return uPtr(fs)->ReadAllText();
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[48/*"Globals.rea...*/], key), ::STRINGS[49/*"' not found"*/])));
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Latin1Helpers.uno
// ----------------------------------------------------------------

// internal static class Latin1Helpers
// {
static void Latin1Helpers_build(uType* type)
{
    ::STRINGS[50] = uString::Const("The string to be encoded contains characters outside of the Latin1 range.");
    ::TYPES[13] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
}

uClassType* Latin1Helpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseJS.Latin1Helpers", options);
    type->fp_build_ = Latin1Helpers_build;
    return type;
}

// public static string DecodeLatin1(string base64Str)
void Latin1Helpers__DecodeLatin1_fn(uString* base64Str, uString** __retval)
{
    *__retval = Latin1Helpers::DecodeLatin1(base64Str);
}

// public static string EncodeLatin1(string str)
void Latin1Helpers__EncodeLatin1_fn(uString* str, uString** __retval)
{
    *__retval = Latin1Helpers::EncodeLatin1(str);
}

// public static string DecodeLatin1(string base64Str) [static]
uString* Latin1Helpers::DecodeLatin1(uString* base64Str)
{
    uArray* bytes = ::g::Uno::Text::Base64::GetBytes(base64Str);
    int32_t len = uPtr(bytes)->Length();
    uArray* chars = uArray::New(::TYPES[13/*char[]*/], len);

    for (int32_t i = 0; i < len; i++)
        uPtr(chars)->Item<char16_t>(i) = (char16_t)uPtr(bytes)->Item<uint8_t>(i);

    return uString::CharArray(chars);
}

// public static string EncodeLatin1(string str) [static]
uString* Latin1Helpers::EncodeLatin1(uString* str)
{
    uArray* bytes = uArray::New(::TYPES[4/*byte[]*/], uPtr(str)->Length());
    int32_t len = str->Length();

    for (int32_t i = 0; i < len; i++)
    {
        int32_t c = (int32_t)uPtr(str)->Item(i);

        if (c > 255)
            U_THROW(::g::Fuse::Scripting::Error::New4(::STRINGS[50/*"The string ...*/]));

        uPtr(bytes)->Item<uint8_t>(i) = (uint8_t)c;
    }

    return ::g::Uno::Text::Base64::GetString(bytes);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Lifecycle.uno
// ------------------------------------------------------------

// public sealed class Lifecycle
// {
static void Lifecycle_build(uType* type)
{
    ::STRINGS[51] = uString::Const("enteringInteractive");
    ::STRINGS[52] = uString::Const("exitedInteractive");
    ::STRINGS[53] = uString::Const("enteringForeground");
    ::STRINGS[54] = uString::Const("enteringBackground");
    ::STRINGS[55] = uString::Const("stateChanged");
    ::STRINGS[56] = uString::Const("FuseJS/Lifecycle");
    ::STRINGS[57] = uString::Const("onEnteringInteractive");
    ::STRINGS[58] = uString::Const("onEnteringForeground");
    ::STRINGS[59] = uString::Const("onEnteringBackground");
    ::STRINGS[60] = uString::Const("onExitedInteractive");
    ::STRINGS[61] = uString::Const("state");
    ::STRINGS[62] = uString::Const("BACKGROUND");
    ::STRINGS[63] = uString::Const("FOREGROUND");
    ::STRINGS[64] = uString::Const("INTERACTIVE");
    ::TYPES[14] = uObject_typeof()->Array();
    ::TYPES[15] = ::g::Fuse::Scripting::NativeProperty_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), nullptr);
    ::TYPES[16] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Int_typeof(), nullptr);
    ::TYPES[17] = ::g::Fuse::Scripting::ValueConverter_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Int_typeof(), nullptr);
    ::TYPES[18] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), nullptr);
    type->SetDependencies(
        ::g::Fuse::Platform::Lifecycle_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(12,
        ::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _state), 0,
        ::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _background), 0,
        ::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _foreground), 0,
        ::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], offsetof(Lifecycle, _interactive), 0,
        type, (uintptr_t)&Lifecycle::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* Lifecycle_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeEventEmitterModule_typeof();
    options.FieldCount = 17;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Lifecycle);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.Lifecycle", options);
    type->fp_build_ = Lifecycle_build;
    type->fp_ctor_ = (void*)Lifecycle__New3_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public Lifecycle()
void Lifecycle__ctor_3_fn(Lifecycle* __this)
{
    __this->ctor_3();
}

// private static int Converter(Fuse.Scripting.Context context, int state)
void Lifecycle__Converter_fn(::g::Fuse::Scripting::Context* context, int32_t* state, int32_t* __retval)
{
    *__retval = Lifecycle::Converter(context, *state);
}

// private static int GetApplicationStateBackground()
void Lifecycle__GetApplicationStateBackground_fn(int32_t* __retval)
{
    *__retval = Lifecycle::GetApplicationStateBackground();
}

// private static int GetApplicationStateForeground()
void Lifecycle__GetApplicationStateForeground_fn(int32_t* __retval)
{
    *__retval = Lifecycle::GetApplicationStateForeground();
}

// private static int GetApplicationStateInteractive()
void Lifecycle__GetApplicationStateInteractive_fn(int32_t* __retval)
{
    *__retval = Lifecycle::GetApplicationStateInteractive();
}

// private static int GetCurrentState()
void Lifecycle__GetCurrentState_fn(int32_t* __retval)
{
    *__retval = Lifecycle::GetCurrentState();
}

// public Lifecycle New()
void Lifecycle__New3_fn(Lifecycle** __retval)
{
    *__retval = Lifecycle::New3();
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState newState)
void Lifecycle__OnEnteringBackground_fn(Lifecycle* __this, int32_t* newState)
{
    __this->OnEnteringBackground(*newState);
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState newState)
void Lifecycle__OnEnteringForeground_fn(Lifecycle* __this, int32_t* newState)
{
    __this->OnEnteringForeground(*newState);
}

// private void OnEnteringInteractive(Fuse.Platform.ApplicationState newState)
void Lifecycle__OnEnteringInteractive_fn(Lifecycle* __this, int32_t* newState)
{
    __this->OnEnteringInteractive(*newState);
}

// private void OnExitedInteractive(Fuse.Platform.ApplicationState newState)
void Lifecycle__OnExitedInteractive_fn(Lifecycle* __this, int32_t* newState)
{
    __this->OnExitedInteractive(*newState);
}

// private void OnStateChanged(Fuse.Platform.ApplicationState newState)
void Lifecycle__OnStateChanged_fn(Lifecycle* __this, int32_t* newState)
{
    __this->OnStateChanged(*newState);
}

uSStrong<Lifecycle*> Lifecycle::_instance_;

// public Lifecycle() [instance]
void Lifecycle::ctor_3()
{
    ctor_2(true, uArray::Init<uObject*>(::TYPES[14/*object[]*/], 5, ::STRINGS[51/*"enteringInt...*/], ::STRINGS[52/*"exitedInter...*/], ::STRINGS[53/*"enteringFor...*/], ::STRINGS[54/*"enteringBac...*/], ::STRINGS[55/*"stateChanged"*/]));

    if (Lifecycle::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(Lifecycle::_instance_ = this, ::STRINGS[56/*"FuseJS/Life...*/]);
    ::g::Fuse::Scripting::NativeEvent* onEnteringInteractive = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[57/*"onEnteringI...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onEnteringForeground = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[58/*"onEnteringF...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onEnteringBackground = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[59/*"onEnteringB...*/], true);
    ::g::Fuse::Scripting::NativeEvent* onExitedInteractive = ::g::Fuse::Scripting::NativeEvent::New4(::STRINGS[60/*"onExitedInt...*/], true);
    On1(::STRINGS[51/*"enteringInt...*/], onEnteringInteractive);
    On1(::STRINGS[53/*"enteringFor...*/], onEnteringForeground);
    On1(::STRINGS[54/*"enteringBac...*/], onEnteringBackground);
    On1(::STRINGS[52/*"exitedInter...*/], onExitedInteractive);
    _state = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[61/*"state"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetCurrentState_fn), nullptr, uDelegate::New(::TYPES[17/*Fuse.Scripting.ValueConverter<int, int>*/], (void*)Lifecycle__Converter_fn)));
    _background = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[62/*"BACKGROUND"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateBackground_fn), nullptr, nullptr));
    _foreground = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[63/*"FOREGROUND"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateForeground_fn), nullptr, nullptr));
    _interactive = ((::g::Fuse::Scripting::NativeProperty*)::g::Fuse::Scripting::NativeProperty::New2(::TYPES[15/*Fuse.Scripting.NativeProperty<int, int>*/], ::STRINGS[64/*"INTERACTIVE"*/], uDelegate::New(::TYPES[16/*Uno.Func<int>*/], (void*)Lifecycle__GetApplicationStateInteractive_fn), nullptr, nullptr));
    AddMember(_state);
    AddMember(onEnteringInteractive);
    AddMember(onEnteringForeground);
    AddMember(onEnteringBackground);
    AddMember(onExitedInteractive);
    AddMember(_background);
    AddMember(_foreground);
    AddMember(_interactive);
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringForeground_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringInteractive_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnExitedInteractive_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnEnteringBackground_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringForeground(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringInteractive(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_ExitedInteractive(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
    ::g::Fuse::Platform::Lifecycle::add_EnteringBackground(uDelegate::New(::TYPES[18/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)Lifecycle__OnStateChanged_fn, this));
}

// private void OnEnteringBackground(Fuse.Platform.ApplicationState newState) [instance]
void Lifecycle::OnEnteringBackground(int32_t newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[14/*object[]*/], 1, ::STRINGS[54/*"enteringBac...*/]));
}

// private void OnEnteringForeground(Fuse.Platform.ApplicationState newState) [instance]
void Lifecycle::OnEnteringForeground(int32_t newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[14/*object[]*/], 1, ::STRINGS[53/*"enteringFor...*/]));
}

// private void OnEnteringInteractive(Fuse.Platform.ApplicationState newState) [instance]
void Lifecycle::OnEnteringInteractive(int32_t newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[14/*object[]*/], 1, ::STRINGS[51/*"enteringInt...*/]));
}

// private void OnExitedInteractive(Fuse.Platform.ApplicationState newState) [instance]
void Lifecycle::OnExitedInteractive(int32_t newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[14/*object[]*/], 1, ::STRINGS[52/*"exitedInter...*/]));
}

// private void OnStateChanged(Fuse.Platform.ApplicationState newState) [instance]
void Lifecycle::OnStateChanged(int32_t newState)
{
    Emit(uArray::Init<uObject*>(::TYPES[14/*object[]*/], 2, ::STRINGS[55/*"stateChanged"*/], uBox<int32_t>(::g::Uno::Int_typeof(), newState)));
}

// private static int Converter(Fuse.Scripting.Context context, int state) [static]
int32_t Lifecycle::Converter(::g::Fuse::Scripting::Context* context, int32_t state)
{
    return state;
}

// private static int GetApplicationStateBackground() [static]
int32_t Lifecycle::GetApplicationStateBackground()
{
    return 1;
}

// private static int GetApplicationStateForeground() [static]
int32_t Lifecycle::GetApplicationStateForeground()
{
    return 2;
}

// private static int GetApplicationStateInteractive() [static]
int32_t Lifecycle::GetApplicationStateInteractive()
{
    return 3;
}

// private static int GetCurrentState() [static]
int32_t Lifecycle::GetCurrentState()
{
    return ::g::Fuse::Platform::Lifecycle::State();
}

// public Lifecycle New() [static]
Lifecycle* Lifecycle::New3()
{
    Lifecycle* obj1 = (Lifecycle*)uNew(Lifecycle_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/UserEvents.uno
// -------------------------------------------------------------

// internal sealed class RaiseEvent
// {
static void RaiseEvent_build(uType* type)
{
    ::STRINGS[65] = uString::Const("Cannot find message with name: ");
    ::STRINGS[66] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/FuseJS/UserEvents.uno");
    ::STRINGS[67] = uString::Const("Raise");
    type->SetDependencies(
        ::g::Fuse::UserEventDispatch_typeof());
    type->SetFields(0,
        ::g::Fuse::Node_typeof(), offsetof(RaiseEvent, Source), 0,
        ::g::Uno::String_typeof(), offsetof(RaiseEvent, Name), 0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), uObject_typeof(), nullptr), offsetof(RaiseEvent, Args), 0);
}

uType* RaiseEvent_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RaiseEvent);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.RaiseEvent", options);
    type->fp_build_ = RaiseEvent_build;
    type->fp_ctor_ = (void*)RaiseEvent__New1_fn;
    return type;
}

// public generated RaiseEvent()
void RaiseEvent__ctor__fn(RaiseEvent* __this)
{
    __this->ctor_();
}

// public generated RaiseEvent New()
void RaiseEvent__New1_fn(RaiseEvent** __retval)
{
    *__retval = RaiseEvent::New1();
}

// public void Raise()
void RaiseEvent__Raise_fn(RaiseEvent* __this)
{
    __this->Raise();
}

// public generated RaiseEvent() [instance]
void RaiseEvent::ctor_()
{
}

// public void Raise() [instance]
void RaiseEvent::Raise()
{
    ::g::Fuse::UserEventDispatch* dispatch = ::g::Fuse::UserEventDispatch::GetByName(::g::Uno::UX::Selector__op_Implicit(Name));

    if (dispatch == nullptr)
    {
        ::g::Fuse::Diagnostics::UserError(::g::Uno::String::op_Addition2(::STRINGS[65/*"Cannot find...*/], Name), this, ::STRINGS[66/*"/Users/mort...*/], 20, ::STRINGS[67/*"Raise"*/], nullptr);
        return;
    }

    uPtr(dispatch)->DirectRaise(Source, Args);
}

// public generated RaiseEvent New() [static]
RaiseEvent* RaiseEvent::New1()
{
    RaiseEvent* obj1 = (RaiseEvent*)uNew(RaiseEvent_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Bundle.uno
// ---------------------------------------------------------

// private sealed class Bundle.ReadBufferClosure
// {
static void Bundle__ReadBufferClosure_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ReadBufferClosure, _filename), 0);
}

uType* Bundle__ReadBufferClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadBufferClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ReadBufferClosure", options);
    type->fp_build_ = Bundle__ReadBufferClosure_build;
    return type;
}

// public ReadBufferClosure(string filename)
void Bundle__ReadBufferClosure__ctor__fn(Bundle__ReadBufferClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public byte[] Invoke()
void Bundle__ReadBufferClosure__Invoke_fn(Bundle__ReadBufferClosure* __this, uArray** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadBufferClosure New(string filename)
void Bundle__ReadBufferClosure__New1_fn(uString* filename, Bundle__ReadBufferClosure** __retval)
{
    *__retval = Bundle__ReadBufferClosure::New1(filename);
}

// public ReadBufferClosure(string filename) [instance]
void Bundle__ReadBufferClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public byte[] Invoke() [instance]
uArray* Bundle__ReadBufferClosure::Invoke()
{
    ::g::Uno::IO::BundleFile* bfile;

    if (::g::FuseJS::Bundle::TryGetBundleFile(_filename, &bfile))
        return uPtr(bfile)->ReadAllBytes();

    return uArray::Init<int32_t>(::TYPES[4/*byte[]*/], 0);
}

// public ReadBufferClosure New(string filename) [static]
Bundle__ReadBufferClosure* Bundle__ReadBufferClosure::New1(uString* filename)
{
    Bundle__ReadBufferClosure* obj1 = (Bundle__ReadBufferClosure*)uNew(Bundle__ReadBufferClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/Bundle.uno
// ---------------------------------------------------------

// private sealed class Bundle.ReadClosure
// {
static void Bundle__ReadClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(Bundle__ReadClosure, _filename), 0);
}

uType* Bundle__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Bundle__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("FuseJS.Bundle.ReadClosure", options);
    type->fp_build_ = Bundle__ReadClosure_build;
    return type;
}

// public ReadClosure(string filename)
void Bundle__ReadClosure__ctor__fn(Bundle__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke()
void Bundle__ReadClosure__Invoke_fn(Bundle__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename)
void Bundle__ReadClosure__New1_fn(uString* filename, Bundle__ReadClosure** __retval)
{
    *__retval = Bundle__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance]
void Bundle__ReadClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public string Invoke() [instance]
uString* Bundle__ReadClosure::Invoke()
{
    return ::g::FuseJS::Bundle::ReadSync1(_filename);
}

// public ReadClosure New(string filename) [static]
Bundle__ReadClosure* Bundle__ReadClosure::New1(uString* filename)
{
    Bundle__ReadClosure* obj1 = (Bundle__ReadClosure*)uNew(Bundle__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/FuseJS/UserEvents.uno
// -------------------------------------------------------------

// public sealed class UserEvents
// {
static void UserEvents_build(uType* type)
{
    ::STRINGS[68] = uString::Const("FuseJS/UserEvents");
    ::STRINGS[69] = uString::Const("raise");
    ::STRINGS[70] = uString::Const("The FuseJS/UserEvents `Raise` function is deprecated. Use the `object.raise` on a named event instead.");
    ::STRINGS[66] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/FuseJS/UserEvents.uno");
    ::STRINGS[67] = uString::Const("Raise");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Uno::String_typeof();
    ::TYPES[19] = ::g::Fuse::Scripting::Object_typeof();
    ::TYPES[20] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[1/*string*/], uObject_typeof(), nullptr);
    ::TYPES[21] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&UserEvents::_instance_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&UserEvents::_warn_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* UserEvents_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 6;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(UserEvents);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("FuseJS.UserEvents", options);
    type->fp_build_ = UserEvents_build;
    type->fp_ctor_ = (void*)UserEvents__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UserEvents()
void UserEvents__ctor_2_fn(UserEvents* __this)
{
    __this->ctor_2();
}

// public UserEvents New()
void UserEvents__New2_fn(UserEvents** __retval)
{
    *__retval = UserEvents::New2();
}

// public static object Raise(Fuse.Scripting.Context context, object[] args)
void UserEvents__Raise_fn(::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval)
{
    *__retval = UserEvents::Raise(context, args);
}

uSStrong<UserEvents*> UserEvents::_instance_;
bool UserEvents::_warn_;

// public UserEvents() [instance]
void UserEvents::ctor_2()
{
    ctor_1();

    if (UserEvents::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(UserEvents::_instance_ = this, ::STRINGS[68/*"FuseJS/User...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[69/*"raise"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserEvents__Raise_fn)));
}

// public UserEvents New() [static]
UserEvents* UserEvents::New2()
{
    UserEvents* obj4 = (UserEvents*)uNew(UserEvents_typeof());
    obj4->ctor_2();
    return obj4;
}

// public static object Raise(Fuse.Scripting.Context context, object[] args) [static]
uObject* UserEvents::Raise(::g::Fuse::Scripting::Context* context, uArray* args)
{
    if (!UserEvents::_warn_)
    {
        ::g::Fuse::Diagnostics::Deprecated(::STRINGS[70/*"The FuseJS/...*/], context, ::STRINGS[66/*"/Users/mort...*/], 51, ::STRINGS[67/*"Raise"*/]);
        UserEvents::_warn_ = true;
    }

    uString* eventName = uCast<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[1/*string*/]);
    ::g::Uno::Collections::Dictionary* postArgs = nullptr;
    ::g::Fuse::Scripting::Object* p = (args->Length() > 1) ? uAs< ::g::Fuse::Scripting::Object*>(args->Strong<uObject*>(1), ::TYPES[19/*Fuse.Scripting.Object*/]) : nullptr;

    if (p != nullptr)
    {
        uArray* keys = uPtr(p)->Keys();
        postArgs = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[20/*Uno.Collections.Dictionary<string, object>*/]);

        for (int32_t index2 = 0, length3 = uPtr(keys)->Length(); index2 < length3; ++index2)
        {
            uString* key = uPtr(keys)->Strong<uString*>(index2);
            ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(postArgs), key, uPtr(p)->Item(key));
        }
    }

    ::g::FuseJS::RaiseEvent* re = ::g::FuseJS::RaiseEvent::New1();
    re->Source = nullptr;
    re->Name = eventName;
    re->Args = postArgs;
    ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[21/*Uno.Action*/], (void*)::g::FuseJS::RaiseEvent__Raise_fn, re));
    return nullptr;
}
// }

}} // ::g::FuseJS
