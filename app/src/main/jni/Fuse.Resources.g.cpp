// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Experimental.Http.Htt-c2183008.h>
#include <Experimental.Http.HttpLoader.h>
#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.GraphicsWorker.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Resources.CachePolicy.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.DisposalRequest.h>
#include <Fuse.Resources.Exif.ExifData.h>
#include <Fuse.Resources.Exif.I-84c031e4.h>
#include <Fuse.Resources.FileIm-a3e39d55.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.FileIm-bcb6ec16.h>
#include <Fuse.Resources.FileResource.h>
#include <Fuse.Resources.HttpIm-21bc9aeb.h>
#include <Fuse.Resources.HttpIm-878a5c1.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageB-7ec91f9.h>
#include <Fuse.Resources.ImageS-a54f660e.h>
#include <Fuse.Resources.ImageS-b7d0348a.h>
#include <Fuse.Resources.ImageS-bba1528c.h>
#include <Fuse.Resources.ImageS-e0decf16.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.IMemoryResource.h>
#include <Fuse.Resources.ISoftDisposable.h>
#include <Fuse.Resources.Loadin-acdc1d1.h>
#include <Fuse.Resources.Loadin-cbb8d086.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiD-98770b5f.h>
#include <Fuse.Resources.ProxyI-de5d6023.h>
#include <Fuse.Resources.Resour-29438687.h>
#include <Fuse.Resources.System-eb6e4d06.h>
#include <Fuse.Resources.Textur-ad935c6c.h>
#include <Fuse.Scripting.IEvent-1effd56d.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <jni.h>
#include <OpenGL.GL.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Action3-3.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--132bd82f.h>
#include <Uno.Collections.Obser-3075b154.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.Utils.Te-f6eb538b.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.Stream.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.FileSource.h>
#include <Uno.WeakReference-1.h>
#include <Uno/Graphics/GLHelper.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[21];
static uType* TYPES[33];

namespace g{
namespace Fuse{
namespace Resources{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/HttpImageSource.uno
// -----------------------------------------------------------------------------------

// public enum CachePolicy
uEnumType* CachePolicy_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Resources.CachePolicy", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Default", 0LL,
        "AlwaysUseLocalCache", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/LoadingImageSource.uno
// --------------------------------------------------------------------------------------

// protected enum LoadingImageSource.CleanupReason
uEnumType* LoadingImageSource__CleanupReason_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Resources.LoadingImageSource.CleanupReason", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Normal", 0LL,
        "Failed", 1LL,
        "Disposed", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/DisposalManager.uno
// ---------------------------------------------------------------------------------

// internal static class DisposalManager
// {
// static generated DisposalManager()
static void DisposalManager__cctor__fn(uType* __type)
{
    DisposalManager::_items_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/]));
    DisposalManager::_softDisposables_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/]));
}

static void DisposalManager_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::IMemoryResource_typeof(), nullptr);
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Resources::ISoftDisposable_typeof(), nullptr);
    ::TYPES[2] = ::g::Fuse::Resources::IMemoryResource_typeof();
    ::TYPES[3] = ::g::Fuse::Resources::ISoftDisposable_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.List<Fuse.Resources.IMemoryResource>*/], (uintptr_t)&DisposalManager::_items_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&DisposalManager::_actionAdded_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&DisposalManager::_disposeAt_, uFieldFlagsStatic,
        ::TYPES[1/*Uno.Collections.List<Fuse.Resources.ISoftDisposable>*/], (uintptr_t)&DisposalManager::_softDisposables_, uFieldFlagsStatic);
}

uClassType* DisposalManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.DisposalManager", options);
    type->fp_build_ = DisposalManager_build;
    type->fp_cctor_ = DisposalManager__cctor__fn;
    return type;
}

// public static void Add(Fuse.Resources.IMemoryResource item)
void DisposalManager__Add_fn(uObject* item)
{
    DisposalManager::Add(item);
}

// public static void Add(Fuse.Resources.ISoftDisposable item)
void DisposalManager__Add1_fn(uObject* item)
{
    DisposalManager::Add1(item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr)
void DisposalManager__Clean_fn(int32_t* dr)
{
    DisposalManager::Clean(*dr);
}

// public static void Remove(Fuse.Resources.IMemoryResource item)
void DisposalManager__Remove_fn(uObject* item)
{
    DisposalManager::Remove(item);
}

// private static void Update()
void DisposalManager__Update_fn()
{
    DisposalManager::Update();
}

// private static void VerifyAttach()
void DisposalManager__VerifyAttach_fn()
{
    DisposalManager::VerifyAttach();
}

uSStrong< ::g::Uno::Collections::List*> DisposalManager::_items_;
bool DisposalManager::_actionAdded_;
int32_t DisposalManager::_disposeAt_;
uSStrong< ::g::Uno::Collections::List*> DisposalManager::_softDisposables_;

// public static void Add(Fuse.Resources.IMemoryResource item) [static]
void DisposalManager::Add(uObject* item)
{
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_items_), item);
    DisposalManager::VerifyAttach();
}

// public static void Add(Fuse.Resources.ISoftDisposable item) [static]
void DisposalManager::Add1(uObject* item)
{
    DisposalManager_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(DisposalManager::_softDisposables_), item);
}

// public static void Clean(Fuse.Resources.DisposalRequest dr) [static]
void DisposalManager::Clean(int32_t dr)
{
    DisposalManager_typeof()->Init();
    uObject* ret1;
    uObject* ret2;

    for (int32_t i = uPtr(DisposalManager::_items_)->Count() - 1; i >= 0; --i)
    {
        if (i >= uPtr(DisposalManager::_items_)->Count())
            continue;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items_), uCRef<int32_t>(i), &ret1), ret1);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[2/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(dr, item))
            continue;

        uPtr(DisposalManager::_items_)->RemoveAt(i);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[2/*Fuse.Resources.IMemoryResource*/]));
    }

    if ((dr == 1) || (dr == 2))

        for (int32_t i1 = 0; i1 < uPtr(DisposalManager::_softDisposables_)->Count(); ++i1)
            ::g::Fuse::Resources::ISoftDisposable::SoftDispose(uInterface(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_softDisposables_), uCRef<int32_t>(i1), &ret2), ret2)), ::TYPES[3/*Fuse.Resources.ISoftDisposable*/]));
}

// public static void Remove(Fuse.Resources.IMemoryResource item) [static]
void DisposalManager::Remove(uObject* item)
{
    DisposalManager_typeof()->Init();
    bool ret3;

    if ((::g::Uno::Collections::List__Remove_fn(uPtr(DisposalManager::_items_), item, &ret3), ret3))
        DisposalManager::VerifyAttach();
}

// private static void Update() [static]
void DisposalManager::Update()
{
    DisposalManager_typeof()->Init();
    uObject* ret5;

    for (int32_t i = 0; i < 2; ++i)
    {
        if (uPtr(DisposalManager::_items_)->Count() == 0)
            return;

        DisposalManager::_disposeAt_++;

        if (DisposalManager::_disposeAt_ >= uPtr(DisposalManager::_items_)->Count())
            DisposalManager::_disposeAt_ = 0;

        uObject* item = (::g::Uno::Collections::List__get_Item_fn(uPtr(DisposalManager::_items_), uCRef<int32_t>(DisposalManager::_disposeAt_), &ret5), ret5);

        if (!uPtr(::g::Fuse::Resources::IMemoryResource::MemoryPolicy(uInterface(uPtr(item), ::TYPES[2/*Fuse.Resources.IMemoryResource*/])))->ShouldSoftDispose(0, item))
            continue;

        uPtr(DisposalManager::_items_)->RemoveAt(DisposalManager::_disposeAt_);
        ::g::Fuse::Resources::IMemoryResource::SoftDispose(uInterface(uPtr(item), ::TYPES[2/*Fuse.Resources.IMemoryResource*/]));
    }
}

// private static void VerifyAttach() [static]
void DisposalManager::VerifyAttach()
{
    DisposalManager_typeof()->Init();
    bool on = uPtr(DisposalManager::_items_)->Count() > 0;

    if (on == DisposalManager::_actionAdded_)
        return;

    if (on)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);
    else
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)DisposalManager__Update_fn), 0);

    DisposalManager::_actionAdded_ = on;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/IDeferredDisposable.uno
// -------------------------------------------------------------------------------------

// public enum DisposalRequest
uEnumType* DisposalRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Resources.DisposalRequest", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Regular", 0LL,
        "Background", 1LL,
        "LowMemory", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/FileImageSource.uno
// -----------------------------------------------------------------------------------

// public sealed class FileImageSource
// {
static void FileImageSource_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::UX::FileSource_typeof();
    ::TYPES[6] = ::g::Fuse::Resources::FileImageSourceImpl_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::FileImageSourceCache_typeof());
    type->SetFields(4,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(FileImageSource, _proxy), 0,
        ::g::Uno::Int2_typeof(), offsetof(FileImageSource, _TargetSize), 0);
}

::g::Fuse::Resources::ImageSource_type* FileImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.FileImageSource", options);
    type->fp_build_ = FileImageSource_build;
    type->fp_ctor_ = (void*)FileImageSource__New2_fn;
    type->fp_GetBytes = (void(*)(::g::Fuse::Resources::ImageSource*, uArray**))FileImageSource__GetBytes_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))FileImageSource__GetTexture_fn;
    type->fp_Load = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__Load_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))FileImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))FileImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))FileImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))FileImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))FileImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))FileImageSource__get_State_fn;
    return type;
}

// public FileImageSource()
void FileImageSource__ctor_2_fn(FileImageSource* __this)
{
    __this->ctor_2();
}

// public FileImageSource(Uno.UX.FileSource file)
void FileImageSource__ctor_3_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* file)
{
    __this->ctor_3(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value)
void FileImageSource__set_DefaultPolicy_fn(FileImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density()
void FileImageSource__get_Density_fn(FileImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value)
void FileImageSource__set_Density_fn(FileImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public Uno.UX.FileSource get_File()
void FileImageSource__get_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public void set_File(Uno.UX.FileSource value)
void FileImageSource__set_File_fn(FileImageSource* __this, ::g::Uno::UX::FileSource* value)
{
    __this->File(value);
}

// public override sealed byte[] GetBytes()
void FileImageSource__GetBytes_fn(FileImageSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetBytes(), void();
}

// public override sealed texture2D GetTexture()
void FileImageSource__GetTexture_fn(FileImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public override sealed void Load()
void FileImageSource__Load_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->Load();
}

// public FileImageSource New()
void FileImageSource__New2_fn(FileImageSource** __retval)
{
    *__retval = FileImageSource::New2();
}

// public FileImageSource New(Uno.UX.FileSource file)
void FileImageSource__New3_fn(::g::Uno::UX::FileSource* file, FileImageSource** __retval)
{
    *__retval = FileImageSource::New3(file);
}

// protected override sealed void OnPinChanged()
void FileImageSource__OnPinChanged_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation()
void FileImageSource__get_Orientation_fn(FileImageSource* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize()
void FileImageSource__get_PixelSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload()
void FileImageSource__Reload_fn(FileImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size()
void FileImageSource__get_Size_fn(FileImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity()
void FileImageSource__get_SizeDensity_fn(FileImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State()
void FileImageSource__get_State_fn(FileImageSource* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public generated int2 get_TargetSize()
void FileImageSource__get_TargetSize_fn(FileImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->TargetSize();
}

// public generated void set_TargetSize(int2 value)
void FileImageSource__set_TargetSize_fn(FileImageSource* __this, ::g::Uno::Int2* value)
{
    __this->TargetSize(*value);
}

// public FileImageSource() [instance]
void FileImageSource::ctor_2()
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// public FileImageSource(Uno.UX.FileSource file) [instance]
void FileImageSource::ctor_3(::g::Uno::UX::FileSource* file)
{
    ctor_1();
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
    File(file);
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance]
void FileImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance]
float FileImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance]
void FileImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public Uno.UX.FileSource get_File() [instance]
::g::Uno::UX::FileSource* FileImageSource::File()
{
    return (uPtr(_proxy)->Impl() == nullptr) ? uCast< ::g::Uno::UX::FileSource*>(nullptr, ::TYPES[5/*Uno.UX.FileSource*/]) : (::g::Uno::UX::FileSource*)uPtr(uAs< ::g::Fuse::Resources::FileImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[6/*Fuse.Resources.FileImageSourceImpl*/]))->File();
}

// public void set_File(Uno.UX.FileSource value) [instance]
void FileImageSource::File(::g::Uno::UX::FileSource* value)
{
    uPtr(_proxy)->Release();

    if (value == nullptr)
        return;

    ::g::Fuse::Resources::FileImageSourceImpl* bf = ::g::Fuse::Resources::FileImageSourceCache::GetFileSource(value, TargetSize());
    uPtr(_proxy)->Attach(bf);
}

// public generated int2 get_TargetSize() [instance]
::g::Uno::Int2 FileImageSource::TargetSize()
{
    return _TargetSize;
}

// public generated void set_TargetSize(int2 value) [instance]
void FileImageSource::TargetSize(::g::Uno::Int2 value)
{
    _TargetSize = value;
}

// public FileImageSource New() [static]
FileImageSource* FileImageSource::New2()
{
    FileImageSource* obj2 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}

// public FileImageSource New(Uno.UX.FileSource file) [static]
FileImageSource* FileImageSource::New3(::g::Uno::UX::FileSource* file)
{
    FileImageSource* obj1 = (FileImageSource*)uNew(FileImageSource_typeof());
    obj1->ctor_3(file);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/FileImageSource.uno
// -----------------------------------------------------------------------------------

// internal static class FileImageSourceCache
// {
// static generated FileImageSourceCache()
static void FileImageSourceCache__cctor__fn(uType* __type)
{
    FileImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[7/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/]));
}

static void FileImageSourceCache_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), nullptr), nullptr);
    ::TYPES[8] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::FileImageSourceImpl_typeof(), nullptr);
    type->SetFields(0,
        ::TYPES[7/*Uno.Collections.Dictionary<Uno.UX.FileSource, Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>>*/], (uintptr_t)&FileImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* FileImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.FileImageSourceCache", options);
    type->fp_build_ = FileImageSourceCache_build;
    type->fp_cctor_ = FileImageSourceCache__cctor__fn;
    return type;
}

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file, int2 targetSize)
void FileImageSourceCache__GetFileSource_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Int2* targetSize, ::g::Fuse::Resources::FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceCache::GetFileSource(file, *targetSize);
}

