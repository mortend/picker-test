// This file was generated based on '../Source/Fuse.Reactive.Expressions/BinaryOperator.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Reactive.Compute-c1d394b1.h>
#include <Fuse.Reactive.IExpression.h>
namespace g{namespace Fuse{namespace Reactive{struct BinaryOperator;}}}
namespace g{namespace Fuse{namespace Reactive{struct Expression__Argument;}}}

namespace g{
namespace Fuse{
namespace Reactive{

// public abstract class BinaryOperator
// {
::g::Fuse::Reactive::ComputeExpression_type* BinaryOperator_typeof();
void BinaryOperator__Compute_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** __retval);
void BinaryOperator__GetFlags_fn(BinaryOperator* __this, int32_t* __retval);
void BinaryOperator__get_IsLeftOptional_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__get_IsRightOptional_fn(BinaryOperator* __this, bool* __retval);
void BinaryOperator__TryCompute_fn(BinaryOperator* __this, uArray* args, uObject** result, bool* __retval);
void BinaryOperator__TryCompute1_fn(BinaryOperator* __this, uObject* left, uObject* right, uObject** result, bool* __retval);

struct BinaryOperator : ::g::Fuse::Reactive::ComputeExpression
{
    uObject* Compute(uObject* left, uObject* right);
    bool IsLeftOptional();
    bool IsRightOptional();
    bool TryCompute1(uObject* left, uObject* right, uObject** result);
};
// }

}}} // ::g::Fuse::Reactive
