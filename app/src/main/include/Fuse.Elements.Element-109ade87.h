// This file was generated based on '../Source/Fuse.Elements/Caching/ElementAtlasPool.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebuffer;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolEntry;}}}
namespace g{namespace Fuse{namespace Elements{struct ElementAtlasFramebufferPoolImpl;}}}
namespace g{namespace Uno{namespace Graphics{struct Framebuffer;}}}

namespace g{
namespace Fuse{
namespace Elements{

// internal sealed class ElementAtlasFramebufferPoolEntry
// {
uType* ElementAtlasFramebufferPoolEntry_typeof();
void ElementAtlasFramebufferPoolEntry__ctor__fn(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__Collect_fn(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__Dispose_fn(ElementAtlasFramebufferPoolEntry* __this);
void ElementAtlasFramebufferPoolEntry__New1_fn(ElementAtlasFramebufferPoolEntry** __retval);

struct ElementAtlasFramebufferPoolEntry : uObject
{
    uStrong< ::g::Fuse::Elements::ElementAtlasFramebufferPoolImpl*> Pool;
    uStrong< ::g::Uno::Graphics::Framebuffer*> Framebuffer;
    uStrong< ::g::Fuse::Elements::ElementAtlasFramebuffer*> Owner;

    void ctor_();
    void Collect();
    void Dispose();
    static ElementAtlasFramebufferPoolEntry* New1();
};
// }

}}} // ::g::Fuse::Elements
