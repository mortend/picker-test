// This file was generated based on '../Source/Fuse.Scripting.JavaScript/TreeObservable/TreeObservable.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaSc-d07aa03e.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct TreeObservable__ValueOperation;}}}}
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private abstract class TreeObservable.ValueOperation
// {
::g::Fuse::Scripting::JavaScript::TreeObservable__Operation_type* TreeObservable__ValueOperation_typeof();
void TreeObservable__ValueOperation__ctor_1_fn(TreeObservable__ValueOperation* __this, ::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);

struct TreeObservable__ValueOperation : ::g::Fuse::Scripting::JavaScript::TreeObservable__Operation
{
    uStrong<uObject*> WrappedValue;

    void ctor_1(::g::Fuse::Scripting::Context* context, ::g::Fuse::Scripting::JavaScript::TreeObservable* inst, uArray* args);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
