// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseControlsVideo_bundle.h>
#include <Fuse.Controls.Graphics.Visual.h>
#include <Fuse.Controls.VideoIm-119506e2.h>
#include <Fuse.Controls.VideoIm-136ae022.h>
#include <Fuse.Controls.VideoIm-55d144ab.h>
#include <Fuse.Controls.VideoIm-5b214bbd.h>
#include <Fuse.Controls.VideoIm-6b67cd7e.h>
#include <Fuse.Controls.VideoIm-9b1ee94.h>
#include <Fuse.Controls.VideoIm-aca277d5.h>
#include <Fuse.Controls.VideoIm-b271cf7d.h>
#include <Fuse.Controls.VideoIm-c18d2323.h>
#include <Fuse.Controls.VideoIm-c4b7a5d0.h>
#include <Fuse.Controls.VideoIm-c6e44674.h>
#include <Fuse.Controls.VideoIm-c7c76e91.h>
#include <Fuse.Controls.VideoIm-ecf89c4c.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.IRenderViewport.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Platform.ApplicationState.h>
#include <Fuse.Platform.Lifecycle.h>
#include <Fuse.Triggers.BusyTask.h>
#include <Fuse.Triggers.BusyTaskActivity.h>
#include <Fuse.Triggers.WhileCompleted.h>
#include <Fuse.Triggers.WhilePaused.h>
#include <Fuse.Triggers.WhilePlaying.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.Dicti-5d5b73f.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Log.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.EventHandler1-1.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float3x3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BlendOperand.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.IndexType.h>
#include <Uno.Graphics.OpenGL.GLProgram.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.VertexAt-13489a6d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Graphics.VideoTexture.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.IO.Directory.h>
#include <Uno.IO.File.h>
#include <Uno.IO.UserDirectory.h>
#include <Uno.Math.h>
#include <Uno.Matrix.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Threading.Future.h>
#include <Uno.Threading.Future1-1.h>
#include <Uno.UShort.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.UX.ValueChangedHandler-1.h>
static uString* STRINGS[4];
static uType* TYPES[19];

namespace g{
namespace Fuse{
namespace Controls{
namespace VideoImpl{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/IVideoPlayer.uno
// ----------------------------------------------------------------------------

// internal sealed class EmptyVideo
// {
static void EmptyVideo_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), offsetof(EmptyVideo_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(EmptyVideo_type, interface1));
}

EmptyVideo_type* EmptyVideo_typeof()
{
    static uSStrong<EmptyVideo_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(EmptyVideo);
    options.TypeSize = sizeof(EmptyVideo_type);
    type = (EmptyVideo_type*)uClassType::New("Fuse.Controls.VideoImpl.EmptyVideo", options);
    type->fp_build_ = EmptyVideo_build;
    type->fp_ctor_ = (void*)EmptyVideo__New1_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))EmptyVideo__UnoIDisposableDispose_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerPause_fn;
    type->interface0.fp_Play = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerPlay_fn;
    type->interface0.fp_Update = (void(*)(uObject*))EmptyVideo__FuseControlsVideoImplIVideoPlayerUpdate_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Duration_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Position_fn;
    type->interface0.fp_get_Volume = (void(*)(uObject*, float*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Volume_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Volume_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Size_fn;
    type->interface0.fp_get_RotationDegrees = (void(*)(uObject*, int32_t*))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_RotationDegrees_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))EmptyVideo__FuseControlsVideoImplIVideoPlayerget_VideoTexture_fn;
    type->interface0.fp_add_FrameAvailable = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_FrameAvailable_fn;
    type->interface0.fp_remove_FrameAvailable = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_FrameAvailable_fn;
    type->interface0.fp_add_ErrorOccurred = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_ErrorOccurred_fn;
    type->interface0.fp_remove_ErrorOccurred = (void(*)(uObject*, uDelegate*))EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_ErrorOccurred_fn;
    return type;
}

// public generated EmptyVideo()
void EmptyVideo__ctor__fn(EmptyVideo* __this)
{
    __this->ctor_();
}

// private double Fuse.Controls.VideoImpl.IVideoPlayer.get_Duration()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Duration_fn(EmptyVideo* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.add_ErrorOccurred(Uno.EventHandler<Uno.Exception> value)
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.remove_ErrorOccurred(Uno.EventHandler<Uno.Exception> value)
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_ErrorOccurred_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.add_FrameAvailable(Uno.EventHandler value)
void EmptyVideo__FuseControlsVideoImplIVideoPlayeradd_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.remove_FrameAvailable(Uno.EventHandler value)
void EmptyVideo__FuseControlsVideoImplIVideoPlayerremove_FrameAvailable_fn(EmptyVideo* __this, uDelegate* value)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Pause()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPause_fn(EmptyVideo* __this)
{
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Play()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerPlay_fn(EmptyVideo* __this)
{
}

// private double Fuse.Controls.VideoImpl.IVideoPlayer.get_Position()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Position_fn(EmptyVideo* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.set_Position(double value)
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Position_fn(EmptyVideo* __this, double* value)
{
}

// private int Fuse.Controls.VideoImpl.IVideoPlayer.get_RotationDegrees()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_RotationDegrees_fn(EmptyVideo* __this, int32_t* __retval)
{
    return *__retval = 0, void();
}

// private int2 Fuse.Controls.VideoImpl.IVideoPlayer.get_Size()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Size_fn(EmptyVideo* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = ::g::Uno::Int2__New1(0), void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.Update()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerUpdate_fn(EmptyVideo* __this)
{
}

// private Uno.Graphics.VideoTexture Fuse.Controls.VideoImpl.IVideoPlayer.get_VideoTexture()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_VideoTexture_fn(EmptyVideo* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    return *__retval = nullptr, void();
}

// private float Fuse.Controls.VideoImpl.IVideoPlayer.get_Volume()
void EmptyVideo__FuseControlsVideoImplIVideoPlayerget_Volume_fn(EmptyVideo* __this, float* __retval)
{
    return *__retval = 0.0f, void();
}

// private void Fuse.Controls.VideoImpl.IVideoPlayer.set_Volume(float value)
void EmptyVideo__FuseControlsVideoImplIVideoPlayerset_Volume_fn(EmptyVideo* __this, float* value)
{
}

// public generated EmptyVideo New()
void EmptyVideo__New1_fn(EmptyVideo** __retval)
{
    *__retval = EmptyVideo::New1();
}

// private void Uno.IDisposable.Dispose()
void EmptyVideo__UnoIDisposableDispose_fn(EmptyVideo* __this)
{
}

// public generated EmptyVideo() [instance]
void EmptyVideo::ctor_()
{
}

// public generated EmptyVideo New() [static]
EmptyVideo* EmptyVideo::New1()
{
    EmptyVideo* obj1 = (EmptyVideo*)uNew(EmptyVideo_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoContainer.uno
// ------------------------------------------------------------------------------

// internal sealed class GraphicsVideoService
// {
// static generated GraphicsVideoService()
static void GraphicsVideoService__cctor__fn(uType* __type)
{
    GraphicsVideoService::CompletionTimeThreshold_ = 0.05f;
}

static void GraphicsVideoService_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Exception_typeof();
    ::TYPES[1] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Action1_typeof()->MakeType(::TYPES[0/*Uno.Exception*/], nullptr);
    ::TYPES[3] = ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof();
    ::TYPES[4] = ::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof();
    ::TYPES[5] = ::g::Uno::EventHandler_typeof();
    ::TYPES[6] = ::g::Uno::EventHandler1_typeof()->MakeType(::TYPES[0/*Uno.Exception*/], nullptr);
    ::TYPES[7] = ::g::Uno::IDisposable_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::Controls::VideoImpl::IVideoService_typeof(), offsetof(GraphicsVideoService_type, interface0),
        ::TYPES[7/*Uno.IDisposable*/], offsetof(GraphicsVideoService_type, interface1));
    type->SetFields(0,
        ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/], offsetof(GraphicsVideoService, _player), 0,
        ::TYPES[7/*Uno.IDisposable*/], offsetof(GraphicsVideoService, _loading), 0,
        ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/], offsetof(GraphicsVideoService, _empty), 0,
        ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/], offsetof(GraphicsVideoService, _callbacks), 0,
        ::g::Uno::Double_typeof(), offsetof(GraphicsVideoService, _durationCache), 0,
        ::g::Uno::Int2_typeof(), offsetof(GraphicsVideoService, _sizeCache), 0,
        ::g::Uno::Float_typeof(), offsetof(GraphicsVideoService, _volume), 0,
        ::g::Uno::Bool_typeof(), offsetof(GraphicsVideoService, _isLooping), 0,
        ::g::Uno::Bool_typeof(), offsetof(GraphicsVideoService, _autoPlay), 0,
        ::g::Uno::Int_typeof(), offsetof(GraphicsVideoService, _rotationCache), 0,
        ::g::Uno::Float_typeof(), (uintptr_t)&GraphicsVideoService::CompletionTimeThreshold_, uFieldFlagsStatic);
}

