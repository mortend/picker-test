// This file was generated based on '../Source/Fuse.Common/Internal/SystemFont.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Internal{struct FontFaceDescriptor;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}

namespace g{
namespace Fuse{
namespace Internal{

// internal sealed class FontFaceDescriptor
// {
uType* FontFaceDescriptor_typeof();
void FontFaceDescriptor__ctor__fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, int32_t* index);
void FontFaceDescriptor__Equals_fn(FontFaceDescriptor* __this, uObject* o, bool* __retval);
void FontFaceDescriptor__GetHashCode_fn(FontFaceDescriptor* __this, int32_t* __retval);
void FontFaceDescriptor__New1_fn(::g::Uno::UX::FileSource* fileSource, int32_t* index, FontFaceDescriptor** __retval);

struct FontFaceDescriptor : uObject
{
    uStrong< ::g::Uno::UX::FileSource*> FileSource;
    int32_t Index;
    uStrong<uObject*> Styles;

    void ctor_(::g::Uno::UX::FileSource* fileSource, int32_t index);
    static FontFaceDescriptor* New1(::g::Uno::UX::FileSource* fileSource, int32_t index);
};
// }

}}} // ::g::Fuse::Internal
