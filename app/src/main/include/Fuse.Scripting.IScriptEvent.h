// This file was generated based on '../Source/Fuse.Scripting/IScriptEvent.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Scripting{

// public abstract interface IScriptEvent
// {
uInterfaceType* IScriptEvent_typeof();

struct IScriptEvent
{
    void(*fp_Serialize)(uObject*, uObject*);
    static void Serialize(const uInterface& __this, uObject* s) { __this.VTable<IScriptEvent>()->fp_Serialize(__this, s); }
};
// }

}}} // ::g::Fuse::Scripting
