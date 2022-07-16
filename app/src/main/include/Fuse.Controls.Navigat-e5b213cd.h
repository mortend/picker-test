// This file was generated based on '../Source/Fuse.Controls.Navigation/.uno/ux15/Fuse.Controls.NavigationInternal.BlockInputWhileNavigating.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-3168404.h>
#include <Fuse.Animations.IUnwr-29908c99.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.While-5badbae.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct BlockInputWhileNavigating;}}}}
namespace g{namespace Fuse{namespace Controls{struct NavigationControl;}}}
namespace g{namespace Uno{namespace UX{struct Property1;}}}
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class BlockInputWhileNavigating
// {
::g::Fuse::Triggers::Trigger_type* BlockInputWhileNavigating_typeof();
void BlockInputWhileNavigating__ctor_7_fn(BlockInputWhileNavigating* __this, ::g::Fuse::Controls::NavigationControl* nav1);
void BlockInputWhileNavigating__InitializeUX_fn(BlockInputWhileNavigating* __this);
void BlockInputWhileNavigating__New3_fn(::g::Fuse::Controls::NavigationControl* nav1, BlockInputWhileNavigating** __retval);

struct BlockInputWhileNavigating : ::g::Fuse::Navigation::WhileNavigating
{
    uStrong< ::g::Fuse::Controls::NavigationControl*> nav;
    uStrong< ::g::Uno::UX::Property1*> nav_HitTestMode_inst;
    static ::g::Uno::UX::Selector __selector0_;
    static ::g::Uno::UX::Selector& __selector0() { return BlockInputWhileNavigating_typeof()->Init(), __selector0_; }

    void ctor_7(::g::Fuse::Controls::NavigationControl* nav1);
    void InitializeUX();
    static BlockInputWhileNavigating* New3(::g::Fuse::Controls::NavigationControl* nav1);
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
