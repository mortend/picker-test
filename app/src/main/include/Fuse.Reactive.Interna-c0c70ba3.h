// This file was generated based on '../Source/Fuse.Reactive.Bindings/Internal/PatchList.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Reactive{namespace Internal{struct SimpleAlgorithm__Location;}}}}

namespace g{
namespace Fuse{
namespace Reactive{
namespace Internal{

// private struct SimpleAlgorithm<T>.Location
// {
uStructType* SimpleAlgorithm__Location_typeof();
void SimpleAlgorithm__Location__ToString_fn(SimpleAlgorithm__Location* __this, uType* __type, uString** __retval);

struct SimpleAlgorithm__Location
{
    int32_t From;
    int32_t To;

    uString* ToString(uType* __type) { uString* __retval; return SimpleAlgorithm__Location__ToString_fn(this, __type, &__retval), __retval; }
};
// }

}}}} // ::g::Fuse::Reactive::Internal
