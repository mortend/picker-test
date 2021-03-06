// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.Common.Blitter.h>
#include <Fuse.Controls.Native.-17411f45.h>
#include <Fuse.Controls.Native.-2c6100d3.h>
#include <Fuse.Controls.Native.-32a4f4f8.h>
#include <Fuse.Controls.Native.-38872408.h>
#include <Fuse.Controls.Native.-677c303b.h>
#include <Fuse.Controls.Native.-69a047a5.h>
#include <Fuse.Controls.Native.-7013e868.h>
#include <Fuse.Controls.Native.-7091a8c.h>
#include <Fuse.Controls.Native.-82d49dd8.h>
#include <Fuse.Controls.Native.-8c4d047a.h>
#include <Fuse.Controls.Native.-92521383.h>
#include <Fuse.Controls.Native.-9b460fed.h>
#include <Fuse.Controls.Native.-b0a6f14d.h>
#include <Fuse.Controls.Native.-b87a6cd.h>
#include <Fuse.Controls.Native.-b90f4623.h>
#include <Fuse.Controls.Native.-c95850ba.h>
#include <Fuse.Controls.Native.-db9b6e00.h>
#include <Fuse.Controls.Native.-dc7eb731.h>
#include <Fuse.Controls.Native.-f900417c.h>
#include <Fuse.Controls.Native.ITextView.h>
#include <Fuse.Controls.Native.IView.h>
#include <Fuse.Controls.Native.IViewHost.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.TextAlignment.h>
#include <Fuse.Controls.TextInp-4572852b.h>
#include <Fuse.Controls.TextTruncation.h>
#include <Fuse.Controls.TextWrapping.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Font.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.UpdateManager.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <OpenGL.GLTextureHandle.h>
#include <OpenGL.GLTextureTarget.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--132bd82f.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Func-1.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Int.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.Quaternion.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.IDispatcher.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.BundleFileSource.h>
#include <Uno.UX.FileSource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[2];
static uType* TYPES[7];

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IGraphicsView
// {
uInterfaceType* IGraphicsView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IGraphicsView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IImageView
// {
uInterfaceType* IImageView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IImageView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface ILabelView
// {
uInterfaceType* ILabelView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ILabelView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/ImageLoader.uno
// ----------------------------------------------------------------------------

// internal sealed extern class ImageHandle
// {
static void ImageHandle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("ImageHandle is disposed");
    type->SetDependencies(
        ::g::Fuse::Controls::Native::ImageLoader_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ImageHandle_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(ImageHandle, _handle), 0,
        ::g::Uno::String_typeof(), offsetof(ImageHandle, _name), 0,
        ::g::Uno::Int_typeof(), offsetof(ImageHandle, _pinCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageHandle, _isDisposed), 0);
}

ImageHandle_type* ImageHandle_typeof()
{
    static uSStrong<ImageHandle_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageHandle);
    options.TypeSize = sizeof(ImageHandle_type);
    type = (ImageHandle_type*)uClassType::New("Fuse.Controls.Native.ImageHandle", options);
    type->fp_build_ = ImageHandle_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageHandle__Dispose_fn;
    return type;
}

// public ImageHandle(string name, object handle)
void ImageHandle__ctor__fn(ImageHandle* __this, uString* name, uObject* handle)
{
    __this->ctor_(name, handle);
}

// public void Dispose()
void ImageHandle__Dispose_fn(ImageHandle* __this)
{
    __this->Dispose();
}

// public object get_Handle()
void ImageHandle__get_Handle_fn(ImageHandle* __this, uObject** __retval)
{
    *__retval = __this->Handle();
}

// public string get_Name()
void ImageHandle__get_Name_fn(ImageHandle* __this, uString** __retval)
{
    *__retval = __this->Name();
}

// public ImageHandle New(string name, object handle)
void ImageHandle__New1_fn(uString* name, uObject* handle, ImageHandle** __retval)
{
    *__retval = ImageHandle::New1(name, handle);
}

// public void Pin()
void ImageHandle__Pin_fn(ImageHandle* __this)
{
    __this->Pin();
}

// public ImageHandle(string name, object handle) [instance]
void ImageHandle::ctor_(uString* name, uObject* handle)
{
    _handle = handle;
    _name = name;
    Pin();
}

// public void Dispose() [instance]
void ImageHandle::Dispose()
{
    if (!_isDisposed)
    {
        _pinCount--;

        if (_pinCount == 0)
        {
            ::g::Fuse::Controls::Native::ImageLoader::ReleaseHandle(this);
            _isDisposed = true;
        }
    }
}

// public object get_Handle() [instance]
uObject* ImageHandle::Handle()
{
    if (_isDisposed)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"ImageHandle...*/]));

    return _handle;
}

// public string get_Name() [instance]
uString* ImageHandle::Name()
{
    return _name;
}

// public void Pin() [instance]
void ImageHandle::Pin()
{
    _pinCount++;
}

// public ImageHandle New(string name, object handle) [static]
ImageHandle* ImageHandle::New1(uString* name, uObject* handle)
{
    ImageHandle* obj1 = (ImageHandle*)uNew(ImageHandle_typeof());
    obj1->ctor_(name, handle);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/ImageLoader.uno
// ----------------------------------------------------------------------------

// private sealed extern class ImageLoader.ImageHandlePromise
// {
static void ImageLoader__ImageHandlePromise_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Failed to load image from: ");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Threading::Future1_typeof()->MakeType(::g::Java::Object_typeof(), nullptr), nullptr);
    ::TYPES[1] = ::g::Uno::Threading::Promise_typeof()->MakeType(::g::Java::Object_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Func_typeof()->MakeType(::g::Java::Object_typeof(), nullptr);
    ::TYPES[3] = ::g::Uno::Action1_typeof()->MakeType(::g::Java::Object_typeof(), nullptr);
    ::TYPES[4] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Threading::Future1_typeof()->MakeType(::g::Java::Object_typeof(), nullptr), nullptr);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), nullptr));
    type->SetDependencies(
        ::g::Fuse::Controls::Native::ImageLoader_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::String_typeof(), offsetof(ImageLoader__ImageHandlePromise, _url), 0,
        ::TYPES[0/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>*/], offsetof(ImageLoader__ImageHandlePromise, _dispose), 0);
}

::g::Uno::Threading::Future_type* ImageLoader__ImageHandlePromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ImageLoader__ImageHandlePromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Native.ImageLoader.ImageHandlePromise", options);
    type->fp_build_ = ImageLoader__ImageHandlePromise_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))ImageLoader__ImageHandlePromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageLoader__ImageHandlePromise__Dispose_fn;
    return type;
}

// public ImageHandlePromise(string url)
void ImageLoader__ImageHandlePromise__ctor_7_fn(ImageLoader__ImageHandlePromise* __this, uString* url)
{
    __this->ctor_7(url);
}

// public override sealed void Dispose()
void ImageLoader__ImageHandlePromise__Dispose_fn(ImageLoader__ImageHandlePromise* __this)
{
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Threading::Future1*> > ret3;
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    ::g::Uno::Collections::List__Enumerator<uStrong< ::g::Uno::Threading::Future1*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(__this->_dispose), &ret3), ret3);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[4/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>.Enumerator*/]))
                {
                    ::g::Uno::Threading::Future1* p = enum1.Current(::TYPES[4/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>.Enumerator*/]);
                    uPtr(p)->Dispose();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[4/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[4/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>.Enumerator*/]);
        }
        __after_finally_0:;
    }
}

