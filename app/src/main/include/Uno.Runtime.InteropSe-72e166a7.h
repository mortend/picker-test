// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Runtime/InteropServices/GCHandle.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace Runtime{namespace InteropServices{struct GCHandle;}}}}

namespace g{
namespace Uno{
namespace Runtime{
namespace InteropServices{

// public struct GCHandle
// {
uStructType* GCHandle_typeof();
void GCHandle__ctor_1_fn(GCHandle* __this, uObject* target);
void GCHandle__AddrOfPinnedObject_fn(GCHandle* __this, void** __retval);
void GCHandle__Alloc_fn(uObject* target, GCHandle* __retval);
void GCHandle__Alloc1_fn(uObject* target, int32_t* type, GCHandle* __retval);
void GCHandle__Free_fn(GCHandle* __this);
void GCHandle__FromIntPtr_fn(void** ptr, GCHandle* __retval);
void GCHandle__New1_fn(uObject* target, GCHandle* __retval);
void GCHandle__op_Explicit1_fn(void** ptr, GCHandle* __retval);
void GCHandle__op_Explicit2_fn(GCHandle* handle, void** __retval);
void GCHandle__get_Target_fn(GCHandle* __this, uObject** __retval);
void GCHandle__set_Target_fn(GCHandle* __this, uObject* value);
void GCHandle__ToIntPtr_fn(GCHandle* handle, void** __retval);

struct GCHandle
{
    uStrong<uObject*> _Target;

    void ctor_1(uObject* target);
    void* AddrOfPinnedObject();
    void Free();
    uObject* Target();
    void Target(uObject* value);
};

GCHandle GCHandle__Alloc(uObject* target);
GCHandle GCHandle__Alloc1(uObject* target, int32_t type);
GCHandle GCHandle__FromIntPtr(void* ptr);
GCHandle GCHandle__New1(uObject* target);
GCHandle GCHandle__op_Explicit1(void* ptr);
void* GCHandle__op_Explicit2(GCHandle handle);
void* GCHandle__ToIntPtr(GCHandle handle);
// }

}}}} // ::g::Uno::Runtime::InteropServices
