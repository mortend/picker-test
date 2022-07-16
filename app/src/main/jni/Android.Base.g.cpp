// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.AndroidB-60154a31.h>
#include <Android.Base.JNI.h>
#include <Android.Base.JNI.RefType.h>
#include <Android.Base.Primitiv-22a842e.h>
#include <Android.Base.Primitiv-2f94ad06.h>
#include <Android.Base.Primitiv-a9a90c2a.h>
#include <Android.Base.Primitiv-b9feb1b7.h>
#include <Android.Base.Primitiv-eed27b63.h>
#include <Android.Base.Primitiv-efc9ca76.h>
#include <Android.Base.Types.String.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Android.Base.Wrappers-f1330e79.h>
#include <Java.Object.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Diagnostics.Debug.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Long.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.SByte.h>
#include <Uno.Short.h>
#include <Uno.String.h>
#include <Uno.Type.h>

namespace g{
namespace Android{
namespace Base{

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/JNI.uno
// ---------------------------------------------------------------------------------------------------------------------

// public static extern class AndroidBindingMacros
// {
static void AndroidBindingMacros_build(uType* type)
{
}

uClassType* AndroidBindingMacros_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.AndroidBindingMacros", options);
    type->fp_build_ = AndroidBindingMacros_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/JNI.uno
// ---------------------------------------------------------------------------------------------------------------------

// public static extern class JNI
// {
static void JNI_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Diagnostics::Debug_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), (uintptr_t)&JNI::_inited_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JNI::Activity_getClassLoader_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JNI::ClassLoader_loadClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::jmethodID_typeof(), (uintptr_t)&JNI::_getUnoRefMid_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JNI::exceptionClass_, uFieldFlagsStatic,
        ::g::Android::Base::Primitives::ujclass_typeof(), (uintptr_t)&JNI::_helperCls_, uFieldFlagsStatic);
}

uClassType* JNI_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Android.Base.JNI", options);
    type->fp_build_ = JNI_build;
    return type;
}

// public static extern void CheckException()
void JNI__CheckException_fn()
{
    JNI::CheckException();
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni)
void JNI__CheckException1_fn(JNIEnv** jni)
{
    JNI::CheckException1(*jni);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage])
void JNI__CheckException2_fn(JNIEnv** jni, uString* appendMessage)
{
    JNI::CheckException2(*jni, appendMessage);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj)
