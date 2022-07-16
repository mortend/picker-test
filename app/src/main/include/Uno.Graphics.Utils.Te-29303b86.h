// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Text/SpriteFontShader.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Graphics.OpenGL.GLDrawCall.h>
#include <Uno.Graphics.Utils.Te-954d55b5.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct SpriteFontShader;}}}}}
namespace g{namespace Uno{namespace Graphics{namespace Utils{namespace Text{struct TextShaderData;}}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{
namespace Text{

// public sealed class SpriteFontShader
// {
::g::Uno::Graphics::Utils::Text::TextShader_type* SpriteFontShader_typeof();
void SpriteFontShader__ctor_1_fn(SpriteFontShader* __this);
void SpriteFontShader__Draw_fn(SpriteFontShader* __this, ::g::Uno::Graphics::Utils::Text::TextShaderData* data);
void SpriteFontShader__init_DrawCalls_fn(SpriteFontShader* __this);
void SpriteFontShader__New1_fn(SpriteFontShader** __retval);

struct SpriteFontShader : ::g::Uno::Graphics::Utils::Text::TextShader
{
    ::g::Uno::Graphics::OpenGL::GLDrawCall _draw_eee196bc;

    void ctor_1();
    void init_DrawCalls();
    static SpriteFontShader* New1();
};
// }

}}}}} // ::g::Uno::Graphics::Utils::Text