GraphicsVideoService_type* GraphicsVideoService_typeof()
{
    static uSStrong<GraphicsVideoService_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.InterfaceCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GraphicsVideoService);
    options.TypeSize = sizeof(GraphicsVideoService_type);
    type = (GraphicsVideoService_type*)uClassType::New("Fuse.Controls.VideoImpl.GraphicsVideoService", options);
    type->fp_build_ = GraphicsVideoService_build;
    type->fp_cctor_ = GraphicsVideoService__cctor__fn;
    type->interface0.fp_Play = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServicePlay_fn;
    type->interface0.fp_Pause = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServicePause_fn;
    type->interface0.fp_Load = (void(*)(uObject*, uString*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad_fn;
    type->interface0.fp_Load1 = (void(*)(uObject*, ::g::Uno::UX::FileSource*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad1_fn;
    type->interface0.fp_Update = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceUpdate_fn;
    type->interface0.fp_Unload = (void(*)(uObject*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceUnload_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))GraphicsVideoService__UnoIDisposableDispose_fn;
    type->interface0.fp_get_Duration = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Duration_fn;
    type->interface0.fp_get_Size = (void(*)(uObject*, ::g::Uno::Int2*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Size_fn;
    type->interface0.fp_get_VideoTexture = (void(*)(uObject*, ::g::Uno::Graphics::VideoTexture**))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_VideoTexture_fn;
    type->interface0.fp_set_Volume = (void(*)(uObject*, float*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Volume_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, double*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Position_fn;
    type->interface0.fp_set_IsLooping = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_IsLooping_fn;
    type->interface0.fp_set_AutoPlay = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_AutoPlay_fn;
    type->interface0.fp_get_IsValid = (void(*)(uObject*, bool*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_IsValid_fn;
    type->interface0.fp_get_RotationDegrees = (void(*)(uObject*, int32_t*))GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_RotationDegrees_fn;
    return type;
}

// public GraphicsVideoService(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks)
void GraphicsVideoService__ctor__fn(GraphicsVideoService* __this, uObject* callbacks)
{
    __this->ctor_(callbacks);
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_AutoPlay(bool value)
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_AutoPlay_fn(GraphicsVideoService* __this, bool* value)
{
    bool value_ = *value;
    __this->_autoPlay = value_;
}

// private double Fuse.Controls.VideoImpl.IVideoService.get_Duration()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Duration_fn(GraphicsVideoService* __this, double* __retval)
{
    return *__retval = __this->_durationCache, void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_IsLooping(bool value)
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_IsLooping_fn(GraphicsVideoService* __this, bool* value)
{
    bool value_ = *value;
    __this->_isLooping = value_;
}

// private bool Fuse.Controls.VideoImpl.IVideoService.get_IsValid()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_IsValid_fn(GraphicsVideoService* __this, bool* __retval)
{
    return *__retval = __this->_player != nullptr, void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Load(string url)
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad_fn(GraphicsVideoService* __this, uString* url)
{
    try
    {
        {
            __this->Reset();
            __this->_loading = ::g::Fuse::Controls::VideoImpl::LoadingClosure::Load(url, uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer>*/], (void*)GraphicsVideoService__OnLoaded_fn, __this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)GraphicsVideoService__OnLoadingError_fn, __this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
        return;
    }

    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnLoading(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Load(Uno.UX.FileSource file)
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceLoad1_fn(GraphicsVideoService* __this, ::g::Uno::UX::FileSource* file)
{
    try
    {
        {
            __this->Reset();
            __this->_loading = ::g::Fuse::Controls::VideoImpl::LoadingClosure::Load1(file, uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer>*/], (void*)GraphicsVideoService__OnLoaded_fn, __this), uDelegate::New(::TYPES[2/*Uno.Action<Uno.Exception>*/], (void*)GraphicsVideoService__OnLoadingError_fn, __this));
        }
    }

    catch (const uThrowable& __t)
    {
        ::g::Uno::Exception* e = __t.Exception;
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
        return;
    }

    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnLoading(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Pause()
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePause_fn(GraphicsVideoService* __this)
{
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private void Fuse.Controls.VideoImpl.IVideoService.Play()
void GraphicsVideoService__FuseControlsVideoImplIVideoServicePlay_fn(GraphicsVideoService* __this)
{
    if (__this->IsCompleted())
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), 0.0);

    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private double Fuse.Controls.VideoImpl.IVideoService.get_Position()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Position_fn(GraphicsVideoService* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_Position(double value)
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Position_fn(GraphicsVideoService* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), value_);
}

// private int Fuse.Controls.VideoImpl.IVideoService.get_RotationDegrees()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_RotationDegrees_fn(GraphicsVideoService* __this, int32_t* __retval)
{
    return *__retval = __this->_rotationCache, void();
}

// private int2 Fuse.Controls.VideoImpl.IVideoService.get_Size()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_Size_fn(GraphicsVideoService* __this, ::g::Uno::Int2* __retval)
{
    return *__retval = __this->_sizeCache, void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Unload()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUnload_fn(GraphicsVideoService* __this)
{
    __this->Reset();
}

// private void Fuse.Controls.VideoImpl.IVideoService.Update()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceUpdate_fn(GraphicsVideoService* __this)
{
    if (__this->_player != nullptr)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Update(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));

        if (__this->IsCompleted())
        {
            if (__this->_isLooping)
            {
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), 0.0);
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
            }
            else
            {
                ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Pause(uInterface(uPtr(__this->_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
                ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnCompleted(uInterface(uPtr(__this->_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
            }
        }
    }
}

// private Uno.Graphics.VideoTexture Fuse.Controls.VideoImpl.IVideoService.get_VideoTexture()
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceget_VideoTexture_fn(GraphicsVideoService* __this, ::g::Uno::Graphics::VideoTexture** __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::VideoTexture(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/])), void();
}

// private void Fuse.Controls.VideoImpl.IVideoService.set_Volume(float value)
void GraphicsVideoService__FuseControlsVideoImplIVideoServiceset_Volume_fn(GraphicsVideoService* __this, float* value)
{
    float value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Volume(uInterface(uPtr(__this->Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), __this->_volume = value_);
}

// private bool get_IsCompleted()
void GraphicsVideoService__get_IsCompleted_fn(GraphicsVideoService* __this, bool* __retval)
{
    *__retval = __this->IsCompleted();
}

// public GraphicsVideoService New(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks)
void GraphicsVideoService__New1_fn(uObject* callbacks, GraphicsVideoService** __retval)
{
    *__retval = GraphicsVideoService::New1(callbacks);
}

// private void OnLoaded(Fuse.Controls.VideoImpl.IVideoPlayer player)
void GraphicsVideoService__OnLoaded_fn(GraphicsVideoService* __this, uObject* player)
{
    __this->OnLoaded(player);
}

// private void OnLoadingError(Uno.Exception e)
void GraphicsVideoService__OnLoadingError_fn(GraphicsVideoService* __this, ::g::Uno::Exception* e)
{
    __this->OnLoadingError(e);
}

// private void OnPlayerError(object sender, Uno.Exception e)
void GraphicsVideoService__OnPlayerError_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::Exception* e)
{
    __this->OnPlayerError(sender, e);
}

// private void OnPlayerFrameAvailable(object sender, Uno.EventArgs args)
void GraphicsVideoService__OnPlayerFrameAvailable_fn(GraphicsVideoService* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnPlayerFrameAvailable(sender, args);
}

// private Fuse.Controls.VideoImpl.IVideoPlayer get_Player()
void GraphicsVideoService__get_Player_fn(GraphicsVideoService* __this, uObject** __retval)
{
    *__retval = __this->Player();
}

// private void Reset()
void GraphicsVideoService__Reset_fn(GraphicsVideoService* __this)
{
    __this->Reset();
}

// private void SetPlayer(Fuse.Controls.VideoImpl.IVideoPlayer player)
void GraphicsVideoService__SetPlayer_fn(GraphicsVideoService* __this, uObject* player)
{
    __this->SetPlayer(player);
}

// private void Uno.IDisposable.Dispose()
void GraphicsVideoService__UnoIDisposableDispose_fn(GraphicsVideoService* __this)
{
    __this->Reset();
    __this->_callbacks = nullptr;
}

float GraphicsVideoService::CompletionTimeThreshold_;

// public GraphicsVideoService(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) [instance]
void GraphicsVideoService::ctor_(uObject* callbacks)
{
    _empty = (uObject*)::g::Fuse::Controls::VideoImpl::EmptyVideo::New1();
    _volume = 1.0f;
    _callbacks = callbacks;
}

// private bool get_IsCompleted() [instance]
bool GraphicsVideoService::IsCompleted()
{
    return ::g::Uno::Math::Abs(_durationCache - ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Position(uInterface(uPtr(Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]))) < (double)GraphicsVideoService::CompletionTimeThreshold_;
}

// private void OnLoaded(Fuse.Controls.VideoImpl.IVideoPlayer player) [instance]
void GraphicsVideoService::OnLoaded(uObject* player)
{
    _durationCache = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Duration(uInterface(uPtr(player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
    _sizeCache = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Size(uInterface(player, ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
    _rotationCache = ::g::Fuse::Controls::VideoImpl::IVideoPlayer::RotationDegrees(uInterface(player, ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
    SetPlayer(player);
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnReady(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));

    if (_autoPlay)
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Play(uInterface(uPtr(Player()), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]));
}

// private void OnLoadingError(Uno.Exception e) [instance]
void GraphicsVideoService::OnLoadingError(::g::Uno::Exception* e)
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
}

// private void OnPlayerError(object sender, Uno.Exception e) [instance]
void GraphicsVideoService::OnPlayerError(uObject* sender, ::g::Uno::Exception* e)
{
    Reset();
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnError(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]), e);
}

// private void OnPlayerFrameAvailable(object sender, Uno.EventArgs args) [instance]
void GraphicsVideoService::OnPlayerFrameAvailable(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::VideoImpl::IVideoCallbacks::OnFrameAvailable(uInterface(uPtr(_callbacks), ::TYPES[3/*Fuse.Controls.VideoImpl.IVideoCallbacks*/]));
}

// private Fuse.Controls.VideoImpl.IVideoPlayer get_Player() [instance]
uObject* GraphicsVideoService::Player()
{
    uObject* ind1;
    ind1 = _player;
    return (ind1 != nullptr) ? ind1 : (uObject*)_empty;
}

// private void Reset() [instance]
void GraphicsVideoService::Reset()
{
    if (_player != nullptr)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::remove_FrameAvailable(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)GraphicsVideoService__OnPlayerFrameAvailable_fn, this));
        ::g::Fuse::Controls::VideoImpl::IVideoPlayer::remove_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Exception>*/], (void*)GraphicsVideoService__OnPlayerError_fn, this));
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_player), ::TYPES[7/*Uno.IDisposable*/]));
        _player = nullptr;
    }

    if (_loading != nullptr)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_loading), ::TYPES[7/*Uno.IDisposable*/]));
        _loading = nullptr;
    }
}

// private void SetPlayer(Fuse.Controls.VideoImpl.IVideoPlayer player) [instance]
void GraphicsVideoService::SetPlayer(uObject* player)
{
    _player = player;
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::add_FrameAvailable(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)GraphicsVideoService__OnPlayerFrameAvailable_fn, this));
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::add_ErrorOccurred(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), uDelegate::New(::TYPES[6/*Uno.EventHandler<Uno.Exception>*/], (void*)GraphicsVideoService__OnPlayerError_fn, this));
    ::g::Fuse::Controls::VideoImpl::IVideoPlayer::Volume(uInterface(uPtr(_player), ::TYPES[4/*Fuse.Controls.VideoImpl.IVideoPlayer*/]), _volume);
}

