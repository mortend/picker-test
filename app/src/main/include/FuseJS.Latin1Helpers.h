// This file was generated based on '../Source/FuseJS/Latin1Helpers.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <uno.h>
namespace g{namespace FuseJS{struct Latin1Helpers;}}

namespace g{
namespace FuseJS{

// internal static class Latin1Helpers
// {
uClassType* Latin1Helpers_typeof();
void Latin1Helpers__DecodeLatin1_fn(uString* base64Str, uString** __retval);
void Latin1Helpers__EncodeLatin1_fn(uString* str, uString** __retval);

struct Latin1Helpers : uObject
{
    static uString* DecodeLatin1(uString* base64Str);
    static uString* EncodeLatin1(uString* str);
};
// }

}} // ::g::FuseJS