void JNI__DeleteGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteGlobalRef(*obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj)
void JNI__DeleteLocalRef_fn(jclass* obj)
{
    JNI::DeleteLocalRef(*obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj)
void JNI__DeleteLocalRef1_fn(jobject* obj)
{
    JNI::DeleteLocalRef1(*obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj)
void JNI__DeleteWeakGlobalRef_fn(jobject* obj_)
{
    JNI::DeleteWeakGlobalRef(*obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass()
void JNI__GetActivityClass_fn(jclass* __retval)
{
    *__retval = JNI::GetActivityClass();
}

// private static Java.Object GetActivityClassInner()
void JNI__GetActivityClassInner_fn(::g::Java::Object** __retval)
{
    *__retval = JNI::GetActivityClassInner();
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject()
void JNI__GetActivityObject_fn(jobject* __retval)
{
    *__retval = JNI::GetActivityObject();
}

// private static Java.Object GetActivityObjectInner()
void JNI__GetActivityObjectInner_fn(::g::Java::Object** __retval)
{
    *__retval = JNI::GetActivityObjectInner();
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array)
void JNI__GetArrayLength_fn(jobject* array_, int32_t* __retval)
{
    *__retval = JNI::GetArrayLength(*array_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject()
void JNI__GetDefaultObject_fn(jobject* __retval)
{
    *__retval = JNI::GetDefaultObject();
}

// public static extern Uno.Type GetDefaultType()
void JNI__GetDefaultType_fn(uType** __retval)
{
    *__retval = JNI::GetDefaultType();
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr()
void JNI__GetEnvPtr_fn(JNIEnv** __retval)
{
    *__retval = JNI::GetEnvPtr();
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig)
void JNI__GetMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetMethodID(*cls, methodName, methodSig);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj)
void JNI__GetRefType_fn(JNIEnv** jni, jobject* obj, int32_t* __retval)
{
    *__retval = JNI::GetRefType(*jni, *obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj)
void JNI__GetRefType1_fn(jobject* obj, int32_t* __retval)
{
    *__retval = JNI::GetRefType1(*obj);
}

// public static Android.Base.Primitives.jmethodID GetStaticMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig)
void JNI__GetStaticMethodID_fn(jclass* cls, uString* methodName, uString* methodSig, jmethodID* __retval)
{
    *__retval = JNI::GetStaticMethodID(*cls, methodName, methodSig);
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj)
void JNI__GetUnoRef_fn(jobject* obj, int64_t* __retval)
{
    *__retval = JNI::GetUnoRef(*obj);
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM()
void JNI__GetVM_fn(JavaVM** __retval)
{
    *__retval = JNI::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject()
void JNI__GetWrappedActivityObject_fn(::g::Android::Base::Wrappers::JWrapper** __retval)
{
    *__retval = JNI::GetWrappedActivityObject();
}

// public static void Init(Android.Base.Primitives.ujobject activityObject)
void JNI__Init_fn(jobject* activityObject)
{
    JNI::Init(*activityObject);
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB)
void JNI__IsSameObject_fn(jobject* objA_, jobject* objB_, bool* __retval)
{
    *__retval = JNI::IsSameObject(*objA_, *objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name)
void JNI__LoadClass_fn(JNIEnv** jni, const char** name, jclass* __retval)
{
    *__retval = JNI::LoadClass(*jni, *name);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass)
void JNI__LoadClass1_fn(JNIEnv** jni, const char** name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass1(*jni, *name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass])
void JNI__LoadClass2_fn(JNIEnv** jni, uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass2(*jni, name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass])
void JNI__LoadClass3_fn(uString* name, bool* systemClass, jclass* __retval)
{
    *__retval = JNI::LoadClass3(name, *systemClass);
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj)
void JNI__NewGlobalRef_fn(jclass* obj, jclass* __retval)
{
    *__retval = JNI::NewGlobalRef(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj)
void JNI__NewGlobalRef1_fn(jobject* obj, jobject* __retval)
{
    *__retval = JNI::NewGlobalRef1(*obj);
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj)
void JNI__NewWeakGlobalRef_fn(jobject* obj_, jobject* __retval)
{
    *__retval = JNI::NewWeakGlobalRef(*obj_);
}

// public static void SetBooleanArrayRegion(Android.Base.Primitives.ujobject javaArr, bool[] unoArr, [int start], [int len])
void JNI__SetBooleanArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetBooleanArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, byte[] unoArr, [int start], [int len])
void JNI__SetByteArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetByteArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, sbyte[] unoArr, [int start], [int len])
void JNI__SetByteArrayRegion1_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetByteArrayRegion1(*javaArr, unoArr, *start, *len);
}

// public static void SetCharArrayRegion(Android.Base.Primitives.ujobject javaArr, char[] unoArr, [int start], [int len])
void JNI__SetCharArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetCharArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetDoubleArrayRegion(Android.Base.Primitives.ujobject javaArr, double[] unoArr, [int start], [int len])
void JNI__SetDoubleArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetDoubleArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetFloatArrayRegion(Android.Base.Primitives.ujobject javaArr, float[] unoArr, [int start], [int len])
void JNI__SetFloatArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetFloatArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetIntArrayRegion(Android.Base.Primitives.ujobject javaArr, int[] unoArr, [int start], [int len])
void JNI__SetIntArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetIntArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetLongArrayRegion(Android.Base.Primitives.ujobject javaArr, long[] unoArr, [int start], [int len])
void JNI__SetLongArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetLongArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static void SetShortArrayRegion(Android.Base.Primitives.ujobject javaArr, short[] unoArr, [int start], [int len])
void JNI__SetShortArrayRegion_fn(jobject* javaArr, uArray* unoArr, int32_t* start, int32_t* len)
{
    JNI::SetShortArrayRegion(*javaArr, unoArr, *start, *len);
}

// public static extern void ThrowNewException(string message)
void JNI__ThrowNewException_fn(uString* message_)
{
    JNI::ThrowNewException(message_);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage])
void JNI__TryGetException_fn(JNIEnv** jni, uString* appendMessage, ::g::Uno::Exception** __retval)
{
    *__retval = JNI::TryGetException(*jni, appendMessage);
}

bool JNI::_inited_;
jmethodID JNI::Activity_getClassLoader_;
jmethodID JNI::ClassLoader_loadClass_;
jmethodID JNI::_getUnoRefMid_;
jclass JNI::exceptionClass_;
jclass JNI::_helperCls_;

// public static extern void CheckException() [static]
void JNI::CheckException()
{
    JNI::CheckException1(JNI::GetEnvPtr());
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni) [static]
void JNI::CheckException1(JNIEnv* jni)
{
    JNI::CheckException2(jni, nullptr);
}

// public static extern void CheckException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static]
void JNI::CheckException2(JNIEnv* jni, uString* appendMessage)
{
    ::g::Uno::Exception* excep = JNI::TryGetException(jni, appendMessage);

    if (excep != nullptr)
        U_THROW(excep);
}

// public static extern void DeleteGlobalRef(Android.Base.Primitives.ujobject obj) [static]
void JNI::DeleteGlobalRef(jobject obj_)
{
    JNI::GetEnvPtr()->DeleteGlobalRef(obj_);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujclass obj) [static]
void JNI::DeleteLocalRef(jclass obj)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static void DeleteLocalRef(Android.Base.Primitives.ujobject obj) [static]
void JNI::DeleteLocalRef1(jobject obj)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    jni->DeleteLocalRef(obj);
}

// public static extern void DeleteWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static]
void JNI::DeleteWeakGlobalRef(jobject obj_)
{
    JNI::GetEnvPtr()->DeleteWeakGlobalRef(obj_);
}

// public static extern Android.Base.Primitives.ujclass GetActivityClass() [static]
jclass JNI::GetActivityClass()
{
    return ::g::Android::Base::Primitives::ujobject::op_Implicit1(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr((uObject*)JNI::GetActivityClassInner()), ::g::Android::Base::Wrappers::IJWrapper_typeof())));
}

// private static Java.Object GetActivityClassInner() [static]
::g::Java::Object* JNI::GetActivityClassInner()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActivityClassInner64", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        JNI::CheckException();
        return __result;
    }
    
}

// public static extern Android.Base.Primitives.ujobject GetActivityObject() [static]
jobject JNI::GetActivityObject()
{
    return ::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface(uPtr((uObject*)JNI::GetActivityObjectInner()), ::g::Android::Base::Wrappers::IJWrapper_typeof()));
}

// private static Java.Object GetActivityObjectInner() [static]
::g::Java::Object* JNI::GetActivityObjectInner()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "GetActivityObjectInner65", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        JNI::CheckException();
        return __result;
    }
    
}

