// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/Uno.Graphics.Utils/2.2.0/Bitmap.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Int2.h>
#include <Uno.Object.h>
namespace g{namespace Uno{namespace Graphics{namespace Utils{struct Bitmap;}}}}

namespace g{
namespace Uno{
namespace Graphics{
namespace Utils{

// public sealed class Bitmap
// {
uType* Bitmap_typeof();
void Bitmap__ctor__fn(Bitmap* __this, ::g::Uno::Int2* size, int32_t* format, uArray* optionalData);
void Bitmap__get_Data_fn(Bitmap* __this, uArray** __retval);
void Bitmap__set_Data_fn(Bitmap* __this, uArray* value);
void Bitmap__get_Format_fn(Bitmap* __this, int32_t* __retval);
void Bitmap__set_Format_fn(Bitmap* __this, int32_t* value);
void Bitmap__New1_fn(::g::Uno::Int2* size, int32_t* format, uArray* optionalData, Bitmap** __retval);
void Bitmap__get_Size_fn(Bitmap* __this, ::g::Uno::Int2* __retval);
void Bitmap__set_Size_fn(Bitmap* __this, ::g::Uno::Int2* value);

struct Bitmap : uObject
{
    uStrong<uArray*> _Data;
    int32_t _Format;
    ::g::Uno::Int2 _Size;

    void ctor_(::g::Uno::Int2 size, int32_t format, uArray* optionalData);
    uArray* Data();
    void Data(uArray* value);
    int32_t Format();
    void Format(int32_t value);
    ::g::Uno::Int2 Size();
    void Size(::g::Uno::Int2 value);
    static Bitmap* New1(::g::Uno::Int2 size, int32_t format, uArray* optionalData);
};
// }

}}}} // ::g::Uno::Graphics::Utils
