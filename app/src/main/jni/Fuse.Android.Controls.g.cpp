// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Android.Controls.WebView.h>
#include <Fuse.Android.Controls-4b329d47.h>
#include <Fuse.Android.Controls-9c2da349.h>
#include <Fuse.Controls.Downloa-f8286625.h>
#include <Fuse.Controls.URISche-c4a82e84.h>
#include <Fuse.Controls.WebView.h>
#include <Fuse.Navigation.Histo-7effafc8.h>
#include <Java.Object.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[2];
static uType* TYPES[10];

namespace g{
namespace Fuse{
namespace Android{
namespace Controls{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.WebView/Android/WebView.uno
// ---------------------------------------------------------------------------------

// public sealed extern class WebView
// {
static void WebView_build(uType* type)
{
    ::STRINGS[0] = uString::Const("");
    ::STRINGS[1] = uString::Const("about:blank");
    ::TYPES[0] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Int_typeof(), nullptr);
    ::TYPES[3] = ::g::Uno::Action_typeof();
    ::TYPES[4] = ::g::Uno::Func_typeof()->MakeType(::g::Uno::Bool_typeof(), nullptr);
    ::TYPES[5] = ::g::Uno::Exception_typeof();
    ::TYPES[6] = ::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), nullptr);
    ::TYPES[7] = ::g::Uno::EventHandler_typeof();
    ::TYPES[8] = ::g::Fuse::Navigation::HistoryChangedHandler_typeof();
    ::TYPES[9] = ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(WebView_type, interface0),
        ::g::Fuse::Controls::Native::IView_typeof(), offsetof(WebView_type, interface1),
        ::g::Fuse::Controls::IWebView_typeof(), offsetof(WebView_type, interface2),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(WebView_type, interface3),
        ::g::Fuse::Navigation::IBaseNavigation_typeof(), offsetof(WebView_type, interface4),
        ::g::Fuse::Controls::ISourceReceiver_typeof(), offsetof(WebView_type, interface5));
    type->SetFields(6,
        ::g::Java::Object_typeof(), offsetof(WebView, _downloadListenerHandle), 0,
        ::g::Java::Object_typeof(), offsetof(WebView, _webChromeClientHandle), 0,
        ::g::Java::Object_typeof(), offsetof(WebView, _webViewClientHandle), 0,
        ::g::Java::Object_typeof(), offsetof(WebView, _webViewHandle), 0,
        ::g::Fuse::Controls::WebView_typeof(), offsetof(WebView, _webViewHost), 0,
        ::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager_typeof(), offsetof(WebView, _evalRequestMgr), 0,
        ::g::Uno::String_typeof()->Array(), offsetof(WebView, _uriSchemes), 0,
        ::g::Uno::String_typeof(), offsetof(WebView, _source), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(WebView, _file), 0,
        ::g::Uno::String_typeof(), offsetof(WebView, _BaseUrl), 0,
        ::g::Uno::Bool_typeof(), offsetof(WebView, _ScrollEnabled), 0,
        ::g::Uno::Bool_typeof(), offsetof(WebView, _ZoomEnabled), 0,
        ::TYPES[7/*Uno.EventHandler*/], offsetof(WebView, BeginDownload1), 0,
        ::TYPES[7/*Uno.EventHandler*/], offsetof(WebView, BeginLoading1), 0,
        ::TYPES[7/*Uno.EventHandler*/], offsetof(WebView, FileDownloaded1), 0,
        ::TYPES[8/*Fuse.Navigation.HistoryChangedHandler*/], offsetof(WebView, HistoryChanged1), 0,
        ::TYPES[7/*Uno.EventHandler*/], offsetof(WebView, PageLoaded1), 0,
        ::TYPES[9/*Uno.UX.ValueChangedHandler<double>*/], offsetof(WebView, ProgressChanged1), 0,
        ::TYPES[7/*Uno.EventHandler*/], offsetof(WebView, URISchemeHandler1), 0,
        ::TYPES[7/*Uno.EventHandler*/], offsetof(WebView, UrlChanged1), 0);
}

