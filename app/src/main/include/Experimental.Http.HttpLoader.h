// This file was generated based on '../Source/Experimental.Http/HttpLoader.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Experimental{namespace Http{struct HttpLoader;}}}
namespace g{namespace Experimental{namespace Http{struct HttpResponseHeader;}}}

namespace g{
namespace Experimental{
namespace Http{

// public static class HttpLoader
// {
uClassType* HttpLoader_typeof();
void HttpLoader__LoadBinary_fn(uString* requestUri, bool* cacheResponse, uDelegate* callback, uDelegate* error);

struct HttpLoader : uObject
{
    static void LoadBinary(uString* requestUri, bool cacheResponse, uDelegate* callback, uDelegate* error);
};
// }

}}} // ::g::Experimental::Http
