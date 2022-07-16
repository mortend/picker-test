// This file was generated based on '../Source/Fuse.Scripting/NativeEvent.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.Function.h>
#include <Fuse.Scripting.Native-aec1d155.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct NativeEvent;}}}
namespace g{namespace Uno{namespace Collections{struct Queue;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class NativeEvent
// {
::g::Fuse::Scripting::NativeProperty_type* NativeEvent_typeof();
void NativeEvent__ctor_4_fn(NativeEvent* __this, uString* name, bool* queueEventsBeforeHandlerIsSet);
void NativeEvent__DispatchQueue_fn(NativeEvent* __this, uObject* threadWorker);
void NativeEvent__GetProperty_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function** __retval);
void NativeEvent__New4_fn(uString* name, bool* queueEventsBeforeHandlerIsSet, NativeEvent** __retval);
void NativeEvent__RaiseSync_fn(NativeEvent* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void NativeEvent__SetProperty1_fn(NativeEvent* __this, ::g::Fuse::Scripting::Function* function);

struct NativeEvent : ::g::Fuse::Scripting::NativeProperty
{
    uStrong< ::g::Uno::Collections::Queue*> _eventArgsQueue;
    bool _queueEventsBeforeEvaluation;
    uStrong< ::g::Fuse::Scripting::Function*> _jsFunction;

    void ctor_4(uString* name, bool queueEventsBeforeHandlerIsSet);
    void DispatchQueue(uObject* threadWorker);
    uObject* RaiseSync(::g::Fuse::Scripting::Context* context, uArray* args);
    static NativeEvent* New4(uString* name, bool queueEventsBeforeHandlerIsSet);
};
// }

}}} // ::g::Fuse::Scripting