// private Java.Object Download()
void ImageLoader__ImageHandlePromise__Download_fn(ImageLoader__ImageHandlePromise* __this, ::g::Java::Object** __retval)
{
    *__retval = __this->Download();
}

// private static Java.Object Download(string url)
void ImageLoader__ImageHandlePromise__Download1_fn(uString* url, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader__ImageHandlePromise::Download1(url);
}

// public ImageHandlePromise New(string url)
void ImageLoader__ImageHandlePromise__New5_fn(uString* url, ImageLoader__ImageHandlePromise** __retval)
{
    *__retval = ImageLoader__ImageHandlePromise::New5(url);
}

// private void OnDone(Java.Object obj)
void ImageLoader__ImageHandlePromise__OnDone_fn(ImageLoader__ImageHandlePromise* __this, ::g::Java::Object* obj)
{
    __this->OnDone(obj);
}

// public ImageHandlePromise(string url) [instance]
void ImageLoader__ImageHandlePromise::ctor_7(uString* url)
{
    _dispose = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Uno.Threading.Future<Java.Object>>*/]));
    ctor_5(::g::Fuse::UpdateManager::Dispatcher());
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(::g::Fuse::Controls::Native::ImageLoader::_pendingeImages()), url, this);
    _url = url;
    ::g::Uno::Threading::Future1* download = (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run1(::TYPES[1/*Uno.Threading.Promise<Java.Object>*/], ::g::Fuse::UpdateManager::Dispatcher(), uDelegate::New(::TYPES[2/*Uno.Func<Java.Object>*/], (void*)ImageLoader__ImageHandlePromise__Download_fn, this));
    ::g::Uno::Threading::Future1* then = (::g::Uno::Threading::Future1*)uPtr(download)->Then(uDelegate::New(::TYPES[3/*Uno.Action<Java.Object>*/], (void*)ImageLoader__ImageHandlePromise__OnDone_fn, this));
    ::g::Uno::Collections::List__Add_fn(uPtr(_dispose), download);
    ::g::Uno::Collections::List__Add_fn(uPtr(_dispose), then);
}

// private Java.Object Download() [instance]
::g::Java::Object* ImageLoader__ImageHandlePromise::Download()
{
    return ImageLoader__ImageHandlePromise::Download1(_url);
}

// private void OnDone(Java.Object obj) [instance]
void ImageLoader__ImageHandlePromise::OnDone(::g::Java::Object* obj)
{
    bool ret4;

    if (obj == nullptr)
        Reject(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::STRINGS[1/*"Failed to l...*/], _url)));
    else
    {
        ::g::Fuse::Controls::Native::ImageHandle* imageHandle = ::g::Fuse::Controls::Native::ImageHandle::New1(_url, obj);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(::g::Fuse::Controls::Native::ImageLoader::_imageHandleCache()), _url, imageHandle);
        ::g::Uno::Threading::Promise__Resolve_fn(this, imageHandle);
    }

    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(::g::Fuse::Controls::Native::ImageLoader::_pendingeImages()), _url, &ret4);
}

// private static Java.Object Download(string url) [static]
::g::Java::Object* ImageLoader__ImageHandlePromise::Download1(uString* url)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Download1250", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _uurl=url;
        jstring _url = JniHelper::UnoToJavaString(_uurl);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_url);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_url!=nullptr) { U_JNIVAR->DeleteLocalRef(_url); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageHandlePromise New(string url) [static]
ImageLoader__ImageHandlePromise* ImageLoader__ImageHandlePromise::New5(uString* url)
{
    ImageLoader__ImageHandlePromise* obj2 = (ImageLoader__ImageHandlePromise*)uNew(ImageLoader__ImageHandlePromise_typeof());
    obj2->ctor_7(url);
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/ImageLoader.uno
// ----------------------------------------------------------------------------

// internal static extern class ImageLoader
// {
// static generated ImageLoader()
static void ImageLoader__cctor__fn(uType* __type)
{
    ImageLoader::_imageHandleCache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof(), nullptr)));
    ImageLoader::_pendingeImages_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ImageLoader__ImageHandlePromise_typeof(), nullptr)));
}

static void ImageLoader_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Fuse::Controls::Native::ImageHandle_typeof(), nullptr), (uintptr_t)&ImageLoader::_imageHandleCache_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ImageLoader__ImageHandlePromise_typeof(), nullptr), (uintptr_t)&ImageLoader::_pendingeImages_, uFieldFlagsStatic);
}

uClassType* ImageLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ImageLoader", options);
    type->fp_build_ = ImageLoader_build;
    type->fp_cctor_ = ImageLoader__cctor__fn;
    return type;
}

// public static Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http)
void ImageLoader__Load_fn(::g::Fuse::Resources::HttpImageSource* http, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ImageLoader::Load(http);
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri)
void ImageLoader__Load1_fn(uString* uri, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load1(uri);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile)
void ImageLoader__Load2_fn(::g::Uno::IO::BundleFile* bundleFile, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load2(bundleFile);
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource)
void ImageLoader__Load3_fn(::g::Uno::UX::FileSource* fileSource, ::g::Fuse::Controls::Native::ImageHandle** __retval)
{
    *__retval = ImageLoader::Load3(fileSource);
}

// private static extern Java.Object LoadFile(string filePath)
void ImageLoader__LoadFile_fn(uString* filePath, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader::LoadFile(filePath);
}

// private static extern Java.Object LoadUri(string uri)
void ImageLoader__LoadUri_fn(uString* uri, ::g::Java::Object** __retval)
{
    *__retval = ImageLoader::LoadUri(uri);
}

// private static extern void Release(Java.Object bitmap)
void ImageLoader__Release_fn(::g::Java::Object* bitmap)
{
    ImageLoader::Release(bitmap);
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle)
void ImageLoader__ReleaseHandle_fn(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader::ReleaseHandle(handle);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_imageHandleCache_;
uSStrong< ::g::Uno::Collections::Dictionary*> ImageLoader::_pendingeImages_;

// public static Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> Load(Fuse.Resources.HttpImageSource http) [static]
::g::Uno::Threading::Future1* ImageLoader::Load(::g::Fuse::Resources::HttpImageSource* http)
{
    ImageLoader_typeof()->Init();
    bool ret1;
    ::g::Fuse::Controls::Native::ImageHandle* ret2;
    ::g::Uno::Threading::Promise* ret3;
    bool ret4;
    ImageLoader__ImageHandlePromise* pending = nullptr;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(http)->Url(), &ret1), ret1))
    {
        ::g::Fuse::Controls::Native::ImageHandle* h = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(http)->Url(), &ret2), ret2);
        uPtr(h)->Pin();
        return (::g::Uno::Threading::Promise__New2_fn(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), nullptr), h, &ret3), ret3);
    }
    else if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_pendingeImages_), uPtr(http)->Url(), (void**)(&pending), &ret4), ret4))
        return ImageLoader__PendingPromise::New5(pending);
    else
        return ImageLoader__ImageHandlePromise::New5(uPtr(http)->Url());
}

