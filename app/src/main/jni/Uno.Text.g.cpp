// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRang-f36f7996.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Char.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Environment.h>
#include <Uno.Int.h>
#include <Uno.String.h>
#include <Uno.Text.Ascii.h>
#include <Uno.Text.Base64.h>
#include <Uno.Text.Decoder.h>
#include <Uno.Text.Encoding.h>
#include <Uno.Text.StringBuilder.h>
#include <Uno.Text.Utf8.h>
#include <Uno.Text.UTF8Decoder.h>
#include <Uno.Text.UTF8Encoding.h>
static uString* STRINGS[9];
static uType* TYPES[4];

namespace g{
namespace Uno{
namespace Text{

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/Ascii.uno
// --------------------------------------------------------------------------------------------------------------

// public static class Ascii
// {
static void Ascii_build(uType* type)
{
    ::STRINGS[0] = uString::Const("value");
}

uClassType* Ascii_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Ascii", options);
    type->fp_build_ = Ascii_build;
    return type;
}

// public static byte[] GetBytes(string value)
void Ascii__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Ascii::GetBytes(value);
}

// public static string GetString(byte[] value)
void Ascii__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Ascii::GetString(value);
}

// public static byte[] GetBytes(string value) [static]
uArray* Ascii::GetBytes(uString* value)
{
    if (::g::Uno::String::op_Equality(value, nullptr))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"value"*/]));

    uArray* res = uArray::New(::g::Uno::Byte_typeof()->Array(), value->_length);
    
    for (size_t i = 0; i < value->_length; i++)
        res->Unsafe<uint8_t>(i) = (uint8_t)(value->_ptr[i] < 128 ? value->_ptr[i] : '?');
    
    return res;
}

// public static string GetString(byte[] value) [static]
uString* Ascii::GetString(uArray* value)
{
    if (value == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"value"*/]));

    uString* res = uString::New(value->_length);
    
    for (size_t i = 0; i < value->_length; i++)
        res->_ptr[i] = value->Unsafe<uint8_t>(i) < 128 ? value->Unsafe<uint8_t>(i) : '?';
    
    return res;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/Base64.uno
// ---------------------------------------------------------------------------------------------------------------

// public static class Base64
// {
static void Base64_build(uType* type)
{
    ::STRINGS[1] = uString::Const("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Byte_typeof(), nullptr);
    ::TYPES[1] = ::g::Uno::Int_typeof()->Array();
}

uClassType* Base64_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Base64", options);
    type->fp_build_ = Base64_build;
    return type;
}

// public static byte[] GetBytes(string value)
void Base64__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Base64::GetBytes(value);
}

// public static string GetString(byte[] value)
void Base64__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Base64::GetString(value);
}

// public static byte[] GetBytes(string value) [static]
uArray* Base64::GetBytes(uString* value)
{
    int32_t addidionalSymbols = 0;
    ::g::Uno::Collections::List* ret = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<byte>*/]);
    uArray* charArray3 = uArray::New(::TYPES[1/*int[]*/], 3);
    uArray* charArray4 = uArray::New(::TYPES[1/*int[]*/], 4);

    for (int32_t position = 0; position < uPtr(value)->Length(); position++)
    {
        if ((uPtr(value)->Item(position) == '=') || (::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[1/*"ABCDEFGHIJK...*/]), uPtr(value)->Item(position)) < 0))
            break;

        uPtr(charArray4)->Item<int32_t>(addidionalSymbols) = (int32_t)uPtr(value)->Item(position);
        addidionalSymbols++;

        if (addidionalSymbols == 4)
        {
            for (int32_t j = 0; j < 4; j++)
                uPtr(charArray4)->Item<int32_t>(j) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[1/*"ABCDEFGHIJK...*/]), (char16_t)uPtr(charArray4)->Item<int32_t>(j));

            uPtr(charArray3)->Item<int32_t>(0) = (uPtr(charArray4)->Item<int32_t>(0) << 2) + ((uPtr(charArray4)->Item<int32_t>(1) & 48) >> 4);
            charArray3->Item<int32_t>(1) = ((charArray4->Item<int32_t>(1) & 15) << 4) + ((charArray4->Item<int32_t>(2) & 60) >> 2);
            charArray3->Item<int32_t>(2) = ((charArray4->Item<int32_t>(2) & 3) << 6) + charArray4->Item<int32_t>(3);

            for (int32_t j1 = 0; j1 < 3; j1++)
                ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int32_t>(j1)));

            addidionalSymbols = 0;
        }
    }

    if (addidionalSymbols > 0)
    {
        for (int32_t j2 = addidionalSymbols; j2 < 4; j2++)
            uPtr(charArray4)->Item<int32_t>(j2) = 0;

        for (int32_t j3 = 0; j3 < 4; j3++)
            uPtr(charArray4)->Item<int32_t>(j3) = ::g::Uno::String::IndexOf(uPtr<uString*>(::STRINGS[1/*"ABCDEFGHIJK...*/]), (char16_t)uPtr(charArray4)->Item<int32_t>(j3));

        uPtr(charArray3)->Item<int32_t>(0) = (uPtr(charArray4)->Item<int32_t>(0) << 2) + ((uPtr(charArray4)->Item<int32_t>(1) & 48) >> 4);
        charArray3->Item<int32_t>(1) = ((charArray4->Item<int32_t>(1) & 15) << 4) + ((charArray4->Item<int32_t>(2) & 60) >> 2);
        charArray3->Item<int32_t>(2) = ((charArray4->Item<int32_t>(2) & 3) << 6) + charArray4->Item<int32_t>(3);

        for (int32_t j4 = 0; j4 < (addidionalSymbols - 1); j4++)
            ::g::Uno::Collections::List__Add_fn(uPtr(ret), uCRef<uint8_t>((uint8_t)uPtr(charArray3)->Item<int32_t>(j4)));
    }

    return (uArray*)ret->ToArray();
}

