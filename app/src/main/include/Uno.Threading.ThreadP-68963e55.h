// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Threading/2.2.0/ThreadPool.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Threading.ThreadP-e7b8b19a.h>
namespace g{namespace Uno{namespace Threading{struct ThreadPool__ParameterizedWorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// private sealed class ThreadPool.ParameterizedWorkItem<TState>
// {
::g::Uno::Threading::ThreadPool__WorkItem_type* ThreadPool__ParameterizedWorkItem_typeof();
void ThreadPool__ParameterizedWorkItem__Invoke_fn(ThreadPool__ParameterizedWorkItem* __this);

struct ThreadPool__ParameterizedWorkItem : ::g::Uno::Threading::ThreadPool__WorkItem
{
    uStrong<uDelegate*> _action;
    uTField _state() { return __type->Field(this, 1); }
};
// }

}}} // ::g::Uno::Threading
