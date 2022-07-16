// This file was generated based on '../Source/Fuse.Controls.Video/VideoVisual.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Float4x4.h>
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace VideoImpl{struct VideoDrawElement;}}}}
namespace g{namespace Fuse{struct DrawContext;}}
namespace g{namespace Fuse{struct Visual;}}
namespace g{namespace Uno{namespace Graphics{struct VertexBuffer;}}}
namespace g{namespace Uno{namespace Graphics{struct VideoTexture;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3x3;}}

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// internal sealed class VideoDrawElement
// {
uType* VideoDrawElement_typeof();
void VideoDrawElement__ctor__fn(VideoDrawElement* __this);
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex, int32_t* rotation);
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this);
void VideoDrawElement__New1_fn(VideoDrawElement** __retval);

struct VideoDrawElement : uObject
{
    static uSStrong<VideoDrawElement*> Impl_;
    static uSStrong<VideoDrawElement*>& Impl() { return VideoDrawElement_typeof()->Init(), Impl_; }
    static uSStrong<uArray*> Transforms_;
    static uSStrong<uArray*>& Transforms() { return VideoDrawElement_typeof()->Init(), Transforms_; }
    uStrong< ::g::Uno::Graphics::VertexBuffer*> Draw_VertexData_44e1596c_6_2_1;
    ::g::Uno::Float4x4 Draw_LocalTransform_44e1596c_3_9_2;
    ::g::Uno::Float4x4 Draw_LocalTransform_44e1596c_3_9_3;
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_44e1596c;

    void ctor_();
    void Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex, int32_t rotation);
    void init_DrawCalls();
    static VideoDrawElement* New1();
};
// }

}}}} // ::g::Fuse::Controls::VideoImpl
