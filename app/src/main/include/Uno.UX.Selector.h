// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/UX/Selector.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>
namespace g{namespace Uno{namespace UX{struct Selector;}}}

namespace g{
namespace Uno{
namespace UX{

// public struct Selector
// {
uStructType* Selector_typeof();
void Selector__ctor_1_fn(Selector* __this, uString* value);
void Selector__Equals_fn(Selector* __this, uType* __type, uObject* obj, bool* __retval);
void Selector__GetHashCode_fn(Selector* __this, uType* __type, int32_t* __retval);
void Selector__get_Handle_fn(Selector* __this, int32_t* __retval);
void Selector__get_IsNull_fn(Selector* __this, bool* __retval);
void Selector__New1_fn(uString* value, Selector* __retval);
void Selector__op_Equality_fn(Selector* a, Selector* b, bool* __retval);
void Selector__op_Implicit_fn(uString* s, Selector* __retval);
void Selector__op_Implicit1_fn(Selector* s, uString** __retval);
void Selector__op_Inequality_fn(Selector* a, Selector* b, bool* __retval);
void Selector__ToString_fn(Selector* __this, uType* __type, uString** __retval);

struct Selector
{
    int32_t _handle;

    void ctor_1(uString* value);
    bool Equals(uType* __type, uObject* obj) { bool __retval; return Selector__Equals_fn(this, __type, obj, &__retval), __retval; }
    int32_t GetHashCode(uType* __type) { int32_t __retval; return Selector__GetHashCode_fn(this, __type, &__retval), __retval; }
    int32_t Handle();
    bool IsNull();
    uString* ToString(uType* __type) { uString* __retval; return Selector__ToString_fn(this, __type, &__retval), __retval; }
};

Selector Selector__New1(uString* value);
bool Selector__op_Equality(Selector a, Selector b);
Selector Selector__op_Implicit(uString* s);
uString* Selector__op_Implicit1(Selector s);
bool Selector__op_Inequality(Selector a, Selector b);
// }

}}} // ::g::Uno::UX