WebView_type* WebView_typeof()
{
    static uSStrong<WebView_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Native::Android::LeafView_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WebView);
    options.TypeSize = sizeof(WebView_type);
    type = (WebView_type*)uClassType::New("Fuse.Android.Controls.WebView", options);
    type->fp_build_ = WebView_build;
    type->interface2.fp_Eval1 = (void(*)(uObject*, uString*, uDelegate*))WebView__Eval1_fn;
    type->interface2.fp_Eval = (void(*)(uObject*, uString*))WebView__Eval_fn;
    type->interface2.fp_LoadHtml = (void(*)(uObject*, uString*))WebView__LoadHtml_fn;
    type->interface2.fp_LoadHtml1 = (void(*)(uObject*, uString*, uString*))WebView__LoadHtml1_fn;
    type->interface2.fp_LoadUrl = (void(*)(uObject*, uString*))WebView__LoadUrl_fn;
    type->interface2.fp_Stop = (void(*)(uObject*))WebView__Stop_fn;
    type->interface2.fp_Reload = (void(*)(uObject*))WebView__Reload_fn;
    type->interface2.fp_get_BaseUrl = (void(*)(uObject*, uString**))WebView__get_BaseUrl_fn;
    type->interface2.fp_set_BaseUrl = (void(*)(uObject*, uString*))WebView__set_BaseUrl_fn;
    type->interface2.fp_get_Url = (void(*)(uObject*, uString**))WebView__get_Url_fn;
    type->interface2.fp_set_Url = (void(*)(uObject*, uString*))WebView__set_Url_fn;
    type->interface2.fp_get_File = (void(*)(uObject*, ::g::Uno::UX::FileSource**))WebView__get_File_fn;
    type->interface2.fp_set_File = (void(*)(uObject*, ::g::Uno::UX::FileSource*))WebView__set_File_fn;
    type->interface2.fp_get_ZoomEnabled = (void(*)(uObject*, bool*))WebView__get_ZoomEnabled_fn;
    type->interface2.fp_set_ZoomEnabled = (void(*)(uObject*, bool*))WebView__set_ZoomEnabled_fn;
    type->interface2.fp_get_ScrollEnabled = (void(*)(uObject*, bool*))WebView__get_ScrollEnabled_fn;
    type->interface2.fp_set_ScrollEnabled = (void(*)(uObject*, bool*))WebView__set_ScrollEnabled_fn;
    type->interface2.fp_add_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__add_PageLoaded_fn;
    type->interface2.fp_remove_PageLoaded = (void(*)(uObject*, uDelegate*))WebView__remove_PageLoaded_fn;
    type->interface2.fp_add_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__add_BeginLoading_fn;
    type->interface2.fp_remove_BeginLoading = (void(*)(uObject*, uDelegate*))WebView__remove_BeginLoading_fn;
    type->interface2.fp_add_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__add_UrlChanged_fn;
    type->interface2.fp_remove_UrlChanged = (void(*)(uObject*, uDelegate*))WebView__remove_UrlChanged_fn;
    type->interface2.fp_add_URISchemeHandler = (void(*)(uObject*, uDelegate*))WebView__add_URISchemeHandler_fn;
    type->interface2.fp_remove_URISchemeHandler = (void(*)(uObject*, uDelegate*))WebView__remove_URISchemeHandler_fn;
    type->interface2.fp_add_BeginDownload = (void(*)(uObject*, uDelegate*))WebView__add_BeginDownload_fn;
    type->interface2.fp_remove_BeginDownload = (void(*)(uObject*, uDelegate*))WebView__remove_BeginDownload_fn;
    type->interface2.fp_add_FileDownloaded = (void(*)(uObject*, uDelegate*))WebView__add_FileDownloaded_fn;
    type->interface2.fp_remove_FileDownloaded = (void(*)(uObject*, uDelegate*))WebView__remove_FileDownloaded_fn;
    type->interface3.fp_get_Progress = (void(*)(uObject*, double*))WebView__get_Progress_fn;
    type->interface3.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__add_ProgressChanged_fn;
    type->interface3.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))WebView__remove_ProgressChanged_fn;
    type->interface4.fp_GoForward = (void(*)(uObject*))WebView__GoForward_fn;
    type->interface4.fp_GoBack = (void(*)(uObject*))WebView__GoBack_fn;
    type->interface4.fp_get_CanGoBack = (void(*)(uObject*, bool*))WebView__get_CanGoBack_fn;
    type->interface4.fp_get_CanGoForward = (void(*)(uObject*, bool*))WebView__get_CanGoForward_fn;
    type->interface5.fp_get_Source = (void(*)(uObject*, uString**))WebView__get_Source_fn;
    type->interface5.fp_set_Source = (void(*)(uObject*, uString*))WebView__set_Source_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Controls::Native::ViewHandle__Dispose_fn;
    return type;
}

