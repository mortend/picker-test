// This file was generated based on '../Source/Fuse.Reactive.Expressions/DataToResource.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct DataToResource;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataToResource
// {
::g::Fuse::Reactive::Expression_type* DataToResource_typeof();
void DataToResource__Subscribe_fn(DataToResource* __this, uObject* context, uObject* listener, uObject** __retval);

struct DataToResource : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _data;
};
// }

}}} // ::g::Fuse::Reactive
