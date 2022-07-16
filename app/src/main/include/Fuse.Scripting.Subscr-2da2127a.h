// This file was generated based on '../Source/Fuse.Scripting.JavaScript/SubscriptionSubject.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct SubscriptionSubject;}}}
namespace g{namespace Fuse{namespace Scripting{struct SubscriptionSubject__Subscription;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// internal abstract class SubscriptionSubject
// {
uType* SubscriptionSubject_typeof();
void SubscriptionSubject__ctor__fn(SubscriptionSubject* __this);
void SubscriptionSubject__get_Subscribers_fn(SubscriptionSubject* __this, SubscriptionSubject__Subscription** __retval);

struct SubscriptionSubject : uObject
{
    uStrong<SubscriptionSubject__Subscription*> _subscribers;

    void ctor_();
    SubscriptionSubject__Subscription* Subscribers();
};
// }

}}} // ::g::Fuse::Scripting