// public static string GetString(byte[] value) [static]
uString* Base64::GetString(uArray* value)
{
    static const char* base64_chars =
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz"
        "0123456789+/";
    
    unsigned char* bytes_to_encode =(unsigned char*)value->Ptr();
    unsigned int in_len = value->Length();
    unsigned char* encoded_buffer = new unsigned char[in_len*2 + 3];
    
    int i = 0;
    int j = 0;
    unsigned char char_array_3[3] = { 0, 0, 0 };
    unsigned char char_array_4[4] = { 0, 0, 0, 0 };
    
    unsigned int out_len = 0;
    while (in_len--)
    {
        char_array_3[i++] = *(bytes_to_encode++);
        if (i == 3)
        {
            char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
            char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
            char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
            char_array_4[3] = char_array_3[2] & 0x3f;
    
            for (i = 0; i < 4 ; i++)
            {
                encoded_buffer[out_len++] = base64_chars[char_array_4[i]];
            }
            i = 0;
        }
    }
    
    if (i)
    {
        for (j = i; j < 3; j++)
        {
            char_array_3[j] = '\0';
        }
    
        char_array_4[0] = (char_array_3[0] & 0xfc) >> 2;
        char_array_4[1] = ((char_array_3[0] & 0x03) << 4) + ((char_array_3[1] & 0xf0) >> 4);
        char_array_4[2] = ((char_array_3[1] & 0x0f) << 2) + ((char_array_3[2] & 0xc0) >> 6);
        char_array_4[3] = char_array_3[2] & 0x3f;
    
        for (j = 0; j < (i + 1); j++)
        {
            encoded_buffer[out_len++] = base64_chars[char_array_4[j]];
        }
    
        while (i++ < 3)
        {
            encoded_buffer[out_len++] = '=';
        }
    }
    
    uString* res = uString::Ansi((char const *)encoded_buffer, out_len);
    delete [] encoded_buffer;
    return res;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------------------------------------------

// public abstract class Decoder
// {
static void Decoder_build(uType* type)
{
}

Decoder_type* Decoder_typeof()
{
    static uSStrong<Decoder_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(Decoder);
    options.TypeSize = sizeof(Decoder_type);
    type = (Decoder_type*)uClassType::New("Uno.Text.Decoder", options);
    type->fp_build_ = Decoder_build;
    return type;
}

// protected generated Decoder()
void Decoder__ctor__fn(Decoder* __this)
{
    __this->ctor_();
}

// protected generated Decoder() [instance]
void Decoder::ctor_()
{
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------------------------------------------

// public abstract class Encoding
// {
static void Encoding_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Text::UTF8Encoding_typeof(), (uintptr_t)&Encoding::_utf8_, uFieldFlagsStatic);
}

Encoding_type* Encoding_typeof()
{
    static uSStrong<Encoding_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.ObjectSize = sizeof(Encoding);
    options.TypeSize = sizeof(Encoding_type);
    type = (Encoding_type*)uClassType::New("Uno.Text.Encoding", options);
    type->fp_build_ = Encoding_build;
    return type;
}

