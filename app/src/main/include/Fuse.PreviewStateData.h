// This file was generated based on '../Source/Fuse.Nodes/PreviewState.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct PreviewStateData;}}
namespace g{namespace Fuse{struct PreviewStateData__Entry;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}

namespace g{
namespace Fuse{

// internal sealed class PreviewStateData
// {
uType* PreviewStateData_typeof();
void PreviewStateData__Consume_fn(PreviewStateData* __this, uString* key, uObject** __retval);

struct PreviewStateData : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _data;

    uObject* Consume(uString* key);
};
// }

}} // ::g::Fuse
