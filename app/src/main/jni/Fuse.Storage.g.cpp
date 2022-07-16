// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.IArray.h>
#include <Fuse.IObject.h>
#include <Fuse.Json.h>
#include <Fuse.Marshal.h>
#include <Fuse.Scripting.Array.h>
#include <Fuse.Scripting.Context.h>
#include <Fuse.Scripting.FutureFactory-1.h>
#include <Fuse.Scripting.NativeCallback.h>
#include <Fuse.Scripting.NativeFunction.h>
#include <Fuse.Scripting.NativeMember.h>
#include <Fuse.Scripting.NativePromise-2.h>
#include <Fuse.Scripting.Object.h>
#include <Fuse.Scripting.Result-aef282d8.h>
#include <Fuse.Storage.AndroidU-2b96da3d.h>
#include <Fuse.Storage.Applicat-d2d704a.h>
#include <Fuse.Storage.Applicat-df64148.h>
#include <Fuse.Storage.ApplicationDir.h>
#include <Fuse.Storage.StorageModule.h>
#include <Fuse.Storage.UserSett-74a43bad.h>
#include <jni.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Func-1.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.FileMode.h>
#include <Uno.IO.FileStream.h>
#include <Uno.IO.Path.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.Threading.Promise-1.h>
#include <Uno.UX.Resource.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[21];
static uType* TYPES[11];

namespace g{
namespace Fuse{
namespace Storage{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Storage/UserSettingsImpl.uno
// -------------------------------------------------------------------------

// public sealed extern class AndroidUserSettingsImpl
// {
static void AndroidUserSettingsImpl_build(uType* type)
{
}

uType* AndroidUserSettingsImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(AndroidUserSettingsImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.AndroidUserSettingsImpl", options);
    type->fp_build_ = AndroidUserSettingsImpl_build;
    return type;
}

// public static void Clear()
void AndroidUserSettingsImpl__Clear_fn()
{
    AndroidUserSettingsImpl::Clear();
}

// public static bool GetBooleanValue(string key)
void AndroidUserSettingsImpl__GetBooleanValue_fn(uString* key, bool* __retval)
{
    *__retval = AndroidUserSettingsImpl::GetBooleanValue(key);
}

// public static double GetNumberValue(string key)
void AndroidUserSettingsImpl__GetNumberValue_fn(uString* key, double* __retval)
{
    *__retval = AndroidUserSettingsImpl::GetNumberValue(key);
}

// public static string GetStringValue(string key)
void AndroidUserSettingsImpl__GetStringValue_fn(uString* key, uString** __retval)
{
    *__retval = AndroidUserSettingsImpl::GetStringValue(key);
}

// public static void Remove(string key)
void AndroidUserSettingsImpl__Remove_fn(uString* key)
{
    AndroidUserSettingsImpl::Remove(key);
}

// public static void SetBooleanValue(string key, bool value)
void AndroidUserSettingsImpl__SetBooleanValue_fn(uString* key, bool* value)
{
    AndroidUserSettingsImpl::SetBooleanValue(key, *value);
}

// public static void SetNumberValue(string key, double value)
void AndroidUserSettingsImpl__SetNumberValue_fn(uString* key, double* value)
{
    AndroidUserSettingsImpl::SetNumberValue(key, *value);
}

// public static void SetStringValue(string key, string value)
void AndroidUserSettingsImpl__SetStringValue_fn(uString* key, uString* value)
{
    AndroidUserSettingsImpl::SetStringValue(key, value);
}

// public static void Clear() [static]
void AndroidUserSettingsImpl::Clear()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Clear394", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static bool GetBooleanValue(string key) [static]
bool AndroidUserSettingsImpl::GetBooleanValue(uString* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetBooleanValue395", "(Ljava/lang/String;)Z");
        uString* _ukey=key;
        jstring _key = JniHelper::UnoToJavaString(_ukey);
        jboolean __jresult = U_JNIVAR->CallStaticBooleanMethod(__cls,__mtd,_key);
        bool __result = (bool)__jresult;
        if (_key!=nullptr) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static double GetNumberValue(string key) [static]
double AndroidUserSettingsImpl::GetNumberValue(uString* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetNumberValue396", "(Ljava/lang/String;)D");
        uString* _ukey=key;
        jstring _key = JniHelper::UnoToJavaString(_ukey);
        jdouble __jresult = U_JNIVAR->CallStaticDoubleMethod(__cls,__mtd,_key);
        double __result = (double)__jresult;
        if (_key!=nullptr) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static string GetStringValue(string key) [static]
uString* AndroidUserSettingsImpl::GetStringValue(uString* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetStringValue397", "(Ljava/lang/String;)Ljava/lang/String;");
        uString* _ukey=key;
        jstring _key = JniHelper::UnoToJavaString(_ukey);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_key);
        uString* __result = JniHelper::JavaToUnoString((jstring)__jresult);
        if (_key!=nullptr) { U_JNIVAR->DeleteLocalRef(_key); }
        if (__jresult!=nullptr && U_JNIVAR->GetObjectRefType(__jresult) == JNILocalRefType) U_JNIVAR->DeleteLocalRef(__jresult);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// public static void Remove(string key) [static]
void AndroidUserSettingsImpl::Remove(uString* key)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "Remove398", "(Ljava/lang/String;)V");
        uString* _ukey=key;
        jstring _key = JniHelper::UnoToJavaString(_ukey);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_key);
        
