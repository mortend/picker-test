// This file was generated based on '../Source/Fuse.Controls.WebView/DownloadEventArgs.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.IScriptEvent.h>
#include <Uno.EventArgs.h>
namespace g{namespace Fuse{namespace Controls{struct DownloadEventArgs;}}}

namespace g{
namespace Fuse{
namespace Controls{

// public sealed class DownloadEventArgs
// {
struct DownloadEventArgs_type : uType
{
    ::g::Fuse::Scripting::IScriptEvent interface0;
};

DownloadEventArgs_type* DownloadEventArgs_typeof();
void DownloadEventArgs__ctor_1_fn(DownloadEventArgs* __this, uString* url, uString* path);
void DownloadEventArgs__FuseScriptingIScriptEventSerialize_fn(DownloadEventArgs* __this, uObject* s);
void DownloadEventArgs__New2_fn(uString* url, uString* path, DownloadEventArgs** __retval);

struct DownloadEventArgs : ::g::Uno::EventArgs
{
    uStrong<uString*> Url;
    uStrong<uString*> Path;

    void ctor_1(uString* url, uString* path);
    static DownloadEventArgs* New2(uString* url, uString* path);
};
// }

}}} // ::g::Fuse::Controls
