// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.JNI.h>
#include <Android.Base.Primitiv-1a5f0013.h>
#include <Android.Base.Primitiv-22a842e.h>
#include <Android.Base.Primitiv-263ddec5.h>
#include <Android.Base.Primitiv-2f94ad06.h>
#include <Android.Base.Primitiv-7b6c607b.h>
#include <Android.Base.Primitiv-9f7bd552.h>
#include <Android.Base.Primitiv-a9a90c2a.h>
#include <Android.Base.Primitiv-b9feb1b7.h>
#include <Android.Base.Primitiv-ca68cc99.h>
#include <Android.Base.Primitiv-d2947ae4.h>
#include <Android.Base.Primitiv-de7b329a.h>
#include <Android.Base.Primitiv-dfa40e56.h>
#include <Android.Base.Primitiv-eed27b63.h>
#include <Android.Base.Primitiv-efc9ca76.h>
#include <Android.Base.Primitives.jweak.h>
#include <Android.Base.Primitives.ujbyte.h>
#include <Android.Base.Primitives.ujchar.h>
#include <Android.Base.Primitives.ujint.h>
#include <Android.Base.Primitives.ujlong.h>
#include <Android.Base.Primitiv-f1a87bd0.h>
#include <Uno.Bool.h>

namespace g{
namespace Android{
namespace Base{
namespace Primitives{

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ConstCharPtr
// {
static void ConstCharPtr_build(uType* type)
{
}

uStructType* ConstCharPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(const char*);
    options.ValueSize = sizeof(const char*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ConstCharPtr", options);
    type->fp_build_ = ConstCharPtr_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct JavaVMPtr
// {
static void JavaVMPtr_build(uType* type)
{
}

uStructType* JavaVMPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(JavaVM*);
    options.ValueSize = sizeof(JavaVM*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JavaVMPtr", options);
    type->fp_build_ = JavaVMPtr_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct jfieldID
// {
static void jfieldID_build(uType* type)
{
}

uStructType* jfieldID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jfieldID);
    options.ValueSize = sizeof(jfieldID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jfieldID", options);
    type->fp_build_ = jfieldID_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct jmethodID
// {
static void jmethodID_build(uType* type)
{
}

uStructType* jmethodID_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jmethodID);
    options.ValueSize = sizeof(jmethodID);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jmethodID", options);
    type->fp_build_ = jmethodID_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct JNIEnvPtr
// {
static void JNIEnvPtr_build(uType* type)
{
}

uStructType* JNIEnvPtr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(JNIEnv*);
    options.ValueSize = sizeof(JNIEnv*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNIEnvPtr", options);
    type->fp_build_ = JNIEnvPtr_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct JNINativeMethod
// {
static void JNINativeMethod_build(uType* type)
{
}

uStructType* JNINativeMethod_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(JNINativeMethod);
    options.ValueSize = sizeof(JNINativeMethod);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.JNINativeMethod", options);
    type->fp_build_ = JNINativeMethod_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct jweak
// {
static void jweak_build(uType* type)
{
}

uStructType* jweak_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jweak);
    options.ValueSize = sizeof(jweak);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.jweak", options);
    type->fp_build_ = jweak_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujboolean
// {
static void ujboolean_build(uType* type)
{
}

uStructType* ujboolean_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jboolean);
    options.ValueSize = sizeof(jboolean);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujboolean", options);
    type->fp_build_ = ujboolean_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujbyte
// {
static void ujbyte_build(uType* type)
{
}

uStructType* ujbyte_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jbyte);
    options.ValueSize = sizeof(jbyte);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujbyte", options);
    type->fp_build_ = ujbyte_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujchar
// {
static void ujchar_build(uType* type)
{
}

uStructType* ujchar_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jchar);
    options.ValueSize = sizeof(jchar);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujchar", options);
    type->fp_build_ = ujchar_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujclass
// {
static void ujclass_build(uType* type)
{
}

uStructType* ujclass_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jclass);
    options.ValueSize = sizeof(jclass);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujclass", options);
    type->fp_build_ = ujclass_build;
    return type;
}

// public static Android.Base.Primitives.ujclass get_Null()
void ujclass__get_Null_fn(jclass* __retval)
{
    *__retval = ujclass::Null();
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs)
void ujclass__op_Equality_fn(jclass* lhs, jclass* rhs, bool* __retval)
{
    *__retval = ujclass::op_Equality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujclass lhs, Android.Base.Primitives.ujclass rhs) [static]
