// This file was generated based on '../Source/Fuse.Nodes/Visual.FastProperties1.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct FastProperty1Link;}}

namespace g{
namespace Fuse{

// internal class FastProperty1Link
// {
uType* FastProperty1Link_typeof();
void FastProperty1Link__ctor__fn(FastProperty1Link* __this, int32_t* p);

struct FastProperty1Link : uObject
{
    int32_t Property;
    uStrong<FastProperty1Link*> Next;

    void ctor_(int32_t p);
};
// }

}} // ::g::Fuse
