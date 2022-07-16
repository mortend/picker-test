// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseCommon_bundle.h>
#include <_root.FuseControls_bundle.h>
#include <_root.FuseControlsNav-5957af4b.h>
#include <_root.FuseControlsNav-641f13b.h>
#include <_root.FuseControlsNav-7469d335.h>
#include <_root.FuseControlsPan-d226a5f8.h>
#include <_root.FuseControlsPri-10685314.h>
#include <_root.FuseControlsPri-20980a82.h>
#include <_root.FuseControlsPri-22347344.h>
#include <_root.FuseControlsPri-2d416be.h>
#include <_root.FuseControlsPri-31bb8bc3.h>
#include <_root.FuseControlsPri-4272fecd.h>
#include <_root.FuseControlsPri-44fa9596.h>
#include <_root.FuseControlsPri-46372b1b.h>
#include <_root.FuseControlsPri-5e32c73b.h>
#include <_root.FuseControlsPri-71db5d6a.h>
#include <_root.FuseControlsPri-725e61c2.h>
#include <_root.FuseControlsPri-be234090.h>
#include <_root.FuseControlsScr-9ec964eb.h>
#include <_root.FuseControlsScr-aa76e788.h>
#include <_root.FuseControlsVideo_bundle.h>
#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseDrawingPrim-aed6b1dd.h>
#include <_root.FuseEffects_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <_root.FuseScriptingJa-3ca8adf7.h>
#include <_root.UnoGraphicsUtils_bundle.h>
#include <Fuse.Controls.ButtonBase.h>
#include <Fuse.Controls.Panel.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Controls.Shape.h>
#include <Fuse.Controls.TextControl.h>
#include <Fuse.Controls.ToggleControl.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Effects.DropShadow.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Triggers.WhileBool.h>
#include <Uno.Bool.h>
#include <Uno.Graphics.OpenGL.GLProgram.h>
#include <Uno.Int.h>
#include <Uno.IO.Bundle.h>
#include <Uno.IO.BundleFile.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[164];
static uType* TYPES[15];

namespace g{

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Common/0.1.0/.uno/package
// ----------------------------------------------------------------------------

// public static generated class FuseCommon_bundle
// {
// static FuseCommon_bundle()
static void FuseCommon_bundle__cctor__fn(uType* __type)
{
    FuseCommon_bundle::Blitter147b1372_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[0/*"uniform mat...*/], ::STRINGS[1/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    FuseCommon_bundle::Blitter5b549637_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[7/*"uniform mat...*/], ::STRINGS[8/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 3, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/]));
}

static void FuseCommon_bundle_build(uType* type)
{
    ::STRINGS[0] = uString::Const("uniform mat4 b;\n"
        "uniform mat3 c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = (c * vec3(a, 1.0)).xy;\n"
        "    gl_Position = b * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[1] = uString::Const("uniform vec4 d;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[7] = uString::Const("uniform mat4 b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * vec4(a, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseCommon_bundle::Blitter147b1372_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseCommon_bundle::Blitter5b549637_, uFieldFlagsStatic);
}

uClassType* FuseCommon_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseCommon_bundle", options);
    type->fp_build_ = FuseCommon_bundle_build;
    type->fp_cctor_ = FuseCommon_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseCommon_bundle::Blitter147b1372_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseCommon_bundle::Blitter5b549637_;
// }

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Controls/2.2.1/.uno/package
// ------------------------------------------------------------------------------

// public static generated class FuseControls_bundle
// {
// static FuseControls_bundle()
static void FuseControls_bundle__cctor__fn(uType* __type)
{
    FuseControls_bundle::SolidRectangle40bbf9dc_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[9/*"uniform mat...*/], ::STRINGS[10/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[16/*"l"*/]));
    FuseControls_bundle::SolidRectangle43281f2d_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[17/*"uniform mat...*/], ::STRINGS[18/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
    FuseControls_bundle::SolidRectangle9102669d_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[19/*"uniform mat...*/], ::STRINGS[20/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[27/*"t"*/]));
    FuseControls_bundle::SolidRectanglec0131986_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[28/*"uniform mat...*/], ::STRINGS[8/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/]));
}

static void FuseControls_bundle_build(uType* type)
{
    ::STRINGS[9] = uString::Const("uniform mat4 g, b;\n"
        "uniform vec2 c, d, i;\n"
        "uniform vec4 h;\n"
        "uniform float j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "float m(vec2 n, vec2 o, vec2 p, float q){\n"
        "    vec2 r = (n * c) - o;\n"
        "    float s = dot(r, p) / q;\n"
        "    return (s - d.x) / d.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    k = m(false ? vec2(a.x, float(1) - a.y) : a, h.xy, i, j);\n"
        "    gl_Position = b * (g * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[10] = uString::Const("uniform float e, f;\n"
        "\n"
        "uniform sampler2D l;\n"
        "\n"
        "varying float k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(l, vec2(k, 0.5)) * e) * f;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[16] = uString::Const("l");
    ::STRINGS[17] = uString::Const("uniform mat4 i, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    j = false ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (i * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[18] = uString::Const("uniform vec2 c, d;\n"
        "uniform float e, g, h;\n"
        "uniform vec4 f;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "float k(vec2 n, vec2 o){\n"
        "    vec2 p = abs(n) - o;\n"
        "    return min(max(p.x, p.y), 0.0) + length(max(p, 0.0));\n"
        "}\n"
        "\n"
        "vec2 l(vec2 n, vec2 o){\n"
        "    return mod(n, o) - (0.5 * o);\n"
        "}\n"
        "\n"
        "float m(vec2 n){\n"
        "    vec2 o = d.xy / e;\n"
        "    ivec2 p = ivec2(o);\n"
        "\n"
        "    if (mod(float(p.x), float(2)) == float(0))\n"
        "        ++p.x;\n"
        "\n"
        "    if (mod(float(p.y), float(2)) == float(0))\n"
        "        ++p.y;\n"
        "\n"
        "    o = d.xy / vec2(p);\n"
        "    float q = k(l(n, o * float(2)) + vec2(e), vec2(e));\n"
        "    return -floor(q);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), f, clamp(m(j.xy * c), 0.0, 1.0)) * g) * h;\n"
        "}\n"
        "");
    ::STRINGS[19] = uString::Const("uniform mat4 q, d;\n"
        "uniform vec2 e, f, g, h, i, k, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = ((((e * (false ? vec2(a.x, float(1) - a.y) : a)) - f) / g) * h) + i;\n"
        "    r = k + (u * j);\n"
        "    s = u;\n"
        "    gl_Position = d * (q * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[20] = uString::Const("uniform vec2 m, l;\n"
        "uniform vec4 n;\n"
        "uniform float o, p;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 u = (c ? vec4(float(0)) : texture2D(t, b ? (m + (fract(r) * l)) : s)) * n;\n"
        "    gl_FragColor = (vec4(u.xyz * u.w, u.w) * o) * p;\n"
        "}\n"
        "");
    ::STRINGS[21] = uString::Const("k");
    ::STRINGS[22] = uString::Const("m");
    ::STRINGS[23] = uString::Const("n");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[25] = uString::Const("p");
    ::STRINGS[26] = uString::Const("q");
    ::STRINGS[27] = uString::Const("t");
    ::STRINGS[28] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[8] = uString::Const("uniform vec4 c;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = c;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle40bbf9dc_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle43281f2d_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectangle9102669d_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControls_bundle::SolidRectanglec0131986_, uFieldFlagsStatic);
}

uClassType* FuseControls_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControls_bundle", options);
    type->fp_build_ = FuseControls_bundle_build;
    type->fp_cctor_ = FuseControls_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle40bbf9dc_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle43281f2d_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseControls_bundle::SolidRectangle9102669d_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseControls_bundle::SolidRectanglec0131986_;
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Navigation/.uno/ux15/Fuse.Controls.Navigation.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property
// {
static void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build(uType* type)
{
    ::TYPES[1] = ::g::Fuse::Controls::Panel_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[1/*Fuse.Controls.Panel*/], offsetof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn;
    return type;
}

// public override sealed bool Get(Uno.UX.PropertyObject obj)
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Get1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__get_Object_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin)
void FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property__Set1_fn(FuseControlsNavigation_FuseControlsPanel_IsFrozen_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Panel*>(obj, ::TYPES[1/*Fuse.Controls.Panel*/]))->IsFrozen(v_);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Navigation/.uno/ux15/Fuse.Controls.Navigation.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseControlsShape_Color_Property
// {
static void FuseControlsNavigation_FuseControlsShape_Color_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(FuseControlsNavigation_FuseControlsShape_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseControlsShape_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseControlsShape_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseControlsShape_Color_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseControlsShape_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name)
void FuseControlsNavigation_FuseControlsShape_Color_Property__ctor_3_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj)
void FuseControlsNavigation_FuseControlsShape_Color_Property__Get1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Color(), void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name)
void FuseControlsNavigation_FuseControlsShape_Color_Property__New1_fn(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseControlsShape_Color_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseControlsShape_Color_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_Object_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin)
void FuseControlsNavigation_FuseControlsShape_Color_Property__Set1_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsNavigation_FuseControlsShape_Color_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseControlsShape_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property(Fuse.Controls.Shape obj, Uno.UX.Selector name) [instance]
void FuseControlsNavigation_FuseControlsShape_Color_Property::ctor_3(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseControlsShape_Color_Property New(Fuse.Controls.Shape obj, Uno.UX.Selector name) [static]
FuseControlsNavigation_FuseControlsShape_Color_Property* FuseControlsNavigation_FuseControlsShape_Color_Property::New1(::g::Fuse::Controls::Shape* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseControlsShape_Color_Property* obj1 = (FuseControlsNavigation_FuseControlsShape_Color_Property*)uNew(FuseControlsNavigation_FuseControlsShape_Color_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Navigation/.uno/ux15/Fuse.Controls.Navigation.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsNavigation_FuseElementsElement_HitTestMode_Property
// {
static void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Elements::HitTestMode_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsNavigation_FuseElementsElement_HitTestMode_Property", options);
    type->fp_build_ = FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, Uno.UX.Selector name)
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__ctor_3_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed Fuse.Elements.HitTestMode Get(Uno.UX.PropertyObject obj)
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Get1_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->HitTestMode(), void();
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name)
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__New1_fn(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector* name, FuseControlsNavigation_FuseElementsElement_HitTestMode_Property** __retval)
{
    *__retval = FuseControlsNavigation_FuseElementsElement_HitTestMode_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_Object_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Elements.HitTestMode v, Uno.UX.IPropertyListener origin)
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__Set1_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, ::g::Uno::UX::PropertyObject* obj, int32_t* v, uObject* origin)
{
    int32_t v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->SetHitTestMode(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property__get_SupportsOriginSetter_fn(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property(Fuse.Elements.Element obj, Uno.UX.Selector name) [instance]
void FuseControlsNavigation_FuseElementsElement_HitTestMode_Property::ctor_3(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsNavigation_FuseElementsElement_HitTestMode_Property New(Fuse.Elements.Element obj, Uno.UX.Selector name) [static]
FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* FuseControlsNavigation_FuseElementsElement_HitTestMode_Property::New1(::g::Fuse::Elements::Element* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsNavigation_FuseElementsElement_HitTestMode_Property* obj1 = (FuseControlsNavigation_FuseElementsElement_HitTestMode_Property*)uNew(FuseControlsNavigation_FuseElementsElement_HitTestMode_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/.uno/ux15/Fuse.Controls.Panels.unoproj.g.uno
// ---------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPanels_FuseElementsElement_Padding_Property
// {
static void FuseControlsPanels_FuseElementsElement_Padding_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(FuseControlsPanels_FuseElementsElement_Padding_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPanels_FuseElementsElement_Padding_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPanels_FuseElementsElement_Padding_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPanels_FuseElementsElement_Padding_Property", options);
    type->fp_build_ = FuseControlsPanels_FuseElementsElement_Padding_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPanels_FuseElementsElement_Padding_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPanels_FuseElementsElement_Padding_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPanels_FuseElementsElement_Padding_Property__Set1_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj)
void FuseControlsPanels_FuseElementsElement_Padding_Property__Get1_fn(FuseControlsPanels_FuseElementsElement_Padding_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->Padding(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPanels_FuseElementsElement_Padding_Property__get_Object_fn(FuseControlsPanels_FuseElementsElement_Padding_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin)
void FuseControlsPanels_FuseElementsElement_Padding_Property__Set1_fn(FuseControlsPanels_FuseElementsElement_Padding_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->Padding(v_);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text
// {
// static generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text()
static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Text"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build(uType* type)
{
    ::STRINGS[29] = uString::Const("Text");
    ::TYPES[4] = ::g::Fuse::Controls::ButtonBase_typeof();
    ::TYPES[5] = ::g::Uno::String_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text()
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[4/*Fuse.Controls.ButtonBase*/]))->Text(), void();
}

// public override sealed Uno.UX.Selector get_Name()
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_, void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New()
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1();
}

// public override sealed Uno.Type get_PropertyType()
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, uType** __retval)
{
    return *__retval = ::TYPES[5/*string*/], void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ButtonBase*>(obj, ::TYPES[4/*Fuse.Controls.ButtonBase*/]))->SetText(uCast<uString*>(v, ::TYPES[5/*string*/]), origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::Singleton_;
::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::_name_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text() [instance]
void FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text New() [static]
FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ButtonBase_Text_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value
// {
// static generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value()
static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn(uType* __type)
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"Value"*/]);
}

static void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build(uType* type)
{
    ::STRINGS[30] = uString::Const("Value");
    ::TYPES[7] = ::g::Fuse::Controls::ToggleControl_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value", options);
    type->fp_build_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_build;
    type->fp_ctor_ = (void*)FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn;
    type->fp_cctor_ = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn;
    return type;
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value()
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__ctor_1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__GetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[7/*Fuse.Controls.ToggleControl*/]))->Value()), void();
}

// public override sealed Uno.UX.Selector get_Name()
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_Name_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_, void();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New()
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__New1_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value** __retval)
{
    *__retval = FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1();
}