uSStrong< ::g::Uno::Collections::Dictionary*> FileImageSourceCache::_cache_;

// public static Fuse.Resources.FileImageSourceImpl GetFileSource(Uno.UX.FileSource file, int2 targetSize) [static]
::g::Fuse::Resources::FileImageSourceImpl* FileImageSourceCache::GetFileSource(::g::Uno::UX::FileSource* file, ::g::Uno::Int2 targetSize)
{
    FileImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = nullptr;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(FileImageSourceCache::_cache_), file, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::FileImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
            return his;

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(FileImageSourceCache::_cache_), file, &ret2);
    }

    ::g::Fuse::Resources::FileImageSourceImpl* nv = ::g::Fuse::Resources::FileImageSourceImpl::New2(file, targetSize);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(FileImageSourceCache::_cache_), file, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[8/*Uno.WeakReference<Fuse.Resources.FileImageSourceImpl>*/], nv));
    return nv;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/FileImageSource.uno
// -----------------------------------------------------------------------------------

// internal sealed class FileImageSourceImpl
// {
// ~FileImageSourceImpl()
static void FileImageSourceImpl__Finalize_fn(FileImageSourceImpl* __this)
{
    uPtr(__this->_file)->remove_DataChanged(uDelegate::New(::TYPES[9/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, __this));
}

static void FileImageSourceImpl_build(uType* type)
{
    ::STRINGS[0] = uString::Const("file");
    ::STRINGS[1] = uString::Const("Loading image from file failed. ");
    ::TYPES[9] = ::g::Uno::EventHandler1_typeof()->MakeType(::g::Uno::EventArgs_typeof(), nullptr);
    ::TYPES[10] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), nullptr);
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), nullptr);
    ::TYPES[12] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(13,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileImageSourceImpl, _file), 0,
        ::g::Uno::Int2_typeof(), offsetof(FileImageSourceImpl, _targetSize), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(FileImageSourceImpl, _orientation), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* FileImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FileImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.FileImageSourceImpl", options);
    type->fp_build_ = FileImageSourceImpl_build;
    type->fp_Finalize = (void(*)(uObject*))FileImageSourceImpl__Finalize_fn;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))FileImageSourceImpl__AttemptLoad_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))FileImageSourceImpl__get_Orientation_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public FileImageSourceImpl(Uno.UX.FileSource file, int2 targetSize)
void FileImageSourceImpl__ctor_3_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource* file, ::g::Uno::Int2* targetSize)
{
    __this->ctor_3(file, *targetSize);
}

// protected override sealed void AttemptLoad()
void FileImageSourceImpl__AttemptLoad_fn(FileImageSourceImpl* __this)
{
    if (uPtr(__this->Policy())->BundlePreload())
    {
        __this->SyncLoad();
        return;
    }

    __this->_loading = true;
    ::g::Fuse::Resources::ImageBackgroundLoad* imageBackgroundLoad = ::g::Fuse::Resources::ImageBackgroundLoad::New2(__this->_file, __this->_targetSize, uDelegate::New(::TYPES[10/*Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation>*/], (void*)FileImageSourceImpl__SuccessCallback_fn, __this), uDelegate::New(::TYPES[11/*Uno.Action<Uno.Exception>*/], (void*)FileImageSourceImpl__FailureCallback_fn, __this));
    imageBackgroundLoad->Dispatch();
    __this->OnChanged();
}

// private void FailureCallback(Uno.Exception e)
void FileImageSourceImpl__FailureCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// public Uno.UX.FileSource get_File()
void FileImageSourceImpl__get_File_fn(FileImageSourceImpl* __this, ::g::Uno::UX::FileSource** __retval)
{
    *__retval = __this->File();
}

// public FileImageSourceImpl New(Uno.UX.FileSource file, int2 targetSize)
void FileImageSourceImpl__New2_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Int2* targetSize, FileImageSourceImpl** __retval)
{
    *__retval = FileImageSourceImpl::New2(file, *targetSize);
}

// private void OnDataChanged(object s, object a)
void FileImageSourceImpl__OnDataChanged_fn(FileImageSourceImpl* __this, uObject* s, uObject* a)
{
    __this->OnDataChanged(s, a);
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation()
void FileImageSourceImpl__get_Orientation_fn(FileImageSourceImpl* __this, int32_t* __retval)
{
    return *__retval = __this->_orientation, void();
}

// private void SuccessCallback(texture2D texture, byte[] bytes, Fuse.Resources.Exif.ImageOrientation orientation)
void FileImageSourceImpl__SuccessCallback_fn(FileImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture, uArray* bytes, int32_t* orientation)
{
    __this->SuccessCallback(texture, bytes, *orientation);
}

// public void SyncLoad()
void FileImageSourceImpl__SyncLoad_fn(FileImageSourceImpl* __this)
{
    __this->SyncLoad();
}

// public FileImageSourceImpl(Uno.UX.FileSource file, int2 targetSize) [instance]
void FileImageSourceImpl::ctor_3(::g::Uno::UX::FileSource* file, ::g::Uno::Int2 targetSize)
{
    ctor_2();

    if (file == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"file"*/]));

    _file = file;
    _targetSize = targetSize;
    uPtr(_file)->add_DataChanged(uDelegate::New(::TYPES[9/*Uno.EventHandler<Uno.EventArgs>*/], (void*)FileImageSourceImpl__OnDataChanged_fn, this));
}

// private void FailureCallback(Uno.Exception e) [instance]
void FileImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    _loading = false;
    Cleanup(1);
    OnError(::g::Uno::String::op_Addition2(::STRINGS[1/*"Loading ima...*/], uPtr(e)->Message()), e);
}

// public Uno.UX.FileSource get_File() [instance]
::g::Uno::UX::FileSource* FileImageSourceImpl::File()
{
    return _file;
}

// private void OnDataChanged(object s, object a) [instance]
void FileImageSourceImpl::OnDataChanged(uObject* s, uObject* a)
{
    Reload();
}

// private void SuccessCallback(texture2D texture, byte[] bytes, Fuse.Resources.Exif.ImageOrientation orientation) [instance]
void FileImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture, uArray* bytes, int32_t orientation)
{
    _loading = false;
    _orientation = orientation;
    SetTexture(texture);
    SetBytes(bytes);
}

// public void SyncLoad() [instance]
void FileImageSourceImpl::SyncLoad()
{
    if (IsLoaded())
    {
        MarkUsed();
        return;
    }

    try
    {
        {
            if (::g::Fuse::UpdateManager::CurrentStage() != 2)
            {
                try
                {
                	GLHelper::SwapBackToBackgroundSurface();
                }
                catch (const uBase::Exception &e)
                {
                	U_THROW(::g::Uno::Exception::New2(uString::Utf8(e.what())));
                }
            }

            uArray* data = uPtr(_file)->ReadAllBytes();
            data = ::g::Fuse::Resources::ImageBackgroundLoad::ResizeImage(data, _targetSize);
            _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(data).Orientation;
            SetTexture(::g::Uno::Graphics::Utils::TextureLoader::Load2D1(uPtr(_file)->Name, data));
            SetBytes(data);
            OnChanged();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        Cleanup(1);
        OnError(::g::Uno::String::op_Addition2(::STRINGS[1/*"Loading ima...*/], uPtr(e)->Message()), e);
    }
}

// public FileImageSourceImpl New(Uno.UX.FileSource file, int2 targetSize) [static]
FileImageSourceImpl* FileImageSourceImpl::New2(::g::Uno::UX::FileSource* file, ::g::Uno::Int2 targetSize)
{
    FileImageSourceImpl* obj1 = (FileImageSourceImpl*)uNew(FileImageSourceImpl_typeof());
    obj1->ctor_3(file, targetSize);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/FileResource.uno
// ------------------------------------------------------------------------------

// public sealed class FileResource
// {
static void FileResource_build(uType* type)
{
    type->SetFields(2,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FileResource, _file), 0);
}

::g::Uno::UX::FileSource_type* FileResource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FileResource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.FileResource", options);
    type->fp_build_ = FileResource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))FileResource__OpenRead_fn;
    return type;
}

// public override sealed Uno.IO.Stream OpenRead()
void FileResource__OpenRead_fn(FileResource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = uPtr(__this->_file)->OpenRead(), void();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/HttpImageSource.uno
// -----------------------------------------------------------------------------------

// public sealed class HttpImageSource
// {
static void HttpImageSource_build(uType* type)
{
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[3] = uString::Const(".jpg");
    ::STRINGS[4] = uString::Const(".png");
    ::TYPES[13] = ::g::Fuse::Resources::HttpImageSourceImpl_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::HttpImageSourceCache_typeof());
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(HttpImageSource, _diskCache), 0,
        ::g::Fuse::Resources::CachePolicy_typeof(), offsetof(HttpImageSource, _diskCachePolicy), 0,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(HttpImageSource, _proxy), 0,
        ::g::Uno::Int2_typeof(), offsetof(HttpImageSource, _TargetSize), 0);
}

::g::Fuse::Resources::ImageSource_type* HttpImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HttpImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSource", options);
    type->fp_build_ = HttpImageSource_build;
    type->fp_GetBytes = (void(*)(::g::Fuse::Resources::ImageSource*, uArray**))HttpImageSource__GetBytes_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))HttpImageSource__GetTexture_fn;
    type->fp_Load = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__Load_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))HttpImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))HttpImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))HttpImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))HttpImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))HttpImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))HttpImageSource__get_State_fn;
    return type;
}

// public void ClearCache()
void HttpImageSource__ClearCache_fn(HttpImageSource* __this)
{
    __this->ClearCache();
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value)
void HttpImageSource__set_DefaultPolicy_fn(HttpImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->DefaultPolicy(value);
}

