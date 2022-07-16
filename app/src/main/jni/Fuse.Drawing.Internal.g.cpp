// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Drawing.Internal-1b31e5ea.h>
#include <Fuse.Drawing.Internal-2ca76543.h>
#include <Fuse.Drawing.Internal-acfd08d8.h>
#include <Fuse.Drawing.Internal-ec458cdf.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.ByteArrayExtensions.h>
#include <Uno.Double.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.IndexBuffer.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.UShort.h>
static uType* TYPES[1];

namespace g{
namespace Fuse{
namespace Drawing{
namespace Internal{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Internal/BufferCollections.uno
// -----------------------------------------------------------------------------------

// public sealed class Float2Buffer
// {
static void Float2Buffer_build(uType* type)
{
    type->SetFields(6);
}

uType* Float2Buffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(Float2Buffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.Float2Buffer", options);
    type->fp_build_ = Float2Buffer_build;
    type->fp_ctor_ = (void*)Float2Buffer__New3_fn;
    return type;
}

// public Float2Buffer()
void Float2Buffer__ctor_2_fn(Float2Buffer* __this)
{
    __this->ctor_2();
}

// public void Append(double x, double y)
void Float2Buffer__Append_fn(Float2Buffer* __this, double* x, double* y)
{
    __this->Append(*x, *y);
}

// public void Append(float2 value)
void Float2Buffer__Append1_fn(Float2Buffer* __this, ::g::Uno::Float2* value)
{
    __this->Append1(*value);
}

// public Float2Buffer New()
void Float2Buffer__New3_fn(Float2Buffer** __retval)
{
    *__retval = Float2Buffer::New3();
}

// public void Set(int offset, float2 value)
void Float2Buffer__Set_fn(Float2Buffer* __this, int32_t* offset, ::g::Uno::Float2* value)
{
    __this->Set(*offset, *value);
}

// public Float2Buffer() [instance]
void Float2Buffer::ctor_2()
{
    ctor_1(8, 32);
}

// public void Append(double x, double y) [instance]
void Float2Buffer::Append(double x, double y)
{
    Append1(::g::Uno::Float2__New2((float)x, (float)y));
}

// public void Append(float2 value) [instance]
void Float2Buffer::Append1(::g::Uno::Float2 value)
{
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float2 value) [instance]
void Float2Buffer::Set(int32_t offset, ::g::Uno::Float2 value)
{
    ::g::Uno::ByteArrayExtensions::Set5(back, offset * typeSize, value, true);
}

// public Float2Buffer New() [static]
Float2Buffer* Float2Buffer::New3()
{
    Float2Buffer* obj1 = (Float2Buffer*)uNew(Float2Buffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Internal/BufferCollections.uno
// -----------------------------------------------------------------------------------

// public sealed class FloatBuffer
// {
static void FloatBuffer_build(uType* type)
{
    type->SetFields(6);
}

uType* FloatBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(FloatBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.FloatBuffer", options);
    type->fp_build_ = FloatBuffer_build;
    type->fp_ctor_ = (void*)FloatBuffer__New3_fn;
    return type;
}

// public FloatBuffer()
void FloatBuffer__ctor_2_fn(FloatBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(float value)
void FloatBuffer__Append1_fn(FloatBuffer* __this, float* value)
{
    __this->Append1(*value);
}

// public FloatBuffer New()
void FloatBuffer__New3_fn(FloatBuffer** __retval)
{
    *__retval = FloatBuffer::New3();
}

// public void Set(int offset, float value)
void FloatBuffer__Set_fn(FloatBuffer* __this, int32_t* offset, float* value)
{
    __this->Set(*offset, *value);
}

// public FloatBuffer() [instance]
void FloatBuffer::ctor_2()
{
    ctor_1(4, 32);
}

// public void Append(float value) [instance]
void FloatBuffer::Append1(float value)
{
    CheckGrow();
    Set(size++, value);
}

// public void Set(int offset, float value) [instance]
void FloatBuffer::Set(int32_t offset, float value)
{
    ::g::Uno::ByteArrayExtensions::Set4(back, offset * typeSize, value, true);
}

// public FloatBuffer New() [static]
FloatBuffer* FloatBuffer::New3()
{
    FloatBuffer* obj1 = (FloatBuffer*)uNew(FloatBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Internal/BufferCollections.uno
// -----------------------------------------------------------------------------------

// public class TypedBuffer
// {
static void TypedBuffer_build(uType* type)
{
    ::TYPES[0] = ::g::Uno::Byte_typeof()->Array();
    type->SetFields(0,
        ::TYPES[0/*byte[]*/], offsetof(TypedBuffer, back), 0,
        ::g::Uno::Int_typeof(), offsetof(TypedBuffer, typeSize), 0,
        ::g::Uno::Int_typeof(), offsetof(TypedBuffer, capacity), 0,
        ::g::Uno::Int_typeof(), offsetof(TypedBuffer, size), 0,
        ::g::Uno::Graphics::IndexBuffer_typeof(), offsetof(TypedBuffer, deviceIndex), 0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(TypedBuffer, deviceVertex), 0);
}

uType* TypedBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(TypedBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.TypedBuffer", options);
    type->fp_build_ = TypedBuffer_build;
    return type;
}

// protected TypedBuffer(int typeSize, [int initSize])
void TypedBuffer__ctor_1_fn(TypedBuffer* __this, int32_t* typeSize1, int32_t* initSize)
{
    __this->ctor_1(*typeSize1, *initSize);
}

// protected void CheckGrow()
void TypedBuffer__CheckGrow_fn(TypedBuffer* __this)
{
    __this->CheckGrow();
}

// public int Count()
void TypedBuffer__Count_fn(TypedBuffer* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex()
void TypedBuffer__GetDeviceIndex_fn(TypedBuffer* __this, ::g::Uno::Graphics::IndexBuffer** __retval)
{
    *__retval = __this->GetDeviceIndex();
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex()
void TypedBuffer__GetDeviceVertex_fn(TypedBuffer* __this, ::g::Uno::Graphics::VertexBuffer** __retval)
{
    *__retval = __this->GetDeviceVertex();
}

// protected void Init(int initSize)
void TypedBuffer__Init_fn(TypedBuffer* __this, int32_t* initSize)
{
    __this->Init(*initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu])
void TypedBuffer__InitDeviceIndex_fn(TypedBuffer* __this, int32_t* bu)
{
    __this->InitDeviceIndex(*bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu])
void TypedBuffer__InitDeviceVertex_fn(TypedBuffer* __this, int32_t* bu)
{
    __this->InitDeviceVertex(*bu);
}

// protected TypedBuffer(int typeSize, [int initSize]) [instance]
void TypedBuffer::ctor_1(int32_t typeSize1, int32_t initSize)
{
    typeSize = typeSize1;
    size = 0;
    Init(initSize);
}

// protected void CheckGrow() [instance]
void TypedBuffer::CheckGrow()
{
    if (size < capacity)
        return;

    int32_t newCap = capacity * 2;
    uArray* newBuf = uArray::New(::TYPES[0/*byte[]*/], typeSize * newCap);

    for (int32_t i = 0; i < uPtr(back)->Length(); ++i)
        ::g::Uno::ByteArrayExtensions::Set(newBuf, i, uPtr(back)->Item<uint8_t>(i));

    back = newBuf;
    capacity = newCap;
}

// public int Count() [instance]
int32_t TypedBuffer::Count()
{
    return size;
}

// public Uno.Graphics.IndexBuffer GetDeviceIndex() [instance]
::g::Uno::Graphics::IndexBuffer* TypedBuffer::GetDeviceIndex()
{
    return deviceIndex;
}

// public Uno.Graphics.VertexBuffer GetDeviceVertex() [instance]
::g::Uno::Graphics::VertexBuffer* TypedBuffer::GetDeviceVertex()
{
    return deviceVertex;
}

// protected void Init(int initSize) [instance]
void TypedBuffer::Init(int32_t initSize)
{
    capacity = initSize;
    back = uArray::New(::TYPES[0/*byte[]*/], typeSize * initSize);
}

// public void InitDeviceIndex([Uno.Graphics.BufferUsage bu]) [instance]
void TypedBuffer::InitDeviceIndex(int32_t bu)
{
    deviceIndex = ::g::Uno::Graphics::IndexBuffer::New1(back, bu);
}

// public void InitDeviceVertex([Uno.Graphics.BufferUsage bu]) [instance]
void TypedBuffer::InitDeviceVertex(int32_t bu)
{
    deviceVertex = ::g::Uno::Graphics::VertexBuffer::New1(back, bu);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Internal/BufferCollections.uno
// -----------------------------------------------------------------------------------

// public sealed class UShortBuffer
// {
static void UShortBuffer_build(uType* type)
{
    type->SetFields(6);
}

uType* UShortBuffer_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Internal::TypedBuffer_typeof();
    options.FieldCount = 6;
    options.ObjectSize = sizeof(UShortBuffer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.Internal.UShortBuffer", options);
    type->fp_build_ = UShortBuffer_build;
    type->fp_ctor_ = (void*)UShortBuffer__New3_fn;
    return type;
}

// public UShortBuffer()
void UShortBuffer__ctor_2_fn(UShortBuffer* __this)
{
    __this->ctor_2();
}

// public void Append(int value)
void UShortBuffer__Append_fn(UShortBuffer* __this, int32_t* value)
{
    __this->Append(*value);
}

// public UShortBuffer New()
void UShortBuffer__New3_fn(UShortBuffer** __retval)
{
    *__retval = UShortBuffer::New3();
}

// public void Set(int offset, ushort value)
void UShortBuffer__Set_fn(UShortBuffer* __this, int32_t* offset, uint16_t* value)
{
    __this->Set(*offset, *value);
}

// public UShortBuffer() [instance]
void UShortBuffer::ctor_2()
{
    ctor_1(2, 32);
}

// public void Append(int value) [instance]
void UShortBuffer::Append(int32_t value)
{
    CheckGrow();
    Set(size++, (uint16_t)value);
}

// public void Set(int offset, ushort value) [instance]
void UShortBuffer::Set(int32_t offset, uint16_t value)
{
    ::g::Uno::ByteArrayExtensions::Set23(back, offset * typeSize, value, true);
}

// public UShortBuffer New() [static]
UShortBuffer* UShortBuffer::New3()
{
    UShortBuffer* obj1 = (UShortBuffer*)uNew(UShortBuffer_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

}}}} // ::g::Fuse::Drawing::Internal
