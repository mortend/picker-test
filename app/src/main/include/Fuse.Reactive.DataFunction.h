// This file was generated based on '../Source/Fuse.Reactive.Bindings/DataFunction.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct DataFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class DataFunction
// {
::g::Fuse::Reactive::Expression_type* DataFunction_typeof();
void DataFunction__Subscribe_fn(DataFunction* __this, uObject* context, uObject* listener, uObject** __retval);
void DataFunction__ToString_fn(DataFunction* __this, uString** __retval);

struct DataFunction : ::g::Fuse::Reactive::Expression
{
};
// }

}}} // ::g::Fuse::Reactive
