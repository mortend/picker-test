// This file was generated based on '../Source/Fuse.Animations/Attract.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Animations{struct Attract;}}}
namespace g{namespace Fuse{namespace Animations{struct AttractorConfig;}}}

namespace g{
namespace Fuse{
namespace Animations{

// public sealed class Attract
// {
::g::Fuse::Reactive::Expression_type* Attract_typeof();
void Attract__Subscribe_fn(Attract* __this, uObject* context, uObject* listener, uObject** __retval);

struct Attract : ::g::Fuse::Reactive::Expression
{
    uStrong< ::g::Fuse::Reactive::Expression*> _sourceValue;
    uStrong< ::g::Fuse::Animations::AttractorConfig*> _config;
};
// }

}}} // ::g::Fuse::Animations