// public float get_Density()
void HttpImageSource__get_Density_fn(HttpImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value)
void HttpImageSource__set_Density_fn(HttpImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public bool get_DiskCache()
void HttpImageSource__get_DiskCache_fn(HttpImageSource* __this, bool* __retval)
{
    *__retval = __this->DiskCache();
}

// public void set_DiskCache(bool value)
void HttpImageSource__set_DiskCache_fn(HttpImageSource* __this, bool* value)
{
    __this->DiskCache(*value);
}

// public Fuse.Resources.CachePolicy get_DiskCachePolicy()
void HttpImageSource__get_DiskCachePolicy_fn(HttpImageSource* __this, int32_t* __retval)
{
    *__retval = __this->DiskCachePolicy();
}

// public void set_DiskCachePolicy(Fuse.Resources.CachePolicy value)
void HttpImageSource__set_DiskCachePolicy_fn(HttpImageSource* __this, int32_t* value)
{
    __this->DiskCachePolicy(*value);
}

// public override sealed byte[] GetBytes()
void HttpImageSource__GetBytes_fn(HttpImageSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetBytes(), void();
}

// public override sealed texture2D GetTexture()
void HttpImageSource__GetTexture_fn(HttpImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public override sealed void Load()
void HttpImageSource__Load_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->Load();
}

// protected override sealed void OnPinChanged()
void HttpImageSource__OnPinChanged_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation()
void HttpImageSource__get_Orientation_fn(HttpImageSource* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize()
void HttpImageSource__get_PixelSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload()
void HttpImageSource__Reload_fn(HttpImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// public override sealed float2 get_Size()
void HttpImageSource__get_Size_fn(HttpImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity()
void HttpImageSource__get_SizeDensity_fn(HttpImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State()
void HttpImageSource__get_State_fn(HttpImageSource* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// public generated int2 get_TargetSize()
void HttpImageSource__get_TargetSize_fn(HttpImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->TargetSize();
}

// public generated void set_TargetSize(int2 value)
void HttpImageSource__set_TargetSize_fn(HttpImageSource* __this, ::g::Uno::Int2* value)
{
    __this->TargetSize(*value);
}

// public string get_Url()
void HttpImageSource__get_Url_fn(HttpImageSource* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public void set_Url(string value)
void HttpImageSource__set_Url_fn(HttpImageSource* __this, uString* value)
{
    __this->Url(value);
}

// public void ClearCache() [instance]
void HttpImageSource::ClearCache()
{
    if (::g::Uno::String::op_Inequality(Url(), ::STRINGS[2/*""*/]))
    {
        uString* filenameBase = ::g::Fuse::Resources::HttpImageSourceCache::GetFilenameBase(Url());
        uString* filename = ::g::Uno::String::op_Addition2(filenameBase, ::STRINGS[3/*".jpg"*/]);

        if (::g::Uno::IO::File::Exists(filename))
            ::g::Uno::IO::File::Delete(filename);

        filename = ::g::Uno::String::op_Addition2(filenameBase, ::STRINGS[4/*".png"*/]);

        if (::g::Uno::IO::File::Exists(filename))
            ::g::Uno::IO::File::Delete(filename);
    }
}

// public void set_DefaultPolicy(Fuse.Resources.MemoryPolicy value) [instance]
void HttpImageSource::DefaultPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    uPtr(_proxy)->DefaultSetPolicy(value);
}

// public float get_Density() [instance]
float HttpImageSource::Density()
{
    return uPtr(_proxy)->Density();
}

// public void set_Density(float value) [instance]
void HttpImageSource::Density(float value)
{
    uPtr(_proxy)->Density(value);
}

// public bool get_DiskCache() [instance]
bool HttpImageSource::DiskCache()
{
    return _diskCache;
}

// public void set_DiskCache(bool value) [instance]
void HttpImageSource::DiskCache(bool value)
{
    _diskCache = value;
}

// public Fuse.Resources.CachePolicy get_DiskCachePolicy() [instance]
int32_t HttpImageSource::DiskCachePolicy()
{
    return _diskCachePolicy;
}

// public void set_DiskCachePolicy(Fuse.Resources.CachePolicy value) [instance]
void HttpImageSource::DiskCachePolicy(int32_t value)
{
    _diskCachePolicy = value;
}

// public generated int2 get_TargetSize() [instance]
::g::Uno::Int2 HttpImageSource::TargetSize()
{
    return _TargetSize;
}

// public generated void set_TargetSize(int2 value) [instance]
void HttpImageSource::TargetSize(::g::Uno::Int2 value)
{
    _TargetSize = value;
}

// public string get_Url() [instance]
uString* HttpImageSource::Url()
{
    return (uPtr(_proxy)->Impl() == nullptr) ? ::STRINGS[2/*""*/] : (uString*)uPtr(uAs< ::g::Fuse::Resources::HttpImageSourceImpl*>(uPtr(_proxy)->Impl(), ::TYPES[13/*Fuse.Resources.HttpImageSourceImpl*/]))->Url();
}

// public void set_Url(string value) [instance]
void HttpImageSource::Url(uString* value)
{
    uPtr(_proxy)->Release();

    if (::g::Uno::String::op_Equality(value, nullptr) || ::g::Uno::String::op_Equality(value, ::STRINGS[2/*""*/]))
        return;

    uPtr(_proxy)->Attach(::g::Fuse::Resources::HttpImageSourceCache::GetUrl(value, DiskCache(), DiskCachePolicy(), TargetSize()));
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/HttpImageSource.uno
// -----------------------------------------------------------------------------------

// internal static class HttpImageSourceCache
// {
// static generated HttpImageSourceCache()
static void HttpImageSourceCache__cctor__fn(uType* __type)
{
    HttpImageSourceCache::_cache_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[14/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/]));
}

static void HttpImageSourceCache_build(uType* type)
{
    ::STRINGS[5] = uString::Const("cached_images");
    ::TYPES[14] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), nullptr), nullptr);
    ::TYPES[15] = ::g::Uno::Int_typeof();
    ::TYPES[16] = ::g::Uno::WeakReference_typeof()->MakeType(::g::Fuse::Resources::HttpImageSourceImpl_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
    type->SetFields(0,
        ::TYPES[14/*Uno.Collections.Dictionary<string, Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>>*/], (uintptr_t)&HttpImageSourceCache::_cache_, uFieldFlagsStatic);
}

uClassType* HttpImageSourceCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.HttpImageSourceCache", options);
    type->fp_build_ = HttpImageSourceCache_build;
    type->fp_cctor_ = HttpImageSourceCache__cctor__fn;
    return type;
}

// private static string GetCacheDirectory()
void HttpImageSourceCache__GetCacheDirectory_fn(uString** __retval)
{
    *__retval = HttpImageSourceCache::GetCacheDirectory();
}

// public static string GetFilenameBase(string url)
void HttpImageSourceCache__GetFilenameBase_fn(uString* url, uString** __retval)
{
    *__retval = HttpImageSourceCache::GetFilenameBase(url);
}

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url, bool diskCache, Fuse.Resources.CachePolicy diskCachePolicy, int2 targetSize)
void HttpImageSourceCache__GetUrl_fn(uString* url, bool* diskCache, int32_t* diskCachePolicy, ::g::Uno::Int2* targetSize, ::g::Fuse::Resources::HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceCache::GetUrl(url, *diskCache, *diskCachePolicy, *targetSize);
}

uSStrong< ::g::Uno::Collections::Dictionary*> HttpImageSourceCache::_cache_;

// private static string GetCacheDirectory() [static]
uString* HttpImageSourceCache::GetCacheDirectory()
{
    HttpImageSourceCache_typeof()->Init();
    uString* path = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), ::STRINGS[5/*"cached_images"*/]);

    if (!::g::Uno::IO::Directory::Exists(path))
        ::g::Uno::IO::Directory::CreateDirectory(path);

    return path;
}

// public static string GetFilenameBase(string url) [static]
uString* HttpImageSourceCache::GetFilenameBase(uString* url)
{
    HttpImageSourceCache_typeof()->Init();
    return ::g::Uno::IO::Path::Combine(HttpImageSourceCache::GetCacheDirectory(), ::g::Uno::Int::ToString(uPtr(url)->GetHashCode(), ::TYPES[15/*int*/]));
}

// public static Fuse.Resources.HttpImageSourceImpl GetUrl(string url, bool diskCache, Fuse.Resources.CachePolicy diskCachePolicy, int2 targetSize) [static]
::g::Fuse::Resources::HttpImageSourceImpl* HttpImageSourceCache::GetUrl(uString* url, bool diskCache, int32_t diskCachePolicy, ::g::Uno::Int2 targetSize)
{
    HttpImageSourceCache_typeof()->Init();
    bool ret1;
    bool ret2;
    ::g::Uno::WeakReference* value = nullptr;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(HttpImageSourceCache::_cache_), url, (void**)(&value), &ret1), ret1))
    {
        ::g::Fuse::Resources::HttpImageSourceImpl* his;

        if (uPtr(value)->TryGetTarget((uObject**)(&his)))
        {
            if (uPtr(his)->State() == 3)
                uPtr(his)->Reload();

            return his;
        }

        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(HttpImageSourceCache::_cache_), url, &ret2);
    }

    ::g::Fuse::Resources::HttpImageSourceImpl* nv = ::g::Fuse::Resources::HttpImageSourceImpl::New2(url, diskCache, diskCachePolicy, targetSize);
    ::g::Uno::Collections::Dictionary__Add_fn(uPtr(HttpImageSourceCache::_cache_), url, (::g::Uno::WeakReference*)::g::Uno::WeakReference::New1(::TYPES[16/*Uno.WeakReference<Fuse.Resources.HttpImageSourceImpl>*/], nv));
    return nv;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/HttpImageSource.uno
// -----------------------------------------------------------------------------------

// internal sealed class HttpImageSourceImpl
// {
static void HttpImageSourceImpl_build(uType* type)
{
    ::STRINGS[6] = uString::Const("Loading image from '");
    ::STRINGS[7] = uString::Const("' failed. ");
    ::STRINGS[8] = uString::Const("Loading image from HTTP failed. ");
    ::STRINGS[9] = uString::Const("Loading image from HTTP failed with HTTP Status: ");
    ::STRINGS[10] = uString::Const(" ");
    ::STRINGS[11] = uString::Const("content-type");
    ::STRINGS[12] = uString::Const("x-missing");
    ::STRINGS[3] = uString::Const(".jpg");
    ::STRINGS[13] = uString::Const("image/jpg");
    ::STRINGS[4] = uString::Const(".png");
    ::STRINGS[14] = uString::Const("image/png");
    ::STRINGS[2] = uString::Const("");
    ::STRINGS[15] = uString::Const("' failed: ");
    ::TYPES[12] = ::g::Uno::Exception_typeof();
    ::TYPES[10] = ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), nullptr);
    ::TYPES[11] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[12/*Uno.Exception*/], nullptr);
    ::TYPES[17] = ::g::Uno::Action2_typeof()->MakeType(::g::Experimental::Http::HttpResponseHeader_typeof(), ::g::Uno::Byte_typeof()->Array(), nullptr);
    ::TYPES[18] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    type->SetDependencies(
        ::g::Fuse::Resources::HttpImageSourceCache_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(::g::Fuse::Resources::LoadingImageSource_type, interface0));
    type->SetFields(13,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl, _url), 0,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl, _filenameBase), 0,
        ::g::Uno::String_typeof(), offsetof(HttpImageSourceImpl, _contentType), 0,
        ::g::Uno::Bool_typeof(), offsetof(HttpImageSourceImpl, _diskCache), 0,
        ::g::Fuse::Resources::CachePolicy_typeof(), offsetof(HttpImageSourceImpl, _diskCachePolicy), 0,
        ::g::Uno::Int2_typeof(), offsetof(HttpImageSourceImpl, _targetSize), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(HttpImageSourceImpl, _orientation), 0);
}

::g::Fuse::Resources::LoadingImageSource_type* HttpImageSourceImpl_typeof()
{
    static uSStrong< ::g::Fuse::Resources::LoadingImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::LoadingImageSource_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(HttpImageSourceImpl);
    options.TypeSize = sizeof(::g::Fuse::Resources::LoadingImageSource_type);
    type = (::g::Fuse::Resources::LoadingImageSource_type*)uClassType::New("Fuse.Resources.HttpImageSourceImpl", options);
    type->fp_build_ = HttpImageSourceImpl_build;
    type->fp_AttemptLoad = (void(*)(::g::Fuse::Resources::LoadingImageSource*))HttpImageSourceImpl__AttemptLoad_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))HttpImageSourceImpl__get_Orientation_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))::g::Fuse::Resources::LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public HttpImageSourceImpl(string url, bool diskCache, Fuse.Resources.CachePolicy diskCachePolicy, int2 targetSize)
void HttpImageSourceImpl__ctor_3_fn(HttpImageSourceImpl* __this, uString* url, bool* diskCache, int32_t* diskCachePolicy, ::g::Uno::Int2* targetSize)
{
    __this->ctor_3(url, *diskCache, *diskCachePolicy, *targetSize);
}

// protected override sealed void AttemptLoad()
void HttpImageSourceImpl__AttemptLoad_fn(HttpImageSourceImpl* __this)
{
    try
    {
        {
            __this->_loading = true;

            if ((__this->IsFileCacheExist(&__this->_filenameBase, &__this->_contentType) && __this->_diskCache) && (__this->_diskCachePolicy == 1))
            {
                ::g::Fuse::Resources::ImageBackgroundLoad* imageBackgroundLoad = ::g::Fuse::Resources::ImageBackgroundLoad::New1(__this->setupFilename(), nullptr, __this->_diskCache, __this->_targetSize, uDelegate::New(::TYPES[10/*Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation>*/], (void*)HttpImageSourceImpl__SuccessCallback_fn, __this), uDelegate::New(::TYPES[11/*Uno.Action<Uno.Exception>*/], (void*)HttpImageSourceImpl__FailureCallback_fn, __this));
                imageBackgroundLoad->Dispatch();
            }
            else
                ::g::Experimental::Http::HttpLoader::LoadBinary(__this->Url(), __this->_diskCache, uDelegate::New(::TYPES[17/*Uno.Action<Experimental.Http.HttpResponseHeader, byte[]>*/], (void*)HttpImageSourceImpl__HttpCallback_fn, __this), uDelegate::New(::TYPES[18/*Uno.Action<string>*/], (void*)HttpImageSourceImpl__LoadFailed_fn, __this));

            __this->OnChanged();
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        __this->Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"Loading ima...*/], __this->Url()), ::STRINGS[7/*"' failed. "*/]), uPtr(e)->Message()), e);
    }
}

// private void Fail(string msg, [Uno.Exception e])
void HttpImageSourceImpl__Fail_fn(HttpImageSourceImpl* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->Fail(msg, e);
}

// private void FailureCallback(Uno.Exception e)
void HttpImageSourceImpl__FailureCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Exception* e)
{
    __this->FailureCallback(e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, byte[] data)
void HttpImageSourceImpl__HttpCallback_fn(HttpImageSourceImpl* __this, ::g::Experimental::Http::HttpResponseHeader* response, uArray* data)
{
    __this->HttpCallback(response, data);
}

// private bool IsFileCacheExist(string& filenameBase, string& contentType)
void HttpImageSourceImpl__IsFileCacheExist_fn(HttpImageSourceImpl* __this, uString** filenameBase, uString** contentType, bool* __retval)
{
    *__retval = __this->IsFileCacheExist(filenameBase, contentType);
}

// private void LoadFailed(string reason)
void HttpImageSourceImpl__LoadFailed_fn(HttpImageSourceImpl* __this, uString* reason)
{
    __this->LoadFailed(reason);
}

// public HttpImageSourceImpl New(string url, bool diskCache, Fuse.Resources.CachePolicy diskCachePolicy, int2 targetSize)
void HttpImageSourceImpl__New2_fn(uString* url, bool* diskCache, int32_t* diskCachePolicy, ::g::Uno::Int2* targetSize, HttpImageSourceImpl** __retval)
{
    *__retval = HttpImageSourceImpl::New2(url, *diskCache, *diskCachePolicy, *targetSize);
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation()
void HttpImageSourceImpl__get_Orientation_fn(HttpImageSourceImpl* __this, int32_t* __retval)
{
    return *__retval = __this->_orientation, void();
}

// private string setupFilename()
void HttpImageSourceImpl__setupFilename_fn(HttpImageSourceImpl* __this, uString** __retval)
{
    *__retval = __this->setupFilename();
}

// private void SuccessCallback(texture2D texture, byte[] bytes, Fuse.Resources.Exif.ImageOrientation orientation)
void HttpImageSourceImpl__SuccessCallback_fn(HttpImageSourceImpl* __this, ::g::Uno::Graphics::Texture2D* texture, uArray* bytes, int32_t* orientation)
{
    __this->SuccessCallback(texture, bytes, *orientation);
}

// public string get_Url()
void HttpImageSourceImpl__get_Url_fn(HttpImageSourceImpl* __this, uString** __retval)
{
    *__retval = __this->Url();
}

// public HttpImageSourceImpl(string url, bool diskCache, Fuse.Resources.CachePolicy diskCachePolicy, int2 targetSize) [instance]
void HttpImageSourceImpl::ctor_3(uString* url, bool diskCache, int32_t diskCachePolicy, ::g::Uno::Int2 targetSize)
{
    ctor_2();
    _url = url;
    _diskCache = diskCache;
    _diskCachePolicy = diskCachePolicy;
    _targetSize = targetSize;
}

// private void Fail(string msg, [Uno.Exception e]) [instance]
void HttpImageSourceImpl::Fail(uString* msg, ::g::Uno::Exception* e)
{
    Cleanup(1);
    OnError(msg, e);
}

// private void FailureCallback(Uno.Exception e) [instance]
void HttpImageSourceImpl::FailureCallback(::g::Uno::Exception* e)
{
    _loading = false;
    Fail(::g::Uno::String::op_Addition2(::STRINGS[8/*"Loading ima...*/], uPtr(e)->Message()), e);
}

// private void HttpCallback(Experimental.Http.HttpResponseHeader response, byte[] data) [instance]
void HttpImageSourceImpl::HttpCallback(::g::Experimental::Http::HttpResponseHeader* response, uArray* data)
{
    bool ret2;

    if (uPtr(response)->StatusCode() != 200)
    {
        Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition1(::STRINGS[9/*"Loading ima...*/], uBox<int32_t>(::TYPES[15/*int*/], uPtr(response)->StatusCode())), ::STRINGS[10/*" "*/]), uPtr(response)->ReasonPhrase()), nullptr);
        return;
    }

    uString* ct;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(uPtr(response)->Headers()), ::STRINGS[11/*"content-type"*/], (void**)(&ct), &ret2), ret2))
        _contentType = ::STRINGS[12/*"x-missing"*/];
    else
        _contentType = ct;

    ::g::Fuse::Resources::ImageBackgroundLoad* imageBackgroundLoad = ::g::Fuse::Resources::ImageBackgroundLoad::New1(setupFilename(), data, _diskCache, _targetSize, uDelegate::New(::TYPES[10/*Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation>*/], (void*)HttpImageSourceImpl__SuccessCallback_fn, this), uDelegate::New(::TYPES[11/*Uno.Action<Uno.Exception>*/], (void*)HttpImageSourceImpl__FailureCallback_fn, this));
    imageBackgroundLoad->Dispatch();
}

