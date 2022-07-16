// This file was generated based on '../Source/Fuse.Nodes/Node.DataContext.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{

// public abstract interface Node.ISiblingDataProvider
// {
uInterfaceType* Node__ISiblingDataProvider_typeof();

struct Node__ISiblingDataProvider
{
    void(*fp_TryGetDataProvider)(uObject*, int32_t*, uObject**, int32_t*);
    static int32_t TryGetDataProvider(const uInterface& __this, int32_t type, uObject** provider) { int32_t __retval; return __this.VTable<Node__ISiblingDataProvider>()->fp_TryGetDataProvider(__this, &type, provider, &__retval), __retval; }
};
// }

}} // ::g::Fuse
