// This file was generated based on '../Source/Fuse.WebSockets/WebSocketModule.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace WebSocket{struct NativeFunctionModule__FunctionClosure;}}}

namespace g{
namespace Fuse{
namespace WebSocket{

// private sealed class NativeFunctionModule.FunctionClosure
// {
uType* NativeFunctionModule__FunctionClosure_typeof();
void NativeFunctionModule__FunctionClosure__ctor__fn(NativeFunctionModule__FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uDelegate* callback);
void NativeFunctionModule__FunctionClosure__get_Callback_fn(NativeFunctionModule__FunctionClosure* __this, uDelegate** __retval);
void NativeFunctionModule__FunctionClosure__function_fn(NativeFunctionModule__FunctionClosure* __this, ::g::Fuse::Scripting::Context* context, uArray* args, uObject** __retval);
void NativeFunctionModule__FunctionClosure__New1_fn(::g::Fuse::Scripting::Context* context, uDelegate* callback, NativeFunctionModule__FunctionClosure** __retval);

struct NativeFunctionModule__FunctionClosure : uObject
{
    uStrong< ::g::Fuse::Scripting::Context*> _context;
    uStrong<uDelegate*> _callback;

    void ctor_(::g::Fuse::Scripting::Context* context, uDelegate* callback);
    uDelegate* Callback();
    uObject* function(::g::Fuse::Scripting::Context* context, uArray* args);
    static NativeFunctionModule__FunctionClosure* New1(::g::Fuse::Scripting::Context* context, uDelegate* callback);
};
// }

}}} // ::g::Fuse::WebSocket