// private WebView(Fuse.Controls.WebView host, Java.Object handle, string[] schemes)
void WebView__ctor_9_fn(WebView* __this, ::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes)
{
    __this->ctor_9(host, handle, schemes);
}

// public generated string get_BaseUrl()
void WebView__get_BaseUrl_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->BaseUrl();
}

// public generated void set_BaseUrl(string value)
void WebView__set_BaseUrl_fn(WebView* __this, uString* value)
{
    __this->BaseUrl(value);
}

// public generated void add_BeginDownload(Uno.EventHandler value)
void WebView__add_BeginDownload_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginDownload(value);
}

// public generated void remove_BeginDownload(Uno.EventHandler value)
void WebView__remove_BeginDownload_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginDownload(value);
}

// public generated void add_BeginLoading(Uno.EventHandler value)
void WebView__add_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->add_BeginLoading(value);
}

// public generated void remove_BeginLoading(Uno.EventHandler value)
void WebView__remove_BeginLoading_fn(WebView* __this, uDelegate* value)
{
    __this->remove_BeginLoading(value);
}

// public bool get_CanGoBack()
void WebView__get_CanGoBack_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoBack();
}

// public bool get_CanGoForward()
void WebView__get_CanGoForward_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->CanGoForward();
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost, string[] schemes)
void WebView__Create_fn(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes, WebView** __retval)
{
    *__retval = WebView::Create(webViewHost, schemes);
}

// public void Eval(string js)
void WebView__Eval_fn(WebView* __this, uString* js)
{
    __this->Eval(js);
}

// public void Eval(string js, Uno.Action<string> resultHandler)
void WebView__Eval1_fn(WebView* __this, uString* js, uDelegate* resultHandler)
{
    __this->Eval1(js, resultHandler);
}

// public Uno.UX.FileSource get_File()
void WebView__get_File_fn(WebView* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value)
void WebView__set_File_fn(WebView* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public generated void add_FileDownloaded(Uno.EventHandler value)
void WebView__add_FileDownloaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_FileDownloaded(value);
}

// public generated void remove_FileDownloaded(Uno.EventHandler value)
void WebView__remove_FileDownloaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_FileDownloaded(value);
}

// public void GoBack()
void WebView__GoBack_fn(WebView* __this)
{
    __this->GoBack();
}

// public void GoForward()
void WebView__GoForward_fn(WebView* __this)
{
    __this->GoForward();
}

// public bool HasURISchemeHandler()
void WebView__HasURISchemeHandler_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->HasURISchemeHandler();
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value)
void WebView__add_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_HistoryChanged(value);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value)
void WebView__remove_HistoryChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_HistoryChanged(value);
}

// private void LoadFile(Uno.UX.FileSource file)
void WebView__LoadFile_fn(WebView* __this, ::g::Uno::UX::FileSource* file)
{
    __this->LoadFile(file);
}

// public void LoadHtml(string html)
void WebView__LoadHtml_fn(WebView* __this, uString* html)
{
    __this->LoadHtml(html);
}

// public void LoadHtml(string html, string baseUrl)
void WebView__LoadHtml1_fn(WebView* __this, uString* html, uString* baseUrl)
{
    __this->LoadHtml1(html, baseUrl);
}

// public void LoadUrl(string url)
void WebView__LoadUrl_fn(WebView* __this, uString* url)
{
    __this->LoadUrl(url);
}

// private WebView New(Fuse.Controls.WebView host, Java.Object handle, string[] schemes)
void WebView__New5_fn(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes, WebView** __retval)
{
    *__retval = WebView::New5(host, handle, schemes);
}