// public static Fuse.Controls.Native.ImageHandle Load(string uri) [static]
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load1(uString* uri)
{
    ImageLoader_typeof()->Init();
    bool ret5;
    ::g::Fuse::Controls::Native::ImageHandle* handle = nullptr;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), uri, (void**)(&handle), &ret5), ret5))
        uPtr(handle)->Pin();
    else
    {
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(uri, ImageLoader::LoadUri(uri));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), uri, handle);
    }

    return handle;
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.IO.BundleFile bundleFile) [static]
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load2(::g::Uno::IO::BundleFile* bundleFile)
{
    ImageLoader_typeof()->Init();
    return ImageLoader::Load1(uPtr(bundleFile)->BundlePath());
}

// public static Fuse.Controls.Native.ImageHandle Load(Uno.UX.FileSource fileSource) [static]
::g::Fuse::Controls::Native::ImageHandle* ImageLoader::Load3(::g::Uno::UX::FileSource* fileSource)
{
    ImageLoader_typeof()->Init();
    bool ret6;
    ::g::Fuse::Controls::Native::ImageHandle* handle = nullptr;

    if (uIs(fileSource, ::g::Uno::UX::BundleFileSource_typeof()))
        handle = ImageLoader::Load2(uPtr(uCast< ::g::Uno::UX::BundleFileSource*>(fileSource, ::g::Uno::UX::BundleFileSource_typeof()))->BundleFile);
    else if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(fileSource)->Name, (void**)(&handle), &ret6), ret6))
        uPtr(handle)->Pin();
    else
    {
        uArray* data = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(2), uString::Const("/tempImage"));
        ::g::Uno::IO::File::WriteAllBytes(path, data);
        handle = ::g::Fuse::Controls::Native::ImageHandle::New1(fileSource->Name, ImageLoader::LoadFile(path));
        ::g::Uno::IO::File::Delete(path);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ImageLoader::_imageHandleCache_), fileSource->Name, handle);
    }

    return handle;
}

// private static extern Java.Object LoadFile(string filePath) [static]
::g::Java::Object* ImageLoader::LoadFile(uString* filePath)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadFile251", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _ufilePath=filePath;
        jstring _filePath = JniHelper::UnoToJavaString(_ufilePath);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_filePath);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_filePath!=nullptr) { U_JNIVAR->DeleteLocalRef(_filePath); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern Java.Object LoadUri(string uri) [static]
::g::Java::Object* ImageLoader::LoadUri(uString* uri)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadUri252", "(Ljava/lang/String;)Ljava/lang/Object;");
        uString* _uuri=uri;
        jstring _uri = JniHelper::UnoToJavaString(_uuri);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_uri);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_uri!=nullptr) { U_JNIVAR->DeleteLocalRef(_uri); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern void Release(Java.Object bitmap) [static]
void ImageLoader::Release(::g::Java::Object* bitmap)
{
    ImageLoader_typeof()->Init();
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Release253", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bitmap);
        
        if (_bitmap!=nullptr) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void ReleaseHandle(Fuse.Controls.Native.ImageHandle handle) [static]
void ImageLoader::ReleaseHandle(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    ImageLoader_typeof()->Init();
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(handle)->Name(), &ret7), ret7))
    {
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(ImageLoader::_imageHandleCache_), uPtr(handle)->Name(), &ret8);
        ImageLoader::Release(uCast< ::g::Java::Object*>(handle->Handle(), ::TYPES[5/*Java.Object*/]));
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/ViewHandle.Android.uno
// -------------------------------------------------------------------------

// public enum ViewHandle.Invalidation
uEnumType* ViewHandle__Invalidation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Controls.Native.ViewHandle.Invalidation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "None", 0LL,
        "OnInvalidateVisual", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IRangeViewHost
// {
uInterfaceType* IRangeViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IRangeViewHost", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IScrollView
// {
uInterfaceType* IScrollView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IScrollViewHost
// {
uInterfaceType* IScrollViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IScrollViewHost", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IShapeView
// {
uInterfaceType* IShapeView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IShapeView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface ITextEditHost
// {
uInterfaceType* ITextEditHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextEditHost", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface ITextView
// {
uInterfaceType* ITextView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.ITextView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IToggleView
// {
uInterfaceType* IToggleView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IToggleViewHost
// {
uInterfaceType* IToggleViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IToggleViewHost", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IView
// {
uInterfaceType* IView_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IView", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/Interfaces.uno
// ---------------------------------------------------------------------------

// public abstract interface IViewHost
// {
uInterfaceType* IViewHost_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.Native.IViewHost", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/NativeRootViewport.uno
// -----------------------------------------------------------------------------------

// internal sealed extern class NativeRootViewport
// {
static void NativeRootViewport_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::RootViewport_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::RootViewport_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::RootViewport_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::RootViewport_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::RootViewport_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::RootViewport_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::RootViewport_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr), offsetof(::g::Fuse::RootViewport_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(::g::Fuse::RootViewport_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(::g::Fuse::RootViewport_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), nullptr), offsetof(::g::Fuse::RootViewport_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr), offsetof(::g::Fuse::RootViewport_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr), offsetof(::g::Fuse::RootViewport_type, interface12),
        ::g::Fuse::IViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface13),
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::RootViewport_type, interface14),
        ::g::Fuse::ICommonViewport_typeof(), offsetof(::g::Fuse::RootViewport_type, interface15));
    type->SetFields(78,
        ::g::Fuse::Controls::Native::ViewHandle_typeof(), offsetof(NativeRootViewport, _rootView), 0);
}

::g::Fuse::RootViewport_type* NativeRootViewport_typeof()
{
    static uSStrong< ::g::Fuse::RootViewport_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::RootViewport_typeof();
    options.FieldCount = 79;
    options.InterfaceCount = 16;
    options.ObjectSize = sizeof(NativeRootViewport);
    options.TypeSize = sizeof(::g::Fuse::RootViewport_type);
    type = (::g::Fuse::RootViewport_type*)uClassType::New("Fuse.Controls.Native.NativeRootViewport", options);
    type->fp_build_ = NativeRootViewport_build;
    type->interface14.fp_Dispose = (void(*)(uObject*))::g::Fuse::RootViewport__UnoIDisposableDispose_fn;
    type->interface13.fp_PointToWorldRay = (void(*)(uObject*, ::g::Uno::Float2*, ::g::Fuse::Ray*))::g::Fuse::RootViewport__PointToWorldRay_fn;
    type->interface13.fp_WorldToLocalRay = (void(*)(uObject*, uObject*, ::g::Fuse::Ray*, ::g::Fuse::Visual*, ::g::Fuse::Ray*))::g::Fuse::RootViewport__WorldToLocalRay_fn;
    type->interface15.fp_get_PixelsPerPoint = (void(*)(uObject*, float*))::g::Fuse::RootViewport__get_PixelsPerPoint_fn;
    type->interface15.fp_get_Size = (void(*)(uObject*, ::g::Uno::Float2*))::g::Fuse::RootViewport__get_Size_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView)
