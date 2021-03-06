// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Resources.Exif.E-e739d759.h>
#include <Fuse.Resources.Exif.ExifData.h>
#include <Fuse.Resources.Exif.I-84c031e4.h>
#include <Java.Object.h>
#include <jni.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Compiler.ExportTa-9295b098.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[3];
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Resources{
namespace Exif{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/Exif/Exif.uno
// -----------------------------------------------------------------------------

// internal sealed extern class ExifAndroidImpl
// {
static void ExifAndroidImpl_build(uType* type)
{
}

uType* ExifAndroidImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(ExifAndroidImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Resources.Exif.ExifAndroidImpl", options);
    type->fp_build_ = ExifAndroidImpl_build;
    return type;
}

// internal static Fuse.Resources.Exif.ExifData FromByteArray(byte[] bytes)
void ExifAndroidImpl__FromByteArray_fn(uArray* bytes, ::g::Fuse::Resources::Exif::ExifData* __retval)
{
    *__retval = ExifAndroidImpl::FromByteArray(bytes);
}

// private static int GetOrientation(Java.Object stream)
void ExifAndroidImpl__GetOrientation_fn(::g::Java::Object* stream, int32_t* __retval)
{
    *__retval = ExifAndroidImpl::GetOrientation(stream);
}

// private static Java.Object InputStreamFromByteArray(Java.Object buf)
void ExifAndroidImpl__InputStreamFromByteArray_fn(::g::Java::Object* buf, ::g::Java::Object** __retval)
{
    *__retval = ExifAndroidImpl::InputStreamFromByteArray(buf);
}

// internal static Fuse.Resources.Exif.ExifData FromByteArray(byte[] bytes) [static]
::g::Fuse::Resources::Exif::ExifData ExifAndroidImpl::FromByteArray(uArray* bytes)
{
    ::g::Java::Object* buf = ::g::Uno::Compiler::ExportTargetInterop::ForeignDataView::Create(bytes);
    ::g::Java::Object* stream = ExifAndroidImpl::InputStreamFromByteArray(buf);
    return ::g::Fuse::Resources::Exif::ExifData__New1(ExifAndroidImpl::GetOrientation(stream));
}

// private static int GetOrientation(Java.Object stream) [static]
int32_t ExifAndroidImpl::GetOrientation(::g::Java::Object* stream)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetOrientation120", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _ustream=stream;
        jobject _stream = (_ustream==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ustream, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_stream);
        int32_t __result = (int32_t)__jresult;
        if (_stream!=nullptr) { U_JNIVAR->DeleteLocalRef(_stream); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object InputStreamFromByteArray(Java.Object buf) [static]
::g::Java::Object* ExifAndroidImpl::InputStreamFromByteArray(::g::Java::Object* buf)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "InputStreamFromByteArray121", "(Ljava/lang/Object;)Ljava/lang/Object;");
        ::g::Java::Object* _ubuf=buf;
        jobject _buf = (_ubuf==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubuf, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_buf);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_buf!=nullptr) { U_JNIVAR->DeleteLocalRef(_buf); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/Exif/Exif.uno
// -----------------------------------------------------------------------------

// public struct ExifData
// {
static void ExifData_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Reserved Exif orientation {0}, assuming identity");
    ::STRINGS[1] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/Exif/Exif.uno");
    ::STRINGS[2] = uString::Const(".ctor");
    ::TYPES[0] = uObject_typeof()->Array();
    type->SetFields(0,
        ::g::Fuse::Resources::Exif::ImageOrientation_typeof(), offsetof(ExifData, Orientation), 0);
}

uStructType* ExifData_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(ExifData);
    options.ValueSize = sizeof(ExifData);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Resources.Exif.ExifData", options);
    type->fp_build_ = ExifData_build;
    return type;
}

// internal ExifData(int orientation)
void ExifData__ctor_1_fn(ExifData* __this, int32_t* orientation)
{
    __this->ctor_1(*orientation);
}

// public static Fuse.Resources.Exif.ExifData FromByteArray(byte[] buffer)
void ExifData__FromByteArray_fn(uArray* buffer, ExifData* __retval)
{
    *__retval = ExifData__FromByteArray(buffer);
}

// internal ExifData New(int orientation)
void ExifData__New1_fn(int32_t* orientation, ExifData* __retval)
{
    *__retval = ExifData__New1(*orientation);
}

// internal ExifData(int orientation) [instance]
void ExifData::ctor_1(int32_t orientation)
{
    if (orientation < 0)
    {
        Orientation = 0;
        return;
    }

    switch (orientation)
    {
        case 1:
        {
            Orientation = 0;
            break;
        }
        case 2:
        {
            Orientation = 6;
            break;
        }
        case 3:
        {
            Orientation = 2;
            break;
        }
        case 4:
        {
            Orientation = 4;
            break;
        }
        case 5:
        {
            Orientation = 7;
            break;
        }
        case 6:
        {
            Orientation = 1;
            break;
        }
        case 7:
        {
            Orientation = 5;
            break;
        }
        case 8:
        {
            Orientation = 3;
            break;
        }
        default:
        {
            ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::Format(::STRINGS[0/*"Reserved Ex...*/], uArray::Init<uObject*>(::TYPES[0/*object[]*/], 1, uBox<int32_t>(::g::Uno::Int_typeof(), orientation))), nullptr, ::STRINGS[1/*"/Users/mort...*/], 63, ::STRINGS[2/*".ctor"*/]);
            Orientation = 0;
            break;
        }
    }
}

// public static Fuse.Resources.Exif.ExifData FromByteArray(byte[] buffer) [static]
ExifData ExifData__FromByteArray(uArray* buffer)
{
    return ::g::Fuse::Resources::Exif::ExifAndroidImpl::FromByteArray(buffer);
    return uDefault<ExifData>();
}

// internal ExifData New(int orientation) [static]
ExifData ExifData__New1(int32_t orientation)
{
    ExifData obj1;
    obj1.ctor_1(orientation);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Resources/Exif/Exif.uno
// -----------------------------------------------------------------------------

// public enum ImageOrientation
uEnumType* ImageOrientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Resources.Exif.ImageOrientation", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Identity", 0LL,
        "Rotate90", 1LL,
        "Rotate180", 2LL,
        "Rotate270", 3LL,
        "FlipVertical", 4LL);
    return type;
}

}}}} // ::g::Fuse::Resources::Exif