// public static extern int GetArrayLength(Android.Base.Primitives.ujobject array) [static]
int32_t JNI::GetArrayLength(jobject array_)
{
    JNIEnv* jni = JNI::GetEnvPtr();
    return (int)jni->GetArrayLength((jarray)array_);
}

// public static extern Android.Base.Primitives.ujobject GetDefaultObject() [static]
jobject JNI::GetDefaultObject()
{
    return (jobject)0;
}

// public static extern Uno.Type GetDefaultType() [static]
uType* JNI::GetDefaultType()
{
    return (uType*)0;
}

// public static extern Android.Base.Primitives.JNIEnvPtr GetEnvPtr() [static]
JNIEnv* JNI::GetEnvPtr()
{
    JNIEnv* jni;
    JniHelper::GetVM()->AttachCurrentThread(&jni, nullptr);
    return jni;
}

// public static Android.Base.Primitives.jmethodID GetMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static]
jmethodID JNI::GetMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    char* cMethodName = uAllocCStr(methodName);
    char* cMethodSig = uAllocCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetMethodID(cls,cMethodName,cMethodSig);
    free(cMethodName);
    free(cMethodSig);
    JNI::CheckException();

    if (mid == 0)
        U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(uString::Const("Java method id for "), methodName), uString::Const(" is null"))));

    return mid;
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ujobject obj) [static]
int32_t JNI::GetRefType(JNIEnv* jni, jobject obj)
{
    return (int)jni->GetObjectRefType(obj);
}

