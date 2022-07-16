// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.Array.h>
#include <Uno.Bool.h>
#include <Uno.IntPtr.h>
#include <Uno.Object.h>
#include <Uno.Runtime.InteropSe-72e166a7.h>
#include <Uno.Runtime.InteropSe-a0b8bf4b.h>
static uType* TYPES[1];

namespace g{
namespace Uno{
namespace Runtime{
namespace InteropServices{

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Runtime/InteropServices/GCHandle.uno
// ------------------------------------------------------------------------------------------------------------------------------------

// public struct GCHandle
// {
static void GCHandle_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Array_typeof();
    type->SetFields(0,
        uObject_typeof(), offsetof(GCHandle, _Target), 0);
}

uStructType* GCHandle_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 1;
    options.Alignment = alignof(GCHandle);
    options.ValueSize = sizeof(GCHandle);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Uno.Runtime.InteropServices.GCHandle", options);
    type->fp_build_ = GCHandle_build;
    return type;
}

// private extern GCHandle(object target)
void GCHandle__ctor_1_fn(GCHandle* __this, uObject* target)
{
    __this->ctor_1(target);
}

// public Uno.IntPtr AddrOfPinnedObject()
void GCHandle__AddrOfPinnedObject_fn(GCHandle* __this, void** __retval)
{
    *__retval = __this->AddrOfPinnedObject();
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target)
void GCHandle__Alloc_fn(uObject* target, GCHandle* __retval)
{
    *__retval = GCHandle__Alloc(target);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type)
void GCHandle__Alloc1_fn(uObject* target, int32_t* type, GCHandle* __retval)
{
    *__retval = GCHandle__Alloc1(target, *type);
}

// public void Free()
void GCHandle__Free_fn(GCHandle* __this)
{
    __this->Free();
}

// public static Uno.Runtime.InteropServices.GCHandle FromIntPtr(Uno.IntPtr ptr)
void GCHandle__FromIntPtr_fn(void** ptr, GCHandle* __retval)
{
    *__retval = GCHandle__FromIntPtr(*ptr);
}

// private extern GCHandle New(object target)
void GCHandle__New1_fn(uObject* target, GCHandle* __retval)
{
    *__retval = GCHandle__New1(target);
}

// public static explicit operator Uno.Runtime.InteropServices.GCHandle(Uno.IntPtr ptr)
void GCHandle__op_Explicit1_fn(void** ptr, GCHandle* __retval)
{
    *__retval = GCHandle__op_Explicit1(*ptr);
}

// public static explicit operator Uno.IntPtr(Uno.Runtime.InteropServices.GCHandle handle)
void GCHandle__op_Explicit2_fn(GCHandle* handle, void** __retval)
{
    *__retval = GCHandle__op_Explicit2(*handle);
}

// public generated object get_Target()
void GCHandle__get_Target_fn(GCHandle* __this, uObject** __retval)
{
    *__retval = __this->Target();
}

// private generated void set_Target(object value)
void GCHandle__set_Target_fn(GCHandle* __this, uObject* value)
{
    __this->Target(value);
}

// public static Uno.IntPtr ToIntPtr(Uno.Runtime.InteropServices.GCHandle handle)
void GCHandle__ToIntPtr_fn(GCHandle* handle, void** __retval)
{
    *__retval = GCHandle__ToIntPtr(*handle);
}

// private extern GCHandle(object target) [instance]
void GCHandle::ctor_1(uObject* target)
{
    Target(target);
}

// public Uno.IntPtr AddrOfPinnedObject() [instance]
void* GCHandle::AddrOfPinnedObject()
{
    uObject* obj = Target();
    uArray* arr = uAs<uArray*>(obj, ::TYPES[0/*Uno.Array*/]);
    return (arr != nullptr) ? arr->Ptr() : obj;
}

// public void Free() [instance]
void GCHandle::Free()
{
    ::uRelease(Target());
}

// public generated object get_Target() [instance]
uObject* GCHandle::Target()
{
    return _Target;
}

// private generated void set_Target(object value) [instance]
void GCHandle::Target(uObject* value)
{
    _Target = value;
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target) [static]
GCHandle GCHandle__Alloc(uObject* target)
{
    return GCHandle__Alloc1(target, 2);
}

// public static Uno.Runtime.InteropServices.GCHandle Alloc(object target, Uno.Runtime.InteropServices.GCHandleType type) [static]
GCHandle GCHandle__Alloc1(uObject* target, int32_t type)
{
    ::uRetain(target);
    return GCHandle__New1(target);
}

// public static Uno.Runtime.InteropServices.GCHandle FromIntPtr(Uno.IntPtr ptr) [static]
GCHandle GCHandle__FromIntPtr(void* ptr)
{
    uObject* obj = (uObject*)ptr;
    return GCHandle__New1(obj);
}

// private extern GCHandle New(object target) [static]
GCHandle GCHandle__New1(uObject* target)
{
    GCHandle obj1;
    obj1.ctor_1(target);
    return obj1;
}

// public static explicit operator Uno.Runtime.InteropServices.GCHandle(Uno.IntPtr ptr) [static]
GCHandle GCHandle__op_Explicit1(void* ptr)
{
    return GCHandle__FromIntPtr(ptr);
}

// public static explicit operator Uno.IntPtr(Uno.Runtime.InteropServices.GCHandle handle) [static]
void* GCHandle__op_Explicit2(GCHandle handle)
{
    return GCHandle__ToIntPtr(handle);
}

// public static Uno.IntPtr ToIntPtr(Uno.Runtime.InteropServices.GCHandle handle) [static]
void* GCHandle__ToIntPtr(GCHandle handle)
{
    return handle.Target();
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Runtime/InteropServices/GCHandleType.uno
// ----------------------------------------------------------------------------------------------------------------------------------------

// public enum GCHandleType
uEnumType* GCHandleType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Uno.Runtime.InteropServices.GCHandleType", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Normal", 2LL,
        "Pinned", 3LL);
    return type;
}

}}}} // ::g::Uno::Runtime::InteropServices
