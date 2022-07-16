// This file was generated based on '../Source/Fuse.Elements/Resources/HttpImageSource.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Resources{struct HttpImageSourceCache;}}}
namespace g{namespace Fuse{namespace Resources{struct HttpImageSourceImpl;}}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{struct Int2;}}
namespace g{namespace Uno{struct WeakReference;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal static class HttpImageSourceCache
// {
uClassType* HttpImageSourceCache_typeof();
void HttpImageSourceCache__GetCacheDirectory_fn(uString** __retval);
void HttpImageSourceCache__GetFilenameBase_fn(uString* url, uString** __retval);
void HttpImageSourceCache__GetUrl_fn(uString* url, bool* diskCache, int32_t* diskCachePolicy, ::g::Uno::Int2* targetSize, ::g::Fuse::Resources::HttpImageSourceImpl** __retval);

struct HttpImageSourceCache : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _cache_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _cache() { return HttpImageSourceCache_typeof()->Init(), _cache_; }

    static uString* GetCacheDirectory();
    static uString* GetFilenameBase(uString* url);
    static ::g::Fuse::Resources::HttpImageSourceImpl* GetUrl(uString* url, bool diskCache, int32_t diskCachePolicy, ::g::Uno::Int2 targetSize);
};
// }

}}} // ::g::Fuse::Resources