void NativeRootViewport__ctor_5_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    __this->ctor_5(rootView);
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView)
void NativeRootViewport__New4_fn(::g::Fuse::Controls::Native::ViewHandle* rootView, NativeRootViewport** __retval)
{
    *__retval = NativeRootViewport::New4(rootView);
}

// public Fuse.Controls.Native.ViewHandle get_RootView()
void NativeRootViewport__get_RootView_fn(NativeRootViewport* __this, ::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = __this->RootView();
}

// public NativeRootViewport(Fuse.Controls.Native.ViewHandle rootView) [instance]
void NativeRootViewport::ctor_5(::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    ctor_3();
    _rootView = rootView;
}

// public Fuse.Controls.Native.ViewHandle get_RootView() [instance]
::g::Fuse::Controls::Native::ViewHandle* NativeRootViewport::RootView()
{
    return _rootView;
}

// public NativeRootViewport New(Fuse.Controls.Native.ViewHandle rootView) [static]
NativeRootViewport* NativeRootViewport::New4(::g::Fuse::Controls::Native::ViewHandle* rootView)
{
    NativeRootViewport* obj2 = (NativeRootViewport*)uNew(NativeRootViewport_typeof());
    obj2->ctor_5(rootView);
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/NativeRenderer.uno
// -------------------------------------------------------------------------------

// public sealed extern class NativeViewRenderer
// {
static void NativeViewRenderer_build(uType* type)
{
    ::TYPES[5] = ::g::Java::Object_typeof();
    type->SetDependencies(
        ::g::Fuse::Common::Blitter_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(NativeViewRenderer_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(NativeViewRenderer, _pixelBuffer), 0,
        ::g::OpenGL::GLTextureHandle_typeof(), offsetof(NativeViewRenderer, _textureHandle), 0,
        ::g::Uno::Bool_typeof(), offsetof(NativeViewRenderer, _valid), 0,
        ::g::Uno::Int2_typeof(), offsetof(NativeViewRenderer, _prevSize), 0);
}

NativeViewRenderer_type* NativeViewRenderer_typeof()
{
    static uSStrong<NativeViewRenderer_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(NativeViewRenderer);
    options.TypeSize = sizeof(NativeViewRenderer_type);
    type = (NativeViewRenderer_type*)uClassType::New("Fuse.Controls.Native.NativeViewRenderer", options);
    type->fp_build_ = NativeViewRenderer_build;
    type->fp_ctor_ = (void*)NativeViewRenderer__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))NativeViewRenderer__Dispose_fn;
    return type;
}

// public generated NativeViewRenderer()
void NativeViewRenderer__ctor__fn(NativeViewRenderer* __this)
{
    __this->ctor_();
}

// private static extern Java.Object AllocPixelBuffer(int w, int h)
void NativeViewRenderer__AllocPixelBuffer_fn(int32_t* w, int32_t* h, ::g::Java::Object** __retval)
{
    *__retval = NativeViewRenderer::AllocPixelBuffer(*w, *h);
}

// public void Dispose()
void NativeViewRenderer__Dispose_fn(NativeViewRenderer* __this)
{
    __this->Dispose();
}

// public void Draw(Fuse.Controls.Native.ViewHandle viewHandle, float4x4 localToClipTransform, float2 position, float2 size, float density)
void NativeViewRenderer__Draw_fn(NativeViewRenderer* __this, ::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4* localToClipTransform, ::g::Uno::Float2* position, ::g::Uno::Float2* size, float* density)
{
    __this->Draw(viewHandle, *localToClipTransform, *position, *size, *density);
}

// private static extern void FreePixelBuffer(Java.Object bitmap)
void NativeViewRenderer__FreePixelBuffer_fn(::g::Java::Object* bitmap)
{
    NativeViewRenderer::FreePixelBuffer(bitmap);
}

// public void Invalidate()
void NativeViewRenderer__Invalidate_fn(NativeViewRenderer* __this)
{
    __this->Invalidate();
}

// public generated NativeViewRenderer New()
void NativeViewRenderer__New1_fn(NativeViewRenderer** __retval)
{
    *__retval = NativeViewRenderer::New1();
}

// private void ReleaseResources()
void NativeViewRenderer__ReleaseResources_fn(NativeViewRenderer* __this)
{
    __this->ReleaseResources();
}

// private static extern void Upload(Java.Object viewHandle, Java.Object pixelBuffer, bool reuse, int w, int h)
void NativeViewRenderer__Upload_fn(::g::Java::Object* viewHandle, ::g::Java::Object* pixelBuffer, bool* reuse, int32_t* w, int32_t* h)
{
    NativeViewRenderer::Upload(viewHandle, pixelBuffer, *reuse, *w, *h);
}

// public generated NativeViewRenderer() [instance]
void NativeViewRenderer::ctor_()
{
    _prevSize = ::g::Uno::Int2__New1(-1);
}

// public void Dispose() [instance]
void NativeViewRenderer::Dispose()
{
    ReleaseResources();
}

// public void Draw(Fuse.Controls.Native.ViewHandle viewHandle, float4x4 localToClipTransform, float2 position, float2 size, float density) [instance]
void NativeViewRenderer::Draw(::g::Fuse::Controls::Native::ViewHandle* viewHandle, ::g::Uno::Float4x4 localToClipTransform, ::g::Uno::Float2 position, ::g::Uno::Float2 size, float density)
{
    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(size, density));
    bool reuse = true;

    if (::g::Uno::Int2__op_Inequality(_prevSize, pixelSize))
    {
        ReleaseResources();
        _textureHandle = ::g::OpenGL::GL::CreateTexture();
        _pixelBuffer = NativeViewRenderer::AllocPixelBuffer(pixelSize.X, pixelSize.Y);
        _prevSize = pixelSize;
        reuse = false;
        _valid = false;
    }

    if (!_valid)
    {
        ::g::OpenGL::GL::BindTexture(3553, _textureHandle);
        NativeViewRenderer::Upload(uPtr(viewHandle)->NativeHandle, uCast< ::g::Java::Object*>(_pixelBuffer, ::TYPES[5/*Java.Object*/]), reuse, pixelSize.X, pixelSize.Y);
        ::g::OpenGL::GL::BindTexture(3553, ::g::OpenGL::GLTextureHandle::Zero_);
        _valid = true;
    }

    uPtr(::g::Fuse::Common::Blitter::Singleton())->Blit1(::g::Uno::Graphics::Texture2D::New2(_textureHandle, pixelSize, 1, 3), ::g::Uno::Rect__New2(position, size), localToClipTransform, 1.0f, false, 0);
}

// public void Invalidate() [instance]
void NativeViewRenderer::Invalidate()
{
    _valid = false;
}

// private void ReleaseResources() [instance]
void NativeViewRenderer::ReleaseResources()
{
    if (::g::OpenGL::GLTextureHandle::op_Inequality(_textureHandle, ::g::OpenGL::GLTextureHandle::Zero_))
    {
        ::g::OpenGL::GL::DeleteTexture(_textureHandle);
        _textureHandle = ::g::OpenGL::GLTextureHandle::Zero_;
    }

    if (_pixelBuffer != nullptr)
    {
        NativeViewRenderer::FreePixelBuffer(uCast< ::g::Java::Object*>(_pixelBuffer, ::TYPES[5/*Java.Object*/]));
        _pixelBuffer = nullptr;
    }
}

