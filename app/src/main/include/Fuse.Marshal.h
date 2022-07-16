// This file was generated based on '../Source/Fuse.Marshal/Marshal.Convert.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace Fuse{struct Computer;}}
namespace g{namespace Fuse{struct Marshal;}}
namespace g{namespace Uno{namespace Collections{struct Dictionary;}}}
namespace g{namespace Uno{namespace Collections{struct List;}}}
namespace g{namespace Uno{namespace UX{struct Size;}}}
namespace g{namespace Uno{namespace UX{struct Size2;}}}
namespace g{namespace Uno{struct Float2;}}
namespace g{namespace Uno{struct Float3;}}
namespace g{namespace Uno{struct Float4;}}

namespace g{
namespace Fuse{

// public partial static class Marshal
// {
uClassType* Marshal_typeof();
void Marshal__AddConverter_fn(uObject* conv);
void Marshal__CanConvertClass_fn(uType* t, bool* __retval);
void Marshal__Is_fn(uObject* obj, uType* t, bool* __retval);
void Marshal__ToBool_fn(uObject* v, bool* __retval);
void Marshal__ToDouble_fn(uObject* v, double* __retval);
void Marshal__ToFloat_fn(uObject* o, float* __retval);
void Marshal__ToFloat2_fn(uObject* o, ::g::Uno::Float2* __retval);
void Marshal__ToFloat3_fn(uObject* o, ::g::Uno::Float3* __retval);
void Marshal__ToFloat4_fn(float* f, ::g::Uno::Float4* __retval);
void Marshal__ToFloat41_fn(::g::Uno::Float2* f, ::g::Uno::Float4* __retval);
void Marshal__ToFloat42_fn(::g::Uno::Float3* f, ::g::Uno::Float4* __retval);
void Marshal__ToFloat43_fn(uObject* o, ::g::Uno::Float4* __retval);
void Marshal__ToInt_fn(uObject* o, int32_t* __retval);
void Marshal__ToSize_fn(uObject* o, ::g::Uno::UX::Size* __retval);
void Marshal__ToSize2_fn(uObject* o, ::g::Uno::UX::Size2* __retval);
void Marshal__ToType_fn(uType* __type, uObject* o, uTRef __retval);
void Marshal__TryConvertTo_fn(uType* t, uObject* o, uObject** res, uObject* diagnosticSource, bool* __retval);
void Marshal__TryStringToFloat_fn(uString* o, float* result, bool* __retval);
void Marshal__TryStringToFloat2_fn(uString* o, ::g::Uno::Float2* result, bool* __retval);
void Marshal__TryStringToFloat3_fn(uString* o, ::g::Uno::Float3* result, bool* __retval);
void Marshal__TryStringToFloat4_fn(uString* o, ::g::Uno::Float4* result, bool* __retval);
void Marshal__TryStringToSize_fn(uString* o, ::g::Uno::UX::Size* result, bool* __retval);
void Marshal__TryStringToSize2_fn(uString* o, ::g::Uno::UX::Size2* result, int32_t* count, bool* __retval);
void Marshal__TryToDouble_fn(uObject* v, double* res, bool* __retval);
void Marshal__TryToDouble1_fn(uString* s, double* res, bool* __retval);
void Marshal__TryToFloat_fn(uObject* v, float* res, bool* __retval);
void Marshal__TryToSize_fn(uObject* o, ::g::Uno::UX::Size* result, bool* __retval);
void Marshal__TryToSize2_fn(uObject* o, ::g::Uno::UX::Size2* result, bool* __retval);
void Marshal__TryToSize21_fn(uObject* o, ::g::Uno::UX::Size2* result, int32_t* count, bool* __retval);
void Marshal__TryToType_fn(uType* __type, uObject* o, uTRef res, bool* __retval);
void Marshal__TryToZeroFloat4_fn(uObject* o, ::g::Uno::Float4* value, int32_t* size, bool* __retval);

struct Marshal : uObject
{
    static uSStrong< ::g::Uno::Collections::List*> _converters_;
    static uSStrong< ::g::Uno::Collections::List*>& _converters() { return Marshal_typeof()->Init(), _converters_; }
    static uSStrong< ::g::Uno::Collections::Dictionary*> _computers_;
    static uSStrong< ::g::Uno::Collections::Dictionary*>& _computers() { return Marshal_typeof()->Init(), _computers_; }

    static void AddConverter(uObject* conv);
    static bool CanConvertClass(uType* t);
    static bool Is(uObject* obj, uType* t);
    static bool ToBool(uObject* v);
    static double ToDouble(uObject* v);
    static float ToFloat(uObject* o);
    static ::g::Uno::Float2 ToFloat2(uObject* o);
    static ::g::Uno::Float3 ToFloat3(uObject* o);
    static ::g::Uno::Float4 ToFloat4(float f);
    static ::g::Uno::Float4 ToFloat41(::g::Uno::Float2 f);
    static ::g::Uno::Float4 ToFloat42(::g::Uno::Float3 f);
    static ::g::Uno::Float4 ToFloat43(uObject* o);
    static int32_t ToInt(uObject* o);
    static ::g::Uno::UX::Size ToSize(uObject* o);
    static ::g::Uno::UX::Size2 ToSize2(uObject* o);
    template<class T>
    static T ToType(uType* __type, uObject* o) { T __retval; return Marshal__ToType_fn(__type, o, &__retval), __retval; }
    static bool TryConvertTo(uType* t, uObject* o, uObject** res, uObject* diagnosticSource);
    static bool TryStringToFloat(uString* o, float* result);
    static bool TryStringToFloat2(uString* o, ::g::Uno::Float2* result);
    static bool TryStringToFloat3(uString* o, ::g::Uno::Float3* result);
    static bool TryStringToFloat4(uString* o, ::g::Uno::Float4* result);
    static bool TryStringToSize(uString* o, ::g::Uno::UX::Size* result);
    static bool TryStringToSize2(uString* o, ::g::Uno::UX::Size2* result, int32_t* count);
    static bool TryToDouble(uObject* v, double* res);
    static bool TryToDouble1(uString* s, double* res);
    static bool TryToFloat(uObject* v, float* res);
    static bool TryToSize(uObject* o, ::g::Uno::UX::Size* result);
    static bool TryToSize2(uObject* o, ::g::Uno::UX::Size2* result);
    static bool TryToSize21(uObject* o, ::g::Uno::UX::Size2* result, int32_t* count);
    template<class T>
    static bool TryToType(uType* __type, uObject* o, T* res) { bool __retval; return Marshal__TryToType_fn(__type, o, uConstrain(__type->U(0), res), &__retval), __retval; }
    static bool TryToZeroFloat4(uObject* o, ::g::Uno::Float4* value, int32_t* size);
};
// }

}} // ::g::Fuse