// protected generated Encoding()
void Encoding__ctor__fn(Encoding* __this)
{
    __this->ctor_();
}

// public static Uno.Text.Encoding get_UTF8()
void Encoding__get_UTF8_fn(Encoding** __retval)
{
    *__retval = Encoding::UTF8();
}

uSStrong< ::g::Uno::Text::UTF8Encoding*> Encoding::_utf8_;

// protected generated Encoding() [instance]
void Encoding::ctor_()
{
}

// public static Uno.Text.Encoding get_UTF8() [static]
Encoding* Encoding::UTF8()
{
    if (Encoding::_utf8_ == nullptr)
        Encoding::_utf8_ = ::g::Uno::Text::UTF8Encoding::New1();

    return Encoding::_utf8_;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/StringBuilder.uno
// ----------------------------------------------------------------------------------------------------------------------

// public sealed class StringBuilder
// {
static void StringBuilder_build(uType* type)
{
    ::STRINGS[2] = uString::Const("chars");
    ::TYPES[2] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[3] = ::g::Uno::Char_typeof()->Array();
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(StringBuilder, _totalLength), 0,
        ::TYPES[2/*Uno.Collections.List<string>*/], offsetof(StringBuilder, _strings), 0);
}

uType* StringBuilder_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StringBuilder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Uno.Text.StringBuilder", options);
    type->fp_build_ = StringBuilder_build;
    type->fp_ctor_ = (void*)StringBuilder__New1_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))StringBuilder__ToString_fn;
    return type;
}

// public StringBuilder()
void StringBuilder__ctor__fn(StringBuilder* __this)
{
    __this->ctor_();
}

// public StringBuilder(string value)
void StringBuilder__ctor_1_fn(StringBuilder* __this, uString* value)
{
    __this->ctor_1(value);
}

// public Uno.Text.StringBuilder Append(char c)
void StringBuilder__Append_fn(StringBuilder* __this, char16_t* c, StringBuilder** __retval)
{
    *__retval = __this->Append(*c);
}

// public Uno.Text.StringBuilder Append(char[] chars)
void StringBuilder__Append1_fn(StringBuilder* __this, uArray* chars, StringBuilder** __retval)
{
    *__retval = __this->Append1(chars);
}

// public Uno.Text.StringBuilder Append(string str)
void StringBuilder__Append2_fn(StringBuilder* __this, uString* str, StringBuilder** __retval)
{
    *__retval = __this->Append2(str);
}

// public Uno.Text.StringBuilder AppendLine(string str)
void StringBuilder__AppendLine_fn(StringBuilder* __this, uString* str, StringBuilder** __retval)
{
    *__retval = __this->AppendLine(str);
}

// public int get_Length()
void StringBuilder__get_Length_fn(StringBuilder* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public int get_MaxCapacity()
void StringBuilder__get_MaxCapacity_fn(StringBuilder* __this, int32_t* __retval)
{
    *__retval = __this->MaxCapacity();
}

// public StringBuilder New()
void StringBuilder__New1_fn(StringBuilder** __retval)
{
    *__retval = StringBuilder::New1();
}

// public StringBuilder New(string value)
void StringBuilder__New2_fn(uString* value, StringBuilder** __retval)
{
    *__retval = StringBuilder::New2(value);
}

// public override sealed string ToString()
void StringBuilder__ToString_fn(StringBuilder* __this, uString** __retval)
{
    uArray* data = (uArray*)__this->_strings->_data;
    size_t count = __this->_strings->_used;
    
    switch (count)
    {
        case 0:
            return *__retval = ::g::Uno::String::Empty_, void();
        case 1:
            return *__retval = data->Unsafe<uString*>(0), void();
    }
    
    uString* result = uString::New(__this->_totalLength);
    size_t offset = 0;
    
    for (size_t i = 0; i < count; i++)
    {
        uString* s = data->Unsafe<uString*>(i);
        memcpy(result->_ptr + offset, s->_ptr, s->_length * sizeof(char16_t));
        offset += s->_length;
    }
    
    U_ASSERT(offset == __this->_totalLength);
    return *__retval = result, void();
}

// public StringBuilder() [instance]
void StringBuilder::ctor_()
{
    _strings = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<string>*/]));
}