// private bool IsFileCacheExist(string& filenameBase, string& contentType) [instance]
bool HttpImageSourceImpl::IsFileCacheExist(uString** filenameBase, uString** contentType)
{
    *filenameBase = ::g::Fuse::Resources::HttpImageSourceCache::GetFilenameBase(Url());

    if (::g::Uno::IO::File::Exists(::g::Uno::String::op_Addition2(*filenameBase, ::STRINGS[3/*".jpg"*/])))
    {
        *contentType = ::STRINGS[13/*"image/jpg"*/];
        return true;
    }

    if (::g::Uno::IO::File::Exists(::g::Uno::String::op_Addition2(*filenameBase, ::STRINGS[4/*".png"*/])))
    {
        *contentType = ::STRINGS[14/*"image/png"*/];
        return true;
    }

    *contentType = ::STRINGS[2/*""*/];
    return false;
}

// private void LoadFailed(string reason) [instance]
void HttpImageSourceImpl::LoadFailed(uString* reason)
{
    if (::g::Uno::String::op_Inequality(_contentType, ::STRINGS[2/*""*/]))
    {
        ::g::Fuse::Resources::ImageBackgroundLoad* imageBackgroundLoad = ::g::Fuse::Resources::ImageBackgroundLoad::New1(setupFilename(), nullptr, _diskCache, _targetSize, uDelegate::New(::TYPES[10/*Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation>*/], (void*)HttpImageSourceImpl__SuccessCallback_fn, this), uDelegate::New(::TYPES[11/*Uno.Action<Uno.Exception>*/], (void*)HttpImageSourceImpl__FailureCallback_fn, this));
        imageBackgroundLoad->Dispatch();
    }
    else
        Fail(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[6/*"Loading ima...*/], Url()), ::STRINGS[15/*"' failed: "*/]), reason), nullptr);
}

// private string setupFilename() [instance]
uString* HttpImageSourceImpl::setupFilename()
{
    if (::g::Uno::String::op_Equality(_contentType, ::STRINGS[14/*"image/png"*/]))
        return ::g::Uno::String::op_Addition2(_filenameBase, ::STRINGS[4/*".png"*/]);
    else
        return ::g::Uno::String::op_Addition2(_filenameBase, ::STRINGS[3/*".jpg"*/]);
}

// private void SuccessCallback(texture2D texture, byte[] bytes, Fuse.Resources.Exif.ImageOrientation orientation) [instance]
void HttpImageSourceImpl::SuccessCallback(::g::Uno::Graphics::Texture2D* texture, uArray* bytes, int32_t orientation)
{
    _loading = false;
    _orientation = orientation;
    SetTexture(texture);
    SetBytes(bytes);
}

// public string get_Url() [instance]
uString* HttpImageSourceImpl::Url()
{
    return _url;
}

// public HttpImageSourceImpl New(string url, bool diskCache, Fuse.Resources.CachePolicy diskCachePolicy, int2 targetSize) [static]
HttpImageSourceImpl* HttpImageSourceImpl::New2(uString* url, bool diskCache, int32_t diskCachePolicy, ::g::Uno::Int2 targetSize)
{
    HttpImageSourceImpl* obj1 = (HttpImageSourceImpl*)uNew(HttpImageSourceImpl_typeof());
    obj1->ctor_3(url, diskCache, diskCachePolicy, targetSize);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ImageBackgroundLoad.uno
// ---------------------------------------------------------------------------------------

// internal sealed class ImageBackgroundLoad
// {
static void ImageBackgroundLoad_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[12] = ::g::Uno::Exception_typeof();
    type->SetDependencies(
        ::g::Fuse::GraphicsWorker_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Uno::Action3_typeof()->MakeType(::g::Uno::Graphics::Texture2D_typeof(), ::g::Uno::Byte_typeof()->Array(), ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), nullptr), offsetof(ImageBackgroundLoad, _done), 0,
        ::g::Uno::Action1_typeof()->MakeType(::TYPES[12/*Uno.Exception*/], nullptr), offsetof(ImageBackgroundLoad, _fail), 0,
        ::TYPES[12/*Uno.Exception*/], offsetof(ImageBackgroundLoad, _exception), 0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(ImageBackgroundLoad, _orientation), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(ImageBackgroundLoad, _tex), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(ImageBackgroundLoad, _bytes), 0,
        ::g::Uno::Int2_typeof(), offsetof(ImageBackgroundLoad, _targetSize), 0,
        ::g::Uno::String_typeof(), offsetof(ImageBackgroundLoad, _filename), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageBackgroundLoad, _diskCache), 0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(ImageBackgroundLoad, _filesource), 0);
}

uType* ImageBackgroundLoad_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(ImageBackgroundLoad);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ImageBackgroundLoad", options);
    type->fp_build_ = ImageBackgroundLoad_build;
    return type;
}

// public ImageBackgroundLoad(string filename, byte[] data, bool diskCache, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail)
void ImageBackgroundLoad__ctor__fn(ImageBackgroundLoad* __this, uString* filename, uArray* data, bool* diskCache, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail)
{
    __this->ctor_(filename, data, *diskCache, *targetSize, done, fail);
}

// public ImageBackgroundLoad(Uno.UX.FileSource filesource, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail)
void ImageBackgroundLoad__ctor_1_fn(ImageBackgroundLoad* __this, ::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail)
{
    __this->ctor_1(filesource, *targetSize, done, fail);
}

// private static extern byte[] AndroidResizeImage(byte[] imageData, int desiredWidth, int desiredHeight)
void ImageBackgroundLoad__AndroidResizeImage_fn(uArray* imageData, int32_t* desiredWidth, int32_t* desiredHeight, uArray** __retval)
{
    *__retval = ImageBackgroundLoad::AndroidResizeImage(imageData, *desiredWidth, *desiredHeight);
}

// public void Dispatch()
void ImageBackgroundLoad__Dispatch_fn(ImageBackgroundLoad* __this)
{
    __this->Dispatch();
}

// public ImageBackgroundLoad New(string filename, byte[] data, bool diskCache, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail)
void ImageBackgroundLoad__New1_fn(uString* filename, uArray* data, bool* diskCache, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail, ImageBackgroundLoad** __retval)
{
    *__retval = ImageBackgroundLoad::New1(filename, data, *diskCache, *targetSize, done, fail);
}

// public ImageBackgroundLoad New(Uno.UX.FileSource filesource, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail)
void ImageBackgroundLoad__New2_fn(::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail, ImageBackgroundLoad** __retval)
{
    *__retval = ImageBackgroundLoad::New2(filesource, *targetSize, done, fail);
}

// private void ReadBytes()
void ImageBackgroundLoad__ReadBytes_fn(ImageBackgroundLoad* __this)
{
    __this->ReadBytes();
}

// public static byte[] ResizeImage(byte[] imageData, int2 targetSize)
void ImageBackgroundLoad__ResizeImage_fn(uArray* imageData, ::g::Uno::Int2* targetSize, uArray** __retval)
{
    *__retval = ImageBackgroundLoad::ResizeImage(imageData, *targetSize);
}

// private void RunTask()
void ImageBackgroundLoad__RunTask_fn(ImageBackgroundLoad* __this)
{
    __this->RunTask();
}

// private void UIDoneCallback()
void ImageBackgroundLoad__UIDoneCallback_fn(ImageBackgroundLoad* __this)
{
    __this->UIDoneCallback();
}

// private void UIFailCallback()
void ImageBackgroundLoad__UIFailCallback_fn(ImageBackgroundLoad* __this)
{
    __this->UIFailCallback();
}

// public ImageBackgroundLoad(string filename, byte[] data, bool diskCache, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [instance]
void ImageBackgroundLoad::ctor_(uString* filename, uArray* data, bool diskCache, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail)
{
    _filename = filename;
    _targetSize = targetSize;
    _bytes = data;
    _diskCache = diskCache;
    _done = done;
    _fail = fail;
}

// public ImageBackgroundLoad(Uno.UX.FileSource filesource, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [instance]
void ImageBackgroundLoad::ctor_1(::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail)
{
    _filesource = filesource;
    _filename = uPtr(_filesource)->Name;
    _targetSize = targetSize;
    _done = done;
    _fail = fail;
}

// public void Dispatch() [instance]
void ImageBackgroundLoad::Dispatch()
{
    ::g::Fuse::GraphicsWorker::Dispatch(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ImageBackgroundLoad__RunTask_fn, this));
}

// private void ReadBytes() [instance]
void ImageBackgroundLoad::ReadBytes()
{
    if (_bytes == nullptr)
    {
        if (_filesource == nullptr)
            _bytes = ::g::Uno::IO::File::ReadAllBytes(_filename);
        else
            _bytes = uPtr(_filesource)->ReadAllBytes();
    }
}

// private void RunTask() [instance]
void ImageBackgroundLoad::RunTask()
{
    try
    {
        {
            ReadBytes();
            _orientation = ::g::Fuse::Resources::Exif::ExifData__FromByteArray(_bytes).Orientation;
            _bytes = ImageBackgroundLoad::ResizeImage(_bytes, _targetSize);
            _tex = ::g::Uno::Graphics::Utils::TextureLoader::Load2D1(_filename, _bytes);

            if (_diskCache)
                ::g::Uno::IO::File::WriteAllBytes(_filename, _bytes);

            ::g::OpenGL::GL::Finish();
            ::g::Fuse::UpdateManager::PostAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ImageBackgroundLoad__UIDoneCallback_fn, this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        _exception = e;
        ::g::Fuse::UpdateManager::AddOnceAction(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)ImageBackgroundLoad__UIFailCallback_fn, this), 0);
    }
}

// private void UIDoneCallback() [instance]
void ImageBackgroundLoad::UIDoneCallback()
{
    if (::g::Uno::Delegate::op_Inequality(_done, nullptr))
        uPtr(_done)->Invoke(3, (::g::Uno::Graphics::Texture2D*)_tex, (uArray*)_bytes, uCRef<int32_t>(_orientation));
}

// private void UIFailCallback() [instance]
void ImageBackgroundLoad::UIFailCallback()
{
    if (::g::Uno::Delegate::op_Inequality(_fail, nullptr))
        uPtr(_fail)->InvokeVoid(_exception);

    _exception = nullptr;
}

