// This file was generated based on '../Source/Fuse.Reactive.Expressions/Resource.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct Resource;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public sealed class Resource
// {
::g::Fuse::Reactive::Expression_type* Resource_typeof();
void Resource__get_Key_fn(Resource* __this, uString** __retval);
void Resource__set_Key_fn(Resource* __this, uString* value);
void Resource__Subscribe_fn(Resource* __this, uObject* context, uObject* listener, uObject** __retval);

struct Resource : ::g::Fuse::Reactive::Expression
{
    uStrong<uString*> _Key;

    uString* Key();
    void Key(uString* value);
};
// }

}}} // ::g::Fuse::Reactive
