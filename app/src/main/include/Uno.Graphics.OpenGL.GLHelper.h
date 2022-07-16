// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Graphics/OpenGL/GLHelper.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Graphics{namespace OpenGL{struct GLHelper;}}}}
namespace g{namespace Uno{namespace Graphics{struct RenderTarget;}}}
namespace g{namespace Uno{struct Int2;}}

namespace g{
namespace Uno{
namespace Graphics{
namespace OpenGL{

// public static extern class GLHelper
// {
uClassType* GLHelper_typeof();
void GLHelper__CheckError_fn();
void GLHelper__CheckFramebufferStatus_fn();
void GLHelper__CompileShader_fn(int32_t* type, uString* source, uint32_t* __retval);
void GLHelper__CreateDepthBuffer_fn(::g::Uno::Int2* size, uint32_t* __retval);
void GLHelper__CreateRenderTarget_fn(int32_t* colorTarget, uint32_t* colorBuffer, int32_t* mip, ::g::Uno::Int2* size, bool* depth, ::g::Uno::Graphics::RenderTarget** __retval);
void GLHelper__CreateRenderTarget1_fn(int32_t* colorTarget, uint32_t* colorBuffer, int32_t* mip, ::g::Uno::Int2* size, uint32_t* depthBuffer, bool* ownsDepthBuffer, ::g::Uno::Graphics::RenderTarget** __retval);
void GLHelper__LinkProgram_fn(uint32_t* vertexShader, uint32_t* fragmentShader, uint32_t* __retval);
void GLHelper__TexImage2DFromBytes_fn(int32_t* target, int32_t* w, int32_t* h, int32_t* mip, int32_t* format, uArray* data);
void GLHelper__TexImage2DFromIntPtr_fn(int32_t* target, int32_t* w, int32_t* h, int32_t* mip, int32_t* format, void** data);

struct GLHelper : uObject
{
    static void CheckError();
    static void CheckFramebufferStatus();
    static uint32_t CompileShader(int32_t type, uString* source);
    static uint32_t CreateDepthBuffer(::g::Uno::Int2 size);
    static ::g::Uno::Graphics::RenderTarget* CreateRenderTarget(int32_t colorTarget, uint32_t colorBuffer, int32_t mip, ::g::Uno::Int2 size, bool depth);
    static ::g::Uno::Graphics::RenderTarget* CreateRenderTarget1(int32_t colorTarget, uint32_t colorBuffer, int32_t mip, ::g::Uno::Int2 size, uint32_t depthBuffer, bool ownsDepthBuffer);
    static uint32_t LinkProgram(uint32_t vertexShader, uint32_t fragmentShader);
    static void TexImage2DFromBytes(int32_t target, int32_t w, int32_t h, int32_t mip, int32_t format, uArray* data);
    static void TexImage2DFromIntPtr(int32_t target, int32_t w, int32_t h, int32_t mip, int32_t format, void* data);
};
// }

}}}} // ::g::Uno::Graphics::OpenGL
