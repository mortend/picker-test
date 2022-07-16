// This file was generated based on '../Source/Fuse.Controls.Navigation/Navigator.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator__NavPage;}}}
namespace g{namespace Fuse{namespace Controls{struct Navigator__PrepareResult;}}}

namespace g{
namespace Fuse{
namespace Controls{

// private struct Navigator.PrepareResult
// {
uStructType* Navigator__PrepareResult_typeof();

struct Navigator__PrepareResult
{
    int32_t Routing;
    bool UsedPrepared;
    uStrong< ::g::Fuse::Controls::Navigator__NavPage*> Page;
};
// }

}}} // ::g::Fuse::Controls
