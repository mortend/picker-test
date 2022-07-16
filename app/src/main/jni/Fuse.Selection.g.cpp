// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Diagnostics.h>
#include <Fuse.IArray.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Reactive.Express-14809e1.h>
#include <Fuse.Reactive.Express-2299a878.h>
#include <Fuse.Reactive.Expression.h>
#include <Fuse.Reactive.IContext.h>
#include <Fuse.Reactive.IExpression.h>
#include <Fuse.Reactive.IListener.h>
#include <Fuse.Reactive.IObservableArray.h>
#include <Fuse.Reactive.ISubscription.h>
#include <Fuse.Reactive.VarArgFunction.h>
#include <Fuse.Scripting.ScriptClass.h>
#include <Fuse.Scripting.ScriptMember.h>
#include <Fuse.Scripting.ScriptMethod1-1.h>
#include <Fuse.Selection.IsSele-554a10ea.h>
#include <Fuse.Selection.IsSele-7c262d75.h>
#include <Fuse.Selection.Select-73a27120.h>
#include <Fuse.Selection.Selectable.h>
#include <Fuse.Selection.Select-ba619045.h>
#include <Fuse.Selection.Selection.h>
#include <Fuse.Selection.Selection.How.h>
#include <Fuse.Selection.SelectMode.h>
#include <Fuse.Selection.ToggleSelection.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Delegate.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
static uString* STRINGS[19];
static uType* TYPES[8];

namespace g{
namespace Fuse{
namespace Selection{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno
// --------------------------------------------------------------------

// private enum Selection.How
uEnumType* Selection__How_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Selection.Selection.How", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "API", 0LL,
        "Observable", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/IsSelected.uno
// ---------------------------------------------------------------------

// public sealed class IsSelectedFunction
// {
static void IsSelectedFunction_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Reactive::IExpression_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface0),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Reactive::Expression_type, interface1));
    type->SetFields(3);
}

::g::Fuse::Reactive::Expression_type* IsSelectedFunction_typeof()
{
    static uSStrong< ::g::Fuse::Reactive::Expression_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 2;
    options.ObjectSize = sizeof(IsSelectedFunction);
    options.TypeSize = sizeof(::g::Fuse::Reactive::Expression_type);
    type = (::g::Fuse::Reactive::Expression_type*)uClassType::New("Fuse.Selection.IsSelectedFunction", options);
    type->fp_build_ = IsSelectedFunction_build;
    type->fp_Subscribe = (void(*)(::g::Fuse::Reactive::Expression*, uObject*, uObject*, uObject**))IsSelectedFunction__Subscribe_fn;
    type->fp_ToString = (void(*)(uObject*, uString**))IsSelectedFunction__ToString_fn;
    type->interface1.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Reactive::Expression__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_Subscribe = (void(*)(uObject*, uObject*, uObject*, uObject**))IsSelectedFunction__Subscribe_fn;
    type->interface1.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Reactive::Expression__get_SourceLineNumber_fn;
    type->interface1.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Reactive::Expression__get_SourceFileName_fn;
    return type;
}

// public override sealed Uno.IDisposable Subscribe(Fuse.Reactive.IContext context, Fuse.Reactive.IListener listener)
void IsSelectedFunction__Subscribe_fn(IsSelectedFunction* __this, uObject* context, uObject* listener, uObject** __retval)
{
    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(__this->Arguments()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Reactive::Expression_typeof(), nullptr))) > 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("too many arguments for isSelected"), __this, ::STRINGS[1/*"/Users/mort...*/], 29, uString::Const("Subscribe"), nullptr);
        return *__retval = nullptr, void();
    }

    IsSelectedFunction__OuterSubscription* ins = IsSelectedFunction__OuterSubscription::New1(__this, listener, ::g::Fuse::Reactive::IContext::Node(uInterface(uPtr(context), ::g::Fuse::Reactive::IContext_typeof())));
    ins->Init(context);
    return *__retval = (uObject*)ins, void();
}

// public override sealed string ToString()
void IsSelectedFunction__ToString_fn(IsSelectedFunction* __this, uString** __retval)
{
    return *__retval = __this->FormatString(uString::Const("isSelected")), void();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno
// --------------------------------------------------------------------

// private sealed class Selection.ListWrapper
// {
static void Selection__ListWrapper_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::IArray_typeof(), offsetof(Selection__ListWrapper_type, interface0));
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), nullptr), offsetof(Selection__ListWrapper, _list), 0);
}

Selection__ListWrapper_type* Selection__ListWrapper_typeof()
{
    static uSStrong<Selection__ListWrapper_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Selection__ListWrapper);
    options.TypeSize = sizeof(Selection__ListWrapper_type);
    type = (Selection__ListWrapper_type*)uClassType::New("Fuse.Selection.Selection.ListWrapper", options);
    type->fp_build_ = Selection__ListWrapper_build;
    type->interface0.fp_get_Length = (void(*)(uObject*, int32_t*))Selection__ListWrapper__get_Length_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uObject**))Selection__ListWrapper__get_Item_fn;
    return type;
}

// public ListWrapper(Uno.Collections.List<string> list)
void Selection__ListWrapper__ctor__fn(Selection__ListWrapper* __this, ::g::Uno::Collections::List* list)
{
    __this->ctor_(list);
}

// public object get_Item(int index)
void Selection__ListWrapper__get_Item_fn(Selection__ListWrapper* __this, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// public int get_Length()
void Selection__ListWrapper__get_Length_fn(Selection__ListWrapper* __this, int32_t* __retval)
{
    *__retval = __this->Length();
}

// public ListWrapper New(Uno.Collections.List<string> list)
void Selection__ListWrapper__New1_fn(::g::Uno::Collections::List* list, Selection__ListWrapper** __retval)
{
    *__retval = Selection__ListWrapper::New1(list);
}

// public ListWrapper(Uno.Collections.List<string> list) [instance]
void Selection__ListWrapper::ctor_(::g::Uno::Collections::List* list)
{
    _list = list;
}

// public object get_Item(int index) [instance]
uObject* Selection__ListWrapper::Item(int32_t index)
{
    uString* ret2;
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_list), uCRef<int32_t>(index), &ret2), ret2);
}

// public int get_Length() [instance]
int32_t Selection__ListWrapper::Length()
{
    return uPtr(_list)->Count();
}

