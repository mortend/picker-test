// This file was generated based on '../Source/Fuse.Controls.Navigation/NavigationInternal/EnterVertical.uno'.
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
namespace g{namespace Fuse{namespace Controls{namespace NavigationInternal{struct EnterVertical;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace NavigationInternal{

// public partial sealed class EnterVertical
// {
::g::Fuse::Navigation::NavigationAnimation_type* EnterVertical_typeof();
void EnterVertical__ctor_8_fn(EnterVertical* __this);
void EnterVertical__InitializeUX_fn(EnterVertical* __this);
void EnterVertical__New3_fn(EnterVertical** __retval);

struct EnterVertical : ::g::Fuse::Navigation::EnteringAnimation
{
    void ctor_8();
    void InitializeUX();
    static EnterVertical* New3();
};
// }

}}}} // ::g::Fuse::Controls::NavigationInternal
