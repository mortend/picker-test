// This file was generated based on '../Source/Fuse.Storage/ApplicationDir.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Storage{struct ApplicationDir__ReadClosure;}}}

namespace g{
namespace Fuse{
namespace Storage{

// private sealed class ApplicationDir.ReadClosure
// {
uType* ApplicationDir__ReadClosure_typeof();
void ApplicationDir__ReadClosure__ctor__fn(ApplicationDir__ReadClosure* __this, uString* filename);
void ApplicationDir__ReadClosure__Invoke_fn(ApplicationDir__ReadClosure* __this, uString** __retval);
void ApplicationDir__ReadClosure__New1_fn(uString* filename, ApplicationDir__ReadClosure** __retval);

struct ApplicationDir__ReadClosure : uObject
{
    uStrong<uString*> _filename;

    void ctor_(uString* filename);
    uString* Invoke();
    static ApplicationDir__ReadClosure* New1(uString* filename);
};
// }

}}} // ::g::Fuse::Storage
