// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Targets/Android/Uno/Base/Types.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Android.Base.JNI.h>
#include <android/log.h>
#include <jni.h>
#include <uno.h>
namespace g{namespace Android{namespace Base{namespace Types{struct Arrays;}}}}

namespace g{
namespace Android{
namespace Base{
namespace Types{

// public static extern class Arrays
// {
uClassType* Arrays_typeof();
void Arrays__JavaToUnoByteArray1_fn(jobject* arr_, int64_t* len_, uArray** __retval);

struct Arrays : uObject
{
    static uArray* JavaToUnoByteArray1(jobject arr_, int64_t len_);
};
// }

}}}} // ::g::Android::Base::Types
