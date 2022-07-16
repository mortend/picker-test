// This file was generated based on '../Source/Fuse.Controls.Primitives/Triggers/Actions/LoadImage.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Fuse.ISourceLocation.h>
#include <Fuse.Triggers.Actions-16700ed8.h>
namespace g{namespace Fuse{namespace Controls{struct Image;}}}
namespace g{namespace Fuse{namespace Drawing{struct ImageFill;}}}
namespace g{namespace Fuse{namespace Triggers{namespace Actions{struct LoadImage;}}}}
namespace g{namespace Fuse{struct Node;}}

namespace g{
namespace Fuse{
namespace Triggers{
namespace Actions{

// public sealed class LoadImage
// {
::g::Fuse::Triggers::Actions::TriggerAction_type* LoadImage_typeof();
void LoadImage__get_Image_fn(LoadImage* __this, ::g::Fuse::Controls::Image** __retval);
void LoadImage__set_Image_fn(LoadImage* __this, ::g::Fuse::Controls::Image* value);
void LoadImage__get_ImageFill_fn(LoadImage* __this, ::g::Fuse::Drawing::ImageFill** __retval);
void LoadImage__set_ImageFill_fn(LoadImage* __this, ::g::Fuse::Drawing::ImageFill* value);
void LoadImage__Perform_fn(LoadImage* __this, ::g::Fuse::Node* target);

struct LoadImage : ::g::Fuse::Triggers::Actions::TriggerAction
{
    uStrong< ::g::Fuse::Controls::Image*> _Image;
    uStrong< ::g::Fuse::Drawing::ImageFill*> _ImageFill;

    ::g::Fuse::Controls::Image* Image();
    void Image(::g::Fuse::Controls::Image* value);
    ::g::Fuse::Drawing::ImageFill* ImageFill();
    void ImageFill(::g::Fuse::Drawing::ImageFill* value);
};
// }

}}}} // ::g::Fuse::Triggers::Actions