// private static extern byte[] AndroidResizeImage(byte[] imageData, int desiredWidth, int desiredHeight) [static]
uArray* ImageBackgroundLoad::AndroidResizeImage(uArray* imageData, int32_t desiredWidth, int32_t desiredHeight)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AndroidResizeImage122", "(Lcom/uno/ByteArray;II)Lcom/uno/ByteArray;");
        uArray* _uimageData=imageData;
        jobject _imageData = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box1(_uimageData);
        int32_t _udesiredWidth=desiredWidth;
        jint _desiredWidth = (jint)_udesiredWidth;
        int32_t _udesiredHeight=desiredHeight;
        jint _desiredHeight = (jint)_udesiredHeight;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_imageData,_desiredWidth,_desiredHeight);
        uArray* __result = uCast<uArray*>(::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::UnBoxFreeingLocalRef(__jresult), ::g::Uno::Byte_typeof()->Array());
        if (_imageData!=nullptr) { U_JNIVAR->DeleteLocalRef(_imageData); }
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public ImageBackgroundLoad New(string filename, byte[] data, bool diskCache, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [static]
ImageBackgroundLoad* ImageBackgroundLoad::New1(uString* filename, uArray* data, bool diskCache, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail)
{
    ImageBackgroundLoad* obj2 = (ImageBackgroundLoad*)uNew(ImageBackgroundLoad_typeof());
    obj2->ctor_(filename, data, diskCache, targetSize, done, fail);
    return obj2;
}

// public ImageBackgroundLoad New(Uno.UX.FileSource filesource, int2 targetSize, Uno.Action<texture2D, byte[], Fuse.Resources.Exif.ImageOrientation> done, Uno.Action<Uno.Exception> fail) [static]
ImageBackgroundLoad* ImageBackgroundLoad::New2(::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail)
{
    ImageBackgroundLoad* obj1 = (ImageBackgroundLoad*)uNew(ImageBackgroundLoad_typeof());
    obj1->ctor_1(filesource, targetSize, done, fail);
    return obj1;
}

// public static byte[] ResizeImage(byte[] imageData, int2 targetSize) [static]
uArray* ImageBackgroundLoad::ResizeImage(uArray* imageData, ::g::Uno::Int2 targetSize)
{
    if ((targetSize.X > 0) && (targetSize.Y > 0))
        return ImageBackgroundLoad::AndroidResizeImage(imageData, targetSize.X, targetSize.Y);

    return imageData;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ImageSource.uno
// -------------------------------------------------------------------------------

// public abstract class ImageSource
// {
static void ImageSource_build(uType* type)
{
    ::STRINGS[16] = uString::Const("ImageSource error: '");
    ::STRINGS[17] = uString::Const("'");
    ::STRINGS[18] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ImageSource.uno");
    ::STRINGS[19] = uString::Const("OnError");
    ::TYPES[4] = ::g::Uno::Action_typeof();
    ::TYPES[19] = ::g::Uno::EventHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(ImageSource, _pinCount), 0,
        ::TYPES[19/*Uno.EventHandler*/], offsetof(ImageSource, Changed1), 0,
        ::TYPES[20/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(ImageSource, Error1), 0);
}

ImageSource_type* ImageSource_typeof()
{
    static uSStrong<ImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageSource);
    options.TypeSize = sizeof(ImageSource_type);
    type = (ImageSource_type*)uClassType::New("Fuse.Resources.ImageSource", options);
    type->fp_build_ = ImageSource_build;
    type->fp_Load = ImageSource__Load_fn;
    type->fp_OnPinChanged = ImageSource__OnPinChanged_fn;
    type->fp_Reload = ImageSource__Reload_fn;
    return type;
}

// protected generated ImageSource()
void ImageSource__ctor_1_fn(ImageSource* __this)
{
    __this->ctor_1();
}

// public generated void add_Changed(Uno.EventHandler value)
void ImageSource__add_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// public generated void remove_Changed(Uno.EventHandler value)
void ImageSource__remove_Changed_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value)
void ImageSource__add_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->add_Error(value);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value)
void ImageSource__remove_Error_fn(ImageSource* __this, uDelegate* value)
{
    __this->remove_Error(value);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args)
void ImageSource__FireChanged_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    __this->FireChanged(args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args)
void ImageSource__FireError_fn(ImageSource* __this, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->FireError(args);
}

// public bool get_IsPinned()
void ImageSource__get_IsPinned_fn(ImageSource* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public virtual void Load()
void ImageSource__Load_fn(ImageSource* __this)
{
}

// protected void OnChanged()
void ImageSource__OnChanged_fn(ImageSource* __this)
{
    __this->OnChanged();
}

// protected void OnError(string msg, [Uno.Exception e])
void ImageSource__OnError_fn(ImageSource* __this, uString* msg, ::g::Uno::Exception* e)
{
    __this->OnError(msg, e);
}

// protected virtual void OnPinChanged()
void ImageSource__OnPinChanged_fn(ImageSource* __this)
{
}

// public void Pin()
void ImageSource__Pin_fn(ImageSource* __this)
{
    __this->Pin();
}

// internal void ProxyChanged(object s, Uno.EventArgs a)
void ImageSource__ProxyChanged_fn(ImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyChanged(s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a)
void ImageSource__ProxyError_fn(ImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyError(s, a);
}

// public virtual void Reload()
void ImageSource__Reload_fn(ImageSource* __this)
{
}

// public void Unpin()
void ImageSource__Unpin_fn(ImageSource* __this)
{
    __this->Unpin();
}

// protected generated ImageSource() [instance]
void ImageSource::ctor_1()
{
    ctor_();
}

// public generated void add_Changed(Uno.EventHandler value) [instance]
void ImageSource::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[19/*Uno.EventHandler*/]);
}

// public generated void remove_Changed(Uno.EventHandler value) [instance]
void ImageSource::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[19/*Uno.EventHandler*/]);
}

// public generated void add_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance]
void ImageSource::add_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Error1, value), ::TYPES[20/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_Error(Fuse.Resources.ImageSourceErrorHandler value) [instance]
void ImageSource::remove_Error(uDelegate* value)
{
    Error1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Error1, value), ::TYPES[20/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// internal void FireChanged(Fuse.Resources.ImageSourceChangedArgs args) [instance]
void ImageSource::FireChanged(::g::Fuse::Resources::ImageSourceChangedArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, nullptr))
        uPtr(Changed1)->Invoke(2, this, args);
}

// internal void FireError(Fuse.Resources.ImageSourceErrorArgs args) [instance]
void ImageSource::FireError(::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, nullptr))
        uPtr(Error1)->Invoke(2, this, args);
}

// public bool get_IsPinned() [instance]
bool ImageSource::IsPinned()
{
    return _pinCount > 0;
}

// protected void OnChanged() [instance]
void ImageSource::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, nullptr))
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceChangedArgs__Post_fn, ::g::Fuse::Resources::ImageSourceChangedArgs::New2(this)), -1, 2);
}

// protected void OnError(string msg, [Uno.Exception e]) [instance]
void ImageSource::OnError(uString* msg, ::g::Uno::Exception* e)
{
    ::g::Fuse::Diagnostics::UnknownException(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::STRINGS[16/*"ImageSource...*/], msg), ::STRINGS[17/*"'"*/]), e, this, ::STRINGS[18/*"/Users/mort...*/], 111, ::STRINGS[19/*"OnError"*/]);

    if (::g::Uno::Delegate::op_Inequality(Error1, nullptr))
    {
        ::g::Fuse::Resources::ImageSourceErrorArgs* sa = ::g::Fuse::Resources::ImageSourceErrorArgs::New2(this);
        sa->Reason = msg;
        sa->ExceptionCause = e;
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[4/*Uno.Action*/], (void*)::g::Fuse::Resources::ImageSourceErrorArgs__Post_fn, sa), -1, 2);
    }
}

// public void Pin() [instance]
void ImageSource::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinChanged();
}

// internal void ProxyChanged(object s, Uno.EventArgs a) [instance]
void ImageSource::ProxyChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, nullptr))
        uPtr(Changed1)->Invoke(2, s, a);
}

// internal void ProxyError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance]
void ImageSource::ProxyError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    if (::g::Uno::Delegate::op_Inequality(Error1, nullptr))
        uPtr(Error1)->Invoke(2, s, a);
}

// public void Unpin() [instance]
void ImageSource::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnPinChanged();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ImageSource.uno
// -------------------------------------------------------------------------------

// internal sealed class ImageSourceChangedArgs
// {
static void ImageSourceChangedArgs_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageSourceChangedArgs, _imageSource), 0);
}

uType* ImageSourceChangedArgs_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ImageSourceChangedArgs);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ImageSourceChangedArgs", options);
    type->fp_build_ = ImageSourceChangedArgs_build;
    return type;
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource)
void ImageSourceChangedArgs__ctor_1_fn(ImageSourceChangedArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource)
void ImageSourceChangedArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceChangedArgs** __retval)
{
    *__retval = ImageSourceChangedArgs::New2(imageSource);
}

// internal void Post()
void ImageSourceChangedArgs__Post_fn(ImageSourceChangedArgs* __this)
{
    __this->Post();
}

// internal ImageSourceChangedArgs(Fuse.Resources.ImageSource imageSource) [instance]
void ImageSourceChangedArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance]
void ImageSourceChangedArgs::Post()
{
    uPtr(_imageSource)->FireChanged(this);
}

// internal ImageSourceChangedArgs New(Fuse.Resources.ImageSource imageSource) [static]
ImageSourceChangedArgs* ImageSourceChangedArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceChangedArgs* obj1 = (ImageSourceChangedArgs*)uNew(ImageSourceChangedArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ImageSource.uno
// -------------------------------------------------------------------------------

// public sealed class ImageSourceErrorArgs
// {
static void ImageSourceErrorArgs_build(uType* type)
{
    ::STRINGS[20] = uString::Const("reason");
    ::TYPES[21] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(ImageSourceErrorArgs_type, interface0));
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ImageSourceErrorArgs, Reason), 0,
        ::g::Uno::Exception_typeof(), offsetof(ImageSourceErrorArgs, ExceptionCause), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageSourceErrorArgs, _imageSource), 0);
}

ImageSourceErrorArgs_type* ImageSourceErrorArgs_typeof()
{
    static uSStrong<ImageSourceErrorArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::EventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ImageSourceErrorArgs);
    options.TypeSize = sizeof(ImageSourceErrorArgs_type);
    type = (ImageSourceErrorArgs_type*)uClassType::New("Fuse.Resources.ImageSourceErrorArgs", options);
    type->fp_build_ = ImageSourceErrorArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource)
void ImageSourceErrorArgs__ctor_1_fn(ImageSourceErrorArgs* __this, ::g::Fuse::Resources::ImageSource* imageSource)
{
    __this->ctor_1(imageSource);
}

// private void Fuse.Scripting.IScriptEvent.Serialize(Fuse.Scripting.IEventSerializer s)
void ImageSourceErrorArgs__FuseScriptingIScriptEventSerialize_fn(ImageSourceErrorArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[21/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[20/*"reason"*/], __this->Reason);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource)
void ImageSourceErrorArgs__New2_fn(::g::Fuse::Resources::ImageSource* imageSource, ImageSourceErrorArgs** __retval)
{
    *__retval = ImageSourceErrorArgs::New2(imageSource);
}

// internal void Post()
void ImageSourceErrorArgs__Post_fn(ImageSourceErrorArgs* __this)
{
    __this->Post();
}

// internal ImageSourceErrorArgs(Fuse.Resources.ImageSource imageSource) [instance]
void ImageSourceErrorArgs::ctor_1(::g::Fuse::Resources::ImageSource* imageSource)
{
    ctor_();
    _imageSource = imageSource;
}

// internal void Post() [instance]
void ImageSourceErrorArgs::Post()
{
    uPtr(_imageSource)->FireError(this);
}

// internal ImageSourceErrorArgs New(Fuse.Resources.ImageSource imageSource) [static]
ImageSourceErrorArgs* ImageSourceErrorArgs::New2(::g::Fuse::Resources::ImageSource* imageSource)
{
    ImageSourceErrorArgs* obj1 = (ImageSourceErrorArgs*)uNew(ImageSourceErrorArgs_typeof());
    obj1->ctor_1(imageSource);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ImageSource.uno
// -------------------------------------------------------------------------------

// public delegate void ImageSourceErrorHandler(object sender, Fuse.Resources.ImageSourceErrorArgs args)
uDelegateType* ImageSourceErrorHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Resources.ImageSourceErrorHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Resources::ImageSourceErrorArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ImageSource.uno
// -------------------------------------------------------------------------------

// public enum ImageSourceState
uEnumType* ImageSourceState_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Resources.ImageSourceState", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Pending", 0LL,
        "Ready", 1LL,
        "Loading", 2LL,
        "Failed", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/MemoryPolicy.uno
// ------------------------------------------------------------------------------

// internal abstract interface IMemoryResource
// {
uInterfaceType* IMemoryResource_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Resources.IMemoryResource", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/ISoftDisposable.uno
// ---------------------------------------------------------------------------------

// internal abstract interface ISoftDisposable
// {
uInterfaceType* ISoftDisposable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Resources.ISoftDisposable", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/LoadingImageSource.uno
// --------------------------------------------------------------------------------------

// internal abstract class LoadingImageSource
// {
static void LoadingImageSource_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Resources::DisposalManager_typeof(),
        ::g::Fuse::Resources::MemoryPolicy_typeof());
    type->SetInterfaces(
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(LoadingImageSource_type, interface0));
    type->SetFields(4,
        ::g::Uno::Double_typeof(), offsetof(LoadingImageSource, _lastUsed), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(LoadingImageSource, _policy), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(LoadingImageSource, _texture), 0,
        ::g::Uno::Byte_typeof()->Array(), offsetof(LoadingImageSource, _bytes), 0,
        ::g::Uno::Int2_typeof(), offsetof(LoadingImageSource, _textureSize), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _loading), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _failed), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingImageSource, _inDisposal), 0,
        ::g::Uno::Float_typeof(), offsetof(LoadingImageSource, _density), 0);
}

LoadingImageSource_type* LoadingImageSource_typeof()
{
    static uSStrong<LoadingImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LoadingImageSource);
    options.TypeSize = sizeof(LoadingImageSource_type);
    type = (LoadingImageSource_type*)uClassType::New("Fuse.Resources.LoadingImageSource", options);
    type->fp_build_ = LoadingImageSource_build;
    type->fp_GetBytes = (void(*)(::g::Fuse::Resources::ImageSource*, uArray**))LoadingImageSource__GetBytes_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))LoadingImageSource__GetTexture_fn;
    type->fp_Load = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__Load_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__OnPinChanged_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))LoadingImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))LoadingImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))LoadingImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))LoadingImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))LoadingImageSource__get_State_fn;
    type->interface0.fp_SoftDispose = (void(*)(uObject*))LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface0.fp_get_IsPinned = (void(*)(uObject*, bool*))LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface0.fp_get_LastUsed = (void(*)(uObject*, double*))LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// protected generated LoadingImageSource()
void LoadingImageSource__ctor_2_fn(LoadingImageSource* __this)
{
    __this->ctor_2();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason)
