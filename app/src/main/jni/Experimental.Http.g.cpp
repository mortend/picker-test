// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Experimental.Http.BinaryLoader.h>
#include <Experimental.Http.Htt-c2183008.h>
#include <Experimental.Http.HttpLoader.h>
#include <Experimental.Http.LoaderConst.h>
#include <Fuse.UpdateManager.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Int.h>
#include <Uno.Net.Http.HttpMess-398281f5.h>
#include <Uno.Net.Http.HttpMess-a6066fba.h>
#include <Uno.Net.Http.HttpResponseType.h>
#include <Uno.String.h>
#include <Uno.Threading.IDispatcher.h>
static uString* STRINGS[4];
static uType* TYPES[4];

namespace g{
namespace Experimental{
namespace Http{

// /Users/morten/fuse-open/fuselibs/Source/Experimental.Http/BinaryLoader.uno
// --------------------------------------------------------------------------

// internal sealed class BinaryLoader
// {
static void BinaryLoader_build(uType* type)
{
    ::STRINGS[0] = uString::Const(":");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[1] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[2] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Net::Http::HttpMessageHandlerRequest_typeof(), nullptr);
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Byte_typeof()->Array(), nullptr), offsetof(BinaryLoader, Callback), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), nullptr), offsetof(BinaryLoader, ErrorCallback), 0,
        ::g::Uno::String_typeof(), offsetof(BinaryLoader, Uri), 0,
        ::g::Uno::String_typeof(), offsetof(BinaryLoader, Method), 0,
        ::g::Experimental::Http::HttpResponseHeader_typeof(), offsetof(BinaryLoader, _header), 0);
}

uType* BinaryLoader_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BinaryLoader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Http.BinaryLoader", options);
    type->fp_build_ = BinaryLoader_build;
    type->fp_ctor_ = (void*)BinaryLoader__New1_fn;
    return type;
}

// public generated BinaryLoader()
void BinaryLoader__ctor__fn(BinaryLoader* __this)
{
    __this->ctor_();
}

// private Uno.Collections.Dictionary<string, string> ExtractHeaders(string headers)
void BinaryLoader__ExtractHeaders_fn(BinaryLoader* __this, uString* headers, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->ExtractHeaders(headers);
}

// protected Experimental.Http.HttpResponseHeader get_Header()
void BinaryLoader__get_Header_fn(BinaryLoader* __this, ::g::Experimental::Http::HttpResponseHeader** __retval)
{
    *__retval = __this->Header();
}

// public void Initiate(bool cacheResponse)
void BinaryLoader__Initiate_fn(BinaryLoader* __this, bool* cacheResponse)
{
    __this->Initiate(*cacheResponse);
}

// public void MakeRequest(bool cacheResponse)
void BinaryLoader__MakeRequest_fn(BinaryLoader* __this, bool* cacheResponse)
{
    __this->MakeRequest(*cacheResponse);
}

// public generated BinaryLoader New()
void BinaryLoader__New1_fn(BinaryLoader** __retval)
{
    *__retval = BinaryLoader::New1();
}

// public void OnError(Uno.Net.Http.HttpMessageHandlerRequest msg, string reason)
void BinaryLoader__OnError_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason)
{
    __this->OnError(msg, reason);
}

// public void OnLoaded(Uno.Net.Http.HttpMessageHandlerRequest resp)
void BinaryLoader__OnLoaded_fn(BinaryLoader* __this, ::g::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    __this->OnLoaded(resp);
}

// public generated BinaryLoader() [instance]
void BinaryLoader::ctor_()
{
}

// private Uno.Collections.Dictionary<string, string> ExtractHeaders(string headers) [instance]
::g::Uno::Collections::Dictionary* BinaryLoader::ExtractHeaders(uString* headers)
{
    uArray* array1;
    int32_t index2;
    int32_t length3;
    ::g::Uno::Collections::Dictionary* res = (::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<string, string>*/]);

    for (array1 = ::g::Uno::String::Split(uPtr(headers), uArray::Init<int32_t>(::TYPES[1/*char[]*/], 1, 10)), index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
    {
        uString* header = uPtr(array1)->Strong<uString*>(index2);

        if (!::g::Uno::String::IsNullOrEmpty(::g::Uno::String::Trim(uPtr(header))))
        {
            uArray* arr = ::g::Uno::String::Split(uPtr(header), uArray::Init<int32_t>(::TYPES[1/*char[]*/], 1, ':'));
            uString* actualValue = (uPtr(arr)->Length() > 1) ? (uString*)::g::Uno::String::Trim(uPtr(::g::Uno::String::Substring(header, ::g::Uno::String::IndexOf3(header, ::STRINGS[0/*":"*/], 0) + 1))) : (uString*)::g::Uno::String::Empty_;
            ::g::Uno::Collections::Dictionary__Add_fn(uPtr(res), ::g::Uno::String::ToLower(uPtr(::g::Uno::String::Trim(uPtr(arr->Strong<uString*>(0))))), actualValue);
        }
    }

    return res;
}

