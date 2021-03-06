// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Backends/CPlusPlus/Uno/GraphicsContext.h'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <XliPlatform/GLContext.h>
#include <XliPlatform/GL.h>
#include <Uno/Support.h>

extern ::Xli::GLContext *_XliGLContextPtr;

struct uGraphicsContext
{
    static uGraphicsContext GetInstance()
    {
        return uGraphicsContext(_XliGLContextPtr);
    }

    uGraphicsContext()
    {
        this->context = nullptr;
    }

    GLuint GetBackbufferGLHandle()
    {
#if IOS
        return 1;
#else
        return 0;
#endif
    }

    ::g::Uno::Int2 GetBackbufferSize()
    {
        const auto temp = context->GetDrawableSize();
        return *(::g::Uno::Int2*)&temp;
    }

private:
    uGraphicsContext(Xli::GLContext *context)
    {
        this->context = context;
    }

    ::Xli::GLContext *context;
};
