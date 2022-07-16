// This file was generated based on '../Source/Fuse.Common/Internal/RawPointer.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Fuse{
namespace Internal{

// internal struct RawPointer<T>
// {
uStructType* RawPointer_typeof();
void RawPointer__op_Explicit1_fn(uType* __type, void** weak, uObject** __retval);
void RawPointer__op_Implicit_fn(uType* __type, uObject* obj, void** __retval);

struct RawPointer
{
    static uObject* op_Explicit1(uType* __type, void* weak);
    static void* op_Implicit(uType* __type, uObject* obj);
};
// }

}}} // ::g::Fuse::Internal
