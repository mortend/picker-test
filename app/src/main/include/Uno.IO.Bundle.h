// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/IO/Bundle.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace IO{struct Bundle;}}}
namespace g{namespace Uno{namespace IO{struct BundleFile;}}}

namespace g{
namespace Uno{
namespace IO{

// public sealed class Bundle
// {
uType* Bundle_typeof();
void Bundle__ctor__fn(Bundle* __this, uString* packageName, bool* load);
void Bundle__get_AllFiles_fn(uObject** __retval);
void Bundle__get_Files_fn(Bundle* __this, uObject** __retval);
void Bundle__Get_fn(uString* package, Bundle** __retval);
void Bundle__GetFile_fn(Bundle* __this, uString* filename, ::g::Uno::IO::BundleFile** __retval);
void Bundle__Load_fn();
void Bundle__New1_fn(uString* packageName, bool* load, Bundle** __retval);
void Bundle__get_PackageName_fn(Bundle* __this, uString** __retval);
void Bundle__set_PackageName_fn(Bundle* __this, uString* value);
void Bundle__ToString_fn(Bundle* __this, uString** __retval);

struct Bundle : uObject
{
    static uSStrong< ::g::Uno::Collections::Dictionary*> _bundles_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _bundles() { return Bundle_typeof()->Init(), _bundles_; }
    static uSStrong< ::g::Uno::Collections::List*> _allFiles_;
    static uSStrong< ::g::Uno::Collections::List*>& _allFiles() { return Bundle_typeof()->Init(), _allFiles_; }
    static bool _loaded_;
    static bool& _loaded() { return Bundle_typeof()->Init(), _loaded_; }
    uStrong< ::g::Uno::Collections::List*> _files;
    uStrong<uString*> _PackageName;

    void ctor_(uString* packageName, bool load);
    uObject* Files();
    ::g::Uno::IO::BundleFile* GetFile(uString* filename);
    uString* PackageName();
    void PackageName(uString* value);
    static Bundle* Get(uString* package);
    static void Load();
    static Bundle* New1(uString* packageName, bool load);
    static uObject* AllFiles();
};
// }

}}} // ::g::Uno::IO