// public GraphicsVideoService New(Fuse.Controls.VideoImpl.IVideoCallbacks callbacks) [static]
GraphicsVideoService* GraphicsVideoService::New1(uObject* callbacks)
{
    GraphicsVideoService* obj2 = (GraphicsVideoService*)uNew(GraphicsVideoService_typeof());
    obj2->ctor_(callbacks);
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoContainer.uno
// ------------------------------------------------------------------------------

// internal abstract interface IVideoCallbacks
// {
uInterfaceType* IVideoCallbacks_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoCallbacks", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/IVideoPlayer.uno
// ----------------------------------------------------------------------------

// internal abstract interface IVideoPlayer
// {
uInterfaceType* IVideoPlayer_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoPlayer", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoContainer.uno
// ------------------------------------------------------------------------------

// internal abstract interface IVideoService
// {
uInterfaceType* IVideoService_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Controls.VideoImpl.IVideoService", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoContainer.uno
// ------------------------------------------------------------------------------

// internal sealed class LoadingClosure
// {
static void LoadingClosure_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(LoadingClosure_type, interface0));
    type->SetFields(0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), nullptr), offsetof(LoadingClosure, _loaderFuture), 0,
        ::g::Uno::Threading::Future1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), nullptr), offsetof(LoadingClosure, _thenFuture), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Controls::VideoImpl::IVideoPlayer_typeof(), nullptr), offsetof(LoadingClosure, _loaded), 0,
        ::g::Uno::Action1_typeof()->MakeType(::g::Uno::Exception_typeof(), nullptr), offsetof(LoadingClosure, _error), 0,
        ::g::Uno::Bool_typeof(), offsetof(LoadingClosure, _isDisposed), 0);
}

LoadingClosure_type* LoadingClosure_typeof()
{
    static uSStrong<LoadingClosure_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(LoadingClosure);
    options.TypeSize = sizeof(LoadingClosure_type);
    type = (LoadingClosure_type*)uClassType::New("Fuse.Controls.VideoImpl.LoadingClosure", options);
    type->fp_build_ = LoadingClosure_build;
    type->interface0.fp_Dispose = (void(*)(uObject*))LoadingClosure__UnoIDisposableDispose_fn;
    return type;
}

// private LoadingClosure(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error)
void LoadingClosure__ctor__fn(LoadingClosure* __this, ::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    __this->ctor_(loadedFuture, loaded, error);
}

// public static Uno.IDisposable Load(string url, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error)
void LoadingClosure__Load_fn(uString* url, uDelegate* loaded, uDelegate* error, uObject** __retval)
{
    *__retval = LoadingClosure::Load(url, loaded, error);
}

// public static Uno.IDisposable Load(Uno.UX.FileSource file, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error)
void LoadingClosure__Load1_fn(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error, uObject** __retval)
{
    *__retval = LoadingClosure::Load1(file, loaded, error);
}

// private LoadingClosure New(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error)
void LoadingClosure__New1_fn(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error, LoadingClosure** __retval)
{
    *__retval = LoadingClosure::New1(loadedFuture, loaded, error);
}

// private void Uno.IDisposable.Dispose()
void LoadingClosure__UnoIDisposableDispose_fn(LoadingClosure* __this)
{
    if (!__this->_isDisposed)
    {
        uPtr(__this->_loaderFuture)->Cancel(false);
        uPtr(__this->_loaderFuture)->Dispose();
        uPtr(__this->_thenFuture)->Dispose();
        __this->_isDisposed = true;
    }
}

// private LoadingClosure(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [instance]
void LoadingClosure::ctor_(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    _loaded = loaded;
    _error = error;
    _loaderFuture = loadedFuture;
    _thenFuture = ((::g::Uno::Threading::Future1*)uPtr(_loaderFuture)->Then1(_loaded, _error));
}

// public static Uno.IDisposable Load(string url, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static]
uObject* LoadingClosure::Load(uString* url, uDelegate* loaded, uDelegate* error)
{
    return (uObject*)LoadingClosure::New1(::g::Fuse::Controls::VideoImpl::VideoLoader::Load(url), loaded, error);
}

// public static Uno.IDisposable Load(Uno.UX.FileSource file, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static]
uObject* LoadingClosure::Load1(::g::Uno::UX::FileSource* file, uDelegate* loaded, uDelegate* error)
{
    return (uObject*)LoadingClosure::New1(::g::Fuse::Controls::VideoImpl::VideoLoader::Load1(file), loaded, error);
}

// private LoadingClosure New(Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> loadedFuture, Uno.Action<Fuse.Controls.VideoImpl.IVideoPlayer> loaded, Uno.Action<Uno.Exception> error) [static]
LoadingClosure* LoadingClosure::New1(::g::Uno::Threading::Future1* loadedFuture, uDelegate* loaded, uDelegate* error)
{
    LoadingClosure* obj1 = (LoadingClosure*)uNew(LoadingClosure_typeof());
    obj1->ctor_(loadedFuture, loaded, error);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoVisual.uno
// ---------------------------------------------------------------------------

// private enum VideoVisual.PlaybackTarget
uEnumType* VideoVisual__PlaybackTarget_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Controls.VideoImpl.VideoVisual.PlaybackTarget", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Undefined", 0LL,
        "Playing", 1LL,
        "Paused", 2LL,
        "Stopped", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoVisual.uno
// ---------------------------------------------------------------------------

// internal sealed class Scale9Rectangle
// {
// static generated Scale9Rectangle()
static void Scale9Rectangle__cctor__fn(uType* __type)
{
    Scale9Rectangle::Impl_ = Scale9Rectangle::New1();
}

static void Scale9Rectangle_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[9] = ::g::Uno::UShort_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Float3_typeof()->Array();
    type->SetDependencies(
        ::g::FuseControlsVideo_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_xv_4cdb7bf6_1_3_2), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_xv_4cdb7bf6_1_3_3), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(Scale9Rectangle, Draw_yv_4cdb7bf6_1_4_6), 0,
        ::TYPES[9/*ushort[]*/], offsetof(Scale9Rectangle, Draw_indices_4cdb7bf6_1_2_12), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(Scale9Rectangle, _draw_4cdb7bf6), 0,
        type, (uintptr_t)&Scale9Rectangle::Impl_, uFieldFlagsStatic);
}