// public ListWrapper New(Uno.Collections.List<string> list) [static]
Selection__ListWrapper* Selection__ListWrapper::New1(::g::Uno::Collections::List* list)
{
    Selection__ListWrapper* obj1 = (Selection__ListWrapper*)uNew(Selection__ListWrapper_typeof());
    obj1->ctor_(list);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/IsSelected.uno
// ---------------------------------------------------------------------

// private sealed class IsSelectedFunction.OuterSubscription
// {
static void IsSelectedFunction__OuterSubscription_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unable to locate a `Selectable` and `Selection`");
    ::STRINGS[1] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/IsSelected.uno");
    ::STRINGS[2] = uString::Const("NewNode");
    ::STRINGS[3] = uString::Const("Argument does not resolve to a Node");
    ::STRINGS[4] = uString::Const("OnNewArguments");
    ::TYPES[0] = ::g::Uno::EventHandler_typeof();
    ::TYPES[1] = ::g::Uno::Action_typeof();
    ::TYPES[2] = ::g::Fuse::Reactive::IListener_typeof();
    ::TYPES[3] = ::g::Fuse::Node_typeof();
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(IsSelectedFunction__OuterSubscription_type, interface0),
        ::TYPES[2/*Fuse.Reactive.IListener*/], offsetof(IsSelectedFunction__OuterSubscription_type, interface1),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(IsSelectedFunction__OuterSubscription_type, interface2));
    type->SetFields(7,
        ::g::Fuse::Selection::IsSelectedFunction_typeof(), offsetof(IsSelectedFunction__OuterSubscription, _expr), 0,
        ::TYPES[2/*Fuse.Reactive.IListener*/], offsetof(IsSelectedFunction__OuterSubscription, _listener), 0,
        ::TYPES[3/*Fuse.Node*/], offsetof(IsSelectedFunction__OuterSubscription, _from), 0,
        ::TYPES[3/*Fuse.Node*/], offsetof(IsSelectedFunction__OuterSubscription, _curFrom), 0,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(IsSelectedFunction__OuterSubscription, _selection), 0,
        ::g::Fuse::Selection::Selectable_typeof(), offsetof(IsSelectedFunction__OuterSubscription, _selectable), 0,
        ::TYPES[3/*Fuse.Node*/], offsetof(IsSelectedFunction__OuterSubscription, _pendingNode), 0);
}

IsSelectedFunction__OuterSubscription_type* IsSelectedFunction__OuterSubscription_typeof()
{
    static uSStrong<IsSelectedFunction__OuterSubscription_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Reactive::VarArgFunction__Subscription_typeof();
    options.FieldCount = 14;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(IsSelectedFunction__OuterSubscription);
    options.TypeSize = sizeof(IsSelectedFunction__OuterSubscription_type);
    type = (IsSelectedFunction__OuterSubscription_type*)uClassType::New("Fuse.Selection.IsSelectedFunction.OuterSubscription", options);
    type->fp_build_ = IsSelectedFunction__OuterSubscription_build;
    type->fp_Dispose = (void(*)(::g::Fuse::Reactive::InnerListener*))IsSelectedFunction__OuterSubscription__Dispose_fn;
    type->fp_OnNewArguments = (void(*)(::g::Fuse::Reactive::VarArgFunction__Subscription*, uArray*))IsSelectedFunction__OuterSubscription__OnNewArguments_fn;
    type->interface2.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))IsSelectedFunction__OuterSubscription__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface1.fp_OnNewData = (void(*)(uObject*, uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnNewData_fn;
    type->interface1.fp_OnLostData = (void(*)(uObject*, uObject*))::g::Fuse::Reactive::InnerListener__FuseReactiveIListenerOnLostData_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))IsSelectedFunction__OuterSubscription__Dispose_fn;
    return type;
}

// public OuterSubscription(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from)
void IsSelectedFunction__OuterSubscription__ctor_3_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from)
{
    __this->ctor_3(expr, listener, from);
}

// private void CleanListener()
void IsSelectedFunction__OuterSubscription__CleanListener_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->CleanListener();
}

// private void CleanPending()
void IsSelectedFunction__OuterSubscription__CleanPending_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->CleanPending();
}

// public override sealed void Dispose()
void IsSelectedFunction__OuterSubscription__Dispose_fn(IsSelectedFunction__OuterSubscription* __this)
{
    ::g::Fuse::Reactive::VarArgFunction__Subscription__Dispose_fn(__this);
    __this->CleanPending();
    __this->CleanListener();
}

// public OuterSubscription New(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from)
void IsSelectedFunction__OuterSubscription__New1_fn(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from, IsSelectedFunction__OuterSubscription** __retval)
{
    *__retval = IsSelectedFunction__OuterSubscription::New1(expr, listener, from);
}

// private void NewNode(Fuse.Node from)
void IsSelectedFunction__OuterSubscription__NewNode_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Fuse::Node* from)
{
    __this->NewNode(from);
}

// protected override sealed void OnNewArguments(Fuse.Reactive.Expression.Argument[] args)
void IsSelectedFunction__OuterSubscription__OnNewArguments_fn(IsSelectedFunction__OuterSubscription* __this, uArray* args)
{
    ::g::Fuse::Node* node = __this->_from;

    if (uPtr(args)->Length() > 0)
    {
        node = uAs< ::g::Fuse::Node*>(uPtr(uPtr(args)->Strong< ::g::Fuse::Reactive::Expression__Argument*>(0))->Value(), ::TYPES[3/*Fuse.Node*/]);

        if (node == nullptr)
            ::g::Fuse::Diagnostics::UserError(::STRINGS[3/*"Argument do...*/], __this->_expr, ::STRINGS[1/*"/Users/mort...*/], 69, ::STRINGS[4/*"OnNewArgume...*/], nullptr);
        else if (!uPtr(node)->IsRootingCompleted())
        {
            __this->CleanPending();
            __this->_pendingNode = node;
            uPtr(__this->_pendingNode)->add_RootingCompleted(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)IsSelectedFunction__OuterSubscription__OnPendingRooted_fn, __this));
            node = nullptr;
        }
    }

    __this->NewNode(node);
}

// private void OnPendingRooted()
void IsSelectedFunction__OuterSubscription__OnPendingRooted_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->OnPendingRooted();
}

// private void OnSelectionChanged(object s, object args)
void IsSelectedFunction__OuterSubscription__OnSelectionChanged_fn(IsSelectedFunction__OuterSubscription* __this, uObject* s, uObject* args)
{
    __this->OnSelectionChanged(s, args);
}