// private void OnBeginDownload(string url)
void WebView__OnBeginDownload_fn(WebView* __this, uString* url)
{
    __this->OnBeginDownload(url);
}

// private void OnBeginloading()
void WebView__OnBeginloading_fn(WebView* __this)
{
    __this->OnBeginloading();
}

// private void OnCustomURI(string url)
void WebView__OnCustomURI_fn(WebView* __this, uString* url)
{
    __this->OnCustomURI(url);
}

// private void OnFileDownloaded(string url, string path)
void WebView__OnFileDownloaded_fn(WebView* __this, uString* url, uString* path)
{
    __this->OnFileDownloaded(url, path);
}

// private void OnHistoryChanged()
void WebView__OnHistoryChanged_fn(WebView* __this)
{
    __this->OnHistoryChanged();
}

// private void OnPageLoaded()
void WebView__OnPageLoaded_fn(WebView* __this)
{
    __this->OnPageLoaded();
}

// private void OnProgressChanged(int newProgress)
void WebView__OnProgressChanged_fn(WebView* __this, int32_t* newProgress)
{
    __this->OnProgressChanged(*newProgress);
}

// private void OnUrlChanged()
void WebView__OnUrlChanged_fn(WebView* __this)
{
    __this->OnUrlChanged();
}

// public generated void add_PageLoaded(Uno.EventHandler value)
void WebView__add_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->add_PageLoaded(value);
}

// public generated void remove_PageLoaded(Uno.EventHandler value)
void WebView__remove_PageLoaded_fn(WebView* __this, uDelegate* value)
{
    __this->remove_PageLoaded(value);
}

// public double get_Progress()
void WebView__get_Progress_fn(WebView* __this, double* __retval)
{
    *__retval = __this->Progress();
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void WebView__add_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void WebView__remove_ProgressChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public void Reload()
void WebView__Reload_fn(WebView* __this)
{
    __this->Reload();
}

// public generated bool get_ScrollEnabled()
void WebView__get_ScrollEnabled_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->ScrollEnabled();
}

// public generated void set_ScrollEnabled(bool value)
void WebView__set_ScrollEnabled_fn(WebView* __this, bool* value)
{
    __this->ScrollEnabled(*value);
}

// public string get_Source()
void WebView__get_Source_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(string value)
void WebView__set_Source_fn(WebView* __this, uString* value)
{
    __this->Source(value);
}

// public void Stop()
void WebView__Stop_fn(WebView* __this)
{
    __this->Stop();
}

// public generated void add_URISchemeHandler(Uno.EventHandler value)
void WebView__add_URISchemeHandler_fn(WebView* __this, uDelegate* value)
{
    __this->add_URISchemeHandler(value);
}

// public generated void remove_URISchemeHandler(Uno.EventHandler value)
void WebView__remove_URISchemeHandler_fn(WebView* __this, uDelegate* value)
{
    __this->remove_URISchemeHandler(value);
}

// public string get_Url()
void WebView__get_Url_fn(WebView* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value)
void WebView__set_Url_fn(WebView* __this, uString* value)
{
    __this->Url(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value)
void WebView__add_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->add_UrlChanged(value);
}

// public generated void remove_UrlChanged(Uno.EventHandler value)
void WebView__remove_UrlChanged_fn(WebView* __this, uDelegate* value)
{
    __this->remove_UrlChanged(value);
}

// public generated bool get_ZoomEnabled()
void WebView__get_ZoomEnabled_fn(WebView* __this, bool* __retval)
{
    *__retval = __this->ZoomEnabled();
}

// public generated void set_ZoomEnabled(bool value)
void WebView__set_ZoomEnabled_fn(WebView* __this, bool* value)
{
    __this->ZoomEnabled(*value);
}

