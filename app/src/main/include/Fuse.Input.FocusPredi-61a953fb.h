// This file was generated based on '../Source/Fuse.Nodes/Input/Focus.Prediction.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Input{struct FocusPredictStrategy;}}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Input{

// internal static class FocusPredictStrategy
// {
uClassType* FocusPredictStrategy_typeof();
void FocusPredictStrategy__Predict_fn(::g::Fuse::Visual* n, int32_t* direction, ::g::Fuse::Visual** __retval);

struct FocusPredictStrategy : uObject
{
    static ::g::Fuse::Visual* Predict(::g::Fuse::Visual* n, int32_t direction);
};
// }

}}} // ::g::Fuse::Input