        if (_key!=nullptr) { U_JNIVAR->DeleteLocalRef(_key); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void SetBooleanValue(string key, bool value) [static]
void AndroidUserSettingsImpl::SetBooleanValue(uString* key, bool value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetBooleanValue399", "(Ljava/lang/String;Z)V");
        uString* _ukey=key;
        jstring _key = JniHelper::UnoToJavaString(_ukey);
        bool _uvalue=value;
        jboolean _value = (jboolean)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_key,_value);
        
        if (_key!=nullptr) { U_JNIVAR->DeleteLocalRef(_key); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void SetNumberValue(string key, double value) [static]
void AndroidUserSettingsImpl::SetNumberValue(uString* key, double value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetNumberValue400", "(Ljava/lang/String;D)V");
        uString* _ukey=key;
        jstring _key = JniHelper::UnoToJavaString(_ukey);
        double _uvalue=value;
        jdouble _value = (jdouble)_uvalue;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_key,_value);
        
        if (_key!=nullptr) { U_JNIVAR->DeleteLocalRef(_key); }
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static void SetStringValue(string key, string value) [static]
void AndroidUserSettingsImpl::SetStringValue(uString* key, uString* value)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetStringValue401", "(Ljava/lang/String;Ljava/lang/String;)V");
        uString* _ukey=key;
        jstring _key = JniHelper::UnoToJavaString(_ukey);
        uString* _uvalue=value;
        jstring _value = JniHelper::UnoToJavaString(_uvalue);
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_key,_value);
        
        if (_key!=nullptr) { U_JNIVAR->DeleteLocalRef(_key); }
        if (_value!=nullptr) { U_JNIVAR->DeleteLocalRef(_value); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Storage/ApplicationDir.uno
// -----------------------------------------------------------------------

// internal static class ApplicationDir
// {
static void ApplicationDir_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::IO::Path_typeof());
}

uClassType* ApplicationDir_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Storage.ApplicationDir", options);
    type->fp_build_ = ApplicationDir_build;
    return type;
}

// private static void CreateFile(string filepath)
void ApplicationDir__CreateFile_fn(uString* filepath)
{
    ApplicationDir::CreateFile(filepath);
}

// public static bool Delete(string filename)
void ApplicationDir__Delete_fn(uString* filename, bool* __retval)
{
    *__retval = ApplicationDir::Delete(filename);
}

// public static string Read(string filename)
void ApplicationDir__Read_fn(uString* filename, uString** __retval)
{
    *__retval = ApplicationDir::Read(filename);
}

// public static Uno.Threading.Future<string> ReadAsync(string filename)
void ApplicationDir__ReadAsync_fn(uString* filename, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::ReadAsync(filename);
}

// public static bool TryRead(string filename, string& content)
void ApplicationDir__TryRead_fn(uString* filename, uString** content, bool* __retval)
{
    *__retval = ApplicationDir::TryRead(filename, content);
}

// public static bool Write(string filename, string value)
void ApplicationDir__Write_fn(uString* filename, uString* value, bool* __retval)
{
    *__retval = ApplicationDir::Write(filename, value);
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value)
void ApplicationDir__WriteAsync_fn(uString* filename, uString* value, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = ApplicationDir::WriteAsync(filename, value);
}

// private static void CreateFile(string filepath) [static]
void ApplicationDir::CreateFile(uString* filepath)
{
    ::g::Uno::IO::FileStream* stream = ::g::Uno::IO::File::Open(filepath, 2);

    {
        try
        {
            {
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::g::Uno::IDisposable_typeof()));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)stream), ::g::Uno::IDisposable_typeof()));
        }
        __after_finally_0:;
    }
}