uType* Scale9Rectangle_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Scale9Rectangle);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.Scale9Rectangle", options);
    type->fp_build_ = Scale9Rectangle_build;
    type->fp_ctor_ = (void*)Scale9Rectangle__New1_fn;
    type->fp_cctor_ = Scale9Rectangle__cctor__fn;
    return type;
}

// public generated Scale9Rectangle()
void Scale9Rectangle__ctor__fn(Scale9Rectangle* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin)
void Scale9Rectangle__Draw_fn(Scale9Rectangle* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* size, ::g::Uno::Float2* scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4* margin)
{
    __this->Draw(dc, element, *size, *scaleTextureSize, tex, *margin);
}

// private generated void init_DrawCalls()
void Scale9Rectangle__init_DrawCalls_fn(Scale9Rectangle* __this)
{
    __this->init_DrawCalls();
}

// public generated Scale9Rectangle New()
void Scale9Rectangle__New1_fn(Scale9Rectangle** __retval)
{
    *__retval = Scale9Rectangle::New1();
}

uSStrong<Scale9Rectangle*> Scale9Rectangle::Impl_;

// public generated Scale9Rectangle() [instance]
void Scale9Rectangle::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 size, float2 scaleTextureSize, Uno.Graphics.VideoTexture tex, float4 margin) [instance]
void Scale9Rectangle::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 size, ::g::Uno::Float2 scaleTextureSize, ::g::Uno::Graphics::VideoTexture* tex, ::g::Uno::Float4 margin)
{
    _draw_4cdb7bf6.BlendEnabled(true);
    _draw_4cdb7bf6.DepthTestEnabled(false);
    _draw_4cdb7bf6.CullFace(0);
    _draw_4cdb7bf6.BlendSrcRgb(2);
    _draw_4cdb7bf6.BlendDstRgb(3);
    _draw_4cdb7bf6.BlendDstAlpha(3);
    _draw_4cdb7bf6.Use();
    _draw_4cdb7bf6.Attrib1(0, 3, Draw_xv_4cdb7bf6_1_3_3, 12, 0);
    _draw_4cdb7bf6.Attrib1(1, 3, Draw_yv_4cdb7bf6_1_4_6, 12, 0);
    _draw_4cdb7bf6.Uniform(2, margin.X);
    _draw_4cdb7bf6.Uniform(3, size.X - margin.Z);
    _draw_4cdb7bf6.Uniform(4, size.X);
    _draw_4cdb7bf6.Uniform(5, margin.Y);
    _draw_4cdb7bf6.Uniform(6, size.Y - margin.W);
    _draw_4cdb7bf6.Uniform(7, size.Y);
    _draw_4cdb7bf6.Uniform12(8, uPtr(element)->WorldTransform());
    _draw_4cdb7bf6.Uniform12(9, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(uPtr(dc)->Viewport()), ::TYPES[8/*Fuse.IRenderViewport*/])));
    _draw_4cdb7bf6.Uniform(10, scaleTextureSize.X - margin.Z);
    _draw_4cdb7bf6.Uniform(11, scaleTextureSize.X);
    _draw_4cdb7bf6.Uniform(12, scaleTextureSize.Y - margin.W);
    _draw_4cdb7bf6.Uniform(13, scaleTextureSize.Y);
    _draw_4cdb7bf6.Uniform2(14, scaleTextureSize);
    _draw_4cdb7bf6.Sampler7(15, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_4cdb7bf6.Draw(uPtr(Draw_indices_4cdb7bf6_1_2_12)->Length(), 2, Draw_xv_4cdb7bf6_1_3_2);
}

// private generated void init_DrawCalls() [instance]
void Scale9Rectangle::init_DrawCalls()
{
    uArray* indices_4cdb7bf6_1_2_1 = uArray::Init<int32_t>(::TYPES[9/*ushort[]*/], 54, 0, 4, 5, 0, 5, 1, 1, 5, 6, 1, 6, 2, 2, 6, 7, 2, 7, 3, 4, 8, 9, 4, 9, 5, 5, 9, 10, 5, 10, 6, 6, 10, 11, 6, 11, 7, 8, 12, 13, 8, 13, 9, 9, 13, 14, 9, 14, 10, 10, 14, 15, 10, 15, 11);
    Draw_xv_4cdb7bf6_1_3_2 = ::g::Uno::Graphics::IndexBuffer::New4(indices_4cdb7bf6_1_2_1, 0);
    Draw_xv_4cdb7bf6_1_3_3 = ::g::Uno::Graphics::VertexBuffer::New4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f)), 0);
    Draw_yv_4cdb7bf6_1_4_6 = ::g::Uno::Graphics::VertexBuffer::New4(uArray::Init< ::g::Uno::Float3>(::TYPES[10/*float3[]*/], 16, ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(1.0f, 0.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 1.0f, 0.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f), ::g::Uno::Float3__New2(0.0f, 0.0f, 1.0f)), 0);
    Draw_indices_4cdb7bf6_1_2_12 = indices_4cdb7bf6_1_2_1;
    _draw_4cdb7bf6 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseControlsVideo_bundle::Scale9Rectangle68b84ee5());
}

// public generated Scale9Rectangle New() [static]
Scale9Rectangle* Scale9Rectangle::New1()
{
    Scale9Rectangle* obj1 = (Scale9Rectangle*)uNew(Scale9Rectangle_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoDiskCache.uno
// ------------------------------------------------------------------------------

// internal static class VideoDiskCache
// {
// static VideoDiskCache()
static void VideoDiskCache__cctor__fn(uType* __type)
{
    ::g::Fuse::Platform::Lifecycle_typeof()->Init();
    VideoDiskCache::_files_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[11/*Uno.Collections.Dictionary<string, string>*/]));
    ::g::Fuse::Platform::Lifecycle::add_Terminating(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)VideoDiskCache__OnTerminating_fn));
}

static void VideoDiskCache_build(uType* type)
{
    ::STRINGS[0] = uString::Const("/tempVideo");
    ::STRINGS[1] = uString::Const(".");
    ::STRINGS[2] = uString::Const("Deleting temporary file: ");
    ::TYPES[11] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[12] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Platform::ApplicationState_typeof(), nullptr);
    ::TYPES[13] = ::g::Uno::Char_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Int_typeof();
    ::TYPES[15] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    ::TYPES[16] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::String_typeof(), ::g::Uno::String_typeof(), nullptr);
    type->SetDependencies(
        ::g::Fuse::Platform::Lifecycle_typeof());
    type->SetFields(0,
        ::TYPES[14/*int*/], (uintptr_t)&VideoDiskCache::_fileCount_, uFieldFlagsStatic,
        ::TYPES[11/*Uno.Collections.Dictionary<string, string>*/], (uintptr_t)&VideoDiskCache::_files_, uFieldFlagsStatic);
}

uClassType* VideoDiskCache_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoDiskCache", options);
    type->fp_build_ = VideoDiskCache_build;
    type->fp_cctor_ = VideoDiskCache__cctor__fn;
    return type;
}

// public static string GetFileExtension(string fileName)
void VideoDiskCache__GetFileExtension_fn(uString* fileName, uString** __retval)
{
    *__retval = VideoDiskCache::GetFileExtension(fileName);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource)
void VideoDiskCache__GetFilePath_fn(::g::Uno::UX::FileSource* fileSource, uString** __retval)
{
    *__retval = VideoDiskCache::GetFilePath(fileSource);
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState)
void VideoDiskCache__OnTerminating_fn(int32_t* newState)
{
    VideoDiskCache::OnTerminating(*newState);
}

int32_t VideoDiskCache::_fileCount_;
uSStrong< ::g::Uno::Collections::Dictionary*> VideoDiskCache::_files_;

// public static string GetFileExtension(string fileName) [static]
uString* VideoDiskCache::GetFileExtension(uString* fileName)
{
    VideoDiskCache_typeof()->Init();
    uArray* strings = ::g::Uno::String::Split(uPtr(fileName), uArray::Init<int32_t>(::TYPES[13/*char[]*/], 1, '.'));
    return uPtr(strings)->Strong<uString*>(uPtr(strings)->Length() - 1);
}

