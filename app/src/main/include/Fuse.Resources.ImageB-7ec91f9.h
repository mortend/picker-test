// This file was generated based on '../Source/Fuse.Elements/Resources/ImageBackgroundLoad.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Resources{struct ImageBackgroundLoad;}}}
namespace g{namespace Uno{namespace Graphics{struct Texture2D;}}}
namespace g{namespace Uno{namespace UX{struct FileSource;}}}
namespace g{namespace Uno{struct Exception;}}

namespace g{
namespace Fuse{
namespace Resources{

// internal sealed class ImageBackgroundLoad
// {
uType* ImageBackgroundLoad_typeof();
void ImageBackgroundLoad__ctor__fn(ImageBackgroundLoad* __this, uString* filename, uArray* data, bool* diskCache, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail);
void ImageBackgroundLoad__ctor_1_fn(ImageBackgroundLoad* __this, ::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail);
void ImageBackgroundLoad__AndroidResizeImage_fn(uArray* imageData, int32_t* desiredWidth, int32_t* desiredHeight, uArray** __retval);
void ImageBackgroundLoad__Dispatch_fn(ImageBackgroundLoad* __this);
void ImageBackgroundLoad__New1_fn(uString* filename, uArray* data, bool* diskCache, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail, ImageBackgroundLoad** __retval);
void ImageBackgroundLoad__New2_fn(::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2* targetSize, uDelegate* done, uDelegate* fail, ImageBackgroundLoad** __retval);
void ImageBackgroundLoad__ReadBytes_fn(ImageBackgroundLoad* __this);
void ImageBackgroundLoad__ResizeImage_fn(uArray* imageData, ::g::Uno::Int2* targetSize, uArray** __retval);
void ImageBackgroundLoad__RunTask_fn(ImageBackgroundLoad* __this);
void ImageBackgroundLoad__UIDoneCallback_fn(ImageBackgroundLoad* __this);
void ImageBackgroundLoad__UIFailCallback_fn(ImageBackgroundLoad* __this);

struct ImageBackgroundLoad : uObject
{
    uStrong<uDelegate*> _done;
    uStrong<uDelegate*> _fail;
    uStrong< ::g::Uno::Exception*> _exception;
    int32_t _orientation;
    uStrong< ::g::Uno::Graphics::Texture2D*> _tex;
    uStrong<uArray*> _bytes;
    ::g::Uno::Int2 _targetSize;
    uStrong<uString*> _filename;
    bool _diskCache;
    uStrong< ::g::Uno::UX::FileSource*> _filesource;

    void ctor_(uString* filename, uArray* data, bool diskCache, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail);
    void ctor_1(::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail);
    void Dispatch();
    void ReadBytes();
    void RunTask();
    void UIDoneCallback();
    void UIFailCallback();
    static uArray* AndroidResizeImage(uArray* imageData, int32_t desiredWidth, int32_t desiredHeight);
    static ImageBackgroundLoad* New1(uString* filename, uArray* data, bool diskCache, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail);
    static ImageBackgroundLoad* New2(::g::Uno::UX::FileSource* filesource, ::g::Uno::Int2 targetSize, uDelegate* done, uDelegate* fail);
    static uArray* ResizeImage(uArray* imageData, ::g::Uno::Int2 targetSize);
};
// }

}}} // ::g::Fuse::Resources