// public override sealed Uno.Type get_PropertyType()
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_PropertyType_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__SetAsObject_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ToggleControl*>(obj, ::TYPES[7/*Fuse.Controls.ToggleControl*/]))->SetValue(uUnbox<bool>(::g::Uno::Bool_typeof(), v), origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value__get_SupportsOriginSetter_fn(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* __this, bool* __retval)
{
    return *__retval = true, void();
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::Singleton_;
::g::Uno::UX::Selector FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::_name_;

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value() [instance]
void FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::ctor_1()
{
    ctor_();
}

// public generated FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value New() [static]
FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value::New1()
{
    FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value* obj1 = (FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value*)uNew(FuseControlsPrimitives_accessor_Fuse_Controls_ToggleControl_Value_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsShape_Fill_Property
// {
static void FuseControlsPrimitives_FuseControlsShape_Fill_Property_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::Controls::Shape_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[2/*Fuse.Controls.Shape*/], offsetof(FuseControlsPrimitives_FuseControlsShape_Fill_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsShape_Fill_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsShape_Fill_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsShape_Fill_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsShape_Fill_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Get1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseControlsShape_Fill_Property__Set1_fn(FuseControlsPrimitives_FuseControlsShape_Fill_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::Shape*>(obj, ::TYPES[2/*Fuse.Controls.Shape*/]))->Fill(v);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property
// {
static void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Controls.TextControl*/], offsetof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->TextColor(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_TextColor_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->TextColor(v_);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseControlsTextControl_Value_Property
// {
static void FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build(uType* type)
{
    ::TYPES[8] = ::g::Fuse::Controls::TextControl_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::String_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[8/*Fuse.Controls.TextControl*/], offsetof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseControlsTextControl_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseControlsTextControl_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseControlsTextControl_Value_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseControlsTextControl_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed string Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Get1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->Value(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_Object_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, string v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__Set1_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, uString* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::TextControl*>(obj, ::TYPES[8/*Fuse.Controls.TextControl*/]))->SetValue(v, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsPrimitives_FuseControlsTextControl_Value_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseControlsTextControl_Value_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property
// {
static void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build(uType* type)
{
    ::TYPES[9] = ::g::Fuse::Drawing::SolidColor_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[9/*Fuse.Drawing.SolidColor*/], offsetof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[9/*Fuse.Drawing.SolidColor*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(obj, ::TYPES[9/*Fuse.Drawing.SolidColor*/]))->SetColor1(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingSolidColor_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Brush_Property
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Drawing.Stroke*/], offsetof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Brush_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Brush_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn;
    return type;
}

// public override sealed Fuse.Drawing.Brush Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->Brush(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, Fuse.Drawing.Brush v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseDrawingStroke_Brush_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Brush_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->Brush(v);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseDrawingStroke_Color_Property
// {
static void FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build(uType* type)
{
    ::TYPES[10] = ::g::Fuse::Drawing::Stroke_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float4_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[10/*Fuse.Drawing.Stroke*/], offsetof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseDrawingStroke_Color_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseDrawingStroke_Color_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseDrawingStroke_Color_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseDrawingStroke_Color_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float4 Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Get1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->Color(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_Object_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float4 v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__Set1_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::Float4* v, uObject* origin)
{
    ::g::Uno::Float4 v_ = *v;
    uPtr(uCast< ::g::Fuse::Drawing::Stroke*>(obj, ::TYPES[10/*Fuse.Drawing.Stroke*/]))->SetColor(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsPrimitives_FuseDrawingStroke_Color_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseDrawingStroke_Color_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Effects.DropShadow*/], offsetof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Distance(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Distance_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Distance(v_);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property
// {
static void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build(uType* type)
{
    ::TYPES[11] = ::g::Fuse::Effects::DropShadow_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[11/*Fuse.Effects.DropShadow*/], offsetof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Get1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Size(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__get_Object_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property__Set1_fn(FuseControlsPrimitives_FuseEffectsDropShadow_Size_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Effects::DropShadow*>(obj, ::TYPES[11/*Fuse.Effects.DropShadow*/]))->Size(v_);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseElementsElement_Opacity_Property
// {
static void FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build(uType* type)
{
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Float_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseElementsElement_Opacity_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseElementsElement_Opacity_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseElementsElement_Opacity_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseElementsElement_Opacity_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed float Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Get1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->Opacity(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_Object_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, float v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__Set1_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, ::g::Uno::UX::PropertyObject* obj, float* v, uObject* origin)
{
    float v_ = *v;
    uPtr(uCast< ::g::Fuse::Elements::Element*>(obj, ::TYPES[3/*Fuse.Elements.Element*/]))->SetOpacity(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsPrimitives_FuseElementsElement_Opacity_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseElementsElement_Opacity_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Primitives/.uno/ux15/Fuse.Controls.Primitives.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property
// {
static void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build(uType* type)
{
    ::TYPES[12] = ::g::Fuse::Gestures::SwipeGesture_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[12/*Fuse.Gestures.SwipeGesture*/], offsetof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property", options);
    type->fp_build_ = FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn;
    type->fp_get_SupportsOriginSetter = (void(*)(::g::Uno::UX::PropertyAccessor*, bool*))FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn;
    return type;
}

// public override sealed bool Get(Uno.UX.PropertyObject obj)
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Get1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->IsActive(), void();
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_Object_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin)
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__Set1_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Gestures::SwipeGesture*>(obj, ::TYPES[12/*Fuse.Gestures.SwipeGesture*/]))->SetIsActive(v_, origin);
}

// public override sealed bool get_SupportsOriginSetter()
void FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property__get_SupportsOriginSetter_fn(FuseControlsPrimitives_FuseGesturesSwipeGesture_IsActive_Property* __this, bool* __retval)
{
    return *__retval = true, void();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/.uno/ux15/Fuse.Controls.ScrollView.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView
// {
// static generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView()
static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn(uType* __type)
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"KeepFocusIn...*/]);
}

static void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build(uType* type)
{
    ::STRINGS[31] = uString::Const("KeepFocusInView");
    ::TYPES[13] = ::g::Fuse::Controls::ScrollViewBase_typeof();
    ::TYPES[6] = ::g::Uno::Type_typeof();
    type->SetFields(0,
        ::g::Uno::UX::PropertyAccessor_typeof(), (uintptr_t)&FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, uFieldFlagsStatic);
}

::g::Uno::UX::PropertyAccessor_type* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof()
{
    static uSStrong< ::g::Uno::UX::PropertyAccessor_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyAccessor_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView);
    options.TypeSize = sizeof(::g::Uno::UX::PropertyAccessor_type);
    type = (::g::Uno::UX::PropertyAccessor_type*)uClassType::New("FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView", options);
    type->fp_build_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_build;
    type->fp_ctor_ = (void*)FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn;
    type->fp_cctor_ = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__cctor__fn;
    type->fp_GetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn;
    type->fp_get_Name = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::Selector*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn;
    type->fp_get_PropertyType = (void(*)(::g::Uno::UX::PropertyAccessor*, uType**))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn;
    type->fp_SetAsObject = (void(*)(::g::Uno::UX::PropertyAccessor*, ::g::Uno::UX::PropertyObject*, uObject*, uObject*))FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn;
    return type;
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView()
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__ctor_1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this)
{
    __this->ctor_1();
}

// public override sealed object GetAsObject(Uno.UX.PropertyObject obj)
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__GetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject** __retval)
{
    return *__retval = uBox(::g::Uno::Bool_typeof(), uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView()), void();
}

// public override sealed Uno.UX.Selector get_Name()
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_Name_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::Selector* __retval)
{
    return *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_, void();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New()
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__New1_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView** __retval)
{
    *__retval = FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1();
}

// public override sealed Uno.Type get_PropertyType()
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__get_PropertyType_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, uType** __retval)
{
    return *__retval = ::g::Uno::Bool_typeof(), void();
}

// public override sealed void SetAsObject(Uno.UX.PropertyObject obj, object v, Uno.UX.IPropertyListener origin)
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView__SetAsObject_fn(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* __this, ::g::Uno::UX::PropertyObject* obj, uObject* v, uObject* origin)
{
    uPtr(uCast< ::g::Fuse::Controls::ScrollViewBase*>(obj, ::TYPES[13/*Fuse.Controls.ScrollViewBase*/]))->KeepFocusInView(uUnbox<bool>(::g::Uno::Bool_typeof(), v));
}

uSStrong< ::g::Uno::UX::PropertyAccessor*> FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::Singleton_;
::g::Uno::UX::Selector FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::_name_;

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView() [instance]
void FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::ctor_1()
{
    ctor_();
}

// public generated FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView New() [static]
FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView::New1()
{
    FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView* obj1 = (FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView*)uNew(FuseControlsScrollView_accessor_Fuse_Controls_ScrollViewBase_KeepFocusInView_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/.uno/ux15/Fuse.Controls.ScrollView.unoproj.g.uno
// -----------------------------------------------------------------------------------------------------------------

// internal sealed class FuseControlsScrollView_FuseTriggersWhileBool_Value_Property
// {
static void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::Triggers::WhileBool_typeof();
    type->SetBase(::g::Uno::UX::Property1_typeof()->MakeType(::g::Uno::Bool_typeof(), nullptr));
    type->SetFields(1,
        ::TYPES[14/*Fuse.Triggers.WhileBool*/], offsetof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property, _obj), uFieldFlagsWeak);
}

::g::Uno::UX::Property1_type* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property1_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::Property1_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property1_type);
    type = (::g::Uno::UX::Property1_type*)uClassType::New("FuseControlsScrollView_FuseTriggersWhileBool_Value_Property", options);
    type->fp_build_ = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_build;
    type->fp_Get1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, uTRef))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn;
    type->fp_get_Object = (void(*)(::g::Uno::UX::Property*, ::g::Uno::UX::PropertyObject**))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn;
    type->fp_Set1 = (void(*)(::g::Uno::UX::Property1*, ::g::Uno::UX::PropertyObject*, void*, uObject*))FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn;
    return type;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name)
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__ctor_3_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name)
{
    __this->ctor_3(obj, *name);
}

// public override sealed bool Get(Uno.UX.PropertyObject obj)
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Get1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* __retval)
{
    return *__retval = uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[14/*Fuse.Triggers.WhileBool*/]))->Value1(), void();
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name)
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__New1_fn(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector* name, FuseControlsScrollView_FuseTriggersWhileBool_Value_Property** __retval)
{
    *__retval = FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(obj, *name);
}

// public override sealed Uno.UX.PropertyObject get_Object()
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__get_Object_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject** __retval)
{
    return *__retval = __this->_obj, void();
}

