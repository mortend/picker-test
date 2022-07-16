// This file was generated based on '../Source/Fuse.Reactive.Expressions/VarArgFunction.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.VarArgFunction.h>
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}
namespace g{namespace Fuse{namespace Reactive{struct SimpleVarArgFunction;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class SimpleVarArgFunction
// {
::g::Fuse::Reactive::Expression_type* SimpleVarArgFunction_typeof();
void SimpleVarArgFunction__OnNewArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener);
void SimpleVarArgFunction__OnNewPartialArguments_fn(SimpleVarArgFunction* __this, uArray* args, uObject* listener);
void SimpleVarArgFunction__Subscribe_fn(SimpleVarArgFunction* __this, uObject* context, uObject* listener, uObject** __retval);

struct SimpleVarArgFunction : ::g::Fuse::Reactive::VarArgFunction
{
    void OnNewArguments(uArray* args, uObject* listener);
    void OnNewPartialArguments(uArray* args, uObject* listener);
};
// }

}}} // ::g::Fuse::Reactive