// private static extern Java.Object AllocPixelBuffer(int w, int h) [static]
::g::Java::Object* NativeViewRenderer::AllocPixelBuffer(int32_t w, int32_t h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AllocPixelBuffer254", "(II)Ljava/lang/Object;");
        int32_t _uw=w;
        jint _w = (jint)_uw;
        int32_t _uh=h;
        jint _h = (jint)_uh;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_w,_h);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static extern void FreePixelBuffer(Java.Object bitmap) [static]
void NativeViewRenderer::FreePixelBuffer(::g::Java::Object* bitmap)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "FreePixelBuffer255", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubitmap=bitmap;
        jobject _bitmap = (_ubitmap==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubitmap, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bitmap);
        
        if (_bitmap!=nullptr) { U_JNIVAR->DeleteLocalRef(_bitmap); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated NativeViewRenderer New() [static]
NativeViewRenderer* NativeViewRenderer::New1()
{
    NativeViewRenderer* obj1 = (NativeViewRenderer*)uNew(NativeViewRenderer_typeof());
    obj1->ctor_();
    return obj1;
}

// private static extern void Upload(Java.Object viewHandle, Java.Object pixelBuffer, bool reuse, int w, int h) [static]
void NativeViewRenderer::Upload(::g::Java::Object* viewHandle, ::g::Java::Object* pixelBuffer, bool reuse, int32_t w, int32_t h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Upload256", "(Ljava/lang/Object;Ljava/lang/Object;ZII)V");
        ::g::Java::Object* _uviewHandle=viewHandle;
        jobject _viewHandle = (_uviewHandle==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uviewHandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _upixelBuffer=pixelBuffer;
        jobject _pixelBuffer = (_upixelBuffer==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upixelBuffer, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        bool _ureuse=reuse;
        jboolean _reuse = (jboolean)_ureuse;
        int32_t _uw=w;
        jint _w = (jint)_uw;
        int32_t _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_viewHandle,_pixelBuffer,_reuse,_w,_h);
        
        if (_viewHandle!=nullptr) { U_JNIVAR->DeleteLocalRef(_viewHandle); }
        if (_pixelBuffer!=nullptr) { U_JNIVAR->DeleteLocalRef(_pixelBuffer); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Native/ImageLoader.uno
// ----------------------------------------------------------------------------

// private sealed class ImageLoader.PendingPromise
// {
static void ImageLoader__PendingPromise_build(uType* type)
{
    ::TYPES[6] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), nullptr);
    type->SetBase(::g::Uno::Threading::Promise_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), nullptr));
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Uno::Threading::Future_type, interface0));
    type->SetFields(9,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::Native::ImageHandle_typeof(), nullptr), offsetof(ImageLoader__PendingPromise, _future), 0);
}

::g::Uno::Threading::Future_type* ImageLoader__PendingPromise_typeof()
{
    static uSStrong< ::g::Uno::Threading::Future_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Threading::Promise_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageLoader__PendingPromise);
    options.TypeSize = sizeof(::g::Uno::Threading::Future_type);
    type = (::g::Uno::Threading::Future_type*)uClassType::New("Fuse.Controls.Native.ImageLoader.PendingPromise", options);
    type->fp_build_ = ImageLoader__PendingPromise_build;
    type->fp_Dispose = (void(*)(::g::Uno::Threading::Future*))ImageLoader__PendingPromise__Dispose_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ImageLoader__PendingPromise__Dispose_fn;
    return type;
}

// public PendingPromise(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future)
void ImageLoader__PendingPromise__ctor_7_fn(ImageLoader__PendingPromise* __this, ::g::Uno::Threading::Future1* future)
{
    __this->ctor_7(future);
}

// public override sealed void Dispose()
void ImageLoader__PendingPromise__Dispose_fn(ImageLoader__PendingPromise* __this)
{
    ::g::Uno::Threading::Future1__Dispose_fn(__this);
    uPtr(__this->_future)->Dispose();
}

// public PendingPromise New(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future)
void ImageLoader__PendingPromise__New5_fn(::g::Uno::Threading::Future1* future, ImageLoader__PendingPromise** __retval)
{
    *__retval = ImageLoader__PendingPromise::New5(future);
}

// private void OnResolve(Fuse.Controls.Native.ImageHandle handle)
void ImageLoader__PendingPromise__OnResolve_fn(ImageLoader__PendingPromise* __this, ::g::Fuse::Controls::Native::ImageHandle* handle)
{
    __this->OnResolve(handle);
}

// public PendingPromise(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future) [instance]
void ImageLoader__PendingPromise::ctor_7(::g::Uno::Threading::Future1* future)
{
    ctor_3();
    _future = future;
    uPtr(_future)->Then(uDelegate::New(::TYPES[6/*Uno.Action<Fuse.Controls.Native.ImageHandle>*/], (void*)ImageLoader__PendingPromise__OnResolve_fn, this));
}

// private void OnResolve(Fuse.Controls.Native.ImageHandle handle) [instance]
void ImageLoader__PendingPromise::OnResolve(::g::Fuse::Controls::Native::ImageHandle* handle)
{
    uPtr(handle)->Pin();
    ::g::Uno::Threading::Promise__Resolve_fn(this, handle);
}

// public PendingPromise New(Uno.Threading.Future<Fuse.Controls.Native.ImageHandle> future) [static]
ImageLoader__PendingPromise* ImageLoader__PendingPromise::New5(::g::Uno::Threading::Future1* future)
{
    ImageLoader__PendingPromise* obj1 = (ImageLoader__PendingPromise*)uNew(ImageLoader__PendingPromise_typeof());
    obj1->ctor_7(future);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/ViewHandle.Android.uno
// -------------------------------------------------------------------------

// internal static extern class ViewFactory
// {
static void ViewFactory_build(uType* type)
{
}

uClassType* ViewFactory_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.Native.ViewFactory", options);
    type->fp_build_ = ViewFactory_build;
    return type;
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup()
void ViewFactory__InstantiateViewGroup_fn(::g::Fuse::Controls::Native::ViewHandle** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroup();
}

// private static Java.Object InstantiateViewGroupImpl()
void ViewFactory__InstantiateViewGroupImpl_fn(::g::Java::Object** __retval)
{
    *__retval = ViewFactory::InstantiateViewGroupImpl();
}

// public static Fuse.Controls.Native.ViewHandle InstantiateViewGroup() [static]
::g::Fuse::Controls::Native::ViewHandle* ViewFactory::InstantiateViewGroup()
{
    return ::g::Fuse::Controls::Native::ViewHandle::New2(ViewFactory::InstantiateViewGroupImpl(), false);
}

// private static Java.Object InstantiateViewGroupImpl() [static]
::g::Java::Object* ViewFactory::InstantiateViewGroupImpl()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InstantiateViewGroupImpl257", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/ViewHandle.Android.uno
// -------------------------------------------------------------------------

// public extern class ViewHandle
// {
static void ViewHandle_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ViewHandle_type, interface0));
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(ViewHandle, NativeHandle), 0,
        ::g::Uno::Int2_typeof(), offsetof(ViewHandle, _size), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, NeedsInvalidation), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, IsLeafView), 0,
        ::g::Uno::Bool_typeof(), offsetof(ViewHandle, HandlesInput), 0);
}

