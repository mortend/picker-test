// This file was generated based on '../Source/Fuse.Controls.WebView/WebViewNavActions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.ISourceReceiver.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-e25d2f1f.h>
namespace g{namespace Fuse{namespace Controls{struct WebView;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadHtml;}}}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadHtml
// {
struct LoadHtml_type : ::g::Fuse::Triggers::Actions::WebViewNavAction_type
{
    ::g::Fuse::Controls::ISourceReceiver interface1;
};

LoadHtml_type* LoadHtml_typeof();
void LoadHtml__get_BaseUrl_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_BaseUrl_fn(LoadHtml* __this, uString* value);
void LoadHtml__Execute_fn(LoadHtml* __this, ::g::Fuse::Controls::WebView* webview);
void LoadHtml__get_Source_fn(LoadHtml* __this, uString** __retval);
void LoadHtml__set_Source_fn(LoadHtml* __this, uString* value);

struct LoadHtml : ::g::Fuse::Triggers::Actions::WebViewNavAction
{
    uStrong<uString*> _BaseUrl;
    uStrong<uString*> _Source;

    uString* BaseUrl();
    void BaseUrl(uString* value);
    uString* Source();
    void Source(uString* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