void LoadingImageSource__Cleanup_fn(LoadingImageSource* __this, int32_t* reason)
{
    __this->Cleanup(*reason);
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned()
void LoadingImageSource__FuseResourcesIMemoryResourceget_IsPinned_fn(LoadingImageSource* __this, bool* __retval)
{
    return *__retval = __this->IsPinned(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed()
void LoadingImageSource__FuseResourcesIMemoryResourceget_LastUsed_fn(LoadingImageSource* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy()
void LoadingImageSource__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    return *__retval = __this->Policy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose()
void LoadingImageSource__FuseResourcesIMemoryResourceSoftDispose_fn(LoadingImageSource* __this)
{
    __this->Cleanup(2);
}

// public override sealed byte[] GetBytes()
void LoadingImageSource__GetBytes_fn(LoadingImageSource* __this, uArray** __retval)
{
    if (__this->_bytes != nullptr)
    {
        __this->MarkUsed();
        return *__retval = __this->_bytes, void();
    }

    __this->Load();
    return *__retval = __this->_bytes, void();
}

// public override sealed texture2D GetTexture()
void LoadingImageSource__GetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    if (__this->_texture != nullptr)
    {
        __this->MarkUsed();
        return *__retval = __this->_texture, void();
    }

    __this->Load();
    return *__retval = __this->_texture, void();
}

// protected bool get_IsLoaded()
void LoadingImageSource__get_IsLoaded_fn(LoadingImageSource* __this, bool* __retval)
{
    *__retval = __this->IsLoaded();
}

// public override sealed void Load()
void LoadingImageSource__Load_fn(LoadingImageSource* __this)
{
    if (__this->_loading || __this->_failed)
        return;

    __this->AttemptLoad();
}

// protected void MarkUsed()
void LoadingImageSource__MarkUsed_fn(LoadingImageSource* __this)
{
    __this->MarkUsed();
}

// protected override sealed void OnPinChanged()
void LoadingImageSource__OnPinChanged_fn(LoadingImageSource* __this)
{
    ::g::Fuse::Resources::ImageSource__OnPinChanged_fn(__this);
    __this->MarkUsed();
}

// public override sealed int2 get_PixelSize()
void LoadingImageSource__get_PixelSize_fn(LoadingImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture == nullptr)
        __this->Load();

    __this->MarkUsed();
    return *__retval = __this->_textureSize, void();
}

// public Fuse.Resources.MemoryPolicy get_Policy()
void LoadingImageSource__get_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->Policy();
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value)
void LoadingImageSource__set_Policy_fn(LoadingImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->Policy(value);
}

// public override sealed void Reload()
void LoadingImageSource__Reload_fn(LoadingImageSource* __this)
{
    __this->Cleanup(0);
    __this->Load();
}

// protected void SetBytes(byte[] bytes)
void LoadingImageSource__SetBytes_fn(LoadingImageSource* __this, uArray* bytes)
{
    __this->SetBytes(bytes);
}

// protected void SetTexture(texture2D texture)
void LoadingImageSource__SetTexture_fn(LoadingImageSource* __this, ::g::Uno::Graphics::Texture2D* texture)
{
    __this->SetTexture(texture);
}

// public override sealed float2 get_Size()
void LoadingImageSource__get_Size_fn(LoadingImageSource* __this, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Int2 ts = __this->PixelSize();
    return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ts.X, (float)ts.Y), __this->_density), void();
}

// public override sealed float get_SizeDensity()
void LoadingImageSource__get_SizeDensity_fn(LoadingImageSource* __this, float* __retval)
{
    return *__retval = __this->_density, void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State()
void LoadingImageSource__get_State_fn(LoadingImageSource* __this, int32_t* __retval)
{
    if (__this->_texture != nullptr)
        return *__retval = 1, void();

    if (__this->_failed)
        return *__retval = 3, void();

    if (__this->_loading)
        return *__retval = 2, void();

    return *__retval = 0, void();
}

// protected generated LoadingImageSource() [instance]
void LoadingImageSource::ctor_2()
{
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    ctor_1();
}

// protected void Cleanup(Fuse.Resources.LoadingImageSource.CleanupReason reason) [instance]
void LoadingImageSource::Cleanup(int32_t reason)
{
    if (_texture != nullptr)
    {
        uPtr(_texture)->Dispose();
        _texture = nullptr;
    }

    if (_bytes != nullptr)
        _bytes = nullptr;

    _textureSize = ::g::Uno::Int2__New1(0);
    _loading = false;
    _failed = (reason == 1);

    if (_inDisposal)
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);

    _inDisposal = false;

    if (reason != 2)
        OnChanged();
}

// protected bool get_IsLoaded() [instance]
bool LoadingImageSource::IsLoaded()
{
    return _texture != nullptr;
}

// protected void MarkUsed() [instance]
void LoadingImageSource::MarkUsed()
{
    _lastUsed = ::g::Fuse::Time::FrameTime();
}

// public Fuse.Resources.MemoryPolicy get_Policy() [instance]
::g::Fuse::Resources::MemoryPolicy* LoadingImageSource::Policy()
{
    return _policy;
}

// public void set_Policy(Fuse.Resources.MemoryPolicy value) [instance]
void LoadingImageSource::Policy(::g::Fuse::Resources::MemoryPolicy* value)
{
    if (value == nullptr)
        U_THROW(::g::Uno::Exception::New2(uString::Const("value-cannot-be-null")));

    _policy = value;
}

// protected void SetBytes(byte[] bytes) [instance]
void LoadingImageSource::SetBytes(uArray* bytes)
{
    _bytes = bytes;
}

// protected void SetTexture(texture2D texture) [instance]
void LoadingImageSource::SetTexture(::g::Uno::Graphics::Texture2D* texture)
{
    _texture = texture;
    _textureSize = uPtr(texture)->Size();

    if (!_inDisposal)
    {
        ::g::Fuse::Resources::DisposalManager::Add((uObject*)this);
        _inDisposal = true;
    }

    MarkUsed();
    OnChanged();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/MemoryPolicy.uno
// ------------------------------------------------------------------------------

// public sealed class MemoryPolicy
// {
// static generated MemoryPolicy()
static void MemoryPolicy__cctor__fn(uType* __type)
{
    MemoryPolicy* collection4;
    MemoryPolicy* collection3;
    MemoryPolicy* collection2;
    MemoryPolicy* collection1;
    MemoryPolicy::PreloadRetain_ = (collection4 = MemoryPolicy::New1(), uPtr(collection4)->BundlePreload(true), true, collection4);
    MemoryPolicy::UnloadUnused_ = (collection3 = MemoryPolicy::New1(), uPtr(collection3)->UnloadInBackground(true), true, uPtr(collection3)->UnusedTimeout(60.0), 60.0, uPtr(collection3)->UnpinInvisible(true), true, collection3);
    MemoryPolicy::QuickUnload_ = (collection2 = MemoryPolicy::New1(), uPtr(collection2)->UnloadInBackground(true), true, uPtr(collection2)->UnusedTimeout(1.0), 1.0, uPtr(collection2)->UnpinInvisible(true), true, collection2);
    MemoryPolicy::UnloadInBackgroundPolicy_ = (collection1 = MemoryPolicy::New1(), uPtr(collection1)->UnloadInBackground(true), true, collection1);
}

static void MemoryPolicy_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Resources::IMemoryResource_typeof();
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _AllowPinnedFree), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _BundlePreload), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _UnloadInBackground), 0,
        ::g::Uno::Bool_typeof(), offsetof(MemoryPolicy, _UnpinInvisible), 0,
        ::g::Uno::Double_typeof(), offsetof(MemoryPolicy, _UnusedTimeout), 0,
        type, (uintptr_t)&MemoryPolicy::PreloadRetain_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::UnloadUnused_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::QuickUnload_, uFieldFlagsStatic,
        type, (uintptr_t)&MemoryPolicy::UnloadInBackgroundPolicy_, uFieldFlagsStatic);
}

uType* MemoryPolicy_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 9;
    options.ObjectSize = sizeof(MemoryPolicy);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.MemoryPolicy", options);
    type->fp_build_ = MemoryPolicy_build;
    type->fp_ctor_ = (void*)MemoryPolicy__New1_fn;
    type->fp_cctor_ = MemoryPolicy__cctor__fn;
    return type;
}

// public generated MemoryPolicy()
void MemoryPolicy__ctor__fn(MemoryPolicy* __this)
{
    __this->ctor_();
}

// public generated bool get_AllowPinnedFree()
void MemoryPolicy__get_AllowPinnedFree_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->AllowPinnedFree();
}

// public generated void set_AllowPinnedFree(bool value)
void MemoryPolicy__set_AllowPinnedFree_fn(MemoryPolicy* __this, bool* value)
{
    __this->AllowPinnedFree(*value);
}

// public generated bool get_BundlePreload()
void MemoryPolicy__get_BundlePreload_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->BundlePreload();
}

// public generated void set_BundlePreload(bool value)
void MemoryPolicy__set_BundlePreload_fn(MemoryPolicy* __this, bool* value)
{
    __this->BundlePreload(*value);
}

// public generated MemoryPolicy New()
void MemoryPolicy__New1_fn(MemoryPolicy** __retval)
{
    *__retval = MemoryPolicy::New1();
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource)
void MemoryPolicy__ShouldSoftDispose_fn(MemoryPolicy* __this, int32_t* dr, uObject* resource, bool* __retval)
{
    *__retval = __this->ShouldSoftDispose(*dr, resource);
}

// public generated bool get_UnloadInBackground()
void MemoryPolicy__get_UnloadInBackground_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnloadInBackground();
}

// public generated void set_UnloadInBackground(bool value)
void MemoryPolicy__set_UnloadInBackground_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnloadInBackground(*value);
}

// public generated bool get_UnpinInvisible()
void MemoryPolicy__get_UnpinInvisible_fn(MemoryPolicy* __this, bool* __retval)
{
    *__retval = __this->UnpinInvisible();
}

// public generated void set_UnpinInvisible(bool value)
void MemoryPolicy__set_UnpinInvisible_fn(MemoryPolicy* __this, bool* value)
{
    __this->UnpinInvisible(*value);
}

// public generated double get_UnusedTimeout()
void MemoryPolicy__get_UnusedTimeout_fn(MemoryPolicy* __this, double* __retval)
{
    *__retval = __this->UnusedTimeout();
}

// public generated void set_UnusedTimeout(double value)
void MemoryPolicy__set_UnusedTimeout_fn(MemoryPolicy* __this, double* value)
{
    __this->UnusedTimeout(*value);
}

uSStrong<MemoryPolicy*> MemoryPolicy::PreloadRetain_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadUnused_;
uSStrong<MemoryPolicy*> MemoryPolicy::QuickUnload_;
uSStrong<MemoryPolicy*> MemoryPolicy::UnloadInBackgroundPolicy_;

// public generated MemoryPolicy() [instance]
void MemoryPolicy::ctor_()
{
}

// public generated bool get_AllowPinnedFree() [instance]
bool MemoryPolicy::AllowPinnedFree()
{
    return _AllowPinnedFree;
}

// public generated void set_AllowPinnedFree(bool value) [instance]
void MemoryPolicy::AllowPinnedFree(bool value)
{
    _AllowPinnedFree = value;
}

// public generated bool get_BundlePreload() [instance]
bool MemoryPolicy::BundlePreload()
{
    return _BundlePreload;
}

// public generated void set_BundlePreload(bool value) [instance]
void MemoryPolicy::BundlePreload(bool value)
{
    _BundlePreload = value;
}

// internal bool ShouldSoftDispose(Fuse.Resources.DisposalRequest dr, Fuse.Resources.IMemoryResource resource) [instance]
bool MemoryPolicy::ShouldSoftDispose(int32_t dr, uObject* resource)
{
    if ((dr == 1) && UnloadInBackground())
        return true;

    if ((dr == 2) && (!::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[2/*Fuse.Resources.IMemoryResource*/])) || AllowPinnedFree()))
        return true;

    if ((AllowPinnedFree() || !::g::Fuse::Resources::IMemoryResource::IsPinned(uInterface(uPtr(resource), ::TYPES[2/*Fuse.Resources.IMemoryResource*/]))) && (UnusedTimeout() > 0.0))
    {
        double elapsed = ::g::Fuse::Time::FrameTime() - ::g::Fuse::Resources::IMemoryResource::LastUsed(uInterface(uPtr(resource), ::TYPES[2/*Fuse.Resources.IMemoryResource*/]));

        if (elapsed > UnusedTimeout())
            return true;
    }

    return false;
}

// public generated bool get_UnloadInBackground() [instance]
bool MemoryPolicy::UnloadInBackground()
{
    return _UnloadInBackground;
}

// public generated void set_UnloadInBackground(bool value) [instance]
void MemoryPolicy::UnloadInBackground(bool value)
{
    _UnloadInBackground = value;
}

// public generated bool get_UnpinInvisible() [instance]
bool MemoryPolicy::UnpinInvisible()
{
    return _UnpinInvisible;
}

// public generated void set_UnpinInvisible(bool value) [instance]
void MemoryPolicy::UnpinInvisible(bool value)
{
    _UnpinInvisible = value;
}

// public generated double get_UnusedTimeout() [instance]
double MemoryPolicy::UnusedTimeout()
{
    return _UnusedTimeout;
}

// public generated void set_UnusedTimeout(double value) [instance]
void MemoryPolicy::UnusedTimeout(double value)
{
    _UnusedTimeout = value;
}