// public static string GetFilePath(Uno.UX.FileSource fileSource) [static]
uString* VideoDiskCache::GetFilePath(::g::Uno::UX::FileSource* fileSource)
{
    VideoDiskCache_typeof()->Init();
    bool ret2;
    uString* ret3;

    if (!(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(VideoDiskCache::_files_), uPtr(fileSource)->Name, &ret2), ret2))
    {
        uArray* bytes = uPtr(fileSource)->ReadAllBytes();
        uString* path = ::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::String::op_Addition2(::g::Uno::IO::Directory::GetUserDirectory(2), ::STRINGS[0/*"/tempVideo"*/]), ::g::Uno::Int::ToString(VideoDiskCache::_fileCount_, ::TYPES[14/*int*/])), ::STRINGS[1/*"."*/]), VideoDiskCache::GetFileExtension(fileSource->Name));
        VideoDiskCache::_fileCount_++;
        ::g::Uno::IO::File::WriteAllBytes(path, bytes);
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(VideoDiskCache::_files_), fileSource->Name, path);
    }

    return (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(VideoDiskCache::_files_), uPtr(fileSource)->Name, &ret3), ret3);
}

// private static void OnTerminating(Fuse.Platform.ApplicationState newState) [static]
void VideoDiskCache::OnTerminating(int32_t newState)
{
    VideoDiskCache_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > ret4;
    ::g::Fuse::Platform::Lifecycle::remove_Terminating(uDelegate::New(::TYPES[12/*Uno.Action<Fuse.Platform.ApplicationState>*/], (void*)VideoDiskCache__OnTerminating_fn));
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong<uString*>, uStrong<uString*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(VideoDiskCache::_files_), &ret4), ret4);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[15/*Uno.Collections.Dictionary<string, string>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<uStrong<uString*>, uStrong<uString*> > pair = enum1.Current(::TYPES[15/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);

                    if (::g::Uno::IO::File::Exists(pair.Value(::TYPES[16/*Uno.Collections.KeyValuePair<string, string>*/])))
                    {
                        ::g::Uno::Diagnostics::Log::Debug(::g::Uno::String::op_Addition2(::STRINGS[2/*"Deleting te...*/], pair.Value(::TYPES[16/*Uno.Collections.KeyValuePair<string, string>*/])));
                        ::g::Uno::IO::File::Delete(pair.Value(::TYPES[16/*Uno.Collections.KeyValuePair<string, string>*/]));
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[15/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[15/*Uno.Collections.Dictionary<string, string>.Enumerator*/]);
        }
        __after_finally_0:;
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoVisual.uno
// ---------------------------------------------------------------------------

// internal sealed class VideoDrawElement
// {
// static VideoDrawElement()
static void VideoDrawElement__cctor__fn(uType* __type)
{
    ::g::Uno::Math_typeof()->Init();
    VideoDrawElement::Impl_ = VideoDrawElement::New1();
    VideoDrawElement::Transforms_ = uArray::New(::TYPES[17/*float3x3[]*/], 4);
    ::g::Uno::Float3x3 t = ::g::Uno::Float3x3__Identity();
    t.M11 = (t.M22 = ::g::Uno::Math::Cos1(1.57079637f));
    t.M21 = ::g::Uno::Math::Sin1(1.57079637f);
    t.M12 = -t.M21;
    t.M32 = 1.0f;
    uPtr(VideoDrawElement::Transforms_)->Item< ::g::Uno::Float3x3>(0) = ::g::Uno::Float3x3__Identity();
    uPtr(VideoDrawElement::Transforms_)->Item< ::g::Uno::Float3x3>(1) = t;
    uPtr(VideoDrawElement::Transforms_)->Item< ::g::Uno::Float3x3>(2) = ::g::Uno::Matrix::Mul4(t, t);
    uPtr(VideoDrawElement::Transforms_)->Item< ::g::Uno::Float3x3>(3) = ::g::Uno::Matrix::Mul4(::g::Uno::Matrix::Mul4(t, t), t);
}

static void VideoDrawElement_build(uType* type)
{
    ::TYPES[17] = ::g::Uno::Float3x3_typeof()->Array();
    ::TYPES[8] = ::g::Fuse::IRenderViewport_typeof();
    ::TYPES[18] = ::g::Uno::Float2_typeof()->Array();
    type->SetDependencies(
        ::g::FuseControlsVideo_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(VideoDrawElement, Draw_VertexData_44e1596c_6_2_1), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(VideoDrawElement, Draw_LocalTransform_44e1596c_3_9_2), 0,
        ::g::Uno::Float4x4_typeof(), offsetof(VideoDrawElement, Draw_LocalTransform_44e1596c_3_9_3), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(VideoDrawElement, _draw_44e1596c), 0,
        type, (uintptr_t)&VideoDrawElement::Impl_, uFieldFlagsStatic,
        ::TYPES[17/*float3x3[]*/], (uintptr_t)&VideoDrawElement::Transforms_, uFieldFlagsStatic);
}

uType* VideoDrawElement_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(VideoDrawElement);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoDrawElement", options);
    type->fp_build_ = VideoDrawElement_build;
    type->fp_ctor_ = (void*)VideoDrawElement__New1_fn;
    type->fp_cctor_ = VideoDrawElement__cctor__fn;
    return type;
}

// public generated VideoDrawElement()
void VideoDrawElement__ctor__fn(VideoDrawElement* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex, int rotation)
void VideoDrawElement__Draw_fn(VideoDrawElement* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2* offset, ::g::Uno::Float2* size, ::g::Uno::Float2* uvPosition, ::g::Uno::Float2* uvSize, ::g::Uno::Graphics::VideoTexture* tex, int32_t* rotation)
{
    __this->Draw(dc, element, *offset, *size, *uvPosition, *uvSize, tex, *rotation);
}

// private generated void init_DrawCalls()
void VideoDrawElement__init_DrawCalls_fn(VideoDrawElement* __this)
{
    __this->init_DrawCalls();
}

// public generated VideoDrawElement New()
void VideoDrawElement__New1_fn(VideoDrawElement** __retval)
{
    *__retval = VideoDrawElement::New1();
}

uSStrong<VideoDrawElement*> VideoDrawElement::Impl_;
uSStrong<uArray*> VideoDrawElement::Transforms_;

// public generated VideoDrawElement() [instance]
void VideoDrawElement::ctor_()
{
    init_DrawCalls();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Visual element, float2 offset, float2 size, float2 uvPosition, float2 uvSize, Uno.Graphics.VideoTexture tex, int rotation) [instance]
void VideoDrawElement::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Visual* element, ::g::Uno::Float2 offset, ::g::Uno::Float2 size, ::g::Uno::Float2 uvPosition, ::g::Uno::Float2 uvSize, ::g::Uno::Graphics::VideoTexture* tex, int32_t rotation)
{
    ::g::Uno::Float3x3 transform = uPtr(VideoDrawElement::Transforms_)->Item< ::g::Uno::Float3x3>(rotation);
    ::g::Uno::Float4x4 LocalTransform_44e1596c_3_9_4 = ::g::Uno::Matrix::Mul10(Draw_LocalTransform_44e1596c_3_9_2, ::g::Uno::Matrix::Scaling1(size.X, size.Y, 1.0f), Draw_LocalTransform_44e1596c_3_9_3, ::g::Uno::Matrix::Translation(offset.X, offset.Y, 0.0f));
    _draw_44e1596c.BlendEnabled(true);
    _draw_44e1596c.DepthTestEnabled(false);
    _draw_44e1596c.CullFace(uPtr(dc)->CullFace());
    _draw_44e1596c.BlendSrcRgb(2);
    _draw_44e1596c.BlendDstRgb(3);
    _draw_44e1596c.BlendDstAlpha(3);
    _draw_44e1596c.Use();
    _draw_44e1596c.Attrib1(0, 2, Draw_VertexData_44e1596c_6_2_1, 8, 0);
    _draw_44e1596c.Uniform12(1, ::g::Fuse::IRenderViewport::ViewProjectionTransform(uInterface(uPtr(dc->Viewport()), ::TYPES[8/*Fuse.IRenderViewport*/])));
    _draw_44e1596c.Uniform2(2, uvSize);
    _draw_44e1596c.Uniform2(3, uvPosition);
    _draw_44e1596c.Uniform8(4, transform);
    _draw_44e1596c.Uniform12(5, (element != nullptr) ? ::g::Uno::Matrix::Mul8(LocalTransform_44e1596c_3_9_4, uPtr(element)->WorldTransform()) : LocalTransform_44e1596c_3_9_4);
    _draw_44e1596c.Sampler7(6, tex, ::g::Uno::Graphics::SamplerState__LinearClamp());
    _draw_44e1596c.DrawArrays(6);
}

