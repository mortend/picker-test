// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Graphics/OpenGL/GLConverter.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Uno{namespace Graphics{namespace OpenGL{struct GLConverter;}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace OpenGL{

// public static extern class GLConverter
// {
uClassType* GLConverter_typeof();
void GLConverter__ToBlendEquation_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToBlendOperand_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToCompareFunc_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLBlendEquation_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLBlendingFactor_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLBufferUsage_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLCullFaceMode_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLDepthFunction_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLFrontFaceDirection_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLIndexType_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLPrimitiveType_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToGLVertexAttributeType_fn(int32_t* x, int32_t* componentCount, int32_t* componentType, bool* normalized);
void GLConverter__ToPolygonFace_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToPolygonWinding_fn(int32_t* x, int32_t* __retval);
void GLConverter__ToPrimitiveType_fn(int32_t* x, int32_t* __retval);

struct GLConverter : uObject
{
    static int32_t ToBlendEquation(int32_t x);
    static int32_t ToBlendOperand(int32_t x);
    static int32_t ToCompareFunc(int32_t x);
    static int32_t ToGLBlendEquation(int32_t x);
    static int32_t ToGLBlendingFactor(int32_t x);
    static int32_t ToGLBufferUsage(int32_t x);
    static int32_t ToGLCullFaceMode(int32_t x);
    static int32_t ToGLDepthFunction(int32_t x);
    static int32_t ToGLFrontFaceDirection(int32_t x);
    static int32_t ToGLIndexType(int32_t x);
    static int32_t ToGLPrimitiveType(int32_t x);
    static void ToGLVertexAttributeType(int32_t x, int32_t* componentCount, int32_t* componentType, bool* normalized);
    static int32_t ToPolygonFace(int32_t x);
    static int32_t ToPolygonWinding(int32_t x);
    static int32_t ToPrimitiveType(int32_t x);
};
// }

}}}} // ::g::Uno::Graphics::OpenGL