// public generated MemoryPolicy New() [static]
MemoryPolicy* MemoryPolicy::New1()
{
    MemoryPolicy* obj5 = (MemoryPolicy*)uNew(MemoryPolicy_typeof());
    obj5->ctor_();
    return obj5;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/MultiDensityImageSource.uno
// -------------------------------------------------------------------------------------------

// public sealed class MultiDensityImageSource
// {
static void MultiDensityImageSource_build(uType* type)
{
    ::TYPES[22] = ::g::Uno::Collections::ObservableList_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), nullptr);
    ::TYPES[23] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), nullptr);
    ::TYPES[24] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[25] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), nullptr);
    ::TYPES[26] = ::g::Uno::IDisposable_typeof();
    ::TYPES[4] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(4,
        ::TYPES[22/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], offsetof(MultiDensityImageSource, _sources), 0,
        ::g::Fuse::Resources::ProxyImageSource_typeof(), offsetof(MultiDensityImageSource, _proxy), 0,
        ::g::Uno::Float_typeof(), offsetof(MultiDensityImageSource, _matchDensity), 0,
        ::g::Uno::Bool_typeof(), offsetof(MultiDensityImageSource, _hasMatchDensity), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(MultiDensityImageSource, _active), 0,
        ::TYPES[4/*Uno.Action*/], offsetof(MultiDensityImageSource, ActiveChanged1), 0);
}

::g::Fuse::Resources::ImageSource_type* MultiDensityImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(MultiDensityImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.MultiDensityImageSource", options);
    type->fp_build_ = MultiDensityImageSource_build;
    type->fp_ctor_ = (void*)MultiDensityImageSource__New2_fn;
    type->fp_GetBytes = (void(*)(::g::Fuse::Resources::ImageSource*, uArray**))MultiDensityImageSource__GetBytes_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))MultiDensityImageSource__GetTexture_fn;
    type->fp_OnPinChanged = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__OnPinChanged_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))MultiDensityImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))MultiDensityImageSource__get_PixelSize_fn;
    type->fp_Reload = (void(*)(::g::Fuse::Resources::ImageSource*))MultiDensityImageSource__Reload_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))MultiDensityImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))MultiDensityImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))MultiDensityImageSource__get_State_fn;
    return type;
}

// public MultiDensityImageSource()
void MultiDensityImageSource__ctor_2_fn(MultiDensityImageSource* __this)
{
    __this->ctor_2();
}

// internal Fuse.Resources.ImageSource get_Active()
void MultiDensityImageSource__get_Active_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Active();
}

// internal generated void add_ActiveChanged(Uno.Action value)
void MultiDensityImageSource__add_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value)
{
    __this->add_ActiveChanged(value);
}

// internal generated void remove_ActiveChanged(Uno.Action value)
void MultiDensityImageSource__remove_ActiveChanged_fn(MultiDensityImageSource* __this, uDelegate* value)
{
    __this->remove_ActiveChanged(value);
}

// public override sealed byte[] GetBytes()
void MultiDensityImageSource__GetBytes_fn(MultiDensityImageSource* __this, uArray** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetBytes(), void();
}

// public override sealed texture2D GetTexture()
void MultiDensityImageSource__GetTexture_fn(MultiDensityImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = uPtr(__this->_proxy)->GetTexture(), void();
}

// public MultiDensityImageSource New()
void MultiDensityImageSource__New2_fn(MultiDensityImageSource** __retval)
{
    *__retval = MultiDensityImageSource::New2();
}

// private void OnActiveChanged()
void MultiDensityImageSource__OnActiveChanged_fn(MultiDensityImageSource* __this)
{
    __this->OnActiveChanged();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img)
void MultiDensityImageSource__OnImageAdded_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageAdded(img);
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img)
void MultiDensityImageSource__OnImageRemoved_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* img)
{
    __this->OnImageRemoved(img);
}

// protected override sealed void OnPinChanged()
void MultiDensityImageSource__OnPinChanged_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
    uPtr(__this->_proxy)->OnPinChanged();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation()
void MultiDensityImageSource__get_Orientation_fn(MultiDensityImageSource* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Orientation(), void();
}

// public override sealed int2 get_PixelSize()
void MultiDensityImageSource__get_PixelSize_fn(MultiDensityImageSource* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->PixelSize(), void();
}

// public override sealed void Reload()
void MultiDensityImageSource__Reload_fn(MultiDensityImageSource* __this)
{
    uPtr(__this->_proxy)->Reload();
}

// private void SelectActive()
void MultiDensityImageSource__SelectActive_fn(MultiDensityImageSource* __this)
{
    __this->SelectActive();
}

// public override sealed float2 get_Size()
void MultiDensityImageSource__get_Size_fn(MultiDensityImageSource* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Size(), void();
}

// public override sealed float get_SizeDensity()
void MultiDensityImageSource__get_SizeDensity_fn(MultiDensityImageSource* __this, float* __retval)
{
    return *__retval = uPtr(__this->_proxy)->Density(), void();
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources()
void MultiDensityImageSource__get_Sources_fn(MultiDensityImageSource* __this, uObject** __retval)
{
    *__retval = __this->Sources();
}

// public override sealed Fuse.Resources.ImageSourceState get_State()
void MultiDensityImageSource__get_State_fn(MultiDensityImageSource* __this, int32_t* __retval)
{
    return *__retval = uPtr(__this->_proxy)->State(), void();
}

// private void SwapActive(Fuse.Resources.ImageSource use)
void MultiDensityImageSource__SwapActive_fn(MultiDensityImageSource* __this, ::g::Fuse::Resources::ImageSource* use)
{
    __this->SwapActive(use);
}

// public MultiDensityImageSource() [instance]
void MultiDensityImageSource::ctor_2()
{
    ctor_1();
    _sources = ((::g::Uno::Collections::ObservableList*)::g::Uno::Collections::ObservableList::New1(::TYPES[22/*Uno.Collections.ObservableList<Fuse.Resources.ImageSource>*/], uDelegate::New(::TYPES[23/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageAdded_fn, this), uDelegate::New(::TYPES[23/*Uno.Action<Fuse.Resources.ImageSource>*/], (void*)MultiDensityImageSource__OnImageRemoved_fn, this)));
    _proxy = ::g::Fuse::Resources::ProxyImageSource::New1(this);
}

// internal Fuse.Resources.ImageSource get_Active() [instance]
::g::Fuse::Resources::ImageSource* MultiDensityImageSource::Active()
{
    return _active;
}

// internal generated void add_ActiveChanged(Uno.Action value) [instance]
void MultiDensityImageSource::add_ActiveChanged(uDelegate* value)
{
    ActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ActiveChanged1, value), ::TYPES[4/*Uno.Action*/]);
}

// internal generated void remove_ActiveChanged(Uno.Action value) [instance]
void MultiDensityImageSource::remove_ActiveChanged(uDelegate* value)
{
    ActiveChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ActiveChanged1, value), ::TYPES[4/*Uno.Action*/]);
}

// private void OnActiveChanged() [instance]
void MultiDensityImageSource::OnActiveChanged()
{
    uDelegate* handler = ActiveChanged1;

    if (::g::Uno::Delegate::op_Inequality(handler, nullptr))
        uPtr(handler)->InvokeVoid();
}

// private void OnImageAdded(Fuse.Resources.ImageSource img) [instance]
void MultiDensityImageSource::OnImageAdded(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void OnImageRemoved(Fuse.Resources.ImageSource img) [instance]
void MultiDensityImageSource::OnImageRemoved(::g::Fuse::Resources::ImageSource* img)
{
    if (IsPinned())
        SelectActive();
}

// private void SelectActive() [instance]
void MultiDensityImageSource::SelectActive()
{
    ::g::Fuse::Resources::ImageSource* ret3;
    float screen = _hasMatchDensity ? _matchDensity : uPtr(::g::Fuse::AppBase::Current2())->PixelsPerPoint();
    float diff = FLT_INF;
    ::g::Fuse::Resources::ImageSource* use = nullptr;
    uObject* enum1 = (uObject*)uPtr(_sources)->GetEnumerator();

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[24/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Fuse::Resources::ImageSource* source = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[25/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret3), ret3);
                    float d = ::g::Uno::Math::Abs1(uPtr(source)->SizeDensity() - screen);

                    if (d < diff)
                    {
                        use = source;
                        diff = d;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[26/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[26/*Uno.IDisposable*/]));
        }
        __after_finally_0:;
    }

    SwapActive(use);
}

// public Uno.Collections.IList<Fuse.Resources.ImageSource> get_Sources() [instance]
uObject* MultiDensityImageSource::Sources()
{
    return (uObject*)_sources;
}

// private void SwapActive(Fuse.Resources.ImageSource use) [instance]
void MultiDensityImageSource::SwapActive(::g::Fuse::Resources::ImageSource* use)
{
    if (use == _active)
        return;

    if (_active != nullptr)
        uPtr(_proxy)->Release();

    _active = use;

    if (use != nullptr)
        uPtr(_proxy)->Attach(use);

    OnActiveChanged();
}

// public MultiDensityImageSource New() [static]
MultiDensityImageSource* MultiDensityImageSource::New2()
{
    MultiDensityImageSource* obj2 = (MultiDensityImageSource*)uNew(MultiDensityImageSource_typeof());
    obj2->ctor_2();
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/ProxyImageSource.uno
// ------------------------------------------------------------------------------------

// internal sealed class ProxyImageSource
// {
static void ProxyImageSource_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::EventHandler_typeof();
    ::TYPES[20] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    ::TYPES[27] = ::g::Fuse::Resources::LoadingImageSource_typeof();
    ::TYPES[28] = ::g::Uno::Byte_typeof()->Array();
    ::TYPES[29] = ::g::Uno::Graphics::Texture2D_typeof();
    type->SetDependencies(
        ::g::Fuse::Resources::MemoryPolicy_typeof());
    type->SetFields(0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProxyImageSource, _outer), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ProxyImageSource, _impl), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProxyImageSource, _isDefaultPolicy), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(ProxyImageSource, _policy), 0,
        ::g::Uno::Float_typeof(), offsetof(ProxyImageSource, _density), 0,
        ::g::Uno::Bool_typeof(), offsetof(ProxyImageSource, _hasDensity), 0);
}

uType* ProxyImageSource_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ProxyImageSource);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.ProxyImageSource", options);
    type->fp_build_ = ProxyImageSource_build;
    return type;
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer)
void ProxyImageSource__ctor__fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* outer)
{
    __this->ctor_(outer);
}

// public void Attach(Fuse.Resources.ImageSource impl)
void ProxyImageSource__Attach_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource* impl)
{
    __this->Attach(impl);
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp)
void ProxyImageSource__DefaultSetPolicy_fn(ProxyImageSource* __this, ::g::Fuse::Resources::MemoryPolicy* mp)
{
    __this->DefaultSetPolicy(mp);
}