// private generated void init_DrawCalls() [instance]
void VideoDrawElement::init_DrawCalls()
{
    Draw_VertexData_44e1596c_6_2_1 = ::g::Uno::Graphics::VertexBuffer::New3(uArray::Init< ::g::Uno::Float2>(::TYPES[18/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f)), 0);
    Draw_LocalTransform_44e1596c_3_9_2 = ::g::Uno::Matrix::Translation(-::g::Uno::Float2__New1(0.0f).X, -::g::Uno::Float2__New1(0.0f).Y, 0.0f);
    Draw_LocalTransform_44e1596c_3_9_3 = ::g::Uno::Matrix::RotationZ(0.0f);
    _draw_44e1596c = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseControlsVideo_bundle::VideoDrawElement1290f672());
}

// public generated VideoDrawElement New() [static]
VideoDrawElement* VideoDrawElement::New1()
{
    VideoDrawElement* obj1 = (VideoDrawElement*)uNew(VideoDrawElement_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoLoader.uno
// ---------------------------------------------------------------------------

// internal static class VideoLoader
// {
static void VideoLoader_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Video not supported on this platform");
}

uClassType* VideoLoader_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Controls.VideoImpl.VideoLoader", options);
    type->fp_build_ = VideoLoader_build;
    return type;
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url)
void VideoLoader__Load_fn(uString* url, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load(url);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource file)
void VideoLoader__Load1_fn(::g::Uno::UX::FileSource* file, ::g::Uno::Threading::Future1** __retval)
{
    *__retval = VideoLoader::Load1(file);
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(string url) [static]
::g::Uno::Threading::Future1* VideoLoader::Load(uString* url)
{
    return ::g::Fuse::Controls::VideoImpl::Android::VideoLoader::Load(url);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Video not s...*/]));
}

// public static Uno.Threading.Future<Fuse.Controls.VideoImpl.IVideoPlayer> Load(Uno.UX.FileSource file) [static]
::g::Uno::Threading::Future1* VideoLoader::Load1(::g::Uno::UX::FileSource* file)
{
    return ::g::Fuse::Controls::VideoImpl::Android::VideoLoader::Load2(file);
    U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Video not s...*/]));
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoVisual.uno
// ---------------------------------------------------------------------------

// internal sealed extern class VideoVisual
// {
static void VideoVisual_build(uType* type)
{
    type->SetBase(::g::Fuse::Controls::Graphics::ControlVisual_typeof()->MakeType(::g::Fuse::Controls::Video_typeof(), nullptr));
    type->SetDependencies(
        ::g::Fuse::Triggers::BusyTask_typeof(),
        ::g::Fuse::Controls::VideoImpl::Scale9Rectangle_typeof(),
        ::g::Fuse::UpdateManager_typeof(),
        ::g::Fuse::Controls::VideoImpl::VideoDrawElement_typeof(),
        ::g::Fuse::Triggers::WhileCompleted_typeof(),
        ::g::Fuse::Triggers::WhilePaused_typeof(),
        ::g::Fuse::Triggers::WhilePlaying_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(VideoVisual_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(VideoVisual_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(VideoVisual_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(VideoVisual_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(VideoVisual_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(VideoVisual_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(VideoVisual_type, interface6),
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr), offsetof(VideoVisual_type, interface7),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(VideoVisual_type, interface8),
        ::g::Fuse::ITemplateSource_typeof(), offsetof(VideoVisual_type, interface9),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Visual_typeof(), nullptr), offsetof(VideoVisual_type, interface10),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr), offsetof(VideoVisual_type, interface11),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr), offsetof(VideoVisual_type, interface12),
        ::g::Fuse::Controls::VideoImpl::IVideoCallbacks_typeof(), offsetof(VideoVisual_type, interface13),
        ::g::Fuse::Triggers::IMediaPlayback_typeof(), offsetof(VideoVisual_type, interface14),
        ::g::Fuse::Triggers::IPlayback_typeof(), offsetof(VideoVisual_type, interface15),
        ::g::Fuse::Triggers::IProgress_typeof(), offsetof(VideoVisual_type, interface16));
    type->SetFields(71,
        VideoVisual__PlaybackTarget_typeof(), offsetof(VideoVisual, _playbackTarget), 0,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(VideoVisual, _sizing), 0,
        ::g::Fuse::Controls::VideoImpl::IVideoService_typeof(), offsetof(VideoVisual, _videoService), 0,
        ::g::Uno::Int2_typeof(), offsetof(VideoVisual, _sizeCache), 0,
        ::g::Fuse::Triggers::BusyTask_typeof(), offsetof(VideoVisual, _busyTask), 0,
        ::g::Uno::Float_typeof(), offsetof(VideoVisual, _volume), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _scale), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _drawOrigin), 0,
        ::g::Uno::Float2_typeof(), offsetof(VideoVisual, _drawSize), 0,
        ::g::Uno::Float4_typeof(), offsetof(VideoVisual, _uvClip), 0,
        ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), nullptr), offsetof(VideoVisual, ProgressChanged1), 0);
}

VideoVisual_type* VideoVisual_typeof()
{
    static uSStrong<VideoVisual_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Controls::Graphics::ControlVisual_typeof();
    options.FieldCount = 83;
    options.InterfaceCount = 17;
    options.DependencyCount = 7;
    options.ObjectSize = sizeof(VideoVisual);
    options.TypeSize = sizeof(VideoVisual_type);
    type = (VideoVisual_type*)uClassType::New("Fuse.Controls.VideoImpl.VideoVisual", options);
    type->fp_build_ = VideoVisual_build;
    type->fp_ctor_ = (void*)VideoVisual__New2_fn;
    type->fp_Attach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Attach_fn;
    type->fp_Detach = (void(*)(::g::Fuse::Controls::Graphics::ControlVisual*))VideoVisual__Detach_fn;
    type->fp_Draw = (void(*)(::g::Fuse::Visual*, ::g::Fuse::DrawContext*))VideoVisual__Draw_fn;
    type->fp_GetMarginSize = (void(*)(::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__GetMarginSize_fn;
    type->fp_OnArrangeMarginBox = (void(*)(::g::Fuse::Visual*, ::g::Uno::Float2*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))VideoVisual__OnArrangeMarginBox_fn;
    type->fp_OnHitTest = (void(*)(::g::Fuse::Visual*, ::g::Fuse::HitTestContext*))VideoVisual__OnHitTest_fn;
    type->interface13.fp_OnFrameAvailable = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnFrameAvailable_fn;
    type->interface13.fp_OnError = (void(*)(uObject*, ::g::Uno::Exception*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnError_fn;
    type->interface13.fp_OnLoading = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnLoading_fn;
    type->interface13.fp_OnReady = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnReady_fn;
    type->interface13.fp_OnCompleted = (void(*)(uObject*))VideoVisual__FuseControlsVideoImplIVideoCallbacksOnCompleted_fn;
    type->interface15.fp_Stop = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackStop_fn;
    type->interface15.fp_Pause = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackPause_fn;
    type->interface15.fp_Resume = (void(*)(uObject*))VideoVisual__FuseTriggersIPlaybackResume_fn;
    type->interface14.fp_get_Position = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIMediaPlaybackget_Position_fn;
    type->interface14.fp_set_Position = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIMediaPlaybackset_Position_fn;
    type->interface14.fp_get_Duration = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIMediaPlaybackget_Duration_fn;
    type->interface16.fp_get_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIProgressget_Progress_fn;
    type->interface15.fp_get_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackget_Progress_fn;
    type->interface15.fp_set_Progress = (void(*)(uObject*, double*))VideoVisual__FuseTriggersIPlaybackset_Progress_fn;
    type->interface16.fp_add_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoVisual__FuseTriggersIProgressadd_ProgressChanged_fn;
    type->interface16.fp_remove_ProgressChanged = (void(*)(uObject*, uDelegate*))VideoVisual__FuseTriggersIProgressremove_ProgressChanged_fn;
    type->interface10.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseVisualGetEnumerator_fn;
    type->interface11.fp_Clear = (void(*)(uObject*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeClear_fn;
    type->interface11.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeContains_fn;
    type->interface7.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsIListFuseNodeRemoveAt_fn;
    type->interface12.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Visual__UnoCollectionsIEnumerableFuseNodeGetEnumerator_fn;
    type->interface11.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Visual__UnoCollectionsICollectionFuseNodeget_Count_fn;
    type->interface7.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Visual__UnoCollectionsIListFuseNodeget_Item_fn;
    type->interface7.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Visual__Insert1_fn;
    type->interface8.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))::g::Fuse::Visual__OnPropertyChanged2_fn;
    type->interface9.fp_FindTemplate = (void(*)(uObject*, uString*, ::g::Uno::UX::Template**))::g::Fuse::Visual__FindTemplate_fn;
    type->interface11.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Visual__Add1_fn;
    type->interface11.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Visual__Remove1_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// public VideoVisual()
void VideoVisual__ctor_5_fn(VideoVisual* __this)
{
    __this->ctor_5();
}

// protected override sealed void Attach()
void VideoVisual__Attach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret5;
    ::g::Fuse::Controls::Video* ret6;
    ::g::Fuse::Controls::Video* ret7;
    ::g::Fuse::Controls::Video* ret8;
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret5), ret5))->add_RenderParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret6), ret6))->add_ParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret7), ret7))->add_SourceChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::g::Uno::Action_typeof(), (void*)VideoVisual__OnUpdate_fn, __this), 0);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret8), ret8))->SetPlayback((uObject*)__this);
    __this->OnRenderParamChanged(nullptr, nullptr);
    __this->OnParamChanged(nullptr, nullptr);
    __this->OnSourceChanged(nullptr, nullptr);
}

