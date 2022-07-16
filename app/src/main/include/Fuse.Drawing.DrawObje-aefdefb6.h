// This file was generated based on '../Source/Fuse.Drawing.Surface/DrawObjectWatcher.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Drawing{struct DrawObjectWatcher__Item;}}}
namespace g{namespace Uno{namespace UX{struct PropertyObject;}}}

namespace g{
namespace Fuse{
namespace Drawing{

// private sealed class DrawObjectWatcher.Item
// {
uType* DrawObjectWatcher__Item_typeof();
void DrawObjectWatcher__Item__ctor__fn(DrawObjectWatcher__Item* __this);
void DrawObjectWatcher__Item__New1_fn(DrawObjectWatcher__Item** __retval);

struct DrawObjectWatcher__Item : uObject
{
    bool Prepared;
    bool Used;
    bool Listening;
    bool Dirty;
    uStrong< ::g::Uno::UX::PropertyObject*> DrawObject;

    void ctor_();
    static DrawObjectWatcher__Item* New1();
};
// }

}}} // ::g::Fuse::Drawing