// public static bool Delete(string filename) [static]
bool ApplicationDir::Delete(uString* filename)
{
    if (::g::Uno::String::op_Equality(filename, nullptr))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("filename")));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);

    if (!::g::Uno::IO::File::Exists(filepath))
        return false;

    try
    {
        {
            ::g::Uno::IO::File::Delete(filepath);
            return true;
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
    }

    return false;
}

// public static string Read(string filename) [static]
uString* ApplicationDir::Read(uString* filename)
{
    uString* content;

    if (ApplicationDir::TryRead(filename, &content))
        return content;
    else
        U_THROW(::g::Uno::Exception::New2(uString::Const("File does not exist.")));
}

// public static Uno.Threading.Future<string> ReadAsync(string filename) [static]
::g::Uno::Threading::Future1* ApplicationDir::ReadAsync(uString* filename)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[5/*string*/], nullptr), uDelegate::New(::g::Uno::Func_typeof()->MakeType(::TYPES[5/*string*/], nullptr), (void*)ApplicationDir__ReadClosure__Invoke_fn, ApplicationDir__ReadClosure::New1(filename)));
}

// public static bool TryRead(string filename, string& content) [static]
bool ApplicationDir::TryRead(uString* filename, uString** content)
{
    if (::g::Uno::String::op_Equality(filename, nullptr))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("filename")));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);

    if (!::g::Uno::IO::File::Exists(filepath))
    {
        *content = ::g::Uno::String::Empty_;
        return false;
    }

    *content = ::g::Uno::IO::File::ReadAllText(filepath);
    return true;
}

// public static bool Write(string filename, string value) [static]
bool ApplicationDir::Write(uString* filename, uString* value)
{
    if (::g::Uno::String::op_Equality(filename, nullptr))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("filename")));

    if (::g::Uno::String::op_Equality(value, nullptr))
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("value")));

    uString* filepath = ::g::Uno::IO::Path::Combine(::g::Uno::IO::Directory::GetUserDirectory(2), filename);
    ApplicationDir::CreateFile(filepath);
    ::g::Uno::IO::File::WriteAllText(filepath, value);
    return true;
}

// public static Uno.Threading.Future<bool> WriteAsync(string filename, string value) [static]
::g::Uno::Threading::Future1* ApplicationDir::WriteAsync(uString* filename, uString* value)
{
    return (::g::Uno::Threading::Future1*)::g::Uno::Threading::Promise::Run(::g::Uno::Threading::Promise_typeof()->MakeType(::TYPES[9/*bool*/], nullptr), uDelegate::New(::g::Uno::Func_typeof()->MakeType(::TYPES[9/*bool*/], nullptr), (void*)ApplicationDir__WriteClosure__Invoke_fn, ApplicationDir__WriteClosure::New1(filename, value)));
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Storage/ApplicationDir.uno
// -----------------------------------------------------------------------

// private sealed class ApplicationDir.ReadClosure
// {
static void ApplicationDir__ReadClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ApplicationDir__ReadClosure, _filename), 0);
}