ViewHandle_type* ViewHandle_typeof()
{
    static uSStrong<ViewHandle_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ViewHandle);
    options.TypeSize = sizeof(ViewHandle_type);
    type = (ViewHandle_type*)uClassType::New("Fuse.Controls.Native.ViewHandle", options);
    type->fp_build_ = ViewHandle_build;
    type->fp_Dispose = ViewHandle__Dispose_fn;
    type->fp_Measure = ViewHandle__Measure_fn;
    type->fp_OnSizeChanged = ViewHandle__OnSizeChanged_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))ViewHandle__ToString_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))ViewHandle__Dispose_fn;
    return type;
}

// public ViewHandle(Java.Object nativeHandle)
void ViewHandle__ctor__fn(ViewHandle* __this, ::g::Java::Object* nativeHandle)
{
    __this->ctor_(nativeHandle);
}

// public ViewHandle(Java.Object nativeHandle, bool isLeafView)
void ViewHandle__ctor_1_fn(ViewHandle* __this, ::g::Java::Object* nativeHandle, bool* isLeafView)
{
    __this->ctor_1(nativeHandle, *isLeafView);
}

// public ViewHandle(Java.Object nativeHandle, bool isLeafView, bool handlesInput)
void ViewHandle__ctor_2_fn(ViewHandle* __this, ::g::Java::Object* nativeHandle, bool* isLeafView, bool* handlesInput)
{
    __this->ctor_2(nativeHandle, *isLeafView, *handlesInput);
}

// public ViewHandle(Java.Object nativeHandle, bool isLeafView, bool handlesInput, Fuse.Controls.Native.ViewHandle.Invalidation invalidation)
void ViewHandle__ctor_3_fn(ViewHandle* __this, ::g::Java::Object* nativeHandle, bool* isLeafView, bool* handlesInput, int32_t* invalidation)
{
    __this->ctor_3(nativeHandle, *isLeafView, *handlesInput, *invalidation);
}

// public void BringToFront()
void ViewHandle__BringToFront_fn(ViewHandle* __this)
{
    __this->BringToFront();
}

// public static void CopyState(Fuse.Controls.Native.ViewHandle sourceHandle, Fuse.Controls.Native.ViewHandle destHandle)
void ViewHandle__CopyState_fn(ViewHandle* sourceHandle, ViewHandle* destHandle)
{
    ViewHandle::CopyState(sourceHandle, destHandle);
}

// public virtual void Dispose()
void ViewHandle__Dispose_fn(ViewHandle* __this)
{
}

// public string Format()
void ViewHandle__Format_fn(ViewHandle* __this, uString** __retval)
{
    *__retval = __this->Format();
}

// private static int GetMeasuredHeight(Java.Object handle)
void ViewHandle__GetMeasuredHeight_fn(::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = ViewHandle::GetMeasuredHeight(handle);
}

// private static int GetMeasuredWidth(Java.Object handle)
void ViewHandle__GetMeasuredWidth_fn(::g::Java::Object* handle, int32_t* __retval)
{
    *__retval = ViewHandle::GetMeasuredWidth(handle);
}

// public int IndexOfChild(Fuse.Controls.Native.ViewHandle childHandle)
void ViewHandle__IndexOfChild_fn(ViewHandle* __this, ViewHandle* childHandle, int32_t* __retval)
{
    *__retval = __this->IndexOfChild(childHandle);
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle)
void ViewHandle__InsertChild_fn(ViewHandle* __this, ViewHandle* childHandle)
{
    __this->InsertChild(childHandle);
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index)
void ViewHandle__InsertChild1_fn(ViewHandle* __this, ViewHandle* childHandle, int32_t* index)
{
    __this->InsertChild1(childHandle, *index);
}

// public void Invalidate()
void ViewHandle__Invalidate_fn(ViewHandle* __this)
{
    __this->Invalidate();
}

// private void InvalidateImpl()
void ViewHandle__InvalidateImpl_fn(ViewHandle* __this)
{
    __this->InvalidateImpl();
}

// public bool IsViewGroup()
void ViewHandle__IsViewGroup_fn(ViewHandle* __this, bool* __retval)
{
    *__retval = __this->IsViewGroup();
}

// public virtual float2 Measure(Fuse.LayoutParams lp, float density)
void ViewHandle__Measure_fn(ViewHandle* __this, ::g::Fuse::LayoutParams* lp, float* density, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    float density_ = *density;
    ::g::Java::Object* handle = __this->NativeHandle;
    ViewHandle::Measure1(handle, (int32_t)(lp_.X() * density_), (int32_t)(lp_.Y() * density_), lp_.HasX(), lp_.HasY());
    ::g::Uno::Float2 res = ::g::Uno::Float2__New2((float)ViewHandle::GetMeasuredWidth(handle) / density_, (float)ViewHandle::GetMeasuredHeight(handle) / density_);
    return *__retval = res, void();
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY)
void ViewHandle__Measure1_fn(::g::Java::Object* handle, int32_t* w, int32_t* h, bool* hasX, bool* hasY)
{
    ViewHandle::Measure1(handle, *w, *h, *hasX, *hasY);
}

// public ViewHandle New(Java.Object nativeHandle)
void ViewHandle__New1_fn(::g::Java::Object* nativeHandle, ViewHandle** __retval)
{
    *__retval = ViewHandle::New1(nativeHandle);
}

// public ViewHandle New(Java.Object nativeHandle, bool isLeafView)
void ViewHandle__New2_fn(::g::Java::Object* nativeHandle, bool* isLeafView, ViewHandle** __retval)
{
    *__retval = ViewHandle::New2(nativeHandle, *isLeafView);
}

// protected internal virtual void OnSizeChanged()
void ViewHandle__OnSizeChanged_fn(ViewHandle* __this)
{
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle)
void ViewHandle__RemoveChild_fn(ViewHandle* __this, ViewHandle* childHandle)
{
    __this->RemoveChild(childHandle);
}

// public void ResetLayoutParams()
void ViewHandle__ResetLayoutParams_fn(ViewHandle* __this)
{
    __this->ResetLayoutParams();
}

// public void ResetState()
void ViewHandle__ResetState_fn(ViewHandle* __this)
{
    __this->ResetState();
}

// public void SetBackgroundColor(int color)
void ViewHandle__SetBackgroundColor_fn(ViewHandle* __this, int32_t* color)
{
    __this->SetBackgroundColor(*color);
}

// public void SetClipToBounds(bool clipToBounds)
void ViewHandle__SetClipToBounds_fn(ViewHandle* __this, bool* clipToBounds)
{
    __this->SetClipToBounds(*clipToBounds);
}

// public void SetEnabled(bool value)
void ViewHandle__SetEnabled_fn(ViewHandle* __this, bool* value)
{
    __this->SetEnabled(*value);
}

