// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Threading/2.2.0/ThreadPool.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Threading{struct AutoResetEvent;}}}
namespace g{namespace Uno{namespace Threading{struct ConcurrentQueue;}}}
namespace g{namespace Uno{namespace Threading{struct Thread;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool;}}}
namespace g{namespace Uno{namespace Threading{struct ThreadPool__WorkItem;}}}

namespace g{
namespace Uno{
namespace Threading{

// public sealed class ThreadPool
// {
struct ThreadPool_type : uType
{
    ::g::Uno::IDisposable interface0;
};

ThreadPool_type* ThreadPool_typeof();
void ThreadPool__ctor__fn(ThreadPool* __this, int32_t* poolSize);
void ThreadPool__Dispose_fn(ThreadPool* __this);
void ThreadPool__DoTask_fn(ThreadPool* __this, bool* __retval);
void ThreadPool__New1_fn(int32_t* poolSize, ThreadPool** __retval);
void ThreadPool__QueueAction_fn(ThreadPool* __this, uDelegate* action);
void ThreadPool__WorkerEntrypoint_fn(ThreadPool* __this);

struct ThreadPool : uObject
{
    uStrong< ::g::Uno::Threading::AutoResetEvent*> _resetEvent;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _taskQueue;
    int32_t _poolSize;
    bool _running;
    bool _isDisposed;
    uStrong< ::g::Uno::Threading::ConcurrentQueue*> _disposeQueue;

    void ctor_(int32_t poolSize);
    void Dispose();
    bool DoTask();
    void QueueAction(uDelegate* action);
    void WorkerEntrypoint();
    static ThreadPool* New1(int32_t poolSize);
};
// }

}}} // ::g::Uno::Threading
