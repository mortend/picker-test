// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Graphics/OpenGL/GLCompiledProgram.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.IDisposable.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{namespace OpenGL{struct GLCompiledProgram;}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace OpenGL{

// public sealed extern class GLCompiledProgram
// {
struct GLCompiledProgram_type : uType
{
    ::g::Uno::IDisposable interface0;
};

GLCompiledProgram_type* GLCompiledProgram_typeof();
void GLCompiledProgram__ctor__fn(GLCompiledProgram* __this, uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames);
void GLCompiledProgram__Dispose_fn(GLCompiledProgram* __this);
void GLCompiledProgram__GetLocation_fn(GLCompiledProgram* __this, int32_t* index, int32_t* __retval);
void GLCompiledProgram__get_GLProgramHandle_fn(GLCompiledProgram* __this, uint32_t* __retval);
void GLCompiledProgram__set_GLProgramHandle_fn(GLCompiledProgram* __this, uint32_t* value);
void GLCompiledProgram__New1_fn(uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames, GLCompiledProgram** __retval);

struct GLCompiledProgram : uObject
{
    uint32_t _vsHandle;
    uint32_t _fsHandle;
    uStrong<uArray*> _locations;
    uint32_t _GLProgramHandle;

    void ctor_(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
    void Dispose();
    int32_t GetLocation(int32_t index);
    uint32_t GLProgramHandle();
    void GLProgramHandle(uint32_t value);
    static GLCompiledProgram* New1(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
};
// }

}}}} // ::g::Uno::Graphics::OpenGL