// protected override sealed void Detach()
void VideoVisual__Detach_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret9;
    ::g::Fuse::Controls::Video* ret10;
    ::g::Fuse::Controls::Video* ret11;
    ::g::Fuse::Controls::Video* ret12;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Unload(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret9), ret9))->SetPlayback(nullptr);
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret10), ret10))->remove_RenderParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnRenderParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret11), ret11))->remove_ParamChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnParamChanged_fn, __this));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret12), ret12))->remove_SourceChanged(uDelegate::New(::TYPES[5/*Uno.EventHandler*/], (void*)VideoVisual__OnSourceChanged_fn, __this));
    ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::g::Uno::Action_typeof(), (void*)VideoVisual__OnUpdate_fn, __this), 0);
}

// public override sealed void Draw(Fuse.DrawContext dc)
void VideoVisual__Draw_fn(VideoVisual* __this, ::g::Fuse::DrawContext* dc)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;
    ::g::Uno::Float4 ind3;
    ::g::Fuse::Controls::Video* ret13;
    ::g::Fuse::Controls::Video* ret14;
    ::g::Uno::Graphics::VideoTexture* texture = ::g::Fuse::Controls::VideoImpl::IVideoService::VideoTexture(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()));

    if (texture == nullptr)
        return;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret13), ret13))->StretchMode() == 4)
    {
        ::g::Fuse::Diagnostics::Deprecated(uString::Const("StretchMode.Scale9 is deprecated for video-visual"), __this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoVisual.uno"), 323, uString::Const("Draw"));
        uPtr(::g::Fuse::Controls::VideoImpl::Scale9Rectangle::Impl())->Draw(dc, __this, __this->ActualSize(), __this->GetSize(), texture, uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret14), ret14))->Scale9Margin());
    }
    else
    {
        int32_t rotation = ::g::Fuse::Controls::VideoImpl::IVideoService::RotationDegrees(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) / 90;
        uPtr(::g::Fuse::Controls::VideoImpl::VideoDrawElement::Impl())->Draw(dc, __this, __this->_drawOrigin, __this->_drawSize, (ind1 = __this->_uvClip, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), ::g::Uno::Float2__op_Subtraction2((ind2 = __this->_uvClip, ::g::Uno::Float2__New2(ind2.Z, ind2.W)), (ind3 = __this->_uvClip, ::g::Uno::Float2__New2(ind3.X, ind3.Y))), texture, rotation);
    }
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnCompleted()
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnCompleted_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret15;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret15), ret15), true);
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnError(Uno.Exception e)
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnError_fn(VideoVisual* __this, ::g::Uno::Exception* e)
{
    ::g::Fuse::Controls::Video* ret16;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret16), ret16), &__this->_busyTask, 16, uPtr(e)->Message());
    ::g::Fuse::Diagnostics::UnknownException(uString::Const("Video error"), e, __this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Video/VideoVisual.uno"), 116, uString::Const("Fuse.Controls.VideoImpl.IVideoCallbacks.OnError"));
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnFrameAvailable()
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnFrameAvailable_fn(VideoVisual* __this)
{
    if (::g::Uno::Int2__op_Inequality(::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())), __this->_sizeCache))
    {
        __this->_sizeCache = ::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()));
        __this->InvalidateLayout(2);
    }

    __this->InvalidateVisual();
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnLoading()
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnLoading_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret17;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret17), ret17), &__this->_busyTask, 1, uString::Const(""));
}

// private void Fuse.Controls.VideoImpl.IVideoCallbacks.OnReady()
void VideoVisual__FuseControlsVideoImplIVideoCallbacksOnReady_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret18;
    ::g::Fuse::Controls::Video* ret19;
    __this->ResetTriggers();
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret18), ret18), &__this->_busyTask, 0, uString::Const(""));
    uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret19), ret19))->OnDurationChanged();
    uObject* playback = (uObject*)__this;

    switch (__this->_playbackTarget)
    {
        case 1:
        {
            ::g::Fuse::Triggers::IPlayback::Resume(uInterface(uPtr(playback), ::g::Fuse::Triggers::IPlayback_typeof()));
            break;
        }
        case 2:
        {
            ::g::Fuse::Triggers::IPlayback::Pause(uInterface(uPtr(playback), ::g::Fuse::Triggers::IPlayback_typeof()));
            break;
        }
        case 3:
        {
            ::g::Fuse::Triggers::IPlayback::Stop(uInterface(uPtr(playback), ::g::Fuse::Triggers::IPlayback_typeof()));
            break;
        }
    }

    __this->_playbackTarget = 0;
}

// private double Fuse.Triggers.IMediaPlayback.get_Duration()
void VideoVisual__FuseTriggersIMediaPlaybackget_Duration_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())), void();
}

// private double Fuse.Triggers.IMediaPlayback.get_Position()
void VideoVisual__FuseTriggersIMediaPlaybackget_Position_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())), void();
}

// private void Fuse.Triggers.IMediaPlayback.set_Position(double value)
void VideoVisual__FuseTriggersIMediaPlaybackset_Position_fn(VideoVisual* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()), value_);
}

// private void Fuse.Triggers.IPlayback.Pause()
void VideoVisual__FuseTriggersIPlaybackPause_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret20;
    __this->_playbackTarget = 2;

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())))
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Pause(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()));
        __this->ResetTriggers();
        ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret20), ret20), true);
    }
}

// private double Fuse.Triggers.IPlayback.get_Progress()
void VideoVisual__FuseTriggersIPlaybackget_Progress_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = (::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) > 1e-05) ? ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) / ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) : 0.0, void();
}

// private void Fuse.Triggers.IPlayback.set_Progress(double value)
void VideoVisual__FuseTriggersIPlaybackset_Progress_fn(VideoVisual* __this, double* value)
{
    double value_ = *value;
    ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()), ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) * value_);
}

// private void Fuse.Triggers.IPlayback.Resume()
void VideoVisual__FuseTriggersIPlaybackResume_fn(VideoVisual* __this)
{
    ::g::Fuse::Controls::Video* ret21;
    __this->_playbackTarget = 1;

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())))
    {
        __this->ResetTriggers();
        ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret21), ret21), true);
        ::g::Fuse::Controls::VideoImpl::IVideoService::Play(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()));
    }
}

// private void Fuse.Triggers.IPlayback.Stop()
void VideoVisual__FuseTriggersIPlaybackStop_fn(VideoVisual* __this)
{
    __this->_playbackTarget = 3;
    ::g::Fuse::Triggers::IPlayback::Pause(uInterface((uObject*)__this, ::g::Fuse::Triggers::IPlayback_typeof()));
    ::g::Fuse::Triggers::IMediaPlayback::Position(uInterface((uObject*)__this, ::g::Fuse::Triggers::IMediaPlayback_typeof()), 0.0);
}

// private double Fuse.Triggers.IProgress.get_Progress()
void VideoVisual__FuseTriggersIProgressget_Progress_fn(VideoVisual* __this, double* __retval)
{
    return *__retval = (::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) > 1e-05) ? ::g::Fuse::Controls::VideoImpl::IVideoService::Position(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) / ::g::Fuse::Controls::VideoImpl::IVideoService::Duration(uInterface(uPtr(__this->_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())) : 0.0, void();
}

// private void Fuse.Triggers.IProgress.add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void VideoVisual__FuseTriggersIProgressadd_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// private void Fuse.Triggers.IProgress.remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void VideoVisual__FuseTriggersIProgressremove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// public override sealed float2 GetMarginSize(Fuse.LayoutParams lp)
void VideoVisual__GetMarginSize_fn(VideoVisual* __this, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::Controls::Video* ret22;
    ::g::Fuse::Controls::Video* ret23;
    ::g::Fuse::LayoutParams lp_ = *lp;
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret22), ret22))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret23), ret23))->AbsoluteZoom();
    return *__retval = uPtr(__this->_sizing)->ExpandFillSize(__this->GetSize(), lp_), void();
}