uType* ApplicationDir__ReadClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(ApplicationDir__ReadClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.ReadClosure", options);
    type->fp_build_ = ApplicationDir__ReadClosure_build;
    return type;
}

// public ReadClosure(string filename)
void ApplicationDir__ReadClosure__ctor__fn(ApplicationDir__ReadClosure* __this, uString* filename)
{
    __this->ctor_(filename);
}

// public string Invoke()
void ApplicationDir__ReadClosure__Invoke_fn(ApplicationDir__ReadClosure* __this, uString** __retval)
{
    *__retval = __this->Invoke();
}

// public ReadClosure New(string filename)
void ApplicationDir__ReadClosure__New1_fn(uString* filename, ApplicationDir__ReadClosure** __retval)
{
    *__retval = ApplicationDir__ReadClosure::New1(filename);
}

// public ReadClosure(string filename) [instance]
void ApplicationDir__ReadClosure::ctor_(uString* filename)
{
    _filename = filename;
}

// public string Invoke() [instance]
uString* ApplicationDir__ReadClosure::Invoke()
{
    return ::g::Fuse::Storage::ApplicationDir::Read(_filename);
}

// public ReadClosure New(string filename) [static]
ApplicationDir__ReadClosure* ApplicationDir__ReadClosure::New1(uString* filename)
{
    ApplicationDir__ReadClosure* obj1 = (ApplicationDir__ReadClosure*)uNew(ApplicationDir__ReadClosure_typeof());
    obj1->ctor_(filename);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Storage/StorageModule.uno
// ----------------------------------------------------------------------

// public sealed class StorageModule
// {
static void StorageModule_build(uType* type)
{
    ::STRINGS[0] = uString::Const("FuseJS/Storage");
    ::STRINGS[1] = uString::Const("writeSync");
    ::STRINGS[2] = uString::Const("readSync");
    ::STRINGS[3] = uString::Const("removeSync");
    ::STRINGS[4] = uString::Const("deleteSync");
    ::STRINGS[5] = uString::Const("write");
    ::STRINGS[6] = uString::Const("read");
    ::STRINGS[7] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[1] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), nullptr);
    ::TYPES[2] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::Bool_typeof(), nullptr);
    ::TYPES[3] = ::g::Fuse::Scripting::NativePromise_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[4] = ::g::Fuse::Scripting::FutureFactory_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[5] = ::g::Uno::String_typeof();
    type->SetDependencies(
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&StorageModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* StorageModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StorageModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Storage.StorageModule", options);
    type->fp_build_ = StorageModule_build;
    type->fp_ctor_ = (void*)StorageModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public StorageModule()
void StorageModule__ctor_2_fn(StorageModule* __this)
{
    __this->ctor_2();
}

// public StorageModule New()
void StorageModule__New2_fn(StorageModule** __retval)
{
    *__retval = StorageModule::New2();
}

// private static object Read(Fuse.Scripting.Context c, object[] args)
void StorageModule__Read_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Read(c, args);
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args)
void StorageModule__ReadAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = StorageModule::ReadAsync(args);
}

// private static object Remove(Fuse.Scripting.Context c, object[] args)
void StorageModule__Remove_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Remove(c, args);
}

// private static object Write(Fuse.Scripting.Context c, object[] args)
void StorageModule__Write_fn(::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = StorageModule::Write(c, args);
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args)
void StorageModule__WriteAsync_fn(uArray* args, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = StorageModule::WriteAsync(args);
}

uSStrong<StorageModule*> StorageModule::_instance_;