// private void PushNewValue()
void IsSelectedFunction__OuterSubscription__PushNewValue_fn(IsSelectedFunction__OuterSubscription* __this)
{
    __this->PushNewValue();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop)
void IsSelectedFunction__OuterSubscription__UnoUXIPropertyListenerOnPropertyChanged_fn(IsSelectedFunction__OuterSubscription* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    if (obj == __this->_selectable)
        __this->PushNewValue();
}

// public OuterSubscription(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from) [instance]
void IsSelectedFunction__OuterSubscription::ctor_3(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from)
{
    ctor_2(expr);
    _from = from;
    _expr = expr;
    _listener = listener;
}

// private void CleanListener() [instance]
void IsSelectedFunction__OuterSubscription::CleanListener()
{
    if (_selection == nullptr)
        return;

    uPtr(_selection)->remove_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)IsSelectedFunction__OuterSubscription__OnSelectionChanged_fn, this));
    uPtr(_selectable)->RemovePropertyListener((uObject*)this);
    _selection = nullptr;
    _selectable = nullptr;
}

// private void CleanPending() [instance]
void IsSelectedFunction__OuterSubscription::CleanPending()
{
    if (_pendingNode == nullptr)
        return;

    uPtr(_pendingNode)->remove_RootingCompleted(uDelegate::New(::TYPES[1/*Uno.Action*/], (void*)IsSelectedFunction__OuterSubscription__OnPendingRooted_fn, this));
    _pendingNode = nullptr;
}

// private void NewNode(Fuse.Node from) [instance]
void IsSelectedFunction__OuterSubscription::NewNode(::g::Fuse::Node* from)
{
    if (_curFrom == from)
        return;

    CleanListener();
    _curFrom = from;

    if (from == nullptr)
    {
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[2/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
        return;
    }

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(_curFrom, &_selectable, &_selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Unable to l...*/], _expr, ::STRINGS[1/*"/Users/mort...*/], 116, ::STRINGS[2/*"NewNode"*/], nullptr);
        ::g::Fuse::Reactive::IListener::OnLostData(uInterface(uPtr(_listener), ::TYPES[2/*Fuse.Reactive.IListener*/]), (uObject*)_expr);
        return;
    }

    uPtr(_selection)->add_SelectionChanged(uDelegate::New(::TYPES[0/*Uno.EventHandler*/], (void*)IsSelectedFunction__OuterSubscription__OnSelectionChanged_fn, this));
    uPtr(_selectable)->AddPropertyListener((uObject*)this);
    PushNewValue();
}

// private void OnPendingRooted() [instance]
void IsSelectedFunction__OuterSubscription::OnPendingRooted()
{
    if (_pendingNode == nullptr)
        return;

    ::g::Fuse::Node* p = _pendingNode;
    CleanPending();
    NewNode(p);
}

// private void OnSelectionChanged(object s, object args) [instance]
void IsSelectedFunction__OuterSubscription::OnSelectionChanged(uObject* s, uObject* args)
{
    PushNewValue();
}

// private void PushNewValue() [instance]
void IsSelectedFunction__OuterSubscription::PushNewValue()
{
    if (_selection != nullptr)
        ::g::Fuse::Reactive::IListener::OnNewData(uInterface(uPtr(_listener), ::TYPES[2/*Fuse.Reactive.IListener*/]), (uObject*)_expr, uBox(::g::Uno::Bool_typeof(), uPtr(_selection)->IsSelected(_selectable)));
}

// public OuterSubscription New(Fuse.Selection.IsSelectedFunction expr, Fuse.Reactive.IListener listener, Fuse.Node from) [static]
IsSelectedFunction__OuterSubscription* IsSelectedFunction__OuterSubscription::New1(::g::Fuse::Selection::IsSelectedFunction* expr, uObject* listener, ::g::Fuse::Node* from)
{
    IsSelectedFunction__OuterSubscription* obj1 = (IsSelectedFunction__OuterSubscription*)uNew(IsSelectedFunction__OuterSubscription_typeof());
    obj1->ctor_3(expr, listener, from);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selectable.ScriptClass.uno
// ---------------------------------------------------------------------------------

// public partial sealed class Selectable
// {
// static Selectable()
static void Selectable__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Selectable::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[5/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[5/*Fuse.Scripting.ScriptMember[]*/], 3, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::TYPES[6/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[6/*"add"*/], uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Selection.Selectable>*/], (void*)Selectable__add_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::TYPES[6/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[7/*"remove"*/], uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Selection.Selectable>*/], (void*)Selectable__remove_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::TYPES[6/*Fuse.Scripting.ScriptMethod<Fuse.Selection.Selectable>*/], ::STRINGS[8/*"toggle"*/], uDelegate::New(::TYPES[7/*Uno.Action<Fuse.Selection.Selectable>*/], (void*)Selectable__toggle_fn))));
}

static void Selectable_build(uType* type)
{
    ::STRINGS[5] = uString::Const("Value");
    ::STRINGS[6] = uString::Const("add");
    ::STRINGS[7] = uString::Const("remove");
    ::STRINGS[8] = uString::Const("toggle");
    ::STRINGS[9] = uString::Const("No selection, perhaps not rooted");
    ::STRINGS[10] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selectable.uno");
    ::STRINGS[11] = uString::Const("Add");
    ::STRINGS[12] = uString::Const("Unable to locate `Selection`");
    ::STRINGS[13] = uString::Const("OnRooted");
    ::STRINGS[14] = uString::Const("Remove");
    ::STRINGS[15] = uString::Const("Toggle");
    ::TYPES[4] = ::g::Uno::Type_typeof();
    ::TYPES[5] = ::g::Fuse::Scripting::ScriptMember_typeof()->Array();
    ::TYPES[6] = ::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(type, nullptr);
    ::TYPES[7] = ::g::Uno::Action1_typeof()->MakeType(type, nullptr);
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(17,
        ::g::Fuse::Selection::Selection_typeof(), offsetof(Selectable, _selection), 0,
        ::g::Uno::String_typeof(), offsetof(Selectable, _value), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Selectable::ValueName_, uFieldFlagsStatic);
}

::g::Fuse::Node_type* Selectable_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Selectable);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Selection.Selectable", options);
    type->fp_build_ = Selectable_build;
    type->fp_cctor_ = Selectable__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selectable__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selectable__OnUnrooted_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static void add(Fuse.Selection.Selectable s)
