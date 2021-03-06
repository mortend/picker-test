// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Graphics/OpenGL/GLProgram.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Graphics{namespace OpenGL{struct GLCompiledProgram;}}}}
namespace g{namespace Uno{namespace Graphics{namespace OpenGL{struct GLProgram;}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace OpenGL{

// public sealed extern class GLProgram
// {
uType* GLProgram_typeof();
void GLProgram__ctor__fn(GLProgram* __this, uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames);
void GLProgram__CompileProgram_fn(GLProgram* __this, uArray* constStrings, ::g::Uno::Graphics::OpenGL::GLCompiledProgram** __retval);
void GLProgram__get_ConstantCount_fn(GLProgram* __this, int32_t* __retval);
void GLProgram__Create_fn(uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames, GLProgram** __retval);
void GLProgram__GetCompiledProgram_fn(GLProgram* __this, uArray* constStrings, ::g::Uno::Graphics::OpenGL::GLCompiledProgram** __retval);
void GLProgram__New1_fn(uString* vsSource, uString* fsSource, int32_t* constCount, int32_t* attribCount, uArray* constAttribAndUniformNames, GLProgram** __retval);

struct GLProgram : uObject
{
    uStrong< ::g::Uno::Collections::Dictionary*> _cachedPrograms;
    uStrong< ::g::Uno::Graphics::OpenGL::GLCompiledProgram*> _singleProgram;
    uStrong<uString*> _vsSource;
    uStrong<uString*> _fsSource;
    uStrong<uArray*> _constAttribAndUniformNames;
    int32_t _constCount;
    int32_t _attribCount;

    void ctor_(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
    ::g::Uno::Graphics::OpenGL::GLCompiledProgram* CompileProgram(uArray* constStrings);
    int32_t ConstantCount();
    ::g::Uno::Graphics::OpenGL::GLCompiledProgram* GetCompiledProgram(uArray* constStrings);
    static GLProgram* Create(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
    static GLProgram* New1(uString* vsSource, uString* fsSource, int32_t constCount, int32_t attribCount, uArray* constAttribAndUniformNames);
};
// }

}}}} // ::g::Uno::Graphics::OpenGL