// public StorageModule() [instance]
void StorageModule::ctor_2()
{
    ctor_1();

    if (StorageModule::_instance_ != nullptr)
        return;

    ::g::Uno::UX::Resource::SetGlobalKey(StorageModule::_instance_ = this, ::STRINGS[0/*"FuseJS/Stor...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[1/*"writeSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Write_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[2/*"readSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Read_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[3/*"removeSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Remove_fn)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[4/*"deleteSync"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)StorageModule__Remove_fn)));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[1/*Fuse.Scripting.NativePromise<bool, bool>*/], ::STRINGS[5/*"write"*/], uDelegate::New(::TYPES[2/*Fuse.Scripting.FutureFactory<bool>*/], (void*)StorageModule__WriteAsync_fn), nullptr));
    AddMember((::g::Fuse::Scripting::NativePromise*)::g::Fuse::Scripting::NativePromise::New1(::TYPES[3/*Fuse.Scripting.NativePromise<string, string>*/], ::STRINGS[6/*"read"*/], uDelegate::New(::TYPES[4/*Fuse.Scripting.FutureFactory<string>*/], (void*)StorageModule__ReadAsync_fn), nullptr));
}

// public StorageModule New() [static]
StorageModule* StorageModule::New2()
{
    StorageModule* obj1 = (StorageModule*)uNew(StorageModule_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static object Read(Fuse.Scripting.Context c, object[] args) [static]
uObject* StorageModule::Read(::g::Fuse::Scripting::Context* c, uArray* args)
{
    uString* filename = nullptr;

    if (uPtr(args)->Length() > 0)
        filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);

    uString* content;

    if (::g::Fuse::Storage::ApplicationDir::TryRead((filename != nullptr) ? filename : ::STRINGS[7/*""*/], &content))
        return content;
    else
        return ::g::Uno::String::Empty_;
}

// private static Uno.Threading.Future<string> ReadAsync(object[] args) [static]
::g::Uno::Threading::Future1* StorageModule::ReadAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::ReadAsync((filename != nullptr) ? filename : ::STRINGS[7/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::ReadAsync(::STRINGS[7/*""*/]);
}

// private static object Remove(Fuse.Scripting.Context c, object[] args) [static]
uObject* StorageModule::Remove(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        return uBox(::TYPES[9/*bool*/], ::g::Fuse::Storage::ApplicationDir::Delete(filename));
    }

    return uBox(::TYPES[9/*bool*/], false);
}

// private static object Write(Fuse.Scripting.Context c, object[] args) [static]
uObject* StorageModule::Write(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]);
        return uBox(::TYPES[9/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write((filename != nullptr) ? filename : ::STRINGS[7/*""*/], (value != nullptr) ? value : ::STRINGS[7/*""*/]));
    }

    return uBox(::TYPES[9/*bool*/], ::g::Fuse::Storage::ApplicationDir::Write(::STRINGS[7/*""*/], ::STRINGS[7/*""*/]));
}

// private static Uno.Threading.Future<bool> WriteAsync(object[] args) [static]
::g::Uno::Threading::Future1* StorageModule::WriteAsync(uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* filename = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]);
        return ::g::Fuse::Storage::ApplicationDir::WriteAsync((filename != nullptr) ? filename : ::STRINGS[7/*""*/], (value != nullptr) ? value : ::STRINGS[7/*""*/]);
    }

    return ::g::Fuse::Storage::ApplicationDir::WriteAsync(::STRINGS[7/*""*/], ::STRINGS[7/*""*/]);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Storage/UserSettingsModule.uno
// ---------------------------------------------------------------------------

// public sealed class UserSettingsModule
// {
static void UserSettingsModule_build(uType* type)
{
    ::STRINGS[8] = uString::Const("FuseJS/UserSettings");
    ::STRINGS[9] = uString::Const("getString");
    ::STRINGS[10] = uString::Const("putString");
    ::STRINGS[11] = uString::Const("getNumber");
    ::STRINGS[12] = uString::Const("putNumber");
    ::STRINGS[13] = uString::Const("getBoolean");
    ::STRINGS[14] = uString::Const("putBoolean");
    ::STRINGS[15] = uString::Const("getArray");
    ::STRINGS[16] = uString::Const("putArray");
    ::STRINGS[17] = uString::Const("getObject");
    ::STRINGS[18] = uString::Const("putObject");
    ::STRINGS[19] = uString::Const("remove");
    ::STRINGS[20] = uString::Const("clear");
    ::STRINGS[7] = uString::Const("");
    ::TYPES[0] = ::g::Fuse::Scripting::NativeCallback_typeof();
    ::TYPES[6] = ::g::Fuse::IObject_typeof();
    ::TYPES[7] = ::g::Fuse::IArray_typeof();
    ::TYPES[8] = uObject_typeof()->Array();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[9] = ::g::Uno::Bool_typeof();
    ::TYPES[10] = ::g::Uno::Double_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Uno::UX::Resource_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface0),
        ::g::Fuse::Scripting::IModuleProvider_typeof(), offsetof(::g::Fuse::Scripting::NativeModule_type, interface1));
    type->SetFields(4,
        type, (uintptr_t)&UserSettingsModule::_instance_, uFieldFlagsStatic);
}