// protected Experimental.Http.HttpResponseHeader get_Header() [instance]
::g::Experimental::Http::HttpResponseHeader* BinaryLoader::Header()
{
    return _header;
}

// public void Initiate(bool cacheResponse) [instance]
void BinaryLoader::Initiate(bool cacheResponse)
{
    MakeRequest(cacheResponse);
}

// public void MakeRequest(bool cacheResponse) [instance]
void BinaryLoader::MakeRequest(bool cacheResponse)
{
    if (::g::Experimental::Http::LoaderConst::Handler_ == nullptr)
        ::g::Experimental::Http::LoaderConst::Handler_ = ::g::Uno::Net::Http::HttpMessageHandler::New1();

    ::g::Uno::Net::Http::HttpMessageHandlerRequest* request = uPtr(::g::Experimental::Http::LoaderConst::Handler_)->CreateRequest1(Method, Uri, ::g::Fuse::UpdateManager::Dispatcher());
    uPtr(request)->add_Error(uDelegate::New(::TYPES[2/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest, string>*/], (void*)BinaryLoader__OnError_fn, this));
    request->add_Done(uDelegate::New(::TYPES[3/*Uno.Action<Uno.Net.Http.HttpMessageHandlerRequest>*/], (void*)BinaryLoader__OnLoaded_fn, this));
    request->SetResponseType(1);
    request->EnableCache(cacheResponse);
    request->SendAsync();
}

// public void OnError(Uno.Net.Http.HttpMessageHandlerRequest msg, string reason) [instance]
void BinaryLoader::OnError(::g::Uno::Net::Http::HttpMessageHandlerRequest* msg, uString* reason)
{
    uPtr(ErrorCallback)->InvokeVoid(reason);
}

// public void OnLoaded(Uno.Net.Http.HttpMessageHandlerRequest resp) [instance]
void BinaryLoader::OnLoaded(::g::Uno::Net::Http::HttpMessageHandlerRequest* resp)
{
    _header = ::g::Experimental::Http::HttpResponseHeader::New1();
    uPtr(_header)->StatusCode(uPtr(resp)->GetResponseStatus());
    uPtr(_header)->Headers(ExtractHeaders(resp->GetResponseHeaders()));
    uPtr(Callback)->Invoke(2, (::g::Experimental::Http::HttpResponseHeader*)Header(), (uArray*)resp->GetResponseContentByteArray());
}

// public generated BinaryLoader New() [static]
BinaryLoader* BinaryLoader::New1()
{
    BinaryLoader* obj4 = (BinaryLoader*)uNew(BinaryLoader_typeof());
    obj4->ctor_();
    return obj4;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Experimental.Http/HttpLoader.uno
// ------------------------------------------------------------------------

// public static class HttpLoader
// {
static void HttpLoader_build(uType* type)
{
    ::STRINGS[1] = uString::Const("LoadBinary requires callback action");
    ::STRINGS[2] = uString::Const("LoadBinary requires error action");
    ::STRINGS[3] = uString::Const("GET");
}

uClassType* HttpLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.Http.HttpLoader", options);
    type->fp_build_ = HttpLoader_build;
    return type;
}

// public static void LoadBinary(string requestUri, bool cacheResponse, Uno.Action<Experimental.Http.HttpResponseHeader, byte[]> callback, Uno.Action<string> error)
void HttpLoader__LoadBinary_fn(uString* requestUri, bool* cacheResponse, uDelegate* callback, uDelegate* error)
{
    HttpLoader::LoadBinary(requestUri, *cacheResponse, callback, error);
}

// public static void LoadBinary(string requestUri, bool cacheResponse, Uno.Action<Experimental.Http.HttpResponseHeader, byte[]> callback, Uno.Action<string> error) [static]
void HttpLoader::LoadBinary(uString* requestUri, bool cacheResponse, uDelegate* callback, uDelegate* error)
{
    if (::g::Uno::Delegate::op_Equality(callback, nullptr))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[1/*"LoadBinary ...*/]));

    if (::g::Uno::Delegate::op_Equality(error, nullptr))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[2/*"LoadBinary ...*/]));

    ::g::Experimental::Http::BinaryLoader* bl = ::g::Experimental::Http::BinaryLoader::New1();
    bl->Uri = requestUri;
    bl->Method = ::STRINGS[3/*"GET"*/];
    bl->Callback = callback;
    bl->ErrorCallback = error;
    bl->Initiate(cacheResponse);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Experimental.Http/HttpResponseHeader.uno
