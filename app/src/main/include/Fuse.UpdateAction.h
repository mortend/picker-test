// This file was generated based on '../Source/Fuse.Common/UpdateManager.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{struct UpdateAction;}}

namespace g{
namespace Fuse{

// internal sealed class UpdateAction
// {
uType* UpdateAction_typeof();
void UpdateAction__ctor__fn(UpdateAction* __this);
void UpdateAction__Invoke_fn(UpdateAction* __this);
void UpdateAction__New1_fn(UpdateAction** __retval);

struct UpdateAction : uObject
{
    uStrong<uDelegate*> action;
    uStrong<uObject*> update;

    void ctor_();
    void Invoke();
    static UpdateAction* New1();
};
// }

}} // ::g::Fuse