::g::Fuse::Scripting::NativeModule_type* UserSettingsModule_typeof()
{
    static uSStrong< ::g::Fuse::Scripting::NativeModule_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Scripting::NativeModule_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 2;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(UserSettingsModule);
    options.TypeSize = sizeof(::g::Fuse::Scripting::NativeModule_type);
    type = (::g::Fuse::Scripting::NativeModule_type*)uClassType::New("Fuse.Storage.UserSettingsModule", options);
    type->fp_build_ = UserSettingsModule_build;
    type->fp_ctor_ = (void*)UserSettingsModule__New2_fn;
    type->interface1.fp_GetModule = (void(*)(uObject*, ::g::Fuse::Scripting::Module**))::g::Fuse::Scripting::NativeModule__FuseScriptingIModuleProviderGetModule_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Scripting::Module__Dispose_fn;
    return type;
}

// public UserSettingsModule()
void UserSettingsModule__ctor_2_fn(UserSettingsModule* __this)
{
    __this->ctor_2();
}

// private object Clear(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__Clear_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Clear(c, args);
}

// private object Converter(Fuse.Scripting.Context c, object obj)
void UserSettingsModule__Converter_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uObject** __retval)
{
    *__retval = __this->Converter(c, obj);
}

// private object GetBoolean(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__GetBoolean_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->GetBoolean(c, args);
}

// private object GetNumber(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__GetNumber_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->GetNumber(c, args);
}

// private object GetObject(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__GetObject_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->GetObject(c, args);
}

// private object GetString(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__GetString_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->GetString(c, args);
}

// public UserSettingsModule New()
void UserSettingsModule__New2_fn(UserSettingsModule** __retval)
{
    *__retval = UserSettingsModule::New2();
}

// private object PutBoolean(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__PutBoolean_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->PutBoolean(c, args);
}

// private object PutNumber(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__PutNumber_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->PutNumber(c, args);
}

// private object PutObject(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__PutObject_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->PutObject(c, args);
}

// private object PutString(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__PutString_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->PutString(c, args);
}

// private object Remove(Fuse.Scripting.Context c, object[] args)
void UserSettingsModule__Remove_fn(UserSettingsModule* __this, ::g::Fuse::Scripting::Context* c, uArray* args, uObject** __retval)
{
    *__retval = __this->Remove(c, args);
}

uSStrong<UserSettingsModule*> UserSettingsModule::_instance_;

// public UserSettingsModule() [instance]
void UserSettingsModule::ctor_2()
{
    ctor_1();

    if (UserSettingsModule::_instance_ != nullptr)
        return;

    UserSettingsModule::_instance_ = this;
    ::g::Uno::UX::Resource::SetGlobalKey(UserSettingsModule::_instance_, ::STRINGS[8/*"FuseJS/User...*/]);
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[9/*"getString"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__GetString_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[10/*"putString"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__PutString_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[11/*"getNumber"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__GetNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[12/*"putNumber"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__PutNumber_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[13/*"getBoolean"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__GetBoolean_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[14/*"putBoolean"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__PutBoolean_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[15/*"getArray"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__GetObject_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[16/*"putArray"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__PutObject_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[17/*"getObject"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__GetObject_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[18/*"putObject"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__PutObject_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[19/*"remove"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__Remove_fn, this)));
    AddMember(::g::Fuse::Scripting::NativeFunction::New1(::STRINGS[20/*"clear"*/], uDelegate::New(::TYPES[0/*Fuse.Scripting.NativeCallback*/], (void*)UserSettingsModule__Clear_fn, this)));
}