void Selectable__add_fn(Selectable* s)
{
    Selectable::add(s);
}

// public void Add()
void Selectable__Add1_fn(Selectable* __this)
{
    __this->Add1();
}

// protected override sealed void OnRooted()
void Selectable__OnRooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_selection = ::g::Fuse::Selection::Selection::TryFindSelection(__this->Parent());

    if (__this->_selection == nullptr)
        ::g::Fuse::Diagnostics::UserError(::STRINGS[12/*"Unable to l...*/], __this, ::STRINGS[10/*"/Users/mort...*/], 41, ::STRINGS[13/*"OnRooted"*/], nullptr);
}

// protected override sealed void OnUnrooted()
void Selectable__OnUnrooted_fn(Selectable* __this)
{
    ::g::Fuse::Node__OnUnrooted_fn(__this);
    __this->_selection = nullptr;
}

// private static void remove(Fuse.Selection.Selectable s)
void Selectable__remove_fn(Selectable* s)
{
    Selectable::remove(s);
}

// public void Remove()
void Selectable__Remove1_fn(Selectable* __this)
{
    __this->Remove1();
}

// private static void toggle(Fuse.Selection.Selectable s)
void Selectable__toggle_fn(Selectable* s)
{
    Selectable::toggle(s);
}

// public void Toggle()
void Selectable__Toggle_fn(Selectable* __this)
{
    __this->Toggle();
}

// public string get_Value()
void Selectable__get_Value_fn(Selectable* __this, uString** __retval)
{
    *__retval = __this->Value();
}

// public void set_Value(string value)
void Selectable__set_Value_fn(Selectable* __this, uString* value)
{
    __this->Value(value);
}

::g::Uno::UX::Selector Selectable::ValueName_;

// public void Add() [instance]
void Selectable::Add1()
{
    if (_selection == nullptr)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"No selectio...*/], this, ::STRINGS[10/*"/Users/mort...*/], 82, ::STRINGS[11/*"Add"*/], nullptr);
        return;
    }

    uPtr(_selection)->Add1(this);
}

// public void Remove() [instance]
void Selectable::Remove1()
{
    if (_selection == nullptr)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"No selectio...*/], this, ::STRINGS[10/*"/Users/mort...*/], 96, ::STRINGS[14/*"Remove"*/], nullptr);
        return;
    }

    uPtr(_selection)->Remove1(this);
}

// public void Toggle() [instance]
void Selectable::Toggle()
{
    if (_selection == nullptr)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[9/*"No selectio...*/], this, ::STRINGS[10/*"/Users/mort...*/], 110, ::STRINGS[15/*"Toggle"*/], nullptr);
        return;
    }

    uPtr(_selection)->Toggle(this);
}

// public string get_Value() [instance]
uString* Selectable::Value()
{
    return _value;
}

// public void set_Value(string value) [instance]
void Selectable::Value(uString* value)
{
    if (::g::Uno::String::op_Equality(_value, value))
        return;

    uString* old = _value;
    _value = value;

    if (_selection != nullptr)
        uPtr(_selection)->ModifyValue(old, _value);

    OnPropertyChanged(Selectable::ValueName_);
}

// private static void add(Fuse.Selection.Selectable s) [static]
void Selectable::add(Selectable* s)
{
    Selectable_typeof()->Init();
    uPtr(s)->Add1();
}

// private static void remove(Fuse.Selection.Selectable s) [static]
void Selectable::remove(Selectable* s)
{
    Selectable_typeof()->Init();
    uPtr(s)->Remove1();
}

// private static void toggle(Fuse.Selection.Selectable s) [static]
void Selectable::toggle(Selectable* s)
{
    Selectable_typeof()->Init();
    uPtr(s)->Toggle();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.ScriptClass.uno
// --------------------------------------------------------------------------------

// public partial sealed class Selection
// {
// static Selection()
static void Selection__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Scripting::ScriptClass_typeof()->Init();
    Selection::ValueName_ = ::g::Uno::UX::Selector__New1(::STRINGS[5/*"Value"*/]);
    ::g::Fuse::Scripting::ScriptClass::Register(__type, uArray::Init< ::g::Fuse::Scripting::ScriptMember*>(::TYPES[5/*Fuse.Scripting.ScriptMember[]*/], 6, (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New2(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, nullptr), uString::Const("clear"), uDelegate::New(::g::Uno::Action1_typeof()->MakeType(__type, nullptr), (void*)Selection__clear_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, nullptr), ::STRINGS[6/*"add"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), nullptr), (void*)Selection__add_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, nullptr), ::STRINGS[7/*"remove"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), nullptr), (void*)Selection__remove_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, nullptr), uString::Const("forceAdd"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), nullptr), (void*)Selection__forceAdd_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, nullptr), uString::Const("forceRemove"), uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), nullptr), (void*)Selection__forceRemove_fn)), (::g::Fuse::Scripting::ScriptMethod1*)::g::Fuse::Scripting::ScriptMethod1::New1(::g::Fuse::Scripting::ScriptMethod1_typeof()->MakeType(__type, nullptr), ::STRINGS[8/*"toggle"*/], uDelegate::New(::g::Uno::Action2_typeof()->MakeType(__type, uObject_typeof()->Array(), nullptr), (void*)Selection__toggle_fn))));
}

static void Selection_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Selection_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Selection_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Selection_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Selection_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Selection_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Selection_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Selection_type, interface6),
        ::g::Fuse::Reactive::IObserver_typeof(), offsetof(Selection_type, interface7));
    type->SetFields(17,
        ::g::Fuse::Selection::SelectionReplace_typeof(), offsetof(Selection, _replace), 0,
        ::g::Uno::Int_typeof(), offsetof(Selection, _minCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(Selection, _hasMaxCount), 0,
        ::g::Uno::Int_typeof(), offsetof(Selection, _maxCount), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::String_typeof(), nullptr), offsetof(Selection, _values), 0,
        ::g::Fuse::Reactive::IObservableArray_typeof(), offsetof(Selection, _observableValues), 0,
        ::g::Uno::IDisposable_typeof(), offsetof(Selection, _subscription), 0,
        ::g::Uno::EventHandler_typeof(), offsetof(Selection, SelectionChanged1), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Selection::ValueName_, uFieldFlagsStatic);
}

