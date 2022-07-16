// This file was generated based on '../Source/Fuse.Scripting/ScriptModule.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Module;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IModuleProvider
// {
uInterfaceType* IModuleProvider_typeof();

struct IModuleProvider
{
    void(*fp_GetModule)(uObject*, ::g::Fuse::Scripting::Module**);
    static ::g::Fuse::Scripting::Module* GetModule(const uInterface& __this) { ::g::Fuse::Scripting::Module* __retval; return __this.VTable<IModuleProvider>()->fp_GetModule(__this, &__retval), __retval; }
};
// }

}}} // ::g::Fuse::Scripting