// public StringBuilder(string value) [instance]
void StringBuilder::ctor_1(uString* value)
{
    _strings = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[2/*Uno.Collections.List<string>*/]));
    Append2(value);
}

// public Uno.Text.StringBuilder Append(char c) [instance]
StringBuilder* StringBuilder::Append(char16_t c)
{
    return Append1(uArray::Init<int32_t>(::TYPES[3/*char[]*/], 1, c));
}

// public Uno.Text.StringBuilder Append(char[] chars) [instance]
StringBuilder* StringBuilder::Append1(uArray* chars)
{
    if ((MaxCapacity() - Length()) < uPtr(chars)->Length())
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[2/*"chars"*/]));

    if (uPtr(chars)->Length() > 0)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_strings), uString::CharArray(chars));
        _totalLength = (_totalLength + uPtr(chars)->Length());
    }

    return this;
}

// public Uno.Text.StringBuilder Append(string str) [instance]
StringBuilder* StringBuilder::Append2(uString* str)
{
    if (uPtr(str)->Length() > 0)
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_strings), str);
        _totalLength = (_totalLength + uPtr(str)->Length());
    }

    return this;
}

// public Uno.Text.StringBuilder AppendLine(string str) [instance]
StringBuilder* StringBuilder::AppendLine(uString* str)
{
    return uPtr(Append2(str))->Append2(::g::Uno::Environment::NewLine());
}

// public int get_Length() [instance]
int32_t StringBuilder::Length()
{
    return _totalLength;
}

// public int get_MaxCapacity() [instance]
int32_t StringBuilder::MaxCapacity()
{
    return 2147483647;
}

// public StringBuilder New() [static]
StringBuilder* StringBuilder::New1()
{
    StringBuilder* obj1 = (StringBuilder*)uNew(StringBuilder_typeof());
    obj1->ctor_();
    return obj1;
}

// public StringBuilder New(string value) [static]
StringBuilder* StringBuilder::New2(uString* value)
{
    StringBuilder* obj2 = (StringBuilder*)uNew(StringBuilder_typeof());
    obj2->ctor_1(value);
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------------------------------------------

// public static class Utf8
// {
static void Utf8_build(uType* type)
{
    ::STRINGS[0] = uString::Const("value");
    ::STRINGS[3] = uString::Const("index");
    ::STRINGS[4] = uString::Const("count");
}

uClassType* Utf8_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Uno.Text.Utf8", options);
    type->fp_build_ = Utf8_build;
    return type;
}

// public static byte[] GetBytes(string value)
void Utf8__GetBytes_fn(uString* value, uArray** __retval)
{
    *__retval = Utf8::GetBytes(value);
}

// public static string GetString(byte[] value)
void Utf8__GetString_fn(uArray* value, uString** __retval)
{
    *__retval = Utf8::GetString(value);
}

// public static string GetString(byte[] value, int index, int count)
void Utf8__GetString1_fn(uArray* value, int32_t* index, int32_t* count, uString** __retval)
{
    *__retval = Utf8::GetString1(value, *index, *count);
}

// public static byte[] GetBytes(string value) [static]
uArray* Utf8::GetBytes(uString* value)
{
    if (::g::Uno::String::op_Equality(value, nullptr))
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"value"*/]));

    uCString cstr(value);
    return uArray::New(::g::Uno::Byte_typeof()->Array(), cstr.Length, cstr.Ptr);
}

// public static string GetString(byte[] value) [static]
uString* Utf8::GetString(uArray* value)
{
    if (value == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"value"*/]));

    const char* utf8 = (const char*)uPtr(value)->Ptr();
    return uString::Utf8(utf8, value->Length());
}

// public static string GetString(byte[] value, int index, int count) [static]
uString* Utf8::GetString1(uArray* value, int32_t index, int32_t count)
{
    if (value == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[0/*"value"*/]));

    if ((index < 0) || (index >= uPtr(value)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[3/*"index"*/]));

    if ((count < 0) || ((index + count) > uPtr(value)->Length()))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[4/*"count"*/]));

    const char* utf8 = (const char*)uPtr(value)->Ptr();
    return uString::Utf8(utf8 + index, count);
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------------------------------------------

// internal sealed class UTF8Decoder
// {
static void UTF8Decoder_build(uType* type)
{
    ::STRINGS[2] = uString::Const("chars");
    ::STRINGS[5] = uString::Const("bytes");
    ::STRINGS[6] = uString::Const("byteIndex");
    ::STRINGS[7] = uString::Const("byteCount");
    ::STRINGS[8] = uString::Const("charIndex");
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(UTF8Decoder, _state), 0);
}

