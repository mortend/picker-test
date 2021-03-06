// This file was generated based on '../Source/Fuse.Navigation/INavigation.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Navigation.IBase-516f1dcd.h>
#include <Fuse.Navigation.INavigation.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Navigation{struct EndSeekArgs;}}}
namespace g{namespace Fuse{namespace Navigation{struct UpdateSeekArgs;}}}

namespace g{
namespace Fuse{
namespace Navigation{

// internal abstract interface ISeekableNavigation
// {
uInterfaceType* ISeekableNavigation_typeof();

struct ISeekableNavigation
{
    void(*fp_BeginSeek)(uObject*);
    void(*fp_EndSeek)(uObject*, ::g::Fuse::Navigation::EndSeekArgs*);
    void(*fp_Seek)(uObject*, ::g::Fuse::Navigation::UpdateSeekArgs*);
    static void BeginSeek(const uInterface& __this) { __this.VTable<ISeekableNavigation>()->fp_BeginSeek(__this); }
    static void EndSeek(const uInterface& __this, ::g::Fuse::Navigation::EndSeekArgs* args) { __this.VTable<ISeekableNavigation>()->fp_EndSeek(__this, args); }
    static void Seek(const uInterface& __this, ::g::Fuse::Navigation::UpdateSeekArgs* args) { __this.VTable<ISeekableNavigation>()->fp_Seek(__this, args); }
};
// }

}}} // ::g::Fuse::Navigation