// public override sealed void Set(Uno.UX.PropertyObject obj, bool v, Uno.UX.IPropertyListener origin)
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property__Set1_fn(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* __this, ::g::Uno::UX::PropertyObject* obj, bool* v, uObject* origin)
{
    bool v_ = *v;
    uPtr(uCast< ::g::Fuse::Triggers::WhileBool*>(obj, ::TYPES[14/*Fuse.Triggers.WhileBool*/]))->Value1(v_);
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [instance]
void FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::ctor_3(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    ctor_2(name);
    _obj = obj;
}

// public FuseControlsScrollView_FuseTriggersWhileBool_Value_Property New(Fuse.Triggers.WhileBool obj, Uno.UX.Selector name) [static]
FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* FuseControlsScrollView_FuseTriggersWhileBool_Value_Property::New1(::g::Fuse::Triggers::WhileBool* obj, ::g::Uno::UX::Selector name)
{
    FuseControlsScrollView_FuseTriggersWhileBool_Value_Property* obj1 = (FuseControlsScrollView_FuseTriggersWhileBool_Value_Property*)uNew(FuseControlsScrollView_FuseTriggersWhileBool_Value_Property_typeof());
    obj1->ctor_3(obj, name);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Controls.Video/2.2.1/.uno/package
// ------------------------------------------------------------------------------------

// public static generated class FuseControlsVideo_bundle
// {
// static FuseControlsVideo_bundle()
static void FuseControlsVideo_bundle__cctor__fn(uType* __type)
{
    FuseControlsVideo_bundle::Scale9Rectangle68b84ee5_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[32/*"uniform flo...*/], ::STRINGS[33/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[26/*"q"*/]));
    FuseControlsVideo_bundle::VideoDrawElement1290f672_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[34/*"uniform mat...*/], ::STRINGS[35/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
}

static void FuseControlsVideo_bundle_build(uType* type)
{
    ::STRINGS[32] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    p = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[33] = uString::Const("uniform samplerExternalOES q;\n"
        "\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(q, p).xyz, 1.0);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[21] = uString::Const("k");
    ::STRINGS[16] = uString::Const("l");
    ::STRINGS[22] = uString::Const("m");
    ::STRINGS[23] = uString::Const("n");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[26] = uString::Const("q");
    ::STRINGS[34] = uString::Const("uniform mat4 f, b;\n"
        "uniform vec2 c, d;\n"
        "uniform mat3 e;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = (e * vec3(((a * c) + d).xy, 1.0)).xy;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[35] = uString::Const("uniform samplerExternalOES h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(texture2D(h, g).xyz, 1.0);\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsVideo_bundle::Scale9Rectangle68b84ee5_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseControlsVideo_bundle::VideoDrawElement1290f672_, uFieldFlagsStatic);
}

uClassType* FuseControlsVideo_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseControlsVideo_bundle", options);
    type->fp_build_ = FuseControlsVideo_bundle_build;
    type->fp_cctor_ = FuseControlsVideo_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseControlsVideo_bundle::Scale9Rectangle68b84ee5_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseControlsVideo_bundle::VideoDrawElement1290f672_;
// }

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Drawing/2.2.1/.uno/package
// -----------------------------------------------------------------------------

// public static generated class FuseDrawing_bundle
// {
// static FuseDrawing_bundle()
static void FuseDrawing_bundle__cctor__fn(uType* __type)
{
    FuseDrawing_bundle::LinearGradientDrawablee64f68c7_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[36/*"attribute v...*/], ::STRINGS[37/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/]));
}

static void FuseDrawing_bundle_build(uType* type)
{
    ::STRINGS[36] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 h;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    h = a;\n"
        "    gl_Position = vec4((a.x * float(2)) - float(1), (-a.y * float(2)) + float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[37] = uString::Const("uniform float e[b], f;\n"
        "uniform vec4 g[c];\n"
        "\n"
        "varying vec2 h;\n"
        "\n"
        "float i(float k, float l, float m){\n"
        "    return clamp((m - k) / (l - k), 0.0, 1.0);\n"
        "}\n"
        "\n"
        "vec4 j(vec2 k){\n"
        "    float l = e[0] + (f * k.x);\n"
        "    vec4 m = vec4(g[0].xyz * g[0].w, g[0].w);\n"
        "\n"
        "    for (int n = 0; n < (b - 1); n++)\n"
        "    {\n"
        "        float o = e[n];\n"
        "        float p = e[n + 1];\n"
        "        vec4 q = g[n + 1];\n"
        "        m = mix(m, vec4(q.xyz * q.w, q.w), d ? smoothstep(o, p, l) : i(o, p, l));\n"
        "    }\n"
        "\n"
        "    return m;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = j(h);\n"
        "}\n"
        "");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[12] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawing_bundle::LinearGradientDrawablee64f68c7_, uFieldFlagsStatic);
}

uClassType* FuseDrawing_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawing_bundle", options);
    type->fp_build_ = FuseDrawing_bundle_build;
    type->fp_cctor_ = FuseDrawing_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawing_bundle::LinearGradientDrawablee64f68c7_;
// }

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Drawing.Primitives/2.2.1/.uno/package
// ----------------------------------------------------------------------------------------

// public static generated class FuseDrawingPrimitives_bundle
// {
// static FuseDrawingPrimitives_bundle()
static void FuseDrawingPrimitives_bundle__cctor__fn(uType* __type)
{
    FuseDrawingPrimitives_bundle::Circle0756ecfb_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform flo...*/], ::STRINGS[39/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle08faad29_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[41/*"uniform flo...*/], ::STRINGS[42/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 24, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[47/*"A"*/]));
    FuseDrawingPrimitives_bundle::Circle11a7e996_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform flo...*/], ::STRINGS[49/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle14c4da1d_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[50/*"uniform flo...*/], ::STRINGS[51/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle240d45f6_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform flo...*/], ::STRINGS[53/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circle2ad0f86f_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[50/*"uniform flo...*/], ::STRINGS[54/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle3cc69ea6_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[55/*"uniform flo...*/], ::STRINGS[56/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[44/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle4eb54f01_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[48/*"uniform flo...*/], ::STRINGS[57/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle4f17d172_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[58/*"uniform flo...*/], ::STRINGS[59/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/]));
    FuseDrawingPrimitives_bundle::Circle5116898d_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform flo...*/], ::STRINGS[61/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[46/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle5c7bf5c2_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[55/*"uniform flo...*/], ::STRINGS[62/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[44/*"u"*/]));
    FuseDrawingPrimitives_bundle::Circle6f96fc09_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[38/*"uniform flo...*/], ::STRINGS[63/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/]));
    FuseDrawingPrimitives_bundle::Circle6fa31eb0_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform flo...*/], ::STRINGS[65/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[67/*"y"*/], ::STRINGS[68/*"z"*/], ::STRINGS[69/*"E"*/]));
    FuseDrawingPrimitives_bundle::Circle731c9041_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform flo...*/], ::STRINGS[71/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle749c4263_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[60/*"uniform flo...*/], ::STRINGS[72/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[46/*"w"*/]));
    FuseDrawingPrimitives_bundle::Circle7e8f9c01_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[73/*"uniform flo...*/], ::STRINGS[74/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[26/*"q"*/]));
    FuseDrawingPrimitives_bundle::Circle91d9beaf_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[75/*"uniform flo...*/], ::STRINGS[76/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/]));
    FuseDrawingPrimitives_bundle::Circle9ba5ce77_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[70/*"uniform flo...*/], ::STRINGS[77/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/]));
    FuseDrawingPrimitives_bundle::Circle9dea10a3_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[78/*"uniform flo...*/], ::STRINGS[79/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/]));
    FuseDrawingPrimitives_bundle::Circleb95e9034_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform flo...*/], ::STRINGS[81/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlebe0c57c7_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[82/*"uniform flo...*/], ::STRINGS[83/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circlecd64a2fe_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform flo...*/], ::STRINGS[85/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[86/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circled03fdf74_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[64/*"uniform flo...*/], ::STRINGS[87/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[67/*"y"*/], ::STRINGS[68/*"z"*/], ::STRINGS[69/*"E"*/]));
    FuseDrawingPrimitives_bundle::Circled0cee2fd_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[88/*"uniform flo...*/], ::STRINGS[89/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 9, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
    FuseDrawingPrimitives_bundle::Circledc12e66f_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[90/*"uniform flo...*/], ::STRINGS[91/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 22, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[67/*"y"*/]));
    FuseDrawingPrimitives_bundle::Circledfe84c53_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[84/*"uniform flo...*/], ::STRINGS[92/*"uniform vec...*/], 2, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[2/*"a"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[86/*"C"*/]));
    FuseDrawingPrimitives_bundle::Circlee0319d48_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[80/*"uniform flo...*/], ::STRINGS[93/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/]));
    FuseDrawingPrimitives_bundle::Circlee17e57be_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[52/*"uniform flo...*/], ::STRINGS[94/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/]));
    FuseDrawingPrimitives_bundle::Circleed7a4684_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[95/*"uniform flo...*/], ::STRINGS[96/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 10, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/]));
    FuseDrawingPrimitives_bundle::Circlef89e5004_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[97/*"uniform flo...*/], ::STRINGS[98/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[43/*"s"*/]));
    FuseDrawingPrimitives_bundle::Rectangle077c3378_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[100/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangle0d95ac89_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[102/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/]));
    FuseDrawingPrimitives_bundle::Rectangle277ecc8b_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[101/*"uniform flo...*/], ::STRINGS[103/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 15, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/]));
    FuseDrawingPrimitives_bundle::Rectangle2a980758_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[105/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/]));
    FuseDrawingPrimitives_bundle::Rectangle443ab62b_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[104/*"uniform flo...*/], ::STRINGS[106/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/]));
    FuseDrawingPrimitives_bundle::Rectangle55280bee_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[108/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle6cc3b044_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[110/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[45/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7575b8fd_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[109/*"uniform flo...*/], ::STRINGS[111/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 18, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[45/*"v"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7df074e3_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[113/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/]));
    FuseDrawingPrimitives_bundle::Rectangle7ebb267b_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[107/*"uniform flo...*/], ::STRINGS[114/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 12, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/]));
    FuseDrawingPrimitives_bundle::Rectangle92dbce62_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[115/*"uniform flo...*/], ::STRINGS[116/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[67/*"y"*/], ::STRINGS[68/*"z"*/], ::STRINGS[117/*"F"*/]));
    FuseDrawingPrimitives_bundle::Rectangle96567dcc_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[119/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[66/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectanglea4c63db0_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[112/*"uniform flo...*/], ::STRINGS[120/*"uniform vec...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 16, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/]));
    FuseDrawingPrimitives_bundle::Rectangleae3d51b5_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[121/*"uniform flo...*/], ::STRINGS[122/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[123/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectangleaf680338_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[121/*"uniform flo...*/], ::STRINGS[124/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 25, ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[123/*"D"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb91c47bc_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[99/*"uniform flo...*/], ::STRINGS[125/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/]));
    FuseDrawingPrimitives_bundle::Rectangleb9bd3313_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[118/*"uniform flo...*/], ::STRINGS[126/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 20, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[66/*"x"*/]));
    FuseDrawingPrimitives_bundle::Rectanglecb05e1d1_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform flo...*/], ::STRINGS[128/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/]));
    FuseDrawingPrimitives_bundle::Rectangleeea60686_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[115/*"uniform flo...*/], ::STRINGS[129/*"uniform vec...*/], 3, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 27, ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[26/*"q"*/], ::STRINGS[40/*"r"*/], ::STRINGS[43/*"s"*/], ::STRINGS[27/*"t"*/], ::STRINGS[44/*"u"*/], ::STRINGS[45/*"v"*/], ::STRINGS[46/*"w"*/], ::STRINGS[66/*"x"*/], ::STRINGS[67/*"y"*/], ::STRINGS[68/*"z"*/], ::STRINGS[117/*"F"*/]));
    FuseDrawingPrimitives_bundle::Rectanglef9806da2_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[127/*"uniform flo...*/], ::STRINGS[130/*"uniform flo...*/], 1, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 13, ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/]));
}

