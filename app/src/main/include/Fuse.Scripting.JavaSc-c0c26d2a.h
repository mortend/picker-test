// This file was generated based on '../Source/Fuse.Scripting.JavaScript/Observable.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.JavaSc-5642d662.h>
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Add;}}}}
namespace g{namespace Fuse{namespace Scripting{namespace JavaScript{struct Observable__Subscription;}}}}

namespace g{
namespace Fuse{
namespace Scripting{
namespace JavaScript{

// private sealed class Observable.Add
// {
::g::Fuse::Scripting::JavaScript::Observable__Operation_type* Observable__Add_typeof();
void Observable__Add__ctor_1_fn(Observable__Add* __this, ::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value);
void Observable__Add__New1_fn(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value, Observable__Add** __retval);
void Observable__Add__OnPerform_fn(Observable__Add* __this, uObject* sub);

struct Observable__Add : ::g::Fuse::Scripting::JavaScript::Observable__Operation
{
    uStrong<uObject*> _value;

    void ctor_1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value);
    static Observable__Add* New1(::g::Fuse::Scripting::JavaScript::Observable* obs, uObject* value);
};
// }

}}}} // ::g::Fuse::Scripting::JavaScript