// public static Android.Base.JNI.RefType GetRefType(Android.Base.Primitives.ujobject obj) [static]
int32_t JNI::GetRefType1(jobject obj)
{
    return JNI::GetRefType(JNI::GetEnvPtr(), obj);
}

// public static Android.Base.Primitives.jmethodID GetStaticMethodID(Android.Base.Primitives.ujclass cls, string methodName, string methodSig) [static]
jmethodID JNI::GetStaticMethodID(jclass cls, uString* methodName, uString* methodSig)
{
    char* cMethodName = uAllocCStr(methodName);
    char* cMethodSig = uAllocCStr(methodSig);
    jmethodID mid = JNI::GetEnvPtr()->GetStaticMethodID(cls,cMethodName,cMethodSig);
    free(cMethodName);
    free(cMethodSig);
    return mid;
}

// public static extern long GetUnoRef(Android.Base.Primitives.ujobject obj) [static]
int64_t JNI::GetUnoRef(jobject obj)
{
    ::g::Uno::Diagnostics::Debug::Assert(JNI::_inited_, uString::Const("Android.Base.JNI._inited"), uString::Const("../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/JNI.uno"), 296, uArray::New(uObject_typeof()->Array(), 0));

    if (::g::Android::Base::Primitives::ujobject::op_Inequality(obj, ::g::Android::Base::Primitives::ujobject::Null()))
        return (int64_t)JNI::GetEnvPtr()->CallStaticLongMethod(JNI::_helperCls_, JNI::_getUnoRefMid_, obj);
    else
        return 0LL;
}

// public static extern Android.Base.Primitives.JavaVMPtr GetVM() [static]
JavaVM* JNI::GetVM()
{
    return JniHelper::GetVM();
}

// public static Android.Base.Wrappers.JWrapper GetWrappedActivityObject() [static]
::g::Android::Base::Wrappers::JWrapper* JNI::GetWrappedActivityObject()
{
    return uCast< ::g::Android::Base::Wrappers::JWrapper*>(JNI::GetActivityObjectInner(), ::g::Android::Base::Wrappers::JWrapper_typeof());
}

// public static void Init(Android.Base.Primitives.ujobject activityObject) [static]
void JNI::Init(jobject activityObject)
{
    if (!JNI::_inited_)
    {
        JNI::_inited_ = true;
        JNIEnv* jni = JNI::GetEnvPtr();
        JNI::Activity_getClassLoader_ = jni->GetMethodID(jni->FindClass("android/app/NativeActivity"), "getClassLoader", "()Ljava/lang/ClassLoader;");
        JNI::ClassLoader_loadClass_ = jni->GetMethodID(jni->FindClass("java/lang/ClassLoader"), "loadClass", "(Ljava/lang/String;)Ljava/lang/Class;");
        JNI::CheckException1(jni);
        jstring jname = jni->NewStringUTF("com.foreign.UnoHelper");
        jclass classLoader = (jclass)jni->CallObjectMethod(activityObject, JNI::Activity_getClassLoader_);
        jclass hcls = (jclass)jni->CallObjectMethod(classLoader, JNI::ClassLoader_loadClass_, jname);
        jni->DeleteLocalRef(classLoader);
        jni->DeleteLocalRef(jname);
        JNI::CheckException1(jni);

        if (::g::Android::Base::Primitives::ujclass::op_Equality(hcls, ::g::Android::Base::Primitives::ujclass::Null()))
            U_THROW(::g::Uno::Exception::New2(uString::Const("Could not cache class for UnoHelper")));

        JNI::_helperCls_ = JNI::NewGlobalRef(hcls);
        JNI::exceptionClass_ = NewGlobalRef(jni->FindClass("java/lang/RuntimeException"));
        JNI::_getUnoRefMid_ = JNI::GetEnvPtr()->GetStaticMethodID(JNI::_helperCls_,"GetUnoObjectRef","(Ljava/lang/Object;)J");

        if (!JNI::_getUnoRefMid_)
            U_THROW(::g::Uno::Exception::New2(uString::Const("Could not cache getUnoRefMid")));
    }
}

