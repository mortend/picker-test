// This file was generated based on '../Source/Fuse.Controls.Native/Interfaces.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Controls.Native.IView.h>
#include <Uno.IDisposable.h>
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Controls{
namespace Native{

// public abstract interface ILabelView
// {
uInterfaceType* ILabelView_typeof();

struct ILabelView
{
    void(*fp_set_Text)(uObject*, uString*);
    static void Text(const uInterface& __this, uString* value) { __this.VTable<ILabelView>()->fp_set_Text(__this, value); }
};
// }

}}}} // ::g::Fuse::Controls::Native
