// This file was generated based on '../Source/Fuse.Controls.Navigation/NavigationActions.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Controls{struct Navigator;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct ReleasePage;}}}}
namespace g{namespace Fuse{struct Node;}}
namespace g{namespace Fuse{struct Visual;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class ReleasePage
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* ReleasePage_typeof();
void ReleasePage__ctor_2_fn(ReleasePage* __this);
void ReleasePage__DeferredRelease_fn(ReleasePage* __this);
void ReleasePage__New2_fn(ReleasePage** __retval);
void ReleasePage__Perform_fn(ReleasePage* __this, ::g::Fuse::Node* n);

struct ReleasePage : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Visual*> _pendVisual;
    uStrong< ::g::Fuse::Controls::Navigator*> _pendNavigator;

    void ctor_2();
    void DeferredRelease();
    static ReleasePage* New2();
};
// }

}}}} // ::g::Fuse::Triggers::Actions