Selection_type* Selection_typeof()
{
    static uSStrong<Selection_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 26;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Selection);
    options.TypeSize = sizeof(Selection_type);
    type = (Selection_type*)uClassType::New("Fuse.Selection.Selection", options);
    type->fp_build_ = Selection_build;
    type->fp_cctor_ = Selection__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Selection__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Selection__OnUnrooted_fn;
    type->interface7.fp_OnClear = (void(*)(uObject*))Selection__FuseReactiveIObserverOnClear_fn;
    type->interface7.fp_OnNewAll = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnNewAll_fn;
    type->interface7.fp_OnNewAt = (void(*)(uObject*, int32_t*, uObject*))Selection__FuseReactiveIObserverOnNewAt_fn;
    type->interface7.fp_OnSet = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnSet_fn;
    type->interface7.fp_OnAdd = (void(*)(uObject*, uObject*))Selection__FuseReactiveIObserverOnAdd_fn;
    type->interface7.fp_OnRemoveAt = (void(*)(uObject*, int32_t*))Selection__FuseReactiveIObserverOnRemoveAt_fn;
    type->interface7.fp_OnInsertAt = (void(*)(uObject*, int32_t*, uObject*))Selection__FuseReactiveIObserverOnInsertAt_fn;
    type->interface7.fp_OnFailed = (void(*)(uObject*, uString*))Selection__FuseReactiveIObserverOnFailed_fn;
    type->interface1.fp_SetScriptObject = (void(*)(uObject*, uObject*, ::g::Fuse::Scripting::Context*))::g::Fuse::Node__FuseScriptingIScriptObjectSetScriptObject_fn;
    type->interface5.fp_Clear = (void(*)(uObject*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingClear_fn;
    type->interface5.fp_Contains = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingContains_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsIListFuseBindingRemoveAt_fn;
    type->interface6.fp_GetEnumerator = (void(*)(uObject*, uObject**))::g::Fuse::Node__UnoCollectionsIEnumerableFuseBindingGetEnumerator_fn;
    type->interface1.fp_get_ScriptObject = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptObject_fn;
    type->interface1.fp_get_ScriptContext = (void(*)(uObject*, ::g::Fuse::Scripting::Context**))::g::Fuse::Node__FuseScriptingIScriptObjectget_ScriptContext_fn;
    type->interface4.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Node__FuseISourceLocationget_SourceNearest_fn;
    type->interface5.fp_get_Count = (void(*)(uObject*, int32_t*))::g::Fuse::Node__UnoCollectionsICollectionFuseBindingget_Count_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))::g::Fuse::Node__UnoCollectionsIListFuseBindingget_Item_fn;
    type->interface3.fp_add_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedadd_Unrooted_fn;
    type->interface3.fp_remove_Unrooted = (void(*)(uObject*, uDelegate*))::g::Fuse::Node__FuseINotifyUnrootedremove_Unrooted_fn;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))::g::Fuse::Node__Insert_fn;
    type->interface2.fp_get_Properties = (void(*)(uObject*, ::g::Fuse::Properties**))::g::Fuse::Node__get_Properties_fn;
    type->interface4.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Node__get_SourceLineNumber_fn;
    type->interface4.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Node__get_SourceFileName_fn;
    type->interface5.fp_Add = (void(*)(uObject*, void*))::g::Fuse::Node__Add_fn;
    type->interface5.fp_Remove = (void(*)(uObject*, void*, bool*))::g::Fuse::Node__Remove_fn;
    return type;
}

// private static void add(Fuse.Selection.Selection s, object[] args)
void Selection__add_fn(Selection* s, uArray* args)
{
    Selection::add(s, args);
}

// public void Add(Fuse.Selection.Selectable b)
void Selection__Add1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Add1(b);
}

// private void Add(string value)
void Selection__Add2_fn(Selection* __this, uString* value)
{
    __this->Add2(value);
}

// private static void clear(Fuse.Selection.Selection s)
void Selection__clear_fn(Selection* s)
{
    Selection::clear(s);
}

// public void Clear()
void Selection__Clear_fn(Selection* __this)
{
    __this->Clear();
}

// private void ClearSubscription()
void Selection__ClearSubscription_fn(Selection* __this)
{
    __this->ClearSubscription();
}

// private static void forceAdd(Fuse.Selection.Selection s, object[] args)
void Selection__forceAdd_fn(Selection* s, uArray* args)
{
    Selection::forceAdd(s, args);
}

// private void ForceAdd(string value)
void Selection__ForceAdd1_fn(Selection* __this, uString* value)
{
    __this->ForceAdd1(value);
}

// private static void forceRemove(Fuse.Selection.Selection s, object[] args)
void Selection__forceRemove_fn(Selection* s, uArray* args)
{
    Selection::forceRemove(s, args);
}

// private void ForceRemove(string value)
void Selection__ForceRemove1_fn(Selection* __this, uString* value)
{
    __this->ForceRemove1(value);
}

// private void Fuse.Reactive.IObserver.OnAdd(object addedValue)
void Selection__FuseReactiveIObserverOnAdd_fn(Selection* __this, uObject* addedValue)
{
    uString* ret9;
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), addedValue, &ret9), ret9));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnClear()
void Selection__FuseReactiveIObserverOnClear_fn(Selection* __this)
{
    uPtr(__this->_values)->Clear();
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnFailed(string message)
void Selection__FuseReactiveIObserverOnFailed_fn(Selection* __this, uString* message)
{
    ::g::Fuse::Reactive::IObserver::OnClear(uInterface(uPtr(uAs<uObject*>(__this, ::g::Fuse::Reactive::IObserver_typeof())), ::g::Fuse::Reactive::IObserver_typeof()));
    ::g::Fuse::Diagnostics::InternalError(message, __this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno"), 496, uString::Const("Fuse.Reactive.IObserver.OnFailed"));
}

// private void Fuse.Reactive.IObserver.OnInsertAt(int index, object value)
void Selection__FuseReactiveIObserverOnInsertAt_fn(Selection* __this, int32_t* index, uObject* value)
{
    int32_t index_ = *index;
    uString* ret10;

    if ((index_ < 0) || (index_ > uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno"), 486, uString::Const("Fuse.Reactive.IObserver.OnInsertAt"));
        return;
    }

    ::g::Uno::Collections::List__Insert_fn(uPtr(__this->_values), uCRef<int32_t>(index_), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), value, &ret10), ret10));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnNewAll(Fuse.IArray values)
void Selection__FuseReactiveIObserverOnNewAll_fn(Selection* __this, uObject* values)
{
    __this->OnNewAll(values);
}

// private void Fuse.Reactive.IObserver.OnNewAt(int index, object newValue)
void Selection__FuseReactiveIObserverOnNewAt_fn(Selection* __this, int32_t* index, uObject* newValue)
{
    int32_t index_ = *index;
    uString* ret11;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno"), 451, uString::Const("Fuse.Reactive.IObserver.OnNewAt"));
        return;
    }

    ::g::Uno::Collections::List__set_Item_fn(uPtr(__this->_values), uCRef<int32_t>(index_), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), newValue, &ret11), ret11));
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnRemoveAt(int index)
void Selection__FuseReactiveIObserverOnRemoveAt_fn(Selection* __this, int32_t* index)
{
    int32_t index_ = *index;

    if ((index_ < 0) || (index_ >= uPtr(__this->_values)->Count()))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("removing invalid observable item"), __this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno"), 475, uString::Const("Fuse.Reactive.IObserver.OnRemoveAt"));
        return;
    }

    uPtr(__this->_values)->RemoveAt(index_);
    __this->OnSelectionChanged(1);
}

