// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Net.Http/2.2.0/HttpStatusReasonPhrase.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Net{namespace Http{struct HttpStatusReasonPhrase;}}}}

namespace g{
namespace Uno{
namespace Net{
namespace Http{

// public static class HttpStatusReasonPhrase
// {
uClassType* HttpStatusReasonPhrase_typeof();
void HttpStatusReasonPhrase__GetFromStatusCode_fn(int32_t* statusCode, uString** __retval);

struct HttpStatusReasonPhrase : uObject
{
    static uSStrong<uObject*> Informational_;
    static uSStrong<uObject*>& Informational() { return HttpStatusReasonPhrase_typeof()->Init(), Informational_; }
    static uSStrong<uObject*> Success_;
    static uSStrong<uObject*>& Success() { return HttpStatusReasonPhrase_typeof()->Init(), Success_; }
    static uSStrong<uObject*> Redirection_;
    static uSStrong<uObject*>& Redirection() { return HttpStatusReasonPhrase_typeof()->Init(), Redirection_; }
    static uSStrong<uObject*> ClientErrors_;
    static uSStrong<uObject*>& ClientErrors() { return HttpStatusReasonPhrase_typeof()->Init(), ClientErrors_; }
    static uSStrong<uObject*> ServerErrors_;
    static uSStrong<uObject*>& ServerErrors() { return HttpStatusReasonPhrase_typeof()->Init(), ServerErrors_; }

    static uString* GetFromStatusCode(int32_t statusCode);
};
// }

}}}} // ::g::Uno::Net::Http