// public float get_Density()
void ProxyImageSource__get_Density_fn(ProxyImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value)
void ProxyImageSource__set_Density_fn(ProxyImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public byte[] GetBytes()
void ProxyImageSource__GetBytes_fn(ProxyImageSource* __this, uArray** __retval)
{
    *__retval = __this->GetBytes();
}

// public texture2D GetTexture()
void ProxyImageSource__GetTexture_fn(ProxyImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl()
void ProxyImageSource__get_Impl_fn(ProxyImageSource* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Impl();
}

// public void Load()
void ProxyImageSource__Load_fn(ProxyImageSource* __this)
{
    __this->Load();
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer)
void ProxyImageSource__New1_fn(::g::Fuse::Resources::ImageSource* outer, ProxyImageSource** __retval)
{
    *__retval = ProxyImageSource::New1(outer);
}

// public void OnPinChanged()
void ProxyImageSource__OnPinChanged_fn(ProxyImageSource* __this)
{
    __this->OnPinChanged();
}

// public Fuse.Resources.Exif.ImageOrientation get_Orientation()
void ProxyImageSource__get_Orientation_fn(ProxyImageSource* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public int2 get_PixelSize()
void ProxyImageSource__get_PixelSize_fn(ProxyImageSource* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->PixelSize();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a)
void ProxyImageSource__ProxyOnChanged_fn(ProxyImageSource* __this, uObject* s, ::g::Uno::EventArgs* a)
{
    __this->ProxyOnChanged(s, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a)
void ProxyImageSource__ProxyOnError_fn(ProxyImageSource* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    __this->ProxyOnError(s, a);
}

// public void Release()
void ProxyImageSource__Release_fn(ProxyImageSource* __this)
{
    __this->Release();
}

// public void Reload()
void ProxyImageSource__Reload_fn(ProxyImageSource* __this)
{
    __this->Reload();
}

// public float2 get_Size()
void ProxyImageSource__get_Size_fn(ProxyImageSource* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Size();
}

// public Fuse.Resources.ImageSourceState get_State()
void ProxyImageSource__get_State_fn(ProxyImageSource* __this, int32_t* __retval)
{
    *__retval = __this->State();
}

// private void UpdatePolicy()
void ProxyImageSource__UpdatePolicy_fn(ProxyImageSource* __this)
{
    __this->UpdatePolicy();
}

// public ProxyImageSource(Fuse.Resources.ImageSource outer) [instance]
void ProxyImageSource::ctor_(::g::Fuse::Resources::ImageSource* outer)
{
    _isDefaultPolicy = true;
    _policy = ::g::Fuse::Resources::MemoryPolicy::PreloadRetain();
    _density = 1.0f;
    _outer = outer;
}

// public void Attach(Fuse.Resources.ImageSource impl) [instance]
void ProxyImageSource::Attach(::g::Fuse::Resources::ImageSource* impl)
{
    _impl = impl;
    uPtr(_impl)->add_Changed(uDelegate::New(::TYPES[19/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
    uPtr(_impl)->add_Error(uDelegate::New(::TYPES[20/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();

    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(impl, ::TYPES[27/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != nullptr)
        uPtr(loading)->Policy(_policy);

    uPtr(_outer)->ProxyChanged(this, ::g::Uno::EventArgs::New1());
}

// public void DefaultSetPolicy(Fuse.Resources.MemoryPolicy mp) [instance]
void ProxyImageSource::DefaultSetPolicy(::g::Fuse::Resources::MemoryPolicy* mp)
{
    if (!_isDefaultPolicy)
        return;

    _policy = mp;
    UpdatePolicy();
}

// public float get_Density() [instance]
float ProxyImageSource::Density()
{
    if (_hasDensity || (_impl == nullptr))
        return _density;

    return uPtr(_impl)->SizeDensity();
}

// public void set_Density(float value) [instance]
void ProxyImageSource::Density(float value)
{
    _density = value;
    _hasDensity = true;
}

// public byte[] GetBytes() [instance]
uArray* ProxyImageSource::GetBytes()
{
    return (_impl == nullptr) ? uCast<uArray*>(nullptr, ::TYPES[28/*byte[]*/]) : (uArray*)uPtr(_impl)->GetBytes();
}

// public texture2D GetTexture() [instance]
::g::Uno::Graphics::Texture2D* ProxyImageSource::GetTexture()
{
    return (_impl == nullptr) ? uCast< ::g::Uno::Graphics::Texture2D*>(nullptr, ::TYPES[29/*texture2D*/]) : (::g::Uno::Graphics::Texture2D*)uPtr(_impl)->GetTexture();
}

// public Fuse.Resources.ImageSource get_Impl() [instance]
::g::Fuse::Resources::ImageSource* ProxyImageSource::Impl()
{
    return _impl;
}

// public void Load() [instance]
void ProxyImageSource::Load()
{
    if (_impl != nullptr)
        uPtr(_impl)->Load();
}

// public void OnPinChanged() [instance]
void ProxyImageSource::OnPinChanged()
{
    if (_impl == nullptr)
        return;

    if (uPtr(_outer)->IsPinned())
        uPtr(_impl)->Pin();
    else
        uPtr(_impl)->Unpin();
}

// public Fuse.Resources.Exif.ImageOrientation get_Orientation() [instance]
int32_t ProxyImageSource::Orientation()
{
    if (_impl != nullptr)
        return uPtr(_impl)->Orientation();

    return 0;
}

// public int2 get_PixelSize() [instance]
::g::Uno::Int2 ProxyImageSource::PixelSize()
{
    if (_impl == nullptr)
        return ::g::Uno::Int2__New1(0);

    return uPtr(_impl)->PixelSize();
}

// private void ProxyOnChanged(object s, Uno.EventArgs a) [instance]
void ProxyImageSource::ProxyOnChanged(uObject* s, ::g::Uno::EventArgs* a)
{
    uPtr(_outer)->ProxyChanged(this, a);
}

// private void ProxyOnError(object s, Fuse.Resources.ImageSourceErrorArgs a) [instance]
void ProxyImageSource::ProxyOnError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* a)
{
    uPtr(_outer)->ProxyError(this, a);
}

// public void Release() [instance]
void ProxyImageSource::Release()
{
    if (_impl != nullptr)
    {
        if (uPtr(_outer)->IsPinned())
            uPtr(_impl)->Unpin();

        uPtr(_impl)->remove_Changed(uDelegate::New(::TYPES[19/*Uno.EventHandler*/], (void*)ProxyImageSource__ProxyOnChanged_fn, this));
        uPtr(_impl)->remove_Error(uDelegate::New(::TYPES[20/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ProxyImageSource__ProxyOnError_fn, this));
        _impl = nullptr;
    }
}

// public void Reload() [instance]
void ProxyImageSource::Reload()
{
    if (_impl != nullptr)
        uPtr(_impl)->Reload();
}

// public float2 get_Size() [instance]
::g::Uno::Float2 ProxyImageSource::Size()
{
    if (_impl == nullptr)
        return ::g::Uno::Float2__New1(0.0f);

    ::g::Uno::Int2 ps = uPtr(_impl)->PixelSize();
    return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)ps.X, (float)ps.Y), Density());
}

// public Fuse.Resources.ImageSourceState get_State() [instance]
int32_t ProxyImageSource::State()
{
    return (_impl == nullptr) ? 0 : uPtr(_impl)->State();
}

// private void UpdatePolicy() [instance]
void ProxyImageSource::UpdatePolicy()
{
    ::g::Fuse::Resources::LoadingImageSource* loading = uAs< ::g::Fuse::Resources::LoadingImageSource*>(_impl, ::TYPES[27/*Fuse.Resources.LoadingImageSource*/]);

    if (loading != nullptr)
        uPtr(loading)->Policy(_policy);
}

// public ProxyImageSource New(Fuse.Resources.ImageSource outer) [static]
ProxyImageSource* ProxyImageSource::New1(::g::Fuse::Resources::ImageSource* outer)
{
    ProxyImageSource* obj1 = (ProxyImageSource*)uNew(ProxyImageSource_typeof());
    obj1->ctor_(outer);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/ResourceRegistry.uno
// ----------------------------------------------------------------------------------

// public static class ResourceRegistry
// {
// static generated ResourceRegistry()
static void ResourceRegistry__cctor__fn(uType* __type)
{
    ResourceRegistry::_handlers_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[30/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/]));
}

static void ResourceRegistry_build(uType* type)
{
    ::TYPES[30] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), nullptr), nullptr);
    ::TYPES[31] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Action_typeof(), nullptr);
    ::TYPES[32] = ::g::Uno::Collections::List__Enumerator_typeof()->MakeType(::g::Uno::Action_typeof(), nullptr);
    type->SetFields(0,
        ::TYPES[30/*Uno.Collections.Dictionary<string, Uno.Collections.List<Uno.Action>>*/], (uintptr_t)&ResourceRegistry::_handlers_, uFieldFlagsStatic);
}

uClassType* ResourceRegistry_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Resources.ResourceRegistry", options);
    type->fp_build_ = ResourceRegistry_build;
    type->fp_cctor_ = ResourceRegistry__cctor__fn;
    return type;
}

// public static void AddResourceChangedHandler(string key, Uno.Action handler)
void ResourceRegistry__AddResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::AddResourceChangedHandler(key, handler);
}

// public static void NotifyResourceChanged(string key)
void ResourceRegistry__NotifyResourceChanged_fn(uString* key)
{
    ResourceRegistry::NotifyResourceChanged(key);
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler)
void ResourceRegistry__RemoveResourceChangedHandler_fn(uString* key, uDelegate* handler)
{
    ResourceRegistry::RemoveResourceChangedHandler(key, handler);
}

uSStrong< ::g::Uno::Collections::Dictionary*> ResourceRegistry::_handlers_;

// public static void AddResourceChangedHandler(string key, Uno.Action handler) [static]
void ResourceRegistry::AddResourceChangedHandler(uString* key, uDelegate* handler)
{
    ResourceRegistry_typeof()->Init();
    bool ret2;
    ::g::Uno::Collections::List* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers_), key, &ret2), ret2))
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(ResourceRegistry::_handlers_), key, (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[31/*Uno.Collections.List<Uno.Action>*/]));

    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers_), key, &ret3), ret3)), handler);
}

// public static void NotifyResourceChanged(string key) [static]
void ResourceRegistry::NotifyResourceChanged(uString* key)
{
    ResourceRegistry_typeof()->Init();
    bool ret4;
    ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > ret5;
    ::g::Uno::Collections::List* list;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(ResourceRegistry::_handlers_), key, (void**)(&list), &ret4), ret4))
    {
        ::g::Uno::Collections::List__Enumerator<uStrong<uDelegate*> > enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(list), &ret5), ret5);

        {
            try
            {
                {
                    while (enum1.MoveNext(::TYPES[32/*Uno.Collections.List<Uno.Action>.Enumerator*/]))
                    {
                        uDelegate* h = enum1.Current(::TYPES[32/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
                        uPtr(h)->InvokeVoid();
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    enum1.Dispose(::TYPES[32/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
                }
                                throw __t;
                goto __after_finally_1;
            }

            {
                enum1.Dispose(::TYPES[32/*Uno.Collections.List<Uno.Action>.Enumerator*/]);
            }
            __after_finally_1:;
        }
    }
}

// public static void RemoveResourceChangedHandler(string key, Uno.Action handler) [static]
void ResourceRegistry::RemoveResourceChangedHandler(uString* key, uDelegate* handler)
{
    ResourceRegistry_typeof()->Init();
    bool ret6;
    bool ret7;
    ::g::Uno::Collections::List* ret8;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(ResourceRegistry::_handlers_), key, &ret6), ret6))
        U_THROW(::g::Uno::Exception::New1());

    ::g::Uno::Collections::List__Remove_fn(uPtr((::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(ResourceRegistry::_handlers_), key, &ret8), ret8)), handler, &ret7);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Resources/SystemFileSource.uno
// ----------------------------------------------------------------------------------

// internal sealed class SystemFileSource
// {
static void SystemFileSource_build(uType* type)
{
    type->SetFields(2);
}

::g::Uno::UX::FileSource_type* SystemFileSource_typeof()
{
    static uSStrong< ::g::Uno::UX::FileSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::FileSource_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SystemFileSource);
    options.TypeSize = sizeof(::g::Uno::UX::FileSource_type);
    type = (::g::Uno::UX::FileSource_type*)uClassType::New("Fuse.Resources.SystemFileSource", options);
    type->fp_build_ = SystemFileSource_build;
    type->fp_OpenRead = (void(*)(::g::Uno::UX::FileSource*, ::g::Uno::IO::Stream**))SystemFileSource__OpenRead_fn;
    return type;
}

// public SystemFileSource(string file)
void SystemFileSource__ctor_1_fn(SystemFileSource* __this, uString* file)
{
    __this->ctor_1(file);
}

// public SystemFileSource New(string file)
void SystemFileSource__New1_fn(uString* file, SystemFileSource** __retval)
{
    *__retval = SystemFileSource::New1(file);
}

// public override sealed Uno.IO.Stream OpenRead()
void SystemFileSource__OpenRead_fn(SystemFileSource* __this, ::g::Uno::IO::Stream** __retval)
{
    return *__retval = ::g::Uno::IO::File::OpenRead(__this->Name), void();
}

// public SystemFileSource(string file) [instance]
void SystemFileSource::ctor_1(uString* file)
{
    ctor_(file);
}

// public SystemFileSource New(string file) [static]
SystemFileSource* SystemFileSource::New1(uString* file)
{
    SystemFileSource* obj1 = (SystemFileSource*)uNew(SystemFileSource_typeof());
    obj1->ctor_1(file);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/TextureImageSource.uno
// --------------------------------------------------------------------------------------

// public sealed class TextureImageSource
// {
static void TextureImageSource_build(uType* type)
{
    type->SetFields(4,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(TextureImageSource, _texture), 0,
        ::g::Uno::Float_typeof(), offsetof(TextureImageSource, _density), 0);
}

::g::Fuse::Resources::ImageSource_type* TextureImageSource_typeof()
{
    static uSStrong< ::g::Fuse::Resources::ImageSource_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Resources::ImageSource_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TextureImageSource);
    options.TypeSize = sizeof(::g::Fuse::Resources::ImageSource_type);
    type = (::g::Fuse::Resources::ImageSource_type*)uClassType::New("Fuse.Resources.TextureImageSource", options);
    type->fp_build_ = TextureImageSource_build;
    type->fp_GetBytes = (void(*)(::g::Fuse::Resources::ImageSource*, uArray**))TextureImageSource__GetBytes_fn;
    type->fp_GetTexture = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Graphics::Texture2D**))TextureImageSource__GetTexture_fn;
    type->fp_get_Orientation = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))TextureImageSource__get_Orientation_fn;
    type->fp_get_PixelSize = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Int2*))TextureImageSource__get_PixelSize_fn;
    type->fp_get_Size = (void(*)(::g::Fuse::Resources::ImageSource*, ::g::Uno::Float2*))TextureImageSource__get_Size_fn;
    type->fp_get_SizeDensity = (void(*)(::g::Fuse::Resources::ImageSource*, float*))TextureImageSource__get_SizeDensity_fn;
    type->fp_get_State = (void(*)(::g::Fuse::Resources::ImageSource*, int32_t*))TextureImageSource__get_State_fn;
    return type;
}

// public float get_Density()
void TextureImageSource__get_Density_fn(TextureImageSource* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value)
void TextureImageSource__set_Density_fn(TextureImageSource* __this, float* value)
{
    __this->Density(*value);
}

// public override sealed byte[] GetBytes()
void TextureImageSource__GetBytes_fn(TextureImageSource* __this, uArray** __retval)
{
    return *__retval = nullptr, void();
}

// public override sealed texture2D GetTexture()
void TextureImageSource__GetTexture_fn(TextureImageSource* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    return *__retval = __this->_texture, void();
}

// public override sealed Fuse.Resources.Exif.ImageOrientation get_Orientation()
void TextureImageSource__get_Orientation_fn(TextureImageSource* __this, int32_t* __retval)
{
    return *__retval = 0, void();
}

// public override sealed int2 get_PixelSize()
void TextureImageSource__get_PixelSize_fn(TextureImageSource* __this, ::g::Uno::Int2* __retval)
{
    if (__this->_texture != nullptr)
        return *__retval = uPtr(__this->_texture)->Size(), void();

    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// public override sealed float2 get_Size()
void TextureImageSource__get_Size_fn(TextureImageSource* __this, ::g::Uno::Float2* __retval)
{
    if (__this->_texture != nullptr)
        return *__retval = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)uPtr(__this->_texture)->Size().X, (float)uPtr(__this->_texture)->Size().Y), __this->_density), void();

    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public override sealed float get_SizeDensity()
void TextureImageSource__get_SizeDensity_fn(TextureImageSource* __this, float* __retval)
{
    return *__retval = __this->Density(), void();
}

// public override sealed Fuse.Resources.ImageSourceState get_State()
void TextureImageSource__get_State_fn(TextureImageSource* __this, int32_t* __retval)
{
    if (__this->_texture != nullptr)
        return *__retval = 1, void();

    return *__retval = 0, void();
}

// public float get_Density() [instance]
float TextureImageSource::Density()
{
    return _density;
}

// public void set_Density(float value) [instance]
void TextureImageSource::Density(float value)
{
    if (_density != value)
    {
        _density = value;
        OnChanged();
    }
}
// }

}}} // ::g::Fuse::Resources