// private void Fuse.Reactive.IObserver.OnSet(object newValue)
void Selection__FuseReactiveIObserverOnSet_fn(Selection* __this, uObject* newValue)
{
    uString* ret12;
    uPtr(__this->_values)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(__this->_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), newValue, &ret12), ret12));
    __this->OnSelectionChanged(1);
}

// public bool get_HasMaxCount()
void Selection__get_HasMaxCount_fn(Selection* __this, bool* __retval)
{
    *__retval = __this->HasMaxCount();
}

// public bool IsSelected(Fuse.Selection.Selectable b)
void Selection__IsSelected_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b, bool* __retval)
{
    *__retval = __this->IsSelected(b);
}

// public int get_MaxCount()
void Selection__get_MaxCount_fn(Selection* __this, int32_t* __retval)
{
    *__retval = __this->MaxCount();
}

// public void set_MaxCount(int value)
void Selection__set_MaxCount_fn(Selection* __this, int32_t* value)
{
    __this->MaxCount(*value);
}

// public int get_MinCount()
void Selection__get_MinCount_fn(Selection* __this, int32_t* __retval)
{
    *__retval = __this->MinCount();
}

// public void set_MinCount(int value)
void Selection__set_MinCount_fn(Selection* __this, int32_t* value)
{
    __this->MinCount(*value);
}

// internal void ModifyValue(string old, string nw)
void Selection__ModifyValue_fn(Selection* __this, uString* old, uString* nw)
{
    __this->ModifyValue(old, nw);
}

// private void OnNewAll(Fuse.IArray values)
void Selection__OnNewAll_fn(Selection* __this, uObject* values)
{
    __this->OnNewAll(values);
}

// private void OnObservableValuesChanged()
void Selection__OnObservableValuesChanged_fn(Selection* __this)
{
    __this->OnObservableValuesChanged();
}

// protected override sealed void OnRooted()
void Selection__OnRooted_fn(Selection* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->OnObservableValuesChanged();
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how)
void Selection__OnSelectionChanged_fn(Selection* __this, int32_t* how)
{
    __this->OnSelectionChanged(*how);
}

// protected override sealed void OnUnrooted()
void Selection__OnUnrooted_fn(Selection* __this)
{
    __this->ClearSubscription();
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private static void remove(Fuse.Selection.Selection s, object[] args)
void Selection__remove_fn(Selection* s, uArray* args)
{
    Selection::remove(s, args);
}

// public void Remove(Fuse.Selection.Selectable b)
void Selection__Remove1_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Remove1(b);
}

// private void Remove(string value)
void Selection__Remove2_fn(Selection* __this, uString* value)
{
    __this->Remove2(value);
}

// public Fuse.Selection.SelectionReplace get_Replace()
void Selection__get_Replace_fn(Selection* __this, int32_t* __retval)
{
    *__retval = __this->Replace();
}

// public void set_Replace(Fuse.Selection.SelectionReplace value)
void Selection__set_Replace_fn(Selection* __this, int32_t* value)
{
    __this->Replace(*value);
}

// public generated void add_SelectionChanged(Uno.EventHandler value)
void Selection__add_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->add_SelectionChanged(value);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value)
void Selection__remove_SelectionChanged_fn(Selection* __this, uDelegate* value)
{
    __this->remove_SelectionChanged(value);
}

// private static void toggle(Fuse.Selection.Selection s, object[] args)
void Selection__toggle_fn(Selection* s, uArray* args)
{
    Selection::toggle(s, args);
}

// public void Toggle(Fuse.Selection.Selectable b)
void Selection__Toggle_fn(Selection* __this, ::g::Fuse::Selection::Selectable* b)
{
    __this->Toggle(b);
}

// private void Toggle(string value)
void Selection__Toggle1_fn(Selection* __this, uString* value)
{
    __this->Toggle1(value);
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection)
void Selection__TryFindSelectable_fn(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection, bool* __retval)
{
    *__retval = Selection::TryFindSelectable(n, selectable, selection);
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v)
void Selection__TryFindSelection_fn(::g::Fuse::Node* v, Selection** __retval)
{
    *__retval = Selection::TryFindSelection(v);
}

::g::Uno::UX::Selector Selection::ValueName_;

// public void Add(Fuse.Selection.Selectable b) [instance]
void Selection::Add1(::g::Fuse::Selection::Selectable* b)
{
    Add2(uPtr(b)->Value());
}

// private void Add(string value) [instance]
void Selection::Add2(uString* value)
{
    bool ret3;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret3), ret3))
        return;

    if (HasMaxCount() && ((uPtr(_values)->Count() + 1) > MaxCount()))
    {
        if ((Replace() == 2) || (MaxCount() < 1))
            return;

        if (Replace() == 0)
            uPtr(_values)->RemoveAt(0);
        else
            uPtr(_values)->RemoveAt(uPtr(_values)->Count() - 1);
    }

    ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
    OnSelectionChanged(0);
}

// public void Clear() [instance]
void Selection::Clear()
{
    uPtr(_values)->Clear();
    OnSelectionChanged(0);
}

