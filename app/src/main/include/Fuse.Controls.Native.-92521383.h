// This file was generated based on '../Source/Fuse.Controls.Native/Interfaces.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface IToggleViewHost
// {
uInterfaceType* IToggleViewHost_typeof();

struct IToggleViewHost
{
    void(*fp_OnValueChanged)(uObject*, bool*);
    static void OnValueChanged(const uInterface& __this, bool newValue) { __this.VTable<IToggleViewHost>()->fp_OnValueChanged(__this, &newValue); }
};
// }

}}}} // ::g::Fuse::Controls::Native