// private object Clear(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::Clear(::g::Fuse::Scripting::Context* c, uArray* args)
{
    ::g::Fuse::Storage::AndroidUserSettingsImpl::Clear();
    return nullptr;
}

// private object Converter(Fuse.Scripting.Context c, object obj) [instance]
uObject* UserSettingsModule::Converter(::g::Fuse::Scripting::Context* c, uObject* obj)
{
    if (uIs(obj, ::TYPES[6/*Fuse.IObject*/]))
    {
        ::g::Fuse::Scripting::Object* output = uPtr(c)->NewObject();
        uObject* data = uAs<uObject*>(obj, ::TYPES[6/*Fuse.IObject*/]);

        for (int32_t i = 0; i < uPtr(::g::Fuse::IObject::Keys(uInterface(uPtr(data), ::TYPES[6/*Fuse.IObject*/])))->Length(); i++)
            uPtr(output)->Item(uPtr(::g::Fuse::IObject::Keys(uInterface(uPtr(data), ::TYPES[6/*Fuse.IObject*/])))->Strong<uString*>(i), Converter(c, ::g::Fuse::IObject::Item(uInterface(uPtr(data), ::TYPES[6/*Fuse.IObject*/]), uPtr(::g::Fuse::IObject::Keys(uInterface(uPtr(data), ::TYPES[6/*Fuse.IObject*/])))->Strong<uString*>(i))));

        return output;
    }
    else if (uIs(obj, ::TYPES[7/*Fuse.IArray*/]))
    {
        uObject* arr = uAs<uObject*>(obj, ::TYPES[7/*Fuse.IArray*/]);
        uArray* values = uArray::New(::TYPES[8/*object[]*/], ::g::Fuse::IArray::Length(uInterface(uPtr(arr), ::TYPES[7/*Fuse.IArray*/])));

        for (int32_t i1 = 0; i1 < values->Length(); i1++)
            uPtr(values)->Strong<uObject*>(i1) = Converter(c, ::g::Fuse::IArray::Item(uInterface(uPtr(arr), ::TYPES[7/*Fuse.IArray*/]), i1));

        return uPtr(c)->NewArray(values);
    }
    else if (uIs(obj, ::TYPES[5/*string*/]))
        return uCast<uString*>(obj, ::TYPES[5/*string*/]);
    else if (uIs(obj, ::TYPES[9/*bool*/]))
        return uBox(::TYPES[9/*bool*/], uUnbox<bool>(::TYPES[9/*bool*/], obj));
    else if (uIs(obj, ::TYPES[10/*double*/]))
        return uBox(::TYPES[10/*double*/], uUnbox<double>(::TYPES[10/*double*/], obj));
    else
        return nullptr;
}

// private object GetBoolean(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::GetBoolean(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        return uBox(::TYPES[9/*bool*/], ::g::Fuse::Storage::AndroidUserSettingsImpl::GetBooleanValue(key));
    }

    return nullptr;
}

// private object GetNumber(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::GetNumber(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        return uBox(::TYPES[10/*double*/], ::g::Fuse::Storage::AndroidUserSettingsImpl::GetNumberValue(key));
    }

    return nullptr;
}

// private object GetObject(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::GetObject(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        uString* value = ::STRINGS[7/*""*/];
        value = ::g::Fuse::Storage::AndroidUserSettingsImpl::GetStringValue(key);

        if (::g::Uno::String::op_Inequality(value, nullptr))
            return Converter(c, ::g::Fuse::Json::Parse(value));
    }

    return nullptr;
}

// private object GetString(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::GetString(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        return ::g::Fuse::Storage::AndroidUserSettingsImpl::GetStringValue(key);
    }

    return nullptr;
}

// private object PutBoolean(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::PutBoolean(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 1)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);

        if (args->Strong<uObject*>(1) == nullptr)
            return nullptr;

        bool value = ::g::Fuse::Marshal::ToBool(args->Strong<uObject*>(1));
        ::g::Fuse::Storage::AndroidUserSettingsImpl::SetBooleanValue(key, value);
    }

    return nullptr;
}