// private void ClearSubscription() [instance]
void Selection::ClearSubscription()
{
    if (_subscription != nullptr)
    {
        ::g::Uno::IDisposable::Dispose(uInterface(uPtr(_subscription), ::g::Uno::IDisposable_typeof()));
        _subscription = nullptr;
    }
}

// private void ForceAdd(string value) [instance]
void Selection::ForceAdd1(uString* value)
{
    bool ret5;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret5), ret5))
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), value);
        OnSelectionChanged(0);
    }
}

// private void ForceRemove(string value) [instance]
void Selection::ForceRemove1(uString* value)
{
    bool ret7;
    bool ret8;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret7), ret7))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret8);
        OnSelectionChanged(0);
    }
}

// public bool get_HasMaxCount() [instance]
bool Selection::HasMaxCount()
{
    return _hasMaxCount;
}

// public bool IsSelected(Fuse.Selection.Selectable b) [instance]
bool Selection::IsSelected(::g::Fuse::Selection::Selectable* b)
{
    bool ret13;

    if (::g::Uno::String::IsNullOrEmpty(uPtr(b)->Value()))
        return false;

    return (::g::Uno::Collections::List__Contains_fn(uPtr(_values), uPtr(b)->Value(), &ret13), ret13);
}

// public int get_MaxCount() [instance]
int32_t Selection::MaxCount()
{
    return _maxCount;
}

// public void set_MaxCount(int value) [instance]
void Selection::MaxCount(int32_t value)
{
    if (_hasMaxCount && (value == _maxCount))
        return;

    if (value < 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("MaxCount must >= 1"), this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno"), 138, uString::Const("set_MaxCount"), nullptr);
        return;
    }

    _hasMaxCount = true;
    _maxCount = value;
}

// public int get_MinCount() [instance]
int32_t Selection::MinCount()
{
    return _minCount;
}

// public void set_MinCount(int value) [instance]
void Selection::MinCount(int32_t value)
{
    if (value == _minCount)
        return;

    _minCount = value;
}

// internal void ModifyValue(string old, string nw) [instance]
void Selection::ModifyValue(uString* old, uString* nw)
{
    bool ret14;
    bool ret15;

    if (::g::Uno::String::IsNullOrEmpty(old) || ::g::Uno::String::IsNullOrEmpty(nw))
        return;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), old, &ret14), ret14))
    {
        ::g::Uno::Collections::List__Remove_fn(uPtr(_values), old, &ret15);
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), nw);
        OnSelectionChanged(0);
    }
}

// private void OnNewAll(Fuse.IArray values) [instance]
void Selection::OnNewAll(uObject* values)
{
    uString* ret16;
    uPtr(_values)->Clear();

    for (int32_t i = 0; i < ::g::Fuse::IArray::Length(uInterface(uPtr(values), ::g::Fuse::IArray_typeof())); ++i)
        ::g::Uno::Collections::List__Add_fn(uPtr(_values), (::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), ::g::Fuse::IArray::Item(uInterface(uPtr(values), ::g::Fuse::IArray_typeof()), i), &ret16), ret16));

    OnSelectionChanged(1);
}

// private void OnObservableValuesChanged() [instance]
void Selection::OnObservableValuesChanged()
{
    ClearSubscription();

    if (_observableValues == nullptr)
        return;

    OnNewAll(_observableValues);
    _subscription = ::g::Fuse::Reactive::IObservableArray::Subscribe(uInterface(uPtr(_observableValues), ::g::Fuse::Reactive::IObservableArray_typeof()), (uObject*)this);
}

// private void OnSelectionChanged(Fuse.Selection.Selection.How how) [instance]
void Selection::OnSelectionChanged(int32_t how)
{
    if ((how == 0) && (_subscription != nullptr))
    {
        uObject* sub = uAs<uObject*>(_subscription, ::g::Fuse::Reactive::ISubscription_typeof());

        if (sub != nullptr)
            ::g::Fuse::Reactive::ISubscription::ReplaceAllExclusive(uInterface(uPtr(sub), ::g::Fuse::Reactive::ISubscription_typeof()), (uObject*)Selection__ListWrapper::New1(_values));
        else
            ::g::Fuse::Diagnostics::UserWarning(uString::Const("Selection changed, but the bound collection is not writeable."), this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno"), 357, uString::Const("OnSelectionChanged"));
    }

    OnPropertyChanged(Selection::ValueName_);

    if (::g::Uno::Delegate::op_Inequality(SelectionChanged1, nullptr))
        uPtr(SelectionChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());
}

// public void Remove(Fuse.Selection.Selectable b) [instance]
void Selection::Remove1(::g::Fuse::Selection::Selectable* b)
{
    Remove2(uPtr(b)->Value());
}

// private void Remove(string value) [instance]
void Selection::Remove2(uString* value)
{
    bool ret18;
    bool ret19;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret18), ret18))
        return;

    if ((uPtr(_values)->Count() - 1) < MinCount())
        return;

    ::g::Uno::Collections::List__Remove_fn(uPtr(_values), value, &ret19);
    OnSelectionChanged(0);
}

// public Fuse.Selection.SelectionReplace get_Replace() [instance]
int32_t Selection::Replace()
{
    return _replace;
}

// public void set_Replace(Fuse.Selection.SelectionReplace value) [instance]
void Selection::Replace(int32_t value)
{
    _replace = value;
}

// public generated void add_SelectionChanged(Uno.EventHandler value) [instance]
void Selection::add_SelectionChanged(uDelegate* value)
{
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SelectionChanged1, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public generated void remove_SelectionChanged(Uno.EventHandler value) [instance]
void Selection::remove_SelectionChanged(uDelegate* value)
{
    SelectionChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SelectionChanged1, value), ::TYPES[0/*Uno.EventHandler*/]);
}

// public void Toggle(Fuse.Selection.Selectable b) [instance]
void Selection::Toggle(::g::Fuse::Selection::Selectable* b)
{
    Toggle1(uPtr(b)->Value());
}

// private void Toggle(string value) [instance]
void Selection::Toggle1(uString* value)
{
    bool ret24;

    if ((::g::Uno::Collections::List__Contains_fn(uPtr(_values), value, &ret24), ret24))
        Remove2(value);
    else
        Add2(value);
}

// private static void add(Fuse.Selection.Selection s, object[] args) [static]
void Selection::add(Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret2;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("add requires 1 argument, the value of the item"), s, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.ScriptClass.uno"), 43, ::STRINGS[6/*"add"*/], nullptr);
        return;
    }

    uPtr(s)->Add2((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), uPtr(args)->Strong<uObject*>(0), &ret2), ret2));
}

