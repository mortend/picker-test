// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/UX/Selector.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace UX{struct SelectorRegistry;}}}

namespace g{
namespace Uno{
namespace UX{

// internal static class SelectorRegistry
// {
uClassType* SelectorRegistry_typeof();
void SelectorRegistry__GetHandle_fn(uString* value, int32_t* __retval);
void SelectorRegistry__GetValue_fn(int32_t* handle, uString** __retval);

struct SelectorRegistry : uObject
{
    static uSStrong<uObject*> _mutex_;
    static uSStrong<uObject*>& _mutex() { return SelectorRegistry_typeof()->Init(), _mutex_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _stringToHandle_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _stringToHandle() { return SelectorRegistry_typeof()->Init(), _stringToHandle_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _handleToString_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _handleToString() { return SelectorRegistry_typeof()->Init(), _handleToString_; }
    static int32_t _counter_;
    static int32_t& _counter() { return SelectorRegistry_typeof()->Init(), _counter_; }

    static int32_t GetHandle(uString* value);
    static uString* GetValue(int32_t handle);
};
// }

}}} // ::g::Uno::UX