::g::Uno::Text::Decoder_type* UTF8Decoder_typeof()
{
    static uSStrong< ::g::Uno::Text::Decoder_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Text::Decoder_typeof();
    options.FieldCount = 1;
    options.ObjectSize = sizeof(UTF8Decoder);
    options.TypeSize = sizeof(::g::Uno::Text::Decoder_type);
    type = (::g::Uno::Text::Decoder_type*)uClassType::New("Uno.Text.UTF8Decoder", options);
    type->fp_build_ = UTF8Decoder_build;
    type->fp_ctor_ = (void*)UTF8Decoder__New1_fn;
    type->fp_GetChars = (void(*)(::g::Uno::Text::Decoder*, uArray*, int32_t*, int32_t*, uArray*, int32_t*, int32_t*))UTF8Decoder__GetChars_fn;
    return type;
}

// public generated UTF8Decoder()
void UTF8Decoder__ctor_1_fn(UTF8Decoder* __this)
{
    __this->ctor_1();
}

// private int ConvertInternal(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount)
void UTF8Decoder__ConvertInternal_fn(UTF8Decoder* __this, uArray* bytes, int32_t* byteIndex, int32_t* byteCount, uArray* chars, int32_t* charIndex, int32_t* charCount, int32_t* __retval)
{
    *__retval = __this->ConvertInternal(bytes, *byteIndex, *byteCount, chars, *charIndex, *charCount);
}

// public override sealed int GetChars(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex)
void UTF8Decoder__GetChars_fn(UTF8Decoder* __this, uArray* bytes, int32_t* byteIndex, int32_t* byteCount, uArray* chars, int32_t* charIndex, int32_t* __retval)
{
    int32_t byteIndex_ = *byteIndex;
    int32_t byteCount_ = *byteCount;
    int32_t charIndex_ = *charIndex;

    if (bytes == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[5/*"bytes"*/]));

    if (byteIndex_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[6/*"byteIndex"*/]));

    if (byteCount_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[7/*"byteCount"*/]));

    if (chars == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[2/*"chars"*/]));

    if (charIndex_ < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[8/*"charIndex"*/]));

    if ((uPtr(bytes)->Length() - byteIndex_) < byteCount_)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(::STRINGS[5/*"bytes"*/]));

    int32_t charCount = uPtr(chars)->Length() - charIndex_;
    return *__retval = __this->ConvertInternal(bytes, byteIndex_, byteCount_, chars, charIndex_, charCount), void();
}

// public generated UTF8Decoder New()
void UTF8Decoder__New1_fn(UTF8Decoder** __retval)
{
    *__retval = UTF8Decoder::New1();
}

// public generated UTF8Decoder() [instance]
void UTF8Decoder::ctor_1()
{
    ctor_();
}