// private static void clear(Fuse.Selection.Selection s) [static]
void Selection::clear(Selection* s)
{
    Selection_typeof()->Init();
    uPtr(s)->Clear();
}

// private static void forceAdd(Fuse.Selection.Selection s, object[] args) [static]
void Selection::forceAdd(Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret4;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("forceAdd requires 1 argument, the value of the item"), s, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.ScriptClass.uno"), 75, uString::Const("forceAdd"), nullptr);
        return;
    }

    uPtr(s)->ForceAdd1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), uPtr(args)->Strong<uObject*>(0), &ret4), ret4));
}

// private static void forceRemove(Fuse.Selection.Selection s, object[] args) [static]
void Selection::forceRemove(Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret6;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("forceRemove requires 1 argument, the value of the item"), s, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.ScriptClass.uno"), 89, uString::Const("forceRemove"), nullptr);
        return;
    }

    uPtr(s)->ForceRemove1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), uPtr(args)->Strong<uObject*>(0), &ret6), ret6));
}

// private static void remove(Fuse.Selection.Selection s, object[] args) [static]
void Selection::remove(Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret17;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("remove requires 1 argument, the value of the item"), s, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.ScriptClass.uno"), 61, ::STRINGS[7/*"remove"*/], nullptr);
        return;
    }

    uPtr(s)->Remove2((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), uPtr(args)->Strong<uObject*>(0), &ret17), ret17));
}

// private static void toggle(Fuse.Selection.Selection s, object[] args) [static]
void Selection::toggle(Selection* s, uArray* args)
{
    Selection_typeof()->Init();
    uString* ret23;

    if (uPtr(args)->Length() != 1)
    {
        ::g::Fuse::Diagnostics::UserError(uString::Const("toggle requires 1 argument, the value of them item"), s, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.ScriptClass.uno"), 105, ::STRINGS[8/*"toggle"*/], nullptr);
        return;
    }

    uPtr(s)->Toggle1((::g::Fuse::Marshal__ToType_fn(::g::Fuse::Marshal_typeof()->MakeMethod(0/*ToType<string>*/, ::g::Uno::String_typeof(), nullptr), uPtr(args)->Strong<uObject*>(0), &ret23), ret23));
}

// internal static bool TryFindSelectable(Fuse.Node n, Fuse.Selection.Selectable& selectable, Fuse.Selection.Selection& selection) [static]
bool Selection::TryFindSelectable(::g::Fuse::Node* n, ::g::Fuse::Selection::Selectable** selectable, Selection** selection)
{
    Selection_typeof()->Init();
    *selectable = nullptr;
    *selection = nullptr;

    while (n != nullptr)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(n, ::g::Fuse::Visual_typeof());

        if (vs != nullptr)
        {
            if (*selectable == nullptr)
                *selectable = (::g::Fuse::Selection::Selectable*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selectable>*/, ::g::Fuse::Selection::Selectable_typeof(), nullptr));
            else
                *selection = (Selection*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selection>*/, Selection_typeof(), nullptr));

            if ((*selectable != nullptr) && (*selection != nullptr))
                return true;
        }

        n = uPtr(n)->ContextParent();
    }

    *selectable = nullptr;
    *selection = nullptr;
    return false;
}

// internal static Fuse.Selection.Selection TryFindSelection(Fuse.Node v) [static]
Selection* Selection::TryFindSelection(::g::Fuse::Node* v)
{
    Selection_typeof()->Init();

    while (v != nullptr)
    {
        ::g::Fuse::Visual* vs = uAs< ::g::Fuse::Visual*>(v, ::g::Fuse::Visual_typeof());

        if (vs != nullptr)
        {
            Selection* l = (Selection*)uPtr(vs)->FirstChild(::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Selection.Selection>*/, Selection_typeof(), nullptr));

            if (l != nullptr)
                return l;
        }

        v = uPtr(v)->ContextParent();
    }

    return nullptr;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/Selection.uno
// --------------------------------------------------------------------

// public enum SelectionReplace
uEnumType* SelectionReplace_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Selection.SelectionReplace", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Oldest", 0LL,
        "Newest", 1LL,
        "None", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/ToggleSelection.uno
// --------------------------------------------------------------------------

// public enum SelectMode
uEnumType* SelectMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Selection.SelectMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Toggle", 0LL,
        "AddOnly", 1LL,
        "RemoveOnly", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/ToggleSelection.uno
// --------------------------------------------------------------------------

// public sealed class ToggleSelection
// {
static void ToggleSelection_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Unable to locate Selectable");
    ::STRINGS[17] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Selection/ToggleSelection.uno");
    ::STRINGS[18] = uString::Const("Perform");
    type->SetDependencies(
        ::g::Fuse::Selection::Selection_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Selection::SelectMode_typeof(), offsetof(ToggleSelection, _mode), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSelection_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ToggleSelection);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Selection.ToggleSelection", options);
    type->fp_build_ = ToggleSelection_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSelection__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public Fuse.Selection.SelectMode get_Mode()
void ToggleSelection__get_Mode_fn(ToggleSelection* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Selection.SelectMode value)
void ToggleSelection__set_Mode_fn(ToggleSelection* __this, int32_t* value)
{
    __this->Mode(*value);
}

// protected override sealed void Perform(Fuse.Node target)
void ToggleSelection__Perform_fn(ToggleSelection* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Selection::Selectable* selectable;
    ::g::Fuse::Selection::Selection* selection;

    if (!::g::Fuse::Selection::Selection::TryFindSelectable(target, &selectable, &selection))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[16/*"Unable to l...*/], __this, ::STRINGS[17/*"/Users/mort...*/], 46, ::STRINGS[18/*"Perform"*/], nullptr);
        return;
    }

    switch (__this->Mode())
    {
        case 0:
        {
            uPtr(selection)->Toggle(selectable);
            break;
        }
        case 1:
        {
            uPtr(selection)->Add1(selectable);
            break;
        }
        case 2:
        {
            uPtr(selection)->Remove1(selectable);
            break;
        }
    }
}

// public Fuse.Selection.SelectMode get_Mode() [instance]
int32_t ToggleSelection::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Selection.SelectMode value) [instance]
void ToggleSelection::Mode(int32_t value)
{
    _mode = value;
}
// }

}}} // ::g::Fuse::Selection