// public void SetHitTestEnabled(bool enabled)
void ViewHandle__SetHitTestEnabled_fn(ViewHandle* __this, bool* enabled)
{
    __this->SetHitTestEnabled(*enabled);
}

// public void SetIsVisible(bool isVisible)
void ViewHandle__SetIsVisible_fn(ViewHandle* __this, bool* isVisible)
{
    __this->SetIsVisible(*isVisible);
}

// public void SetOpacity(float value)
void ViewHandle__SetOpacity_fn(ViewHandle* __this, float* value)
{
    __this->SetOpacity(*value);
}

// internal int2 get_Size()
void ViewHandle__get_Size_fn(ViewHandle* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// internal void set_Size(int2 value)
void ViewHandle__set_Size_fn(ViewHandle* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public override sealed string ToString()
void ViewHandle__ToString_fn(ViewHandle* __this, uString** __retval)
{
    return *__retval = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Fuse.Controls.Native.ViewHandle("), __this->Format()), uString::Const(")")), void();
}

// public void UpdateTransform(float scaleX, float scaleY, float rotation, float rotationX, float rotationY)
void ViewHandle__UpdateTransform_fn(ViewHandle* __this, float* scaleX, float* scaleY, float* rotation, float* rotationX, float* rotationY)
{
    __this->UpdateTransform(*scaleX, *scaleY, *rotation, *rotationX, *rotationY);
}

// public void UpdateViewRect(float4x4 transform, float2 size, float density)
void ViewHandle__UpdateViewRect_fn(ViewHandle* __this, ::g::Uno::Float4x4* transform, ::g::Uno::Float2* size, float* density)
{
    __this->UpdateViewRect(*transform, *size, *density);
}

// public void UpdateViewRect(int x, int y, int w, int h)
void ViewHandle__UpdateViewRect1_fn(ViewHandle* __this, int32_t* x, int32_t* y, int32_t* w, int32_t* h)
{
    __this->UpdateViewRect1(*x, *y, *w, *h);
}

// private void UpdateViewRectImpl(int x, int y, int w, int h)
void ViewHandle__UpdateViewRectImpl_fn(ViewHandle* __this, int32_t* x, int32_t* y, int32_t* w, int32_t* h)
{
    __this->UpdateViewRectImpl(*x, *y, *w, *h);
}

// public ViewHandle(Java.Object nativeHandle) [instance]
void ViewHandle::ctor_(::g::Java::Object* nativeHandle)
{
    _size = ::g::Uno::Int2__New1(0);
    ctor_2(nativeHandle, false, false);
}

// public ViewHandle(Java.Object nativeHandle, bool isLeafView) [instance]
void ViewHandle::ctor_1(::g::Java::Object* nativeHandle, bool isLeafView)
{
    _size = ::g::Uno::Int2__New1(0);
    ctor_2(nativeHandle, isLeafView, false);
}

// public ViewHandle(Java.Object nativeHandle, bool isLeafView, bool handlesInput) [instance]
void ViewHandle::ctor_2(::g::Java::Object* nativeHandle, bool isLeafView, bool handlesInput)
{
    _size = ::g::Uno::Int2__New1(0);
    ctor_3(nativeHandle, isLeafView, handlesInput, 0);
}

// public ViewHandle(Java.Object nativeHandle, bool isLeafView, bool handlesInput, Fuse.Controls.Native.ViewHandle.Invalidation invalidation) [instance]
void ViewHandle::ctor_3(::g::Java::Object* nativeHandle, bool isLeafView, bool handlesInput, int32_t invalidation)
{
    _size = ::g::Uno::Int2__New1(0);
    NativeHandle = nativeHandle;
    IsLeafView = isLeafView;
    HandlesInput = handlesInput;
    NeedsInvalidation = (invalidation == 1);
}

// public void BringToFront() [instance]
void ViewHandle::BringToFront()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "BringToFront258", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public string Format() [instance]
uString* ViewHandle::Format()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Format261", "(Lcom/uno/UnoObject;)Ljava/lang/String;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (__jresult!=nullptr && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public int IndexOfChild(Fuse.Controls.Native.ViewHandle childHandle) [instance]
int32_t ViewHandle::IndexOfChild(ViewHandle* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "IndexOfChild264", "(Lcom/uno/UnoObject;Lcom/uno/UnoObject;)I");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ViewHandle* _uchildHandle=childHandle;
        jobject _childHandle = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uchildHandle);
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_this_,_childHandle);
        int32_t __result = (int32_t)__jresult;
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_childHandle!=nullptr) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle) [instance]
void ViewHandle::InsertChild(ViewHandle* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InsertChild265", "(Lcom/uno/UnoObject;Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ViewHandle* _uchildHandle=childHandle;
        jobject _childHandle = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uchildHandle);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_childHandle);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_childHandle!=nullptr) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void InsertChild(Fuse.Controls.Native.ViewHandle childHandle, int index) [instance]
void ViewHandle::InsertChild1(ViewHandle* childHandle, int32_t index)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InsertChild1266", "(Lcom/uno/UnoObject;Lcom/uno/UnoObject;I)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ViewHandle* _uchildHandle=childHandle;
        jobject _childHandle = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uchildHandle);
        int32_t _uindex=index;
        jint _index = (jint)_uindex;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_childHandle,_index);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_childHandle!=nullptr) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void Invalidate() [instance]
void ViewHandle::Invalidate()
{
    if (NeedsInvalidation)
        InvalidateImpl();
}

// private void InvalidateImpl() [instance]
void ViewHandle::InvalidateImpl()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InvalidateImpl267", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public bool IsViewGroup() [instance]
bool ViewHandle::IsViewGroup()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "IsViewGroup268", "(Lcom/uno/UnoObject;)Z");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_this_);
        bool __result = (bool)__jresult;
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public void RemoveChild(Fuse.Controls.Native.ViewHandle childHandle) [instance]
void ViewHandle::RemoveChild(ViewHandle* childHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RemoveChild270", "(Lcom/uno/UnoObject;Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        ViewHandle* _uchildHandle=childHandle;
        jobject _childHandle = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uchildHandle);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_childHandle);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_childHandle!=nullptr) { U_JNIVAR->DeleteLocalRef(_childHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void ResetLayoutParams() [instance]
void ViewHandle::ResetLayoutParams()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ResetLayoutParams271", "(Lcom/uno/UnoObject;)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void ResetState() [instance]
void ViewHandle::ResetState()
{
    ResetLayoutParams();
    SetOpacity(1.0f);
    SetEnabled(true);
    SetIsVisible(true);
    SetBackgroundColor(0);
    UpdateTransform(1.0f, 1.0f, 0.0f, 0.0f, 0.0f);
}

// public void SetBackgroundColor(int color) [instance]
void ViewHandle::SetBackgroundColor(int32_t color)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBackgroundColor272", "(Lcom/uno/UnoObject;I)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_color);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void SetClipToBounds(bool clipToBounds) [instance]
void ViewHandle::SetClipToBounds(bool clipToBounds)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetClipToBounds273", "(Lcom/uno/UnoObject;Z)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        bool _uclipToBounds=clipToBounds;
        jboolean _clipToBounds = (jboolean)_uclipToBounds;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_clipToBounds);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void SetEnabled(bool value) [instance]