static void FuseDrawingPrimitives_bundle_build(uType* type)
{
    ::STRINGS[38] = uString::Const("uniform float b, i;\n"
        "uniform vec2 c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * b;\n"
        "    vec2 z = y + c;\n"
        "    s = z / e;\n"
        "    t = y * i;\n"
        "    u = y;\n"
        "    gl_Position = d * vec4(z, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[39] = uString::Const("uniform vec2 f, e, p, q, r;\n"
        "uniform float g, j, k, l, m, n, o;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "float v(vec2 y, vec2 z){\n"
        "    vec2 A = abs(y) - z;\n"
        "    return min(max(A.x, A.y), 0.0) + length(max(A, 0.0));\n"
        "}\n"
        "\n"
        "vec2 w(vec2 y, vec2 z){\n"
        "    return mod(y, z) - (0.5 * z);\n"
        "}\n"
        "\n"
        "float x(vec2 y){\n"
        "    vec2 z = e.xy / g;\n"
        "    ivec2 A = ivec2(z);\n"
        "\n"
        "    if (mod(float(A.x), float(2)) == float(0))\n"
        "        ++A.x;\n"
        "\n"
        "    if (mod(float(A.y), float(2)) == float(0))\n"
        "        ++A.y;\n"
        "\n"
        "    z = e.xy / vec2(A);\n"
        "    float B = v(w(y, z * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(B);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(x(s.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs(((length(t) - 1.0) * j) - k) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((max(dot(u, p), max(dot(u, q), dot(u, r))) * m) * n), float(0), float(1)))) * o;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[21] = uString::Const("k");
    ::STRINGS[16] = uString::Const("l");
    ::STRINGS[22] = uString::Const("m");
    ::STRINGS[23] = uString::Const("n");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[25] = uString::Const("p");
    ::STRINGS[26] = uString::Const("q");
    ::STRINGS[40] = uString::Const("r");
    ::STRINGS[41] = uString::Const("uniform float d, q;\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 B = a * d;\n"
        "    vec2 C = B + e;\n"
        "    vec2 D = ((((g * (C / g)) - h) / i) * j) + k;\n"
        "    x = m + (D * l);\n"
        "    y = D;\n"
        "    z = B * q;\n"
        "    gl_Position = f * vec4(C, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[42] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float r, s, t, u, v, w;\n"
        "\n"
        "uniform sampler2D A;\n"
        "\n"
        "varying vec2 x, y, z;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 B = (c ? vec4(float(0)) : texture2D(A, b ? (o + (fract(x) * n)) : y)) * p;\n"
        "    gl_FragColor = (vec4(B.xyz * B.w, B.w) * (clamp(0.5 - (((abs(((length(z) - 1.0) * r) - s) - t) * u) * v), float(0), float(1)) * float(1))) * w;\n"
        "}\n"
        "");
    ::STRINGS[43] = uString::Const("s");
    ::STRINGS[27] = uString::Const("t");
    ::STRINGS[44] = uString::Const("u");
    ::STRINGS[45] = uString::Const("v");
    ::STRINGS[46] = uString::Const("w");
    ::STRINGS[47] = uString::Const("A");
    ::STRINGS[48] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = a * b;\n"
        "    n = p * e;\n"
        "    o = p;\n"
        "    gl_Position = d * vec4(p + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[49] = uString::Const("uniform float f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec4 i;\n"
        "\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (i * (clamp(0.5 - ((((length(n) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((max(dot(o, k), max(dot(o, l), dot(o, m))) * g) * h), float(0), float(1)))) * j;\n"
        "}\n"
        "");
    ::STRINGS[50] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = a * b;\n"
        "    p = r * e;\n"
        "    q = r;\n"
        "    gl_Position = d * vec4(r + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[51] = uString::Const("uniform float f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (k * (clamp(0.5 - (((abs(((length(p) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(q, m), max(dot(q, n), dot(q, o))) * i) * j), float(0), float(1)))) * l;\n"
        "}\n"
        "");
    ::STRINGS[52] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 o = a * b;\n"
        "    m = o * e;\n"
        "    n = o;\n"
        "    gl_Position = d * vec4(o + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[53] = uString::Const("uniform float f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec4 i;\n"
        "\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i * (clamp(0.5 - ((((length(m) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((min(dot(n, j), min(dot(n, k), dot(n, l))) * g) * h), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[54] = uString::Const("uniform float f, g, h, i, j, l;\n"
        "uniform vec2 m, n, o;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (k * (clamp(0.5 - (((abs(((length(p) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(q, m), min(dot(q, n), dot(q, o))) * i) * j), float(0), float(1)))) * l;\n"
        "}\n"
        "");
    ::STRINGS[55] = uString::Const("uniform float b, n, g;\n"
        "uniform vec2 c, e, f, m;\n"
        "uniform mat4 d;\n"
        "uniform vec4 l;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t;\n"
        "\n"
        "float v(vec2 w, vec2 x, vec2 y, float z){\n"
        "    vec2 A = (w * e) - x;\n"
        "    float B = dot(A, y) / z;\n"
        "    return (B - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * b;\n"
        "    vec2 x = w + c;\n"
        "    r = v(x / e, l.xy, m, n);\n"
        "    s = w * g;\n"
        "    t = w;\n"
        "    gl_Position = d * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[56] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 o, p, q;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(u, vec2(r, 0.5)) * (clamp(0.5 - ((((length(s) - 1.0) * h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(t, o), max(dot(t, p), dot(t, q))) * i) * j), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[57] = uString::Const("uniform float f, g, h, j;\n"
        "uniform vec2 k, l, m;\n"
        "uniform vec4 i;\n"
        "\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (i * (clamp(0.5 - ((((length(n) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((min(dot(o, k), min(dot(o, l), dot(o, m))) * g) * h), float(0), float(1)))) * j;\n"
        "}\n"
        "");
    ::STRINGS[58] = uString::Const("uniform float b, i;\n"
        "uniform vec2 c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = a * b;\n"
        "    vec2 t = s + c;\n"
        "    n = t / e;\n"
        "    o = s * i;\n"
        "    gl_Position = d * vec4(t, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[59] = uString::Const("uniform vec2 f, e;\n"
        "uniform float g, j, k, l, m;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 n, o;\n"
        "\n"
        "float p(vec2 s, vec2 t){\n"
        "    vec2 u = abs(s) - t;\n"
        "    return min(max(u.x, u.y), 0.0) + length(max(u, 0.0));\n"
        "}\n"
        "\n"
        "vec2 q(vec2 s, vec2 t){\n"
        "    return mod(s, t) - (0.5 * t);\n"
        "}\n"
        "\n"
        "float r(vec2 s){\n"
        "    vec2 t = e.xy / g;\n"
        "    ivec2 u = ivec2(t);\n"
        "\n"
        "    if (mod(float(u.x), float(2)) == float(0))\n"
        "        ++u.x;\n"
        "\n"
        "    if (mod(float(u.y), float(2)) == float(0))\n"
        "        ++u.y;\n"
        "\n"
        "    t = e.xy / vec2(u);\n"
        "    float v = p(q(s, t * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(v);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(r(n.xy * f), 0.0, 1.0)) * (clamp(0.5 - ((((length(o) - 1.0) * j) * k) * l), float(0), float(1)) * float(1))) * m;\n"
        "}\n"
        "");
    ::STRINGS[60] = uString::Const("uniform float b, p, g;\n"
        "uniform vec2 c, e, f, o;\n"
        "uniform mat4 d;\n"
        "uniform vec4 n;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v;\n"
        "\n"
        "float x(vec2 y, vec2 z, vec2 A, float B){\n"
        "    vec2 C = (y * e) - z;\n"
        "    float D = dot(C, A) / B;\n"
        "    return (D - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 y = a * b;\n"
        "    vec2 z = y + c;\n"
        "    t = x(z / e, n.xy, o, p);\n"
        "    u = y * g;\n"
        "    v = y;\n"
        "    gl_Position = d * vec4(z, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[61] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 q, r, s;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(w, vec2(t, 0.5)) * (clamp(0.5 - (((abs(((length(u) - 1.0) * h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(v, q), max(dot(v, r), dot(v, s))) * k) * l), float(0), float(1)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[62] = uString::Const("uniform float h, i, j, k;\n"
        "uniform vec2 o, p, q;\n"
        "\n"
        "uniform sampler2D u;\n"
        "\n"
        "varying float r;\n"
        "varying vec2 s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(u, vec2(r, 0.5)) * (clamp(0.5 - ((((length(s) - 1.0) * h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(t, o), min(dot(t, p), dot(t, q))) * i) * j), float(0), float(1)))) * k;\n"
        "}\n"
        "");
    ::STRINGS[63] = uString::Const("uniform vec2 f, e, p, q, r;\n"
        "uniform float g, j, k, l, m, n, o;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 s, t, u;\n"
        "\n"
        "float v(vec2 y, vec2 z){\n"
        "    vec2 A = abs(y) - z;\n"
        "    return min(max(A.x, A.y), 0.0) + length(max(A, 0.0));\n"
        "}\n"
        "\n"
        "vec2 w(vec2 y, vec2 z){\n"
        "    return mod(y, z) - (0.5 * z);\n"
        "}\n"
        "\n"
        "float x(vec2 y){\n"
        "    vec2 z = e.xy / g;\n"
        "    ivec2 A = ivec2(z);\n"
        "\n"
        "    if (mod(float(A.x), float(2)) == float(0))\n"
        "        ++A.x;\n"
        "\n"
        "    if (mod(float(A.y), float(2)) == float(0))\n"
        "        ++A.y;\n"
        "\n"
        "    z = e.xy / vec2(A);\n"
        "    float B = v(w(y, z * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(B);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(x(s.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs(((length(t) - 1.0) * j) - k) - l) * m) * n), float(0), float(1)) * clamp(0.5 - ((min(dot(u, p), min(dot(u, q), dot(u, r))) * m) * n), float(0), float(1)))) * o;\n"
        "}\n"
        "");
    ::STRINGS[64] = uString::Const("uniform float d, q;\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 A, B, C, D;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 F = a * d;\n"
        "    vec2 G = F + e;\n"
        "    vec2 H = ((((g * (G / g)) - h) / i) * j) + k;\n"
        "    A = m + (H * l);\n"
        "    B = H;\n"
        "    C = F * q;\n"
        "    D = F;\n"
        "    gl_Position = f * vec4(G, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[65] = uString::Const("uniform vec2 o, n, x, y, z;\n"
        "uniform vec4 p;\n"
        "uniform float r, s, t, u, v, w;\n"
        "\n"
        "uniform sampler2D E;\n"
        "\n"
        "varying vec2 A, B, C, D;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 F = (c ? vec4(float(0)) : texture2D(E, b ? (o + (fract(A) * n)) : B)) * p;\n"
        "    gl_FragColor = (vec4(F.xyz * F.w, F.w) * (clamp(0.5 - (((abs(((length(C) - 1.0) * r) - s) - t) * u) * v), float(0), float(1)) * clamp(0.5 - ((min(dot(D, x), min(dot(D, y), dot(D, z))) * u) * v), float(0), float(1)))) * w;\n"
        "}\n"
        "");
    ::STRINGS[66] = uString::Const("x");
    ::STRINGS[67] = uString::Const("y");
    ::STRINGS[68] = uString::Const("z");
    ::STRINGS[69] = uString::Const("E");
    ::STRINGS[70] = uString::Const("uniform float b, i;\n"
        "uniform vec2 c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 w = a * b;\n"
        "    vec2 x = w + c;\n"
        "    q = x / e;\n"
        "    r = w * i;\n"
        "    s = w;\n"
        "    gl_Position = d * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[71] = uString::Const("uniform vec2 f, e, n, o, p;\n"
        "uniform float g, j, k, l, m;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 q, r, s;\n"
        "\n"
        "float t(vec2 w, vec2 x){\n"
        "    vec2 y = abs(w) - x;\n"
        "    return min(max(y.x, y.y), 0.0) + length(max(y, 0.0));\n"
        "}\n"
        "\n"
        "vec2 u(vec2 w, vec2 x){\n"
        "    return mod(w, x) - (0.5 * x);\n"
        "}\n"
        "\n"
        "float v(vec2 w){\n"
        "    vec2 x = e.xy / g;\n"
        "    ivec2 y = ivec2(x);\n"
        "\n"
        "    if (mod(float(y.x), float(2)) == float(0))\n"
        "        ++y.x;\n"
        "\n"
        "    if (mod(float(y.y), float(2)) == float(0))\n"
        "        ++y.y;\n"
        "\n"
        "    x = e.xy / vec2(y);\n"
        "    float z = t(u(w, x * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(v(q.xy * f), 0.0, 1.0)) * (clamp(0.5 - ((((length(r) - 1.0) * j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(s, n), min(dot(s, o), dot(s, p))) * k) * l), float(0), float(1)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[72] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "uniform vec2 q, r, s;\n"
        "\n"
        "uniform sampler2D w;\n"
        "\n"
        "varying float t;\n"
        "varying vec2 u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(w, vec2(t, 0.5)) * (clamp(0.5 - (((abs(((length(u) - 1.0) * h) - i) - j) * k) * l), float(0), float(1)) * clamp(0.5 - ((min(dot(v, q), min(dot(v, r), dot(v, s))) * k) * l), float(0), float(1)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[73] = uString::Const("uniform float b, n, g;\n"
        "uniform vec2 c, e, f, m;\n"
        "uniform mat4 d;\n"
        "uniform vec4 l;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p;\n"
        "\n"
        "float r(vec2 s, vec2 t, vec2 u, float v){\n"
        "    vec2 w = (s * e) - t;\n"
        "    float x = dot(w, u) / v;\n"
        "    return (x - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = a * b;\n"
        "    vec2 t = s + c;\n"
        "    o = r(t / e, l.xy, m, n);\n"
        "    p = s * g;\n"
        "    gl_Position = d * vec4(t, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[74] = uString::Const("uniform float h, i, j, k;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(q, vec2(o, 0.5)) * (clamp(0.5 - ((((length(p) - 1.0) * h) * i) * j), float(0), float(1)) * float(1))) * k;\n"
        "}\n"
        "");
    ::STRINGS[75] = uString::Const("uniform float b, i;\n"
        "uniform vec2 c, e;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    p = v / e;\n"
        "    q = u * i;\n"
        "    gl_Position = d * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[76] = uString::Const("uniform vec2 f, e;\n"
        "uniform float g, j, k, l, m, n, o;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 p, q;\n"
        "\n"
        "float r(vec2 u, vec2 v){\n"
        "    vec2 w = abs(u) - v;\n"
        "    return min(max(w.x, w.y), 0.0) + length(max(w, 0.0));\n"
        "}\n"
        "\n"
        "vec2 s(vec2 u, vec2 v){\n"
        "    return mod(u, v) - (0.5 * v);\n"
        "}\n"
        "\n"
        "float t(vec2 u){\n"
        "    vec2 v = e.xy / g;\n"
        "    ivec2 w = ivec2(v);\n"
        "\n"
        "    if (mod(float(w.x), float(2)) == float(0))\n"
        "        ++w.x;\n"
        "\n"
        "    if (mod(float(w.y), float(2)) == float(0))\n"
        "        ++w.y;\n"
        "\n"
        "    v = e.xy / vec2(w);\n"
        "    float x = r(s(u, v * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(x);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(t(p.xy * f), 0.0, 1.0)) * (clamp(0.5 - (((abs(((length(q) - 1.0) * j) - k) - l) * m) * n), float(0), float(1)) * float(1))) * o;\n"
        "}\n"
        "");
    ::STRINGS[77] = uString::Const("uniform vec2 f, e, n, o, p;\n"
        "uniform float g, j, k, l, m;\n"
        "uniform vec4 h;\n"
        "\n"
        "varying vec2 q, r, s;\n"
        "\n"
        "float t(vec2 w, vec2 x){\n"
        "    vec2 y = abs(w) - x;\n"
        "    return min(max(y.x, y.y), 0.0) + length(max(y, 0.0));\n"
        "}\n"
        "\n"
        "vec2 u(vec2 w, vec2 x){\n"
        "    return mod(w, x) - (0.5 * x);\n"
        "}\n"
        "\n"
        "float v(vec2 w){\n"
        "    vec2 x = e.xy / g;\n"
        "    ivec2 y = ivec2(x);\n"
        "\n"
        "    if (mod(float(y.x), float(2)) == float(0))\n"
        "        ++y.x;\n"
        "\n"
        "    if (mod(float(y.y), float(2)) == float(0))\n"
        "        ++y.y;\n"
        "\n"
        "    x = e.xy / vec2(y);\n"
        "    float z = t(u(w, x * float(2)) + vec2(g), vec2(g));\n"
        "    return -floor(z);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), h, clamp(v(q.xy * f), 0.0, 1.0)) * (clamp(0.5 - ((((length(r) - 1.0) * j) * k) * l), float(0), float(1)) * clamp(0.5 - ((max(dot(s, n), max(dot(s, o), dot(s, p))) * k) * l), float(0), float(1)))) * m;\n"
        "}\n"
        "");
    ::STRINGS[78] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 m = a * b;\n"
        "    l = m * e;\n"
        "    gl_Position = d * vec4(m + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[79] = uString::Const("uniform float f, g, h, i, j;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying vec2 l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = k * (clamp(0.5 - (((abs(((length(l) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[80] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = a * b;\n"
        "    o = q * e;\n"
        "    p = q;\n"
        "    gl_Position = d * vec4(q + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[81] = uString::Const("uniform float f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = k * (clamp(0.5 - (((abs(((length(o) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((max(dot(p, l), max(dot(p, m), dot(p, n))) * i) * j), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[82] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 n = a * b;\n"
        "    m = n * e;\n"
        "    gl_Position = d * vec4(n + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[83] = uString::Const("uniform float f, g, h, i, j, l;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying vec2 m;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (k * (clamp(0.5 - (((abs(((length(m) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * float(1))) * l;\n"
        "}\n"
        "");
    ::STRINGS[84] = uString::Const("uniform float d, q;\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 y, z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 D = a * d;\n"
        "    vec2 E = D + e;\n"
        "    vec2 F = ((((g * (E / g)) - h) / i) * j) + k;\n"
        "    y = m + (F * l);\n"
        "    z = F;\n"
        "    A = D * q;\n"
        "    B = D;\n"
        "    gl_Position = f * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[85] = uString::Const("uniform vec2 o, n, v, w, x;\n"
        "uniform vec4 p;\n"
        "uniform float r, s, t, u;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 y, z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(y) * n)) : z)) * p;\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - ((((length(A) - 1.0) * r) * s) * t), float(0), float(1)) * clamp(0.5 - ((max(dot(B, v), max(dot(B, w), dot(B, x))) * s) * t), float(0), float(1)))) * u;\n"
        "}\n"
        "");
    ::STRINGS[86] = uString::Const("C");
    ::STRINGS[87] = uString::Const("uniform vec2 o, n, x, y, z;\n"
        "uniform vec4 p;\n"
        "uniform float r, s, t, u, v, w;\n"
        "\n"
        "uniform sampler2D E;\n"
        "\n"
        "varying vec2 A, B, C, D;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 F = (c ? vec4(float(0)) : texture2D(E, b ? (o + (fract(A) * n)) : B)) * p;\n"
        "    gl_FragColor = (vec4(F.xyz * F.w, F.w) * (clamp(0.5 - (((abs(((length(C) - 1.0) * r) - s) - t) * u) * v), float(0), float(1)) * clamp(0.5 - ((max(dot(D, x), max(dot(D, y), dot(D, z))) * u) * v), float(0), float(1)))) * w;\n"
        "}\n"
        "");
    ::STRINGS[88] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 k = a * b;\n"
        "    j = k * e;\n"
        "    gl_Position = d * vec4(k + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[89] = uString::Const("uniform float f, g, h;\n"
        "uniform vec4 i;\n"
        "\n"
        "varying vec2 j;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i * (clamp(0.5 - ((((length(j) - 1.0) * f) * g) * h), float(0), float(1)) * float(1));\n"
        "}\n"
        "");
    ::STRINGS[90] = uString::Const("uniform float d, q;\n"
        "uniform vec2 e, g, h, i, j, k, m, l;\n"
        "uniform mat4 f;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 v, w, x;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 z = a * d;\n"
        "    vec2 A = z + e;\n"
        "    vec2 B = ((((g * (A / g)) - h) / i) * j) + k;\n"
        "    v = m + (B * l);\n"
        "    w = B;\n"
        "    x = z * q;\n"
        "    gl_Position = f * vec4(A, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[91] = uString::Const("uniform vec2 o, n;\n"
        "uniform vec4 p;\n"
        "uniform float r, s, t, u;\n"
        "\n"
        "uniform sampler2D y;\n"
        "\n"
        "varying vec2 v, w, x;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 z = (c ? vec4(float(0)) : texture2D(y, b ? (o + (fract(v) * n)) : w)) * p;\n"
        "    gl_FragColor = (vec4(z.xyz * z.w, z.w) * (clamp(0.5 - ((((length(x) - 1.0) * r) * s) * t), float(0), float(1)) * float(1))) * u;\n"
        "}\n"
        "");
    ::STRINGS[92] = uString::Const("uniform vec2 o, n, v, w, x;\n"
        "uniform vec4 p;\n"
        "uniform float r, s, t, u;\n"
        "\n"
        "uniform sampler2D C;\n"
        "\n"
        "varying vec2 y, z, A, B;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 D = (c ? vec4(float(0)) : texture2D(C, b ? (o + (fract(y) * n)) : z)) * p;\n"
        "    gl_FragColor = (vec4(D.xyz * D.w, D.w) * (clamp(0.5 - ((((length(A) - 1.0) * r) * s) * t), float(0), float(1)) * clamp(0.5 - ((min(dot(B, v), min(dot(B, w), dot(B, x))) * s) * t), float(0), float(1)))) * u;\n"
        "}\n"
        "");
    ::STRINGS[93] = uString::Const("uniform float f, g, h, i, j;\n"
        "uniform vec2 l, m, n;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = k * (clamp(0.5 - (((abs(((length(o) - 1.0) * f) - g) - h) * i) * j), float(0), float(1)) * clamp(0.5 - ((min(dot(p, l), min(dot(p, m), dot(p, n))) * i) * j), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[94] = uString::Const("uniform float f, g, h;\n"
        "uniform vec2 j, k, l;\n"
        "uniform vec4 i;\n"
        "\n"
        "varying vec2 m, n;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i * (clamp(0.5 - ((((length(m) - 1.0) * f) * g) * h), float(0), float(1)) * clamp(0.5 - ((max(dot(n, j), max(dot(n, k), dot(n, l))) * g) * h), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[95] = uString::Const("uniform float b, e;\n"
        "uniform vec2 c;\n"
        "uniform mat4 d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 l = a * b;\n"
        "    k = l * e;\n"
        "    gl_Position = d * vec4(l + c, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[96] = uString::Const("uniform float f, g, h, j;\n"
        "uniform vec4 i;\n"
        "\n"
        "varying vec2 k;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (i * (clamp(0.5 - ((((length(k) - 1.0) * f) * g) * h), float(0), float(1)) * float(1))) * j;\n"
        "}\n"
        "");
    ::STRINGS[97] = uString::Const("uniform float b, p, g;\n"
        "uniform vec2 c, e, f, o;\n"
        "uniform mat4 d;\n"
        "uniform vec4 n;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "float t(vec2 u, vec2 v, vec2 w, float x){\n"
        "    vec2 y = (u * e) - v;\n"
        "    float z = dot(y, w) / x;\n"
        "    return (z - f.x) / f.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 u = a * b;\n"
        "    vec2 v = u + c;\n"
        "    q = t(v / e, n.xy, o, p);\n"
        "    r = u * g;\n"
        "    gl_Position = d * vec4(v, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[98] = uString::Const("uniform float h, i, j, k, l, m;\n"
        "\n"
        "uniform sampler2D s;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(s, vec2(q, 0.5)) * (clamp(0.5 - (((abs(((length(r) - 1.0) * h) - i) - j) * k) * l), float(0), float(1)) * float(1))) * m;\n"
        "}\n"
        "");
    ::STRINGS[99] = uString::Const("uniform float e[d], h;\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    o = e[int(c)];\n"
        "    p = r * h;\n"
        "    q = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\n"
        "    gl_Position = g * vec4(r, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[100] = uString::Const("uniform float i, j, k, l, m;\n"
        "uniform vec4 n;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float r = clamp(0.5 - (((abs(((distance(p, q) * i) - o) - j) - k) * l) * m), float(0), float(1));\n"
        "    gl_FragColor = n * (((r * r) * r) * ((r * ((r * float(6)) - float(15))) + float(10)));\n"
        "}\n"
        "");
    ::STRINGS[101] = uString::Const("uniform float e[d], h;\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 s = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    p = e[int(c)];\n"
        "    q = s * h;\n"
        "    r = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\n"
        "    gl_Position = g * vec4(s, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[102] = uString::Const("uniform float i, j, k, l, m, o;\n"
        "uniform vec4 n;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (n * clamp(0.5 - (((abs(((distance(q, r) * i) - p) - j) - k) * l) * m), float(0), float(1))) * o;\n"
        "}\n"
        "");
    ::STRINGS[103] = uString::Const("uniform float i, j, k, l, m, o;\n"
        "uniform vec4 n;\n"
        "\n"
        "varying float p;\n"
        "varying vec2 q, r;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float s = clamp(0.5 - (((abs(((distance(q, r) * i) - p) - j) - k) * l) * m), float(0), float(1));\n"
        "    gl_FragColor = (n * (((s * s) * s) * ((s * ((s * float(6)) - float(15))) + float(10)))) * o;\n"
        "}\n"
        "");
    ::STRINGS[104] = uString::Const("uniform float e[d], l;\n"
        "uniform vec2 f, h;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t, u, v;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 z = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    s = e[int(c)];\n"
        "    t = z / h;\n"
        "    u = z * l;\n"
        "    v = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * l;\n"
        "    gl_Position = g * vec4(z, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[105] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, m, n, o, p, q, r;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t, u, v;\n"
        "\n"
        "float w(vec2 z, vec2 A){\n"
        "    vec2 B = abs(z) - A;\n"
        "    return min(max(B.x, B.y), 0.0) + length(max(B, 0.0));\n"
        "}\n"
        "\n"
        "vec2 x(vec2 z, vec2 A){\n"
        "    return mod(z, A) - (0.5 * A);\n"
        "}\n"
        "\n"
        "float y(vec2 z){\n"
        "    vec2 A = h.xy / j;\n"
        "    ivec2 B = ivec2(A);\n"
        "\n"
        "    if (mod(float(B.x), float(2)) == float(0))\n"
        "        ++B.x;\n"
        "\n"
        "    if (mod(float(B.y), float(2)) == float(0))\n"
        "        ++B.y;\n"
        "\n"
        "    A = h.xy / vec2(B);\n"
        "    float C = w(x(z, A * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(C);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(y(t.xy * i), 0.0, 1.0)) * clamp(0.5 - (((abs(((distance(u, v) * m) - s) - n) - o) * p) * q), float(0), float(1))) * r;\n"
        "}\n"
        "");
    ::STRINGS[106] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, m, n, o, p, q, r;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float s;\n"
        "varying vec2 t, u, v;\n"
        "\n"
        "float w(vec2 z, vec2 A){\n"
        "    vec2 B = abs(z) - A;\n"
        "    return min(max(B.x, B.y), 0.0) + length(max(B, 0.0));\n"
        "}\n"
        "\n"
        "vec2 x(vec2 z, vec2 A){\n"
        "    return mod(z, A) - (0.5 * A);\n"
        "}\n"
        "\n"
        "float y(vec2 z){\n"
        "    vec2 A = h.xy / j;\n"
        "    ivec2 B = ivec2(A);\n"
        "\n"
        "    if (mod(float(B.x), float(2)) == float(0))\n"
        "        ++B.x;\n"
        "\n"
        "    if (mod(float(B.y), float(2)) == float(0))\n"
        "        ++B.y;\n"
        "\n"
        "    A = h.xy / vec2(B);\n"
        "    float C = w(x(z, A * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(C);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float z = clamp(0.5 - (((abs(((distance(u, v) * m) - s) - n) - o) * p) * q), float(0), float(1));\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(y(t.xy * i), 0.0, 1.0)) * (((z * z) * z) * ((z * ((z * float(6)) - float(15))) + float(10)))) * r;\n"
        "}\n"
        "");
    ::STRINGS[107] = uString::Const("uniform float e[d], h;\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 p = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    m = e[int(c)];\n"
        "    n = p * h;\n"
        "    o = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\n"
        "    gl_Position = g * vec4(p, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[108] = uString::Const("uniform float i, j, k;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = l * clamp(0.5 - ((((distance(n, o) * i) - m) * j) * k), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[109] = uString::Const("uniform float e[d], q, j;\n"
        "uniform vec2 f, h, i, p;\n"
        "uniform mat4 g;\n"
        "uniform vec4 o;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "float w(vec2 x, vec2 y, vec2 z, float A){\n"
        "    vec2 B = (x * h) - y;\n"
        "    float C = dot(B, z) / A;\n"
        "    return (C - i.x) / i.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    r = e[int(c)];\n"
        "    s = w(x / h, o.xy, p, q);\n"
        "    t = x * j;\n"
        "    u = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * j;\n"
        "    gl_Position = g * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[110] = uString::Const("uniform float k, l, m, n;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * clamp(0.5 - ((((distance(t, u) * k) - r) * l) * m), float(0), float(1))) * n;\n"
        "}\n"
        "");
    ::STRINGS[111] = uString::Const("uniform float k, l, m, n;\n"
        "\n"
        "uniform sampler2D v;\n"
        "\n"
        "varying float r, s;\n"
        "varying vec2 t, u;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float x = clamp(0.5 - ((((distance(t, u) * k) - r) * l) * m), float(0), float(1));\n"
        "    gl_FragColor = (texture2D(v, vec2(s, 0.5)) * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10)))) * n;\n"
        "}\n"
        "");
    ::STRINGS[112] = uString::Const("uniform float e[d], l;\n"
        "uniform vec2 f, h;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r, s, t;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 x = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    q = e[int(c)];\n"
        "    r = x / h;\n"
        "    s = x * l;\n"
        "    t = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * l;\n"
        "    gl_Position = g * vec4(x, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[113] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, m, n, o, p;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r, s, t;\n"
        "\n"
        "float u(vec2 x, vec2 y){\n"
        "    vec2 z = abs(x) - y;\n"
        "    return min(max(z.x, z.y), 0.0) + length(max(z, 0.0));\n"
        "}\n"
        "\n"
        "vec2 v(vec2 x, vec2 y){\n"
        "    return mod(x, y) - (0.5 * y);\n"
        "}\n"
        "\n"
        "float w(vec2 x){\n"
        "    vec2 y = h.xy / j;\n"
        "    ivec2 z = ivec2(y);\n"
        "\n"
        "    if (mod(float(z.x), float(2)) == float(0))\n"
        "        ++z.x;\n"
        "\n"
        "    if (mod(float(z.y), float(2)) == float(0))\n"
        "        ++z.y;\n"
        "\n"
        "    y = h.xy / vec2(z);\n"
        "    float A = u(v(x, y * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(A);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(w(r.xy * i), 0.0, 1.0)) * clamp(0.5 - ((((distance(s, t) * m) - q) * n) * o), float(0), float(1))) * p;\n"
        "}\n"
        "");
    ::STRINGS[114] = uString::Const("uniform float i, j, k;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float m;\n"
        "varying vec2 n, o;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float p = clamp(0.5 - ((((distance(n, o) * i) - m) * j) * k), float(0), float(1));\n"
        "    gl_FragColor = l * (((p * p) * p) * ((p * ((p * float(6)) - float(15))) + float(10)));\n"
        "}\n"
        "");
    ::STRINGS[115] = uString::Const("uniform float g[d], t;\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float A;\n"
        "varying vec2 B, C, D, E;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 G = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 H = ((((j * (G / j)) - k) / l) * m) + n;\n"
        "    A = g[int(c)];\n"
        "    B = p + (H * o);\n"
        "    C = H;\n"
        "    D = G * t;\n"
        "    E = (vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h) * t;\n"
        "    gl_Position = i * vec4(G, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[116] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float u, v, w, x, y, z;\n"
        "\n"
        "uniform sampler2D F;\n"
        "\n"
        "varying float A;\n"
        "varying vec2 B, C, D, E;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 G = (f ? vec4(float(0)) : texture2D(F, e ? (r + (fract(B) * q)) : C)) * s;\n"
        "    gl_FragColor = (vec4(G.xyz * G.w, G.w) * clamp(0.5 - (((abs(((distance(D, E) * u) - A) - v) - w) * x) * y), float(0), float(1))) * z;\n"
        "}\n"
        "");
    ::STRINGS[117] = uString::Const("F");
    ::STRINGS[118] = uString::Const("uniform float e[d], s, j;\n"
        "uniform vec2 f, h, i, r;\n"
        "uniform mat4 g;\n"
        "uniform vec4 q;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float t, u;\n"
        "varying vec2 v, w;\n"
        "\n"
        "float y(vec2 z, vec2 A, vec2 B, float C){\n"
        "    vec2 D = (z * h) - A;\n"
        "    float E = dot(D, B) / C;\n"
        "    return (E - i.x) / i.y;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 z = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    t = e[int(c)];\n"
        "    u = y(z / h, q.xy, r, s);\n"
        "    v = z * j;\n"
        "    w = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * j;\n"
        "    gl_Position = g * vec4(z, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[119] = uString::Const("uniform float k, l, m, n, o, p;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying float t, u;\n"
        "varying vec2 v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (texture2D(x, vec2(u, 0.5)) * clamp(0.5 - (((abs(((distance(v, w) * k) - t) - l) - m) * n) * o), float(0), float(1))) * p;\n"
        "}\n"
        "");
    ::STRINGS[120] = uString::Const("uniform vec2 i, h;\n"
        "uniform float j, m, n, o, p;\n"
        "uniform vec4 k;\n"
        "\n"
        "varying float q;\n"
        "varying vec2 r, s, t;\n"
        "\n"
        "float u(vec2 x, vec2 y){\n"
        "    vec2 z = abs(x) - y;\n"
        "    return min(max(z.x, z.y), 0.0) + length(max(z, 0.0));\n"
        "}\n"
        "\n"
        "vec2 v(vec2 x, vec2 y){\n"
        "    return mod(x, y) - (0.5 * y);\n"
        "}\n"
        "\n"
        "float w(vec2 x){\n"
        "    vec2 y = h.xy / j;\n"
        "    ivec2 z = ivec2(y);\n"
        "\n"
        "    if (mod(float(z.x), float(2)) == float(0))\n"
        "        ++z.x;\n"
        "\n"
        "    if (mod(float(z.y), float(2)) == float(0))\n"
        "        ++z.y;\n"
        "\n"
        "    y = h.xy / vec2(z);\n"
        "    float A = u(v(x, y * float(2)) + vec2(j), vec2(j));\n"
        "    return -floor(A);\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float x = clamp(0.5 - ((((distance(s, t) * m) - q) * n) * o), float(0), float(1));\n"
        "    gl_FragColor = (mix(vec4(float(0)), k, clamp(w(r.xy * i), 0.0, 1.0)) * (((x * x) * x) * ((x * ((x * float(6)) - float(15))) + float(10)))) * p;\n"
        "}\n"
        "");
    ::STRINGS[121] = uString::Const("uniform float g[d], t;\n"
        "uniform vec2 h, j, k, l, m, n, p, o;\n"
        "uniform mat4 i;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 E = vec2((sign(a.x) * g[int(abs(a.x))]) + (sign(a.y) * g[int(abs(a.y))]), (sign(a.z) * g[int(abs(a.z))]) + (sign(a.w) * g[int(abs(a.w))])) + h;\n"
        "    vec2 F = ((((j * (E / j)) - k) / l) * m) + n;\n"
        "    y = g[int(c)];\n"
        "    z = p + (F * o);\n"
        "    A = F;\n"
        "    B = E * t;\n"
        "    C = (vec2((sign(b.x) * g[int(abs(b.x))]) + (sign(b.y) * g[int(abs(b.y))]), (sign(b.z) * g[int(abs(b.z))]) + (sign(b.w) * g[int(abs(b.w))])) + h) * t;\n"
        "    gl_Position = i * vec4(E, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[122] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * clamp(0.5 - ((((distance(B, C) * u) - y) * v) * w), float(0), float(1))) * x;\n"
        "}\n"
        "");
    ::STRINGS[123] = uString::Const("D");
    ::STRINGS[124] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float u, v, w, x;\n"
        "\n"
        "uniform sampler2D D;\n"
        "\n"
        "varying float y;\n"
        "varying vec2 z, A, B, C;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 E = (f ? vec4(float(0)) : texture2D(D, e ? (r + (fract(z) * q)) : A)) * s;\n"
        "    float F = clamp(0.5 - ((((distance(B, C) * u) - y) * v) * w), float(0), float(1));\n"
        "    gl_FragColor = (vec4(E.xyz * E.w, E.w) * (((F * F) * F) * ((F * ((F * float(6)) - float(15))) + float(10)))) * x;\n"
        "}\n"
        "");
    ::STRINGS[125] = uString::Const("uniform float i, j, k, l, m;\n"
        "uniform vec4 n;\n"
        "\n"
        "varying float o;\n"
        "varying vec2 p, q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = n * clamp(0.5 - (((abs(((distance(p, q) * i) - o) - j) - k) * l) * m), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[126] = uString::Const("uniform float k, l, m, n, o, p;\n"
        "\n"
        "uniform sampler2D x;\n"
        "\n"
        "varying float t, u;\n"
        "varying vec2 v, w;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float z = clamp(0.5 - (((abs(((distance(v, w) * k) - t) - l) - m) * n) * o), float(0), float(1));\n"
        "    gl_FragColor = (texture2D(x, vec2(u, 0.5)) * (((z * z) * z) * ((z * ((z * float(6)) - float(15))) + float(10)))) * p;\n"
        "}\n"
        "");
    ::STRINGS[127] = uString::Const("uniform float e[d], h;\n"
        "uniform vec2 f;\n"
        "uniform mat4 g;\n"
        "\n"
        "attribute vec4 a, b;\n"
        "attribute float c;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 q = vec2((sign(a.x) * e[int(abs(a.x))]) + (sign(a.y) * e[int(abs(a.y))]), (sign(a.z) * e[int(abs(a.z))]) + (sign(a.w) * e[int(abs(a.w))])) + f;\n"
        "    n = e[int(c)];\n"
        "    o = q * h;\n"
        "    p = (vec2((sign(b.x) * e[int(abs(b.x))]) + (sign(b.y) * e[int(abs(b.y))]), (sign(b.z) * e[int(abs(b.z))]) + (sign(b.w) * e[int(abs(b.w))])) + f) * h;\n"
        "    gl_Position = g * vec4(q, 0., 1.);\n"
        "}\n"
        "");
    ::STRINGS[128] = uString::Const("uniform float i, j, k, m;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = (l * clamp(0.5 - ((((distance(o, p) * i) - n) * j) * k), float(0), float(1))) * m;\n"
        "}\n"
        "");
    ::STRINGS[129] = uString::Const("uniform vec2 r, q;\n"
        "uniform vec4 s;\n"
        "uniform float u, v, w, x, y, z;\n"
        "\n"
        "uniform sampler2D F;\n"
        "\n"
        "varying float A;\n"
        "varying vec2 B, C, D, E;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 G = (f ? vec4(float(0)) : texture2D(F, e ? (r + (fract(B) * q)) : C)) * s;\n"
        "    float H = clamp(0.5 - (((abs(((distance(D, E) * u) - A) - v) - w) * x) * y), float(0), float(1));\n"
        "    gl_FragColor = (vec4(G.xyz * G.w, G.w) * (((H * H) * H) * ((H * ((H * float(6)) - float(15))) + float(10)))) * z;\n"
        "}\n"
        "");
    ::STRINGS[130] = uString::Const("uniform float i, j, k, m;\n"
        "uniform vec4 l;\n"
        "\n"
        "varying float n;\n"
        "varying vec2 o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    float q = clamp(0.5 - ((((distance(o, p) * i) - n) * j) * k), float(0), float(1));\n"
        "    gl_FragColor = (l * (((q * q) * q) * ((q * ((q * float(6)) - float(15))) + float(10)))) * m;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle0756ecfb_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle08faad29_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle11a7e996_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle14c4da1d_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle240d45f6_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle2ad0f86f_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle3cc69ea6_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle4eb54f01_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle4f17d172_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle5116898d_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle5c7bf5c2_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle6f96fc09_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle6fa31eb0_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle731c9041_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle749c4263_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle7e8f9c01_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle91d9beaf_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle9ba5ce77_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circle9dea10a3_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circleb95e9034_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlebe0c57c7_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlecd64a2fe_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circled03fdf74_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circled0cee2fd_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circledc12e66f_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circledfe84c53_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlee0319d48_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlee17e57be_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circleed7a4684_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Circlef89e5004_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle077c3378_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle0d95ac89_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle277ecc8b_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle2a980758_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle443ab62b_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle55280bee_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle6cc3b044_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7575b8fd_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7df074e3_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle7ebb267b_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle92dbce62_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangle96567dcc_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglea4c63db0_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleae3d51b5_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleaf680338_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleb91c47bc_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleb9bd3313_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglecb05e1d1_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectangleeea60686_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseDrawingPrimitives_bundle::Rectanglef9806da2_, uFieldFlagsStatic);
}

uClassType* FuseDrawingPrimitives_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 50;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseDrawingPrimitives_bundle", options);
    type->fp_build_ = FuseDrawingPrimitives_bundle_build;
    type->fp_cctor_ = FuseDrawingPrimitives_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle0756ecfb_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle08faad29_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle11a7e996_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle14c4da1d_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle240d45f6_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle2ad0f86f_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle3cc69ea6_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4eb54f01_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle4f17d172_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle5116898d_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle5c7bf5c2_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle6f96fc09_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle6fa31eb0_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle731c9041_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle749c4263_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle7e8f9c01_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle91d9beaf_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle9ba5ce77_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circle9dea10a3_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleb95e9034_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlebe0c57c7_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlecd64a2fe_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled03fdf74_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circled0cee2fd_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circledc12e66f_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circledfe84c53_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee0319d48_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlee17e57be_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circleed7a4684_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Circlef89e5004_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle077c3378_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle0d95ac89_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle277ecc8b_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle2a980758_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle443ab62b_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle55280bee_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle6cc3b044_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7575b8fd_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7df074e3_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle7ebb267b_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle92dbce62_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangle96567dcc_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglea4c63db0_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleae3d51b5_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleaf680338_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb91c47bc_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleb9bd3313_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglecb05e1d1_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectangleeea60686_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseDrawingPrimitives_bundle::Rectanglef9806da2_;
// }

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Effects/2.2.1/.uno/package
// -----------------------------------------------------------------------------

// public static generated class FuseEffects_bundle
// {
// static FuseEffects_bundle()
static void FuseEffects_bundle__cctor__fn(uType* __type)
{
    FuseEffects_bundle::Blitter1d578c84_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[131/*"uniform mat...*/], ::STRINGS[132/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseEffects_bundle::Desaturate52284f19_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[133/*"uniform mat...*/], ::STRINGS[134/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[6/*"f"*/]));
    FuseEffects_bundle::Duotone6b7b565b_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[131/*"uniform mat...*/], ::STRINGS[135/*"uniform vec...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseEffects_bundle::EffectHelpers074a19b5_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[136/*"attribute v...*/], ::STRINGS[137/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 2, ::STRINGS[2/*"a"*/], ::STRINGS[4/*"c"*/]));
    FuseEffects_bundle::EffectHelpers153da7bd_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[138/*"uniform vec...*/], ::STRINGS[139/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 8, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[22/*"m"*/]));
    FuseEffects_bundle::EffectHelpers1a4b9670_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[140/*"uniform vec...*/], ::STRINGS[141/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 11, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[27/*"t"*/]));
    FuseEffects_bundle::EffectHelpers97b71f66_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[142/*"attribute v...*/], ::STRINGS[143/*"uniform flo...*/], 3, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[2/*"a"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[13/*"h"*/]));
    FuseEffects_bundle::Halftoneaae31088_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[144/*"uniform mat...*/], ::STRINGS[145/*"uniform flo...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 14, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[26/*"q"*/]));
    FuseEffects_bundle::Mask0d198862_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[147/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
    FuseEffects_bundle::Mask5ca119d4_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[148/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
    FuseEffects_bundle::Mask89aabfb4_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[146/*"uniform mat...*/], ::STRINGS[149/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 7, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/]));
}

static void FuseEffects_bundle_build(uType* type)
{
    ::STRINGS[131] = uString::Const("uniform mat4 f, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    g = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (f * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[132] = uString::Const("uniform vec3 e;\n"
        "uniform float c, d;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = vec4(e, clamp(texture2D(h, g).w * c, float(0), float(1)) * d);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[133] = uString::Const("uniform mat4 d, b;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    gl_Position = b * (d * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[134] = uString::Const("uniform float c;\n"
        "\n"
        "uniform sampler2D f;\n"
        "\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 g = texture2D(f, e);\n"
        "    vec4 h = vec4(g.xyz / max(g.w, 1e-05), g.w);\n"
        "    gl_FragColor = vec4(mix(h.xyz, vec3(sqrt(dot(h.xyz * h.xyz, vec3(0.299, 0.587, 0.114)))), c), h.w);\n"
        "}\n"
        "");
    ::STRINGS[135] = uString::Const("uniform vec3 c, d;\n"
        "uniform float e;\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 i = texture2D(h, g);\n"
        "    vec4 j = vec4(i.xyz / max(i.w, 1e-05), i.w);\n"
        "    gl_FragColor = vec4(mix(j.xyz, mix(c, d, sqrt(dot(j.xyz * j.xyz, vec3(0.299, 0.587, 0.114)))).xyz, e), j.w);\n"
        "}\n"
        "");
    ::STRINGS[136] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 d = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    b = (d.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(d, float(1));\n"
        "}\n"
        "");
    ::STRINGS[137] = uString::Const("uniform sampler2D c;\n"
        "\n"
        "varying vec2 b;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(c, b);\n"
        "}\n"
        "");
    ::STRINGS[138] = uString::Const("uniform vec2 c, e, f, g;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 n = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 o = (n.xy * 0.5) + 0.5;\n"
        "    h = o;\n"
        "    i = o + c;\n"
        "    j = o + e;\n"
        "    k = o + f;\n"
        "    l = o + g;\n"
        "    gl_Position = vec4(n, float(1));\n"
        "}\n"
        "");
    ::STRINGS[139] = uString::Const("uniform float b, d;\n"
        "\n"
        "uniform sampler2D m;\n"
        "\n"
        "varying vec2 h, i, j, k, l;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((texture2D(m, h) * b) + (texture2D(m, i) * d)) + (texture2D(m, j) * d)) + (texture2D(m, k) * d)) + (texture2D(m, l) * d);\n"
        "}\n"
        "");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[22] = uString::Const("m");
    ::STRINGS[140] = uString::Const("uniform vec2 c, e, f, h, i, j;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 u = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    vec2 v = (u.xy * 0.5) + 0.5;\n"
        "    k = v;\n"
        "    l = v + c;\n"
        "    m = v - c;\n"
        "    n = v + e;\n"
        "    o = v - e;\n"
        "    p = v + f;\n"
        "    q = v + h;\n"
        "    r = v + i;\n"
        "    s = v + j;\n"
        "    gl_Position = vec4(u, float(1));\n"
        "}\n"
        "");
    ::STRINGS[141] = uString::Const("uniform float b, d, g;\n"
        "\n"
        "uniform sampler2D t;\n"
        "\n"
        "varying vec2 k, l, m, n, o, p, q, r, s;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = ((((((((texture2D(t, k) * b) + (texture2D(t, l) * d)) + (texture2D(t, m) * d)) + (texture2D(t, n) * d)) + (texture2D(t, o) * d)) + (texture2D(t, p) * g)) + (texture2D(t, q) * g)) + (texture2D(t, r) * g)) + (texture2D(t, s) * g);\n"
        "}\n"
        "");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[27] = uString::Const("t");
    ::STRINGS[142] = uString::Const("attribute vec2 a;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec3 j = vec3((a.xy * vec2(float(2), float(2))) + vec3(float(-1), float(-1), float(0)).xy, float(0));\n"
        "    g = (j.xy * 0.5) + 0.5;\n"
        "    gl_Position = vec4(j, float(1));\n"
        "}\n"
        "");
    ::STRINGS[143] = uString::Const("uniform float e[b];\n"
        "uniform vec2 f[d];\n"
        "\n"
        "uniform sampler2D h;\n"
        "\n"
        "varying vec2 g;\n"
        "\n"
        "vec4 i(vec2 j){\n"
        "    vec4 k = texture2D(h, j) * e[0];\n"
        "\n"
        "    for (int l = 0; l < c; ++l)\n"
        "    {\n"
        "        k = k + (texture2D(h, j + f[l]) * e[1 + l]);\n"
        "        k = k + (texture2D(h, j - f[l]) * e[1 + l]);\n"
        "    }\n"
        "\n"
        "    return k;\n"
        "}\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = i(g);\n"
        "}\n"
        "");
    ::STRINGS[144] = uString::Const("uniform mat4 m, b;\n"
        "uniform vec2 g, h;\n"
        "uniform mat2 i;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 r = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    vec2 s = (r * g) + h;\n"
        "    n = r;\n"
        "    o = i * s;\n"
        "    p = s;\n"
        "    gl_Position = b * (m * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[145] = uString::Const("uniform float c, d, e, f, k, l;\n"
        "uniform mat2 j;\n"
        "\n"
        "uniform sampler2D q;\n"
        "\n"
        "varying vec2 n, o, p;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 r = texture2D(q, n);\n"
        "    gl_FragColor = mix(mix(vec4(float(1), float(1), float(1), r.w), r, c), mix(vec4(float(0), float(0), float(0), r.w), r, d), clamp(0.5 - ((((((float(1) - sqrt((float(1) - dot(r.xyz * r.xyz, vec3(0.299, 0.587, 0.114))) / 3.14159274)) * e) * f) - length(p - (j * ((floor(o / e) + 0.5) * e)))) * k) * l), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[21] = uString::Const("k");
    ::STRINGS[16] = uString::Const("l");
    ::STRINGS[26] = uString::Const("q");
    ::STRINGS[146] = uString::Const("uniform mat4 e, b;\n"
        "uniform vec2 c, d;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec2 j = true ? vec2(a.x, float(1) - a.y) : a;\n"
        "    f = j;\n"
        "    g = (vec2(j.x, float(1) - j.y) * c) + d;\n"
        "    gl_Position = b * (e * vec4(vec3(a, float(0)), 1.));\n"
        "}\n"
        "");
    ::STRINGS[147] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).w;\n"
        "}\n"
        "");
    ::STRINGS[148] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    vec4 j = texture2D(i, g);\n"
        "    gl_FragColor = texture2D(h, f) * vec4(j.xyz * j.w, j.w);\n"
        "}\n"
        "");
    ::STRINGS[149] = uString::Const("uniform sampler2D h, i;\n"
        "\n"
        "varying vec2 f, g;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(h, f) * texture2D(i, g).x;\n"
        "}\n"
        "");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Blitter1d578c84_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Desaturate52284f19_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Duotone6b7b565b_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers074a19b5_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers153da7bd_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers1a4b9670_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::EffectHelpers97b71f66_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Halftoneaae31088_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Mask0d198862_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Mask5ca119d4_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseEffects_bundle::Mask89aabfb4_, uFieldFlagsStatic);
}

uClassType* FuseEffects_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 11;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseEffects_bundle", options);
    type->fp_build_ = FuseEffects_bundle_build;
    type->fp_cctor_ = FuseEffects_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::Blitter1d578c84_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::Desaturate52284f19_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::Duotone6b7b565b_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers074a19b5_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers153da7bd_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers1a4b9670_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::EffectHelpers97b71f66_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::Halftoneaae31088_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::Mask0d198862_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::Mask5ca119d4_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseEffects_bundle::Mask89aabfb4_;
// }

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Elements/2.2.1/.uno/package
// ------------------------------------------------------------------------------

// public static generated class FuseElements_bundle
// {
// static FuseElements_bundle()
static void FuseElements_bundle__cctor__fn(uType* __type)
{
    FuseElements_bundle::ElementBatch016550d8_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[150/*"uniform mat...*/], ::STRINGS[151/*"uniform sam...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[6/*"f"*/]));
    FuseElements_bundle::RepeatBaker794c9b5a_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[152/*"uniform vec...*/], ::STRINGS[153/*"uniform sam...*/], 0, 1, uArray::Init<uString*>(::TYPES[0/*string[]*/], 4, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[11/*"e"*/]));
    FuseElements_bundle::Scale9Rectangle6690f152_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[154/*"uniform flo...*/], ::STRINGS[155/*"uniform vec...*/], 0, 2, uArray::Init<uString*>(::TYPES[0/*string[]*/], 17, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[11/*"e"*/], ::STRINGS[6/*"f"*/], ::STRINGS[12/*"g"*/], ::STRINGS[13/*"h"*/], ::STRINGS[14/*"i"*/], ::STRINGS[15/*"j"*/], ::STRINGS[21/*"k"*/], ::STRINGS[16/*"l"*/], ::STRINGS[22/*"m"*/], ::STRINGS[23/*"n"*/], ::STRINGS[24/*"o"*/], ::STRINGS[25/*"p"*/], ::STRINGS[40/*"r"*/]));
}

static void FuseElements_bundle_build(uType* type)
{
    ::STRINGS[150] = uString::Const("uniform mat4 c;\n"
        "\n"
        "attribute vec3 a;\n"
        "attribute vec2 b;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = a.z;\n"
        "    e = vec2(b.x, 1.0 - b.y);\n"
        "    gl_Position = (a.z > float(0)) ? (c * vec4(a.xy, float(0), float(1))) : vec4(float(0), float(0), float(0), float(-1));\n"
        "}\n"
        "");
    ::STRINGS[151] = uString::Const("uniform sampler2D f;\n"
        "\n"
        "varying float d;\n"
        "varying vec2 e;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(f, e) * d;\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[6] = uString::Const("f");
    ::STRINGS[152] = uString::Const("uniform vec2 b, c;\n"
        "\n"
        "attribute vec2 a;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    d = (a * b) / c;\n"
        "    gl_Position = vec4((a * float(2)) - float(1), float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[153] = uString::Const("uniform sampler2D e;\n"
        "\n"
        "varying vec2 d;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(e, fract(d));\n"
        "}\n"
        "");
    ::STRINGS[11] = uString::Const("e");
    ::STRINGS[154] = uString::Const("uniform float c, d, e, f, g, h, k, l, m, n;\n"
        "uniform mat4 i, j;\n"
        "uniform vec2 o;\n"
        "\n"
        "attribute vec3 a, b;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    q = vec2(((a.x * c) + (a.y * k)) + (a.z * l), ((b.x * f) + (b.y * m)) + (b.z * n)) / o;\n"
        "    gl_Position = j * (i * vec4(vec2(((a.x * c) + (a.y * d)) + (a.z * e), ((b.x * f) + (b.y * g)) + (b.z * h)), float(0), float(1)));\n"
        "}\n"
        "");
    ::STRINGS[155] = uString::Const("uniform vec4 p;\n"
        "\n"
        "uniform sampler2D r;\n"
        "\n"
        "varying vec2 q;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = texture2D(r, q) * p;\n"
        "}\n"
        "");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("g");
    ::STRINGS[13] = uString::Const("h");
    ::STRINGS[14] = uString::Const("i");
    ::STRINGS[15] = uString::Const("j");
    ::STRINGS[21] = uString::Const("k");
    ::STRINGS[16] = uString::Const("l");
    ::STRINGS[22] = uString::Const("m");
    ::STRINGS[23] = uString::Const("n");
    ::STRINGS[24] = uString::Const("o");
    ::STRINGS[25] = uString::Const("p");
    ::STRINGS[40] = uString::Const("r");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::ElementBatch016550d8_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::RepeatBaker794c9b5a_, uFieldFlagsStatic,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&FuseElements_bundle::Scale9Rectangle6690f152_, uFieldFlagsStatic);
}

uClassType* FuseElements_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseElements_bundle", options);
    type->fp_build_ = FuseElements_bundle_build;
    type->fp_cctor_ = FuseElements_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseElements_bundle::ElementBatch016550d8_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseElements_bundle::RepeatBaker794c9b5a_;
uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> FuseElements_bundle::Scale9Rectangle6690f152_;
// }

// /Users/morten/fuse-open/fuselibs/Source/build/Fuse.Scripting.JavaScript/2.2.1/.uno/package
// ------------------------------------------------------------------------------------------

// public static generated class FuseScriptingJavaScript_bundle
// {
// static FuseScriptingJavaScript_bundle()
static void FuseScriptingJavaScript_bundle__cctor__fn(uType* __type)
{
    ::g::Uno::IO::Bundle_typeof()->Init();
    FuseScriptingJavaScript_bundle::Diagnostics6b26da95_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[156/*"Fuse.Script...*/]))->GetFile(::STRINGS[157/*"FuseJS/Diag...*/]);
    FuseScriptingJavaScript_bundle::es6promisemin11b10212_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[156/*"Fuse.Script...*/]))->GetFile(::STRINGS[158/*"3rdparty/es...*/]);
    FuseScriptingJavaScript_bundle::Observable5e5b61c7_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[156/*"Fuse.Script...*/]))->GetFile(::STRINGS[159/*"FuseJS/Obse...*/]);
    FuseScriptingJavaScript_bundle::setTimeout80a8de06_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[156/*"Fuse.Script...*/]))->GetFile(::STRINGS[160/*"FuseJS/setT...*/]);
    FuseScriptingJavaScript_bundle::TreeObservablea407670a_ = uPtr(::g::Uno::IO::Bundle::Get(::STRINGS[156/*"Fuse.Script...*/]))->GetFile(::STRINGS[161/*"FuseJS/Tree...*/]);
}

static void FuseScriptingJavaScript_bundle_build(uType* type)
{
    ::STRINGS[156] = uString::Const("Fuse.Scripting.JavaScript");
    ::STRINGS[157] = uString::Const("FuseJS/Diagnostics.js");
    ::STRINGS[158] = uString::Const("3rdparty/es6-promise.min.js");
    ::STRINGS[159] = uString::Const("FuseJS/Observable.js");
    ::STRINGS[160] = uString::Const("FuseJS/setTimeout.js");
    ::STRINGS[161] = uString::Const("FuseJS/TreeObservable.js");
    type->SetFields(0,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::Diagnostics6b26da95_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::es6promisemin11b10212_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::Observable5e5b61c7_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::setTimeout80a8de06_, uFieldFlagsStatic,
        ::g::Uno::IO::BundleFile_typeof(), (uintptr_t)&FuseScriptingJavaScript_bundle::TreeObservablea407670a_, uFieldFlagsStatic);
}

uClassType* FuseScriptingJavaScript_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("FuseScriptingJavaScript_bundle", options);
    type->fp_build_ = FuseScriptingJavaScript_bundle_build;
    type->fp_cctor_ = FuseScriptingJavaScript_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::Diagnostics6b26da95_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::es6promisemin11b10212_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::Observable5e5b61c7_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::setTimeout80a8de06_;
uSStrong< ::g::Uno::IO::BundleFile*> FuseScriptingJavaScript_bundle::TreeObservablea407670a_;
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/.uno/package
// ------------------------------------------------------------------------------------------------------------

// public static generated class UnoGraphicsUtils_bundle
// {
// static UnoGraphicsUtils_bundle()
static void UnoGraphicsUtils_bundle__cctor__fn(uType* __type)
{
    UnoGraphicsUtils_bundle::SpriteFontShaderf1bd4d8d_ = ::g::Uno::Graphics::OpenGL::GLProgram::Create(::STRINGS[162/*"uniform mat...*/], ::STRINGS[163/*"uniform sam...*/], 0, 3, uArray::Init<uString*>(::TYPES[0/*string[]*/], 5, ::STRINGS[2/*"a"*/], ::STRINGS[3/*"b"*/], ::STRINGS[4/*"c"*/], ::STRINGS[5/*"d"*/], ::STRINGS[12/*"g"*/]));
}

static void UnoGraphicsUtils_bundle_build(uType* type)
{
    ::STRINGS[162] = uString::Const("uniform mat4 d;\n"
        "\n"
        "attribute vec2 a, c;\n"
        "attribute vec4 b;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    e = c;\n"
        "    f = b;\n"
        "    gl_Position = d * vec4(a, float(0), float(1));\n"
        "}\n"
        "");
    ::STRINGS[163] = uString::Const("uniform sampler2D g;\n"
        "\n"
        "varying vec2 e;\n"
        "varying vec4 f;\n"
        "\n"
        "void main()\n"
        "{\n"
        "    gl_FragColor = f * vec4(float(1), float(1), float(1), texture2D(g, e).x);\n"
        "}\n"
        "");
    ::STRINGS[2] = uString::Const("a");
    ::STRINGS[3] = uString::Const("b");
    ::STRINGS[4] = uString::Const("c");
    ::STRINGS[5] = uString::Const("d");
    ::STRINGS[12] = uString::Const("g");
    ::TYPES[0] = ::g::Uno::String_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Graphics::OpenGL::GLProgram_typeof(), (uintptr_t)&UnoGraphicsUtils_bundle::SpriteFontShaderf1bd4d8d_, uFieldFlagsStatic);
}

uClassType* UnoGraphicsUtils_bundle_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("UnoGraphicsUtils_bundle", options);
    type->fp_build_ = UnoGraphicsUtils_bundle_build;
    type->fp_cctor_ = UnoGraphicsUtils_bundle__cctor__fn;
    return type;
}

uSStrong< ::g::Uno::Graphics::OpenGL::GLProgram*> UnoGraphicsUtils_bundle::SpriteFontShaderf1bd4d8d_;
// }

} // ::g
