// This file was generated based on '../Source/Fuse.Controls.Navigation/NavigationInternal/EnterHorizontal.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Animations.IBase-3168404.h>
#include <Fuse.Animations.IUnwr-29908c99.h>
#include <Fuse.Binding.h>
#include <Fuse.INotifyUnrooted.h>
#include <Fuse.IProperties.h>
#include <Fuse.ISourceLocation.h>
#include <Fuse.Navigation.Enter-b5ef3daa.h>
#include <Fuse.Scripting.IScriptObject.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct EnterHorizontal;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class EnterHorizontal
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnterHorizontal_typeof();
void EnterHorizontal__ctor_8_fn(EnterHorizontal* __this);
void EnterHorizontal__InitializeUX_fn(EnterHorizontal* __this);
void EnterHorizontal__New3_fn(EnterHorizontal** __retval);

struct EnterHorizontal : ::g::Fuse::Navigation::EnteringAnimation
{
    void ctor_8();
    void InitializeUX();
    static EnterHorizontal* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