// private object PutNumber(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::PutNumber(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 1)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);

        if (args->Strong<uObject*>(1) == nullptr)
            return nullptr;

        double value = ::g::Fuse::Marshal::ToDouble(args->Strong<uObject*>(1));
        ::g::Fuse::Storage::AndroidUserSettingsImpl::SetNumberValue(key, value);
    }

    return nullptr;
}

// private object PutObject(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::PutObject(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 1)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);

        if (args->Strong<uObject*>(1) == nullptr)
            return nullptr;

        uString* value = ::g::Fuse::Json::Stringify(args->Strong<uObject*>(1), false);
        ::g::Fuse::Storage::AndroidUserSettingsImpl::SetStringValue(key, value);
    }

    return nullptr;
}

// private object PutString(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::PutString(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 1)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);

        if (args->Strong<uObject*>(1) == nullptr)
            return nullptr;

        uString* value = uAs<uString*>(args->Strong<uObject*>(1), ::TYPES[5/*string*/]);
        ::g::Fuse::Storage::AndroidUserSettingsImpl::SetStringValue(key, value);
    }

    return nullptr;
}

// private object Remove(Fuse.Scripting.Context c, object[] args) [instance]
uObject* UserSettingsModule::Remove(::g::Fuse::Scripting::Context* c, uArray* args)
{
    if (uPtr(args)->Length() > 0)
    {
        uString* key = uAs<uString*>(uPtr(args)->Strong<uObject*>(0), ::TYPES[5/*string*/]);
        ::g::Fuse::Storage::AndroidUserSettingsImpl::Remove(key);
    }

    return nullptr;
}

// public UserSettingsModule New() [static]
UserSettingsModule* UserSettingsModule::New2()
{
    UserSettingsModule* obj1 = (UserSettingsModule*)uNew(UserSettingsModule_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Storage/ApplicationDir.uno
// -----------------------------------------------------------------------

// private sealed class ApplicationDir.WriteClosure
// {
static void ApplicationDir__WriteClosure_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(ApplicationDir__WriteClosure, _filename), 0,
        ::g::Uno::String_typeof(), offsetof(ApplicationDir__WriteClosure, _value), 0);
}

uType* ApplicationDir__WriteClosure_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(ApplicationDir__WriteClosure);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Storage.ApplicationDir.WriteClosure", options);
    type->fp_build_ = ApplicationDir__WriteClosure_build;
    return type;
}

// public WriteClosure(string filename, string value)
void ApplicationDir__WriteClosure__ctor__fn(ApplicationDir__WriteClosure* __this, uString* filename, uString* value)
{
    __this->ctor_(filename, value);
}

// public bool Invoke()
void ApplicationDir__WriteClosure__Invoke_fn(ApplicationDir__WriteClosure* __this, bool* __retval)
{
    *__retval = __this->Invoke();
}

// public WriteClosure New(string filename, string value)
void ApplicationDir__WriteClosure__New1_fn(uString* filename, uString* value, ApplicationDir__WriteClosure** __retval)
{
    *__retval = ApplicationDir__WriteClosure::New1(filename, value);
}

// public WriteClosure(string filename, string value) [instance]
void ApplicationDir__WriteClosure::ctor_(uString* filename, uString* value)
{
    _filename = filename;
    _value = value;
}

// public bool Invoke() [instance]
bool ApplicationDir__WriteClosure::Invoke()
{
    return ::g::Fuse::Storage::ApplicationDir::Write(_filename, _value);
}

// public WriteClosure New(string filename, string value) [static]
ApplicationDir__WriteClosure* ApplicationDir__WriteClosure::New1(uString* filename, uString* value)
{
    ApplicationDir__WriteClosure* obj1 = (ApplicationDir__WriteClosure*)uNew(ApplicationDir__WriteClosure_typeof());
    obj1->ctor_(filename, value);
    return obj1;
}
// }

}}} // ::g::Fuse::Storage
