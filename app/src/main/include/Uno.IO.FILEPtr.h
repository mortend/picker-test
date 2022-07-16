// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/IO/FileStream.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <cstdio>
#include <Uno.ValueType.h>

namespace g{
namespace Uno{
namespace IO{

// internal extern struct FILEPtr
// {
uStructType* FILEPtr_typeof();
void FILEPtr__OpenOrThrow_fn(uString* filename, uString* mode, FILE** __retval);
void FILEPtr__Throw_fn(uString* filename);

struct FILEPtr
{
    static FILE* OpenOrThrow(uString* filename, uString* mode);
    static void Throw(uString* filename);
};
// }

}}} // ::g::Uno::IO
