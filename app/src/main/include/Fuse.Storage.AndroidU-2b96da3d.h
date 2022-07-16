// This file was generated based on '../Source/Fuse.Storage/UserSettingsImpl.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Storage{struct AndroidUserSettingsImpl;}}}

namespace g{
namespace Fuse{
namespace Storage{

// public sealed extern class AndroidUserSettingsImpl
// {
uType* AndroidUserSettingsImpl_typeof();
void AndroidUserSettingsImpl__Clear_fn();
void AndroidUserSettingsImpl__GetBooleanValue_fn(uString* key, bool* __retval);
void AndroidUserSettingsImpl__GetNumberValue_fn(uString* key, double* __retval);
void AndroidUserSettingsImpl__GetStringValue_fn(uString* key, uString** __retval);
void AndroidUserSettingsImpl__Remove_fn(uString* key);
void AndroidUserSettingsImpl__SetBooleanValue_fn(uString* key, bool* value);
void AndroidUserSettingsImpl__SetNumberValue_fn(uString* key, double* value);
void AndroidUserSettingsImpl__SetStringValue_fn(uString* key, uString* value);

struct AndroidUserSettingsImpl : uObject
{
    static void Clear();
    static bool GetBooleanValue(uString* key);
    static double GetNumberValue(uString* key);
    static uString* GetStringValue(uString* key);
    static void Remove(uString* key);
    static void SetBooleanValue(uString* key, bool value);
    static void SetNumberValue(uString* key, double value);
    static void SetStringValue(uString* key, uString* value);
};
// }

}}} // ::g::Fuse::Storage
