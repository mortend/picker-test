// This file was generated based on '../Source/Fuse.Scripting/EventEmitterModule.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct EventEmitterModule;}}}
namespace g{namespace Fuse{namespace Scripting{struct Function;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal static class EventEmitterModule
// {
uClassType* EventEmitterModule_typeof();
void EventEmitterModule__GetConstructor_fn(::g::Fuse::Scripting::Context* c, ::g::Fuse::Scripting::Function** __retval);

struct EventEmitterModule : uObject
{
    static uSStrong< ::g::Fuse::Scripting::Function*> _instance_;
    static uSStrong< ::g::Fuse::Scripting::Function*>& _instance() { return _instance_; }

    static ::g::Fuse::Scripting::Function* GetConstructor(::g::Fuse::Scripting::Context* c);
};
// }

}}} // ::g::Fuse::Scripting