// private WebView(Fuse.Controls.WebView host, Java.Object handle, string[] schemes) [instance]
void WebView::ctor_9(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes)
{
    ctor_7(handle);
    _webViewHost = host;
    _webViewHandle = handle;
    _evalRequestMgr = ::g::Fuse::Android::Controls::WebViewUtils::JSEvalRequestManager::New1(_webViewHandle);
    _downloadListenerHandle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateAndSetDownloadListener(_webViewHandle, uDelegate::New(::TYPES[0/*Uno.Action<string>*/], (void*)WebView__OnBeginDownload_fn, this), uDelegate::New(::TYPES[1/*Uno.Action<string, string>*/], (void*)WebView__OnFileDownloaded_fn, this));
    _webChromeClientHandle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateAndSetWebChromeClient(_webViewHandle, uDelegate::New(::TYPES[2/*Uno.Action<int>*/], (void*)WebView__OnProgressChanged_fn, this));
    _webViewClientHandle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateAndSetWebViewClient(_webViewHandle, uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)WebView__OnPageLoaded_fn, this), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)WebView__OnBeginloading_fn, this), uDelegate::New(::TYPES[3/*Uno.Action*/], (void*)WebView__OnUrlChanged_fn, this), uDelegate::New(::TYPES[0/*Uno.Action<string>*/], (void*)WebView__OnCustomURI_fn, this), schemes, uDelegate::New(::TYPES[4/*Uno.Func<bool>*/], (void*)WebView__HasURISchemeHandler_fn, this));
    _uriSchemes = schemes;
    uPtr(_webViewHost)->WebViewClient((uObject*)this);
}

// public generated string get_BaseUrl() [instance]
uString* WebView::BaseUrl()
{
    return _BaseUrl;
}

// public generated void set_BaseUrl(string value) [instance]
void WebView::BaseUrl(uString* value)
{
    _BaseUrl = value;
}