// private int ConvertInternal(byte[] bytes, int byteIndex, int byteCount, char[] chars, int charIndex, int charCount) [instance]
int32_t UTF8Decoder::ConvertInternal(uArray* bytes, int32_t byteIndex, int32_t byteCount, uArray* chars, int32_t charIndex, int32_t charCount)
{
    int32_t bytesUsed = 0;
    int32_t charsUsed = 0;
    int32_t ch = _state;
    _state = 0;

    while (bytesUsed < byteCount)
    {
        if (ch == 0)
        {
            ch = (int32_t)uPtr(bytes)->Item<uint8_t>(byteIndex + (bytesUsed++));

            if (ch < 128)
            {
                if (chars != nullptr)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"chars"*/]));

                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = (char16_t)ch;
                }

                ++charsUsed;
                ch = 0;
                continue;
            }

            if ((ch & 224) == 192)
            {
                ch = ch & 31;

                if (ch <= 1)
                {
                    if (chars != nullptr)
                    {
                        if (charsUsed >= charCount)
                            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"chars"*/]));

                        uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
                    }

                    ++charsUsed;
                    ch = 0;
                    continue;
                }

                ch = ch | 4194304;
            }
            else if ((ch & 240) == 224)
            {
                ch = ch & 15;
                ch = ch | 8454144;
            }
            else if ((ch & 248) == 240)
            {
                ch = ch & 7;

                if (ch > 4)
                {
                    if (chars != nullptr)
                    {
                        if (charsUsed >= charCount)
                            U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"chars"*/]));

                        uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
                    }

                    ++charsUsed;
                    ch = 0;
                    continue;
                }

                ch = ch | 12583936;
            }
            else
            {
                if (chars != nullptr)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"chars"*/]));

                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
                }

                ++charsUsed;
                ch = 0;
                continue;
            }
        }

        bool done = false, invalid = false;

        do
        {
            if (bytesUsed == byteCount)
            {
                _state = ch;
                return charsUsed;
            }

            uint8_t ch2 = uPtr(bytes)->Item<uint8_t>(byteIndex + bytesUsed);

            if ((ch2 & 192) != 128)
            {
                invalid = true;
                break;
            }

            ch = (ch << 6) | (int32_t)(ch2 & 63);
            ++bytesUsed;

            switch (ch & 805306368)
            {
                case 268435456:
                {
                    done = true;
                    break;
                }
                case 536870912:
                {
                    if (((ch & 992) == 0) || ((ch & 992) == 864))
                    {
                        invalid = true;
                        done = true;
                    }

                    break;
                }
                case 805306368:
                {
                    if (((ch & 496) < 16) || ((ch & 496) > 256))
                    {
                        invalid = true;
                        done = true;
                    }

                    break;
                }
            }
        }
        while (!done);

        if (invalid)
        {
            if (chars != nullptr)
            {
                if (charsUsed >= charCount)
                    U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"chars"*/]));

                uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = 65533;
            }

            ++charsUsed;
        }
        else
        {
            int32_t codePoint = ch & 2097151;

            if (codePoint < 65536)
            {
                if (chars != nullptr)
                {
                    if (charsUsed >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"chars"*/]));

                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = (char16_t)codePoint;
                }

                ++charsUsed;
            }
            else
            {
                if (chars != nullptr)
                {
                    if ((charsUsed + 1) >= charCount)
                        U_THROW(::g::Uno::ArgumentException::New4(::STRINGS[2/*"chars"*/]));

                    codePoint = codePoint - 65536;
                    uPtr(chars)->Item<char16_t>(charIndex + charsUsed) = (char16_t)(55296 + (codePoint >> 10));
                    chars->Item<char16_t>((charIndex + charsUsed) + 1) = (char16_t)(56320 + (codePoint & 1023));
                }

                charsUsed = charsUsed + 2;
            }
        }

        ch = 0;
    }

    _state = 0;
    return charsUsed;
}

// public generated UTF8Decoder New() [static]
UTF8Decoder* UTF8Decoder::New1()
{
    UTF8Decoder* obj1 = (UTF8Decoder*)uNew(UTF8Decoder_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Text/Utf8.uno
// -------------------------------------------------------------------------------------------------------------

// public sealed class UTF8Encoding
// {
static void UTF8Encoding_build(uType* type)
{
}

::g::Uno::Text::Encoding_type* UTF8Encoding_typeof()
{
    static uSStrong< ::g::Uno::Text::Encoding_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::Text::Encoding_typeof();
    options.ObjectSize = sizeof(UTF8Encoding);
    options.TypeSize = sizeof(::g::Uno::Text::Encoding_type);
    type = (::g::Uno::Text::Encoding_type*)uClassType::New("Uno.Text.UTF8Encoding", options);
    type->fp_build_ = UTF8Encoding_build;
    type->fp_ctor_ = (void*)UTF8Encoding__New1_fn;
    type->fp_GetDecoder = (void(*)(::g::Uno::Text::Encoding*, ::g::Uno::Text::Decoder**))UTF8Encoding__GetDecoder_fn;
    return type;
}

// public generated UTF8Encoding()
void UTF8Encoding__ctor_1_fn(UTF8Encoding* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.Text.Decoder GetDecoder()
void UTF8Encoding__GetDecoder_fn(UTF8Encoding* __this, ::g::Uno::Text::Decoder** __retval)
{
    return *__retval = ::g::Uno::Text::UTF8Decoder::New1(), void();
}

// public generated UTF8Encoding New()
void UTF8Encoding__New1_fn(UTF8Encoding** __retval)
{
    *__retval = UTF8Encoding::New1();
}

// public generated UTF8Encoding() [instance]
void UTF8Encoding::ctor_1()
{
    ctor_();
}

// public generated UTF8Encoding New() [static]
UTF8Encoding* UTF8Encoding::New1()
{
    UTF8Encoding* obj1 = (UTF8Encoding*)uNew(UTF8Encoding_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

}}} // ::g::Uno::Text
