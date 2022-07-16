// This file was generated based on '../Source/Fuse.Scripting/ScriptClass.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.Scripting.ScriptMethod.h>
namespace g{namespace Fuse{namespace Scripting{struct Context;}}}
namespace g{namespace Fuse{namespace Scripting{struct ScriptMethod1;}}}

namespace g{
namespace Fuse{
namespace Scripting{

// public sealed class ScriptMethod<T>
// {
::g::Fuse::Scripting::ScriptMethod_type* ScriptMethod1_typeof();
void ScriptMethod1__ctor_2_fn(ScriptMethod1* __this, uString* name, uDelegate* method);
void ScriptMethod1__ctor_3_fn(ScriptMethod1* __this, uString* name, uDelegate* method);
void ScriptMethod1__ctor_4_fn(ScriptMethod1* __this, uString* name, uDelegate* method);
void ScriptMethod1__Call_fn(ScriptMethod1* __this, ::g::Fuse::Scripting::Context* c, uObject* obj, uArray* args, uObject** __retval);
void ScriptMethod1__New1_fn(uType* __type, uString* name, uDelegate* method, ScriptMethod1** __retval);
void ScriptMethod1__New2_fn(uType* __type, uString* name, uDelegate* method, ScriptMethod1** __retval);
void ScriptMethod1__New3_fn(uType* __type, uString* name, uDelegate* method, ScriptMethod1** __retval);

struct ScriptMethod1 : ::g::Fuse::Scripting::ScriptMethod
{
    uStrong<uDelegate*> _method;
    uStrong<uDelegate*> _voidMethod;

    void ctor_2(uString* name, uDelegate* method);
    void ctor_3(uString* name, uDelegate* method);
    void ctor_4(uString* name, uDelegate* method);
    static ScriptMethod1* New1(uType* __type, uString* name, uDelegate* method);
    static ScriptMethod1* New2(uType* __type, uString* name, uDelegate* method);
    static ScriptMethod1* New3(uType* __type, uString* name, uDelegate* method);
};
// }

}}} // ::g::Fuse::Scripting