// --------------------------------------------------------------------------------

// public sealed class HttpResponseHeader
// {
static void HttpResponseHeader_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr), offsetof(HttpResponseHeader, _Headers), 0,
        ::g::Uno::String_typeof(), offsetof(HttpResponseHeader, _ReasonPhrase), 0,
        ::g::Uno::Int_typeof(), offsetof(HttpResponseHeader, _StatusCode), 0);
}

uType* HttpResponseHeader_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(HttpResponseHeader);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Experimental.Http.HttpResponseHeader", options);
    type->fp_build_ = HttpResponseHeader_build;
    type->fp_ctor_ = (void*)HttpResponseHeader__New1_fn;
    return type;
}

// public generated HttpResponseHeader()
void HttpResponseHeader__ctor__fn(HttpResponseHeader* __this)
{
    __this->ctor_();
}

// public generated Uno.Collections.Dictionary<string, string> get_Headers()
void HttpResponseHeader__get_Headers_fn(HttpResponseHeader* __this, ::g::Uno::Collections::Dictionary** __retval)
{
    *__retval = __this->Headers();
}

// internal generated void set_Headers(Uno.Collections.Dictionary<string, string> value)
void HttpResponseHeader__set_Headers_fn(HttpResponseHeader* __this, ::g::Uno::Collections::Dictionary* value)
{
    __this->Headers(value);
}

// public generated HttpResponseHeader New()
void HttpResponseHeader__New1_fn(HttpResponseHeader** __retval)
{
    *__retval = HttpResponseHeader::New1();
}

// public generated string get_ReasonPhrase()
void HttpResponseHeader__get_ReasonPhrase_fn(HttpResponseHeader* __this, uString** __retval)
{
    *__retval = __this->ReasonPhrase();
}

// internal generated void set_ReasonPhrase(string value)
void HttpResponseHeader__set_ReasonPhrase_fn(HttpResponseHeader* __this, uString* value)
{
    __this->ReasonPhrase(value);
}

// public generated int get_StatusCode()
void HttpResponseHeader__get_StatusCode_fn(HttpResponseHeader* __this, int32_t* __retval)
{
    *__retval = __this->StatusCode();
}

// internal generated void set_StatusCode(int value)
void HttpResponseHeader__set_StatusCode_fn(HttpResponseHeader* __this, int32_t* value)
{
    __this->StatusCode(*value);
}

// public generated HttpResponseHeader() [instance]
void HttpResponseHeader::ctor_()
{
}

// public generated Uno.Collections.Dictionary<string, string> get_Headers() [instance]
::g::Uno::Collections::Dictionary* HttpResponseHeader::Headers()
{
    return _Headers;
}

// internal generated void set_Headers(Uno.Collections.Dictionary<string, string> value) [instance]
void HttpResponseHeader::Headers(::g::Uno::Collections::Dictionary* value)
{
    _Headers = value;
}

// public generated string get_ReasonPhrase() [instance]
uString* HttpResponseHeader::ReasonPhrase()
{
    return _ReasonPhrase;
}

// internal generated void set_ReasonPhrase(string value) [instance]
void HttpResponseHeader::ReasonPhrase(uString* value)
{
    _ReasonPhrase = value;
}

// public generated int get_StatusCode() [instance]
int32_t HttpResponseHeader::StatusCode()
{
    return _StatusCode;
}

// internal generated void set_StatusCode(int value) [instance]
void HttpResponseHeader::StatusCode(int32_t value)
{
    _StatusCode = value;
}

// public generated HttpResponseHeader New() [static]
HttpResponseHeader* HttpResponseHeader::New1()
{
    HttpResponseHeader* obj2 = (HttpResponseHeader*)uNew(HttpResponseHeader_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Experimental.Http/BinaryLoader.uno
// --------------------------------------------------------------------------

// internal static class LoaderConst
// {
static void LoaderConst_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Net::Http::HttpMessageHandler_typeof(), (uintptr_t)&LoaderConst::Handler_, uFieldFlagsStatic);
}

uClassType* LoaderConst_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Experimental.Http.LoaderConst", options);
    type->fp_build_ = LoaderConst_build;
    return type;
}

uSStrong< ::g::Uno::Net::Http::HttpMessageHandler*> LoaderConst::Handler_;
// }

}}} // ::g::Experimental::Http