// public generated void add_BeginDownload(Uno.EventHandler value) [instance]
void WebView::add_BeginDownload(uDelegate* value)
{
    BeginDownload1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginDownload1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_BeginDownload(Uno.EventHandler value) [instance]
void WebView::remove_BeginDownload(uDelegate* value)
{
    BeginDownload1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginDownload1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void add_BeginLoading(Uno.EventHandler value) [instance]
void WebView::add_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(BeginLoading1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_BeginLoading(Uno.EventHandler value) [instance]
void WebView::remove_BeginLoading(uDelegate* value)
{
    BeginLoading1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(BeginLoading1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public bool get_CanGoBack() [instance]
bool WebView::CanGoBack()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CanGoBack(_webViewHandle);
}

// public bool get_CanGoForward() [instance]
bool WebView::CanGoForward()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CanGoForward(_webViewHandle);
}

// public void Eval(string js) [instance]
void WebView::Eval(uString* js)
{
    uPtr(_evalRequestMgr)->EvaluateJs(js, nullptr);
}

// public void Eval(string js, Uno.Action<string> resultHandler) [instance]
void WebView::Eval1(uString* js, uDelegate* resultHandler)
{
    uPtr(_evalRequestMgr)->EvaluateJs(js, resultHandler);
}

// public Uno.UX.FileSource get_File() [instance]
::g::Uno::UX::FileSource* WebView::File()
{
    return _file;
}

// public void set_File(Uno.UX.FileSource value) [instance]
void WebView::File(::g::Uno::UX::FileSource* value)
{
    _file = value;

    if (_file != nullptr)
        LoadFile(_file);
}

// public generated void add_FileDownloaded(Uno.EventHandler value) [instance]
void WebView::add_FileDownloaded(uDelegate* value)
{
    FileDownloaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(FileDownloaded1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_FileDownloaded(Uno.EventHandler value) [instance]
void WebView::remove_FileDownloaded(uDelegate* value)
{
    FileDownloaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(FileDownloaded1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public void GoBack() [instance]
void WebView::GoBack()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GoBack(_webViewHandle);
}

// public void GoForward() [instance]
void WebView::GoForward()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GoForward(_webViewHandle);
}

// public bool HasURISchemeHandler() [instance]
bool WebView::HasURISchemeHandler()
{
    return ::g::Uno::Delegate::op_Inequality(URISchemeHandler1, nullptr);
}

// public generated void add_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance]
void WebView::add_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(HistoryChanged1, value), ::TYPES[8/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// public generated void remove_HistoryChanged(Fuse.Navigation.HistoryChangedHandler value) [instance]
void WebView::remove_HistoryChanged(uDelegate* value)
{
    HistoryChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(HistoryChanged1, value), ::TYPES[8/*Fuse.Navigation.HistoryChangedHandler*/]);
}

// private void LoadFile(Uno.UX.FileSource file) [instance]
void WebView::LoadFile(::g::Uno::UX::FileSource* file)
{
    uString* data = ::STRINGS[0/*""*/];

    {
        try
        {
            {
                data = uPtr(file)->ReadAllText();
            }
        }

        catch (const uThrowable& __t)
        {
            {
                LoadHtml(data);
            }
            ::g::Uno::Exception* e = __t.Exception;
            data = uPtr(e)->ToString();
            goto __after_finally_0;
        }

        {
            LoadHtml(data);
        }
        __after_finally_0:;
    }
}

// public void LoadHtml(string html) [instance]
void WebView::LoadHtml(uString* html)
{
    LoadHtml1(html, nullptr);
}

// public void LoadHtml(string html, string baseUrl) [instance]
void WebView::LoadHtml1(uString* html, uString* baseUrl)
{
    uString* ind4;

    if (::g::Uno::String::op_Equality(html, nullptr) || ::g::Uno::String::op_Equality(html, ::STRINGS[0/*""*/]))
        return;

    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadHtml(_webViewHandle, html, (ind4 = (baseUrl != nullptr) ? baseUrl : (uString*)BaseUrl(), (ind4 != nullptr) ? ind4 : ::STRINGS[0/*""*/]));
    OnHistoryChanged();
}

// public void LoadUrl(string url) [instance]
void WebView::LoadUrl(uString* url)
{
    uArray* array1;
    int32_t index2;
    int32_t length3;

    if (::g::Uno::String::op_Equality(url, nullptr) || ::g::Uno::String::op_Equality(url, ::STRINGS[0/*""*/]))
        url = ::STRINGS[1/*"about:blank"*/];

    if (HasURISchemeHandler())

        for (array1 = _uriSchemes, index2 = 0, length3 = uPtr(array1)->Length(); index2 < length3; ++index2)
        {
            uString* uri = uPtr(array1)->Strong<uString*>(index2);

            if (::g::Uno::String::IndexOf3(uPtr(url), uri, 0) == 0)
            {
                OnCustomURI(url);
                return;
            }
        }

    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::LoadUrl(_webViewHandle, url);
    OnHistoryChanged();
}

// private void OnBeginDownload(string url) [instance]
void WebView::OnBeginDownload(uString* url)
{
    if (::g::Uno::Delegate::op_Inequality(BeginDownload1, nullptr))
        uPtr(BeginDownload1)->Invoke(2, this, (::g::Fuse::Controls::DownloadEventArgs*)::g::Fuse::Controls::DownloadEventArgs::New2(url, nullptr));
}

// private void OnBeginloading() [instance]
void WebView::OnBeginloading()
{
    if (::g::Uno::Delegate::op_Inequality(BeginLoading1, nullptr))
        uPtr(BeginLoading1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnCustomURI(string url) [instance]
void WebView::OnCustomURI(uString* url)
{
    if (::g::Uno::Delegate::op_Inequality(URISchemeHandler1, nullptr))
        uPtr(URISchemeHandler1)->Invoke(2, this, (::g::Fuse::Controls::URISchemeEventArgs*)::g::Fuse::Controls::URISchemeEventArgs::New2(url));
}

// private void OnFileDownloaded(string url, string path) [instance]
void WebView::OnFileDownloaded(uString* url, uString* path)
{
    if (::g::Uno::Delegate::op_Inequality(FileDownloaded1, nullptr))
        uPtr(FileDownloaded1)->Invoke(2, this, (::g::Fuse::Controls::DownloadEventArgs*)::g::Fuse::Controls::DownloadEventArgs::New2(url, path));
}

// private void OnHistoryChanged() [instance]
void WebView::OnHistoryChanged()
{
    if (::g::Uno::Delegate::op_Inequality(HistoryChanged1, nullptr))
        uPtr(HistoryChanged1)->InvokeVoid(_webViewHost);
}

// private void OnPageLoaded() [instance]
void WebView::OnPageLoaded()
{
    if (::g::Uno::Delegate::op_Inequality(PageLoaded1, nullptr))
        uPtr(PageLoaded1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// private void OnProgressChanged(int newProgress) [instance]
void WebView::OnProgressChanged(int32_t newProgress)
{
    ::g::Uno::UX::ValueChangedArgs* ret6;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, nullptr))
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::TYPES[6/*Uno.UX.ValueChangedArgs<double>*/], uCRef((double)newProgress / 100.0), &ret6), ret6));
}

// private void OnUrlChanged() [instance]
void WebView::OnUrlChanged()
{
    if (::g::Uno::Delegate::op_Inequality(UrlChanged1, nullptr))
        uPtr(UrlChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public generated void add_PageLoaded(Uno.EventHandler value) [instance]
void WebView::add_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(PageLoaded1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_PageLoaded(Uno.EventHandler value) [instance]
void WebView::remove_PageLoaded(uDelegate* value)
{
    PageLoaded1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(PageLoaded1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public double get_Progress() [instance]
double WebView::Progress()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GetProgress(_webViewHandle) / 100.0;
}

// public generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance]
void WebView::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::TYPES[9/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance]
void WebView::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::TYPES[9/*Uno.UX.ValueChangedHandler<double>*/]);
}

// public void Reload() [instance]
void WebView::Reload()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::Reload(_webViewHandle);
}

// public generated bool get_ScrollEnabled() [instance]
bool WebView::ScrollEnabled()
{
    return _ScrollEnabled;
}

// public generated void set_ScrollEnabled(bool value) [instance]
void WebView::ScrollEnabled(bool value)
{
    _ScrollEnabled = value;
}

// public string get_Source() [instance]
uString* WebView::Source()
{
    return _source;
}

// public void set_Source(string value) [instance]
void WebView::Source(uString* value)
{
    LoadHtml(_source = value);
}

// public void Stop() [instance]
void WebView::Stop()
{
    ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::StopLoading(_webViewHandle);
}

// public generated void add_URISchemeHandler(Uno.EventHandler value) [instance]
void WebView::add_URISchemeHandler(uDelegate* value)
{
    URISchemeHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(URISchemeHandler1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_URISchemeHandler(Uno.EventHandler value) [instance]
void WebView::remove_URISchemeHandler(uDelegate* value)
{
    URISchemeHandler1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(URISchemeHandler1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public string get_Url() [instance]
uString* WebView::Url()
{
    return ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::GetUrl(_webViewHandle);
}

// public void set_Url(string value) [instance]
void WebView::Url(uString* value)
{
    LoadUrl(value);
}

// public generated void add_UrlChanged(Uno.EventHandler value) [instance]
void WebView::add_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(UrlChanged1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated void remove_UrlChanged(Uno.EventHandler value) [instance]
void WebView::remove_UrlChanged(uDelegate* value)
{
    UrlChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(UrlChanged1, value), ::TYPES[7/*Uno.EventHandler*/]);
}

// public generated bool get_ZoomEnabled() [instance]
bool WebView::ZoomEnabled()
{
    return _ZoomEnabled;
}

// public generated void set_ZoomEnabled(bool value) [instance]
void WebView::ZoomEnabled(bool value)
{
    _ZoomEnabled = value;
}

// public static Fuse.Android.Controls.WebView Create(Fuse.Controls.WebView webViewHost, string[] schemes) [static]
WebView* WebView::Create(::g::Fuse::Controls::WebView* webViewHost, uArray* schemes)
{
    ::g::Java::Object* handle = ::g::Fuse::Android::Controls::WebViewUtils::WebViewForeign::CreateWebView(uPtr(webViewHost)->ZoomEnabled(), uPtr(webViewHost)->ScrollEnabled());
    return WebView::New5(webViewHost, handle, schemes);
}

// private WebView New(Fuse.Controls.WebView host, Java.Object handle, string[] schemes) [static]
WebView* WebView::New5(::g::Fuse::Controls::WebView* host, ::g::Java::Object* handle, uArray* schemes)
{
    WebView* obj5 = (WebView*)uNew(WebView_typeof());
    obj5->ctor_9(host, handle, schemes);
    return obj5;
}
// }

}}}} // ::g::Fuse::Android::Controls
