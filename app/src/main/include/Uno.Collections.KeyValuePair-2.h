// This file was generated based on '../node_modules/@fuse-open/uno/lib/build/UnoCore/2.2.0/Source/Uno/Collections/KeyValuePair.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.ValueType.h>

namespace g{
namespace Uno{
namespace Collections{

// public struct KeyValuePair<TKey, TValue>
// {
uStructType* KeyValuePair_typeof();
void KeyValuePair__ctor_1_fn(uTRef __this, uType* __type, void* key, void* value);
void KeyValuePair__get_Key_fn(uTRef __this, uType* __type, uTRef __retval);
void KeyValuePair__New1_fn(uType* __type, void* key, void* value, uTRef __retval);
void KeyValuePair__get_Value_fn(uTRef __this, uType* __type, uTRef __retval);

template<class TKey, class TValue>
struct KeyValuePair
{
    TKey _key;
    TValue _value;

    void ctor_1(uType* __type, TKey key, TValue value) { KeyValuePair__ctor_1_fn(this, __type, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value)); }
    TKey Key(uType* __type) { TKey __retval; return KeyValuePair__get_Key_fn(this, __type, &__retval), __retval; }
    TValue Value(uType* __type) { TValue __retval; return KeyValuePair__get_Value_fn(this, __type, &__retval), __retval; }
};

}}} // ::g::Uno::Collections

#include <Uno.Object.h>

namespace g{
namespace Uno{
namespace Collections{

template<class TKey, class TValue>
KeyValuePair<TKey, TValue> KeyValuePair__New1(uType* __type, TKey key, TValue value) { KeyValuePair<TKey, TValue> __retval; return KeyValuePair__New1_fn(__type, uConstrain(__type->T(0), key), uConstrain(__type->T(1), value), &__retval), __retval; }
// }

}}} // ::g::Uno::Collections