// public static extern bool IsSameObject(Android.Base.Primitives.ujobject objA, Android.Base.Primitives.ujobject objB) [static]
bool JNI::IsSameObject(jobject objA_, jobject objB_)
{
    return (bool)JNI::GetEnvPtr()->IsSameObject(objA_,objB_);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name) [static]
jclass JNI::LoadClass(JNIEnv* jni, const char* name)
{
    return JNI::LoadClass1(jni, name, false);
}

// public static Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, Android.Base.Primitives.ConstCharPtr name, bool systemClass) [static]
jclass JNI::LoadClass1(JNIEnv* jni, const char* name, bool systemClass)
{
    ::g::Uno::Diagnostics::Debug::Assert(JNI::_inited_, uString::Const("Android.Base.JNI._inited"), uString::Const("../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/JNI.uno"), 109, uArray::New(uObject_typeof()->Array(), 0));
    jclass result;
    jstring jname = jni->NewStringUTF(name);

    if (systemClass)
        result = jni->FindClass(name);
    else
    {
        jclass classLoader = (jclass)jni->CallObjectMethod(JNI::GetActivityObject(), JNI::Activity_getClassLoader_);
        result = (jclass)jni->CallObjectMethod(classLoader, JNI::ClassLoader_loadClass_, jname);
        jni->DeleteLocalRef(classLoader);
    }

    jni->DeleteLocalRef(jname);
    JNI::CheckException1(jni);
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(Android.Base.Primitives.JNIEnvPtr jni, string name, [bool systemClass]) [static]
jclass JNI::LoadClass2(JNIEnv* jni, uString* name, bool systemClass)
{
    const char* cname = uAllocCStr(name);
    jclass result = JNI::LoadClass1(JNI::GetEnvPtr(), cname, systemClass);
    free(const_cast<char*>(cname));
    return result;
}

// public static extern Android.Base.Primitives.ujclass LoadClass(string name, [bool systemClass]) [static]
jclass JNI::LoadClass3(uString* name, bool systemClass)
{
    return JNI::LoadClass2(JNI::GetEnvPtr(), name, systemClass);
}

// public static extern Android.Base.Primitives.ujclass NewGlobalRef(Android.Base.Primitives.ujclass obj) [static]
jclass JNI::NewGlobalRef(jclass obj)
{
    return reinterpret_cast<jclass>(JNI::GetEnvPtr()->NewGlobalRef(obj));
}

// public static extern Android.Base.Primitives.ujobject NewGlobalRef(Android.Base.Primitives.ujobject obj) [static]
jobject JNI::NewGlobalRef1(jobject obj)
{
    return reinterpret_cast<jobject>(JNI::GetEnvPtr()->NewGlobalRef(obj));
}

// public static extern Android.Base.Primitives.ujobject NewWeakGlobalRef(Android.Base.Primitives.ujobject obj) [static]
jobject JNI::NewWeakGlobalRef(jobject obj_)
{
    return (jobject)reinterpret_cast<jweak>(JNI::GetEnvPtr()->NewWeakGlobalRef(obj_));
}

// public static void SetBooleanArrayRegion(Android.Base.Primitives.ujobject javaArr, bool[] unoArr, [int start], [int len]) [static]
void JNI::SetBooleanArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetBooleanArrayRegion((jbooleanArray)javaArr,start,len,(jboolean*)unoArr->_ptr);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, byte[] unoArr, [int start], [int len]) [static]
void JNI::SetByteArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetByteArrayRegion((jbyteArray)javaArr,start,len,(jbyte*)unoArr->_ptr);
}