// private float2 GetSize()
void VideoVisual__GetSize_fn(VideoVisual* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public VideoVisual New()
void VideoVisual__New2_fn(VideoVisual** __retval)
{
    *__retval = VideoVisual::New2();
}

// protected override sealed float2 OnArrangeMarginBox(float2 position, Fuse.LayoutParams lp)
void VideoVisual__OnArrangeMarginBox_fn(VideoVisual* __this, ::g::Uno::Float2* position, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 ret24;
    ::g::Uno::Float2 position_ = *position;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::Controls::Video* ret25;
    ::g::Fuse::Controls::Video* ret26;
    ::g::Uno::Float2 size = (::g::Fuse::Controls::Graphics::Visual__OnArrangeMarginBox_fn(__this, uCRef(position_), uCRef(lp_), &ret24), ret24);
    uPtr(__this->_sizing)->snapToPixels = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret25), ret25))->SnapToPixels();
    uPtr(__this->_sizing)->absoluteZoom = uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(__this, &ret26), ret26))->AbsoluteZoom();
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    __this->_scale = uPtr(__this->_sizing)->CalcScale(size, contentDesiredSize);
    __this->_origin = uPtr(__this->_sizing)->CalcOrigin(size, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale));
    __this->_drawOrigin = __this->_origin;
    __this->_drawSize = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, __this->_scale);
    __this->_uvClip = uPtr(__this->_sizing)->CalcClip(size, &__this->_drawOrigin, &__this->_drawSize);
    return *__retval = size, void();
}

// protected override sealed void OnHitTest(Fuse.HitTestContext htc)
void VideoVisual__OnHitTest_fn(VideoVisual* __this, ::g::Fuse::HitTestContext* htc)
{
    ::g::Uno::Float2 lp = uPtr(htc)->LocalPoint();

    if ((((lp.X >= __this->_drawOrigin.X) && (lp.X <= (__this->_drawOrigin.X + __this->_drawSize.X))) && (lp.Y >= __this->_drawOrigin.Y)) && (lp.Y <= (__this->_drawOrigin.Y + __this->_drawSize.Y)))
        uPtr(htc)->Hit(__this);

    ::g::Fuse::Visual__OnHitTest_fn(__this, htc);
}

// private void OnParamChanged(object sender, Uno.EventArgs args)
void VideoVisual__OnParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnParamChanged(sender, args);
}

// private void OnProgressChanged()
void VideoVisual__OnProgressChanged_fn(VideoVisual* __this)
{
    __this->OnProgressChanged();
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args)
void VideoVisual__OnRenderParamChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnRenderParamChanged(sender, args);
}

// private void OnSourceChanged(object sender, Uno.EventArgs args)
void VideoVisual__OnSourceChanged_fn(VideoVisual* __this, uObject* sender, ::g::Uno::EventArgs* args)
{
    __this->OnSourceChanged(sender, args);
}

// private void OnUpdate()
void VideoVisual__OnUpdate_fn(VideoVisual* __this)
{
    __this->OnUpdate();
}

// private generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void VideoVisual__add_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->add_ProgressChanged(value);
}

// private generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value)
void VideoVisual__remove_ProgressChanged_fn(VideoVisual* __this, uDelegate* value)
{
    __this->remove_ProgressChanged(value);
}

// private void ResetTriggers()
void VideoVisual__ResetTriggers_fn(VideoVisual* __this)
{
    __this->ResetTriggers();
}

// public VideoVisual() [instance]
void VideoVisual::ctor_5()
{
    _sizeCache = ::g::Uno::Int2__New2(0, 0);
    _volume = 1.0f;
    ctor_4();
    _sizing = ::g::Fuse::Internal::SizingContainer::New1();
    _videoService = (uObject*)::g::Fuse::Controls::VideoImpl::GraphicsVideoService::New1((uObject*)this);
}

// private float2 GetSize() [instance]
::g::Uno::Float2 VideoVisual::GetSize()
{
    return ::g::Uno::Float2__op_Implicit1(::g::Fuse::Controls::VideoImpl::IVideoService::Size(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())));
}

// private void OnParamChanged(object sender, Uno.EventArgs args) [instance]
void VideoVisual::OnParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret27;
    ::g::Fuse::Controls::Video* ret28;
    ::g::Fuse::Controls::Video* ret29;
    ::g::Fuse::Controls::VideoImpl::IVideoService::IsLooping(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret27), ret27))->IsLooping());
    ::g::Fuse::Controls::VideoImpl::IVideoService::AutoPlay(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret28), ret28))->AutoPlay());
    ::g::Fuse::Controls::VideoImpl::IVideoService::Volume(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret29), ret29))->Volume());
}

// private void OnProgressChanged() [instance]
void VideoVisual::OnProgressChanged()
{
    ::g::Uno::UX::ValueChangedArgs* ret30;

    if (::g::Uno::Delegate::op_Inequality(ProgressChanged1, nullptr))
    {
        double progress = ::g::Fuse::Triggers::IPlayback::Progress(uInterface((uObject*)this, ::g::Fuse::Triggers::IPlayback_typeof()));
        uPtr(ProgressChanged1)->Invoke(2, this, (::g::Uno::UX::ValueChangedArgs__New2_fn(::g::Uno::UX::ValueChangedArgs_typeof()->MakeType(::g::Uno::Double_typeof(), nullptr), uCRef(progress), &ret30), ret30));
    }
}

// private void OnRenderParamChanged(object sender, Uno.EventArgs args) [instance]
void VideoVisual::OnRenderParamChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret31;
    ::g::Fuse::Controls::Video* ret32;
    ::g::Fuse::Controls::Video* ret33;
    ::g::Fuse::Controls::Video* ret34;
    uPtr(_sizing)->SetStretchMode(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret31), ret31))->StretchMode());
    uPtr(_sizing)->SetStretchDirection(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret32), ret32))->StretchDirection());
    uPtr(_sizing)->SetStretchSizing(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret33), ret33))->StretchSizing());
    uPtr(_sizing)->SetAlignment(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret34), ret34))->ContentAlignment());
    InvalidateVisual();
}

// private void OnSourceChanged(object sender, Uno.EventArgs args) [instance]
void VideoVisual::OnSourceChanged(uObject* sender, ::g::Uno::EventArgs* args)
{
    ::g::Fuse::Controls::Video* ret35;
    ::g::Fuse::Controls::Video* ret36;
    ::g::Fuse::Controls::Video* ret37;
    ::g::Fuse::Controls::Video* ret38;

    if (uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret35), ret35))->File() != nullptr)
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Load1(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret36), ret36))->File());
        return;
    }

    if (::g::Uno::String::op_Inequality(uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret37), ret37))->Url(), nullptr))
    {
        ::g::Fuse::Controls::VideoImpl::IVideoService::Load(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()), uPtr((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret38), ret38))->Url());
        return;
    }
}

// private void OnUpdate() [instance]
void VideoVisual::OnUpdate()
{
    ::g::Fuse::Controls::VideoImpl::IVideoService::Update(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof()));

    if (::g::Fuse::Controls::VideoImpl::IVideoService::IsValid(uInterface(uPtr(_videoService), ::g::Fuse::Controls::VideoImpl::IVideoService_typeof())))
        OnProgressChanged();
}

// private generated void add_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance]
void VideoVisual::add_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ProgressChanged1, value), ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), nullptr));
}

// private generated void remove_ProgressChanged(Uno.UX.ValueChangedHandler<double> value) [instance]
void VideoVisual::remove_ProgressChanged(uDelegate* value)
{
    ProgressChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ProgressChanged1, value), ::g::Uno::UX::ValueChangedHandler_typeof()->MakeType(::g::Uno::Double_typeof(), nullptr));
}

// private void ResetTriggers() [instance]
void VideoVisual::ResetTriggers()
{
    ::g::Fuse::Controls::Video* ret39;
    ::g::Fuse::Controls::Video* ret40;
    ::g::Fuse::Controls::Video* ret41;
    ::g::Fuse::Controls::Video* ret42;
    ::g::Fuse::Triggers::BusyTask::SetBusy((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret39), ret39), &_busyTask, 0, uString::Const(""));
    ::g::Fuse::Triggers::WhileCompleted::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret40), ret40), false);
    ::g::Fuse::Triggers::WhilePlaying::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret41), ret41), false);
    ::g::Fuse::Triggers::WhilePaused::SetState((::g::Fuse::Controls::Graphics::ControlVisual__get_Control_fn(this, &ret42), ret42), false);
}

// public VideoVisual New() [static]
VideoVisual* VideoVisual::New2()
{
    VideoVisual* obj4 = (VideoVisual*)uNew(VideoVisual_typeof());
    obj4->ctor_5();
    return obj4;
}
// }

}}}} // ::g::Fuse::Controls::VideoImpl