bool ujclass::op_Equality(jclass lhs, jclass rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(::g::Android::Base::Primitives::ujobject::op_Implicit(lhs), ::g::Android::Base::Primitives::ujobject::op_Implicit(rhs));
}

// public static Android.Base.Primitives.ujclass get_Null() [static]
jclass ujclass::Null()
{
    return nullptr;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujdouble
// {
static void ujdouble_build(uType* type)
{
}

uStructType* ujdouble_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jdouble);
    options.ValueSize = sizeof(jdouble);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujdouble", options);
    type->fp_build_ = ujdouble_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujfloat
// {
static void ujfloat_build(uType* type)
{
}

uStructType* ujfloat_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jfloat);
    options.ValueSize = sizeof(jfloat);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujfloat", options);
    type->fp_build_ = ujfloat_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujint
// {
static void ujint_build(uType* type)
{
}

uStructType* ujint_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jint);
    options.ValueSize = sizeof(jint);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujint", options);
    type->fp_build_ = ujint_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujlong
// {
static void ujlong_build(uType* type)
{
}

uStructType* ujlong_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jlong);
    options.ValueSize = sizeof(jlong);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujlong", options);
    type->fp_build_ = ujlong_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujobject
// {
static void ujobject_build(uType* type)
{
}

uStructType* ujobject_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jobject);
    options.ValueSize = sizeof(jobject);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujobject", options);
    type->fp_build_ = ujobject_build;
    return type;
}

// public static Android.Base.Primitives.ujobject get_Null()
void ujobject__get_Null_fn(jobject* __retval)
{
    *__retval = ujobject::Null();
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs)
void ujobject__op_Equality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Equality(*lhs, *rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v)
void ujobject__op_Implicit_fn(jclass* v, jobject* __retval)
{
    *__retval = ujobject::op_Implicit(*v);
}

// public static implicit operator Android.Base.Primitives.ujclass(Android.Base.Primitives.ujobject v)
void ujobject__op_Implicit1_fn(jobject* v, jclass* __retval)
{
    *__retval = ujobject::op_Implicit1(*v);
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs)
void ujobject__op_Inequality_fn(jobject* lhs, jobject* rhs, bool* __retval)
{
    *__retval = ujobject::op_Inequality(*lhs, *rhs);
}

// public static operator ==(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static]
bool ujobject::op_Equality(jobject lhs, jobject rhs)
{
    return ::g::Android::Base::JNI::IsSameObject(lhs, rhs);
}

// public static implicit operator Android.Base.Primitives.ujobject(Android.Base.Primitives.ujclass v) [static]
jobject ujobject::op_Implicit(jclass v)
{
    return (jobject)v;
}

// public static implicit operator Android.Base.Primitives.ujclass(Android.Base.Primitives.ujobject v) [static]
jclass ujobject::op_Implicit1(jobject v)
{
    return (jclass)v;
}

// public static operator !=(Android.Base.Primitives.ujobject lhs, Android.Base.Primitives.ujobject rhs) [static]
bool ujobject::op_Inequality(jobject lhs, jobject rhs)
{
    return !ujobject::op_Equality(lhs, rhs);
}

// public static Android.Base.Primitives.ujobject get_Null() [static]
jobject ujobject::Null()
{
    return nullptr;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujshort
// {
static void ujshort_build(uType* type)
{
}

uStructType* ujshort_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jshort);
    options.ValueSize = sizeof(jshort);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujshort", options);
    type->fp_build_ = ujshort_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujstring
// {
static void ujstring_build(uType* type)
{
}

uStructType* ujstring_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jstring);
    options.ValueSize = sizeof(jstring);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujstring", options);
    type->fp_build_ = ujstring_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct ujvalue
// {
static void ujvalue_build(uType* type)
{
}

uStructType* ujvalue_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(jvalue);
    options.ValueSize = sizeof(jvalue);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.ujvalue", options);
    type->fp_build_ = ujvalue_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Primitives.uno
// ----------------------------------------------------------------------------------------------------------------------------

// public extern struct uweakptr
// {
static void uweakptr_build(uType* type)
{
}

uStructType* uweakptr_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.Alignment = alignof(uWeakObject*);
    options.ValueSize = sizeof(uWeakObject*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Android.Base.Primitives.uweakptr", options);
    type->fp_build_ = uweakptr_build;
    return type;
}
// }

}}}} // ::g::Android::Base::Primitives
