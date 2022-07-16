// This file was generated based on '../Source/Fuse.Elements/Resources/Exif/Exif.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Fuse{namespace Resources{namespace Exif{struct ExifData;}}}}

namespace g{
namespace Fuse{
namespace Resources{
namespace Exif{

// public struct ExifData
// {
uStructType* ExifData_typeof();
void ExifData__ctor_1_fn(ExifData* __this, int32_t* orientation);
void ExifData__FromByteArray_fn(uArray* buffer, ExifData* __retval);
void ExifData__New1_fn(int32_t* orientation, ExifData* __retval);

struct ExifData
{
    int32_t Orientation;

    void ctor_1(int32_t orientation);
};

ExifData ExifData__FromByteArray(uArray* buffer);
ExifData ExifData__New1(int32_t orientation);
// }

}}}} // ::g::Fuse::Resources::Exif