// public static void SetByteArrayRegion(Android.Base.Primitives.ujobject javaArr, sbyte[] unoArr, [int start], [int len]) [static]
void JNI::SetByteArrayRegion1(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetByteArrayRegion((jbyteArray)javaArr,start,len,(jbyte*)unoArr->_ptr);
}

// public static void SetCharArrayRegion(Android.Base.Primitives.ujobject javaArr, char[] unoArr, [int start], [int len]) [static]
void JNI::SetCharArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetCharArrayRegion((jcharArray)javaArr,start,len,(jchar*)unoArr->_ptr);
}

// public static void SetDoubleArrayRegion(Android.Base.Primitives.ujobject javaArr, double[] unoArr, [int start], [int len]) [static]
void JNI::SetDoubleArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetDoubleArrayRegion((jdoubleArray)javaArr,start,len,(jdouble*)unoArr->_ptr);
}

// public static void SetFloatArrayRegion(Android.Base.Primitives.ujobject javaArr, float[] unoArr, [int start], [int len]) [static]
void JNI::SetFloatArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetFloatArrayRegion((jfloatArray)javaArr,start,len,(jfloat*)unoArr->_ptr);
}

// public static void SetIntArrayRegion(Android.Base.Primitives.ujobject javaArr, int[] unoArr, [int start], [int len]) [static]
void JNI::SetIntArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetIntArrayRegion((jintArray)javaArr,start,len,(jint*)unoArr->_ptr);
}

// public static void SetLongArrayRegion(Android.Base.Primitives.ujobject javaArr, long[] unoArr, [int start], [int len]) [static]
void JNI::SetLongArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetLongArrayRegion((jlongArray)javaArr,start,len,(jlong*)unoArr->_ptr);
}

// public static void SetShortArrayRegion(Android.Base.Primitives.ujobject javaArr, short[] unoArr, [int start], [int len]) [static]
void JNI::SetShortArrayRegion(jobject javaArr, uArray* unoArr, int32_t start, int32_t len)
{
    if (len == -1)
        len = ::g::Uno::Math::Min8(JNI::GetArrayLength(javaArr), uPtr(unoArr)->Length());

    JNIEnv* jni = JNI::GetEnvPtr();
    jni->SetShortArrayRegion((jshortArray)javaArr,start,len,(jshort*)unoArr->_ptr);
}

// public static extern void ThrowNewException(string message) [static]
void JNI::ThrowNewException(uString* message_)
{
    char* message = uAllocCStr(message_);
    JNI::GetEnvPtr()->ThrowNew(JNI::exceptionClass_, message);
    free(message);
}

// public static Uno.Exception TryGetException(Android.Base.Primitives.JNIEnvPtr jni, [string appendMessage]) [static]
::g::Uno::Exception* JNI::TryGetException(JNIEnv* jni, uString* appendMessage)
{
    jthrowable err = jni->ExceptionOccurred();

    if ((err != nullptr))
    {
        jni->ExceptionDescribe();
        jni->ExceptionClear();
        jmethodID toString = jni->GetMethodID(jni->FindClass("java/lang/Object"), "toString", "()Ljava/lang/String;");
        jobject estring = (jobject)jni->CallObjectMethod(err, toString);
        uString* x = ::g::Android::Base::Types::String::JavaToUno1(estring);

        if (::g::Uno::String::op_Inequality(appendMessage, nullptr))
            x = ::g::Uno::String::op_Addition2(x, ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(x, uString::Const("\n"
                "")), appendMessage));

        return ::g::Uno::Exception::New2(x);
    }

    return nullptr;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/JNI.uno
// ---------------------------------------------------------------------------------------------------------------------

// public enum JNI.RefType
uEnumType* JNI__RefType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Android.Base.JNI.RefType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Invalid", 0LL,
        "Local", 1LL,
        "Global", 2LL,
        "WeakGlobal", 3LL);
    return type;
}

}}} // ::g::Android::Base