void ViewHandle::SetEnabled(bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetEnabled274", "(Lcom/uno/UnoObject;Z)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_value);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void SetHitTestEnabled(bool enabled) [instance]
void ViewHandle::SetHitTestEnabled(bool enabled)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetHitTestEnabled275", "(Lcom/uno/UnoObject;Z)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        bool _uenabled=enabled;
        jboolean _enabled = (jboolean)_uenabled;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_enabled);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void SetIsVisible(bool isVisible) [instance]
void ViewHandle::SetIsVisible(bool isVisible)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetIsVisible276", "(Lcom/uno/UnoObject;Z)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        bool _uisVisible=isVisible;
        jboolean _isVisible = (jboolean)_uisVisible;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_isVisible);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void SetOpacity(float value) [instance]
void ViewHandle::SetOpacity(float value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetOpacity277", "(Lcom/uno/UnoObject;F)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        float _uvalue=value;
        jfloat _value = (jfloat)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_value);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// internal int2 get_Size() [instance]
::g::Uno::Int2 ViewHandle::Size()
{
    return _size;
}

// internal void set_Size(int2 value) [instance]
void ViewHandle::Size(::g::Uno::Int2 value)
{
    if (::g::Uno::Int2__op_Inequality(_size, value))
    {
        _size = value;
        OnSizeChanged();
    }
}

// public void UpdateTransform(float scaleX, float scaleY, float rotation, float rotationX, float rotationY) [instance]
void ViewHandle::UpdateTransform(float scaleX, float scaleY, float rotation, float rotationX, float rotationY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateTransform278", "(Lcom/uno/UnoObject;FFFFF)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        float _uscaleX=scaleX;
        jfloat _scaleX = (jfloat)_uscaleX;
        float _uscaleY=scaleY;
        jfloat _scaleY = (jfloat)_uscaleY;
        float _urotation=rotation;
        jfloat _rotation = (jfloat)_urotation;
        float _urotationX=rotationX;
        jfloat _rotationX = (jfloat)_urotationX;
        float _urotationY=rotationY;
        jfloat _rotationY = (jfloat)_urotationY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_scaleX,_scaleY,_rotation,_rotationX,_rotationY);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public void UpdateViewRect(float4x4 transform, float2 size, float density) [instance]
void ViewHandle::UpdateViewRect(::g::Uno::Float4x4 transform, ::g::Uno::Float2 size, float density)
{
    ::g::Uno::Float3 ind1;
    ::g::Uno::Int2 ind2;
    ::g::Uno::Float3 scale;
    ::g::Uno::Float4 rotation;
    ::g::Uno::Float3 translation;
    ::g::Uno::Matrix::Decompose(transform, &scale, &rotation, &translation);
    ind1 = ::g::Uno::Quaternion::ToEulerAngleDegrees(rotation);
    ::g::Uno::Float3 r = ::g::Uno::Float3__New2(ind1.X, ind1.Y, ind1.Z);
    ::g::Uno::Int2 actualPosition = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__New2(translation.X, translation.Y), density));
    ind2 = ::g::Uno::Int2__op_Explicit1(::g::Uno::Float2__op_Multiply1(size, density));
    Size(ind2);
    ::g::Uno::Int2 actualSize = ind2;
    UpdateTransform(scale.X, scale.Y, r.Z, r.X, r.Y);
    UpdateViewRect1(actualPosition.X, actualPosition.Y, actualSize.X, actualSize.Y);
}

// public void UpdateViewRect(int x, int y, int w, int h) [instance]
void ViewHandle::UpdateViewRect1(int32_t x, int32_t y, int32_t w, int32_t h)
{
    Size(::g::Uno::Int2__New2(w, h));
    UpdateViewRectImpl(x, y, w, h);
}

// private void UpdateViewRectImpl(int x, int y, int w, int h) [instance]
void ViewHandle::UpdateViewRectImpl(int32_t x, int32_t y, int32_t w, int32_t h)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "UpdateViewRectImpl279", "(Lcom/uno/UnoObject;IIII)V");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        int32_t _ux=x;
        jint _x = (jint)_ux;
        int32_t _uy=y;
        jint _y = (jint)_uy;
        int32_t _uw=w;
        jint _w = (jint)_uw;
        int32_t _uh=h;
        jint _h = (jint)_uh;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_this_,_x,_y,_w,_h);
        
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void CopyState(Fuse.Controls.Native.ViewHandle sourceHandle, Fuse.Controls.Native.ViewHandle destHandle) [static]
void ViewHandle::CopyState(ViewHandle* sourceHandle, ViewHandle* destHandle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CopyState260", "(Lcom/uno/UnoObject;Lcom/uno/UnoObject;)V");
        ViewHandle* _usourceHandle=sourceHandle;
        jobject _sourceHandle = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_usourceHandle);
        ViewHandle* _udestHandle=destHandle;
        jobject _destHandle = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_udestHandle);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_sourceHandle,_destHandle);
        
        if (_sourceHandle!=nullptr) { U_JNIVAR->DeleteLocalRef(_sourceHandle); }
        if (_destHandle!=nullptr) { U_JNIVAR->DeleteLocalRef(_destHandle); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static int GetMeasuredHeight(Java.Object handle) [static]
int32_t ViewHandle::GetMeasuredHeight(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredHeight262", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_handle!=nullptr) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static int GetMeasuredWidth(Java.Object handle) [static]
int32_t ViewHandle::GetMeasuredWidth(::g::Java::Object* handle)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetMeasuredWidth263", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_handle);
        int32_t __result = (int32_t)__jresult;
        if (_handle!=nullptr) { U_JNIVAR->DeleteLocalRef(_handle); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void Measure(Java.Object handle, int w, int h, bool hasX, bool hasY) [static]
void ViewHandle::Measure1(::g::Java::Object* handle, int32_t w, int32_t h, bool hasX, bool hasY)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Measure1269", "(Ljava/lang/Object;IIZZ)V");
        ::g::Java::Object* _uhandle=handle;
        jobject _handle = (_uhandle==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uhandle, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uw=w;
        jint _w = (jint)_uw;
        int32_t _uh=h;
        jint _h = (jint)_uh;
        bool _uhasX=hasX;
        jboolean _hasX = (jboolean)_uhasX;
        bool _uhasY=hasY;
        jboolean _hasY = (jboolean)_uhasY;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_handle,_w,_h,_hasX,_hasY);
        
        if (_handle!=nullptr) { U_JNIVAR->DeleteLocalRef(_handle); }
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public ViewHandle New(Java.Object nativeHandle) [static]
ViewHandle* ViewHandle::New1(::g::Java::Object* nativeHandle)
{
    ViewHandle* obj3 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj3->ctor_(nativeHandle);
    return obj3;
}

// public ViewHandle New(Java.Object nativeHandle, bool isLeafView) [static]
ViewHandle* ViewHandle::New2(::g::Java::Object* nativeHandle, bool isLeafView)
{
    ViewHandle* obj4 = (ViewHandle*)uNew(ViewHandle_typeof());
    obj4->ctor_1(nativeHandle, isLeafView);
    return obj4;
}
// }

}}}} // ::g::Fuse::Controls::Native
