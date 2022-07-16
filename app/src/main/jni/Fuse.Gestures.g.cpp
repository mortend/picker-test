// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Anima-c53c24b4.h>
#include <Fuse.Controls.ScrollDirections.h>
#include <Fuse.Controls.ScrollP-3a841705.h>
#include <Fuse.Controls.ScrollP-e3c40c45.h>
#include <Fuse.Controls.ScrollView.h>
#include <Fuse.Controls.ScrollViewBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Gestures.DegreeSpan.h>
#include <Fuse.Gestures.Edge.h>
#include <Fuse.Gestures.Interna-70e90cbe.h>
#include <Fuse.Gestures.Interna-e5aaa310.h>
#include <Fuse.Gestures.Internal.Swiper.h>
#include <Fuse.Gestures.KeepFocusInView.h>
#include <Fuse.Gestures.KeepInViewCommon.h>
#include <Fuse.Gestures.Scrolle-d9346253.h>
#include <Fuse.Gestures.Scroller.h>
#include <Fuse.Gestures.ScrollTo.h>
#include <Fuse.Gestures.ScrollToHow.h>
#include <Fuse.Gestures.SetSwipeActive.h>
#include <Fuse.Gestures.Swiped.h>
#include <Fuse.Gestures.SwipedHow.h>
#include <Fuse.Gestures.SwipeDirection.h>
#include <Fuse.Gestures.SwipeGe-545ea982.h>
#include <Fuse.Gestures.SwipeGesture.h>
#include <Fuse.Gestures.SwipeType.h>
#include <Fuse.Gestures.SwipingAnimation.h>
#include <Fuse.Gestures.ToggleS-51407827.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GesturePri-c96394d3.h>
#include <Fuse.Input.GesturePriority.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWhe-bba8a6d9.h>
#include <Fuse.Input.PointerWhe-c022b7e3.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Motion.MotionConfig.h>
#include <Fuse.Motion.Simulatio-5b73d93d.h>
#include <Fuse.Motion.Simulatio-8633ea10.h>
#include <Fuse.Motion.Simulatio-babbef3d.h>
#include <Fuse.Motion.Simulatio-c99a618b.h>
#include <Fuse.Motion.Simulatio-dc75e704.h>
#include <Fuse.Node.h>
#include <Fuse.PlacedHandler.h>
#include <Fuse.RequestBringInto-340c9b51.h>
#include <Fuse.RequestBringIntoViewArgs.h>
#include <Fuse.Time.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Uno.Action.h>
#include <Uno.Action2-2.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.UX.ValueChangedArgs-1.h>
#include <Uno.Vector.h>
static uString* STRINGS[8];
static uType* TYPES[6];

namespace g{
namespace Fuse{
namespace Gestures{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Internal/Helpers.uno
// --------------------------------------------------------------------------

// internal sealed class DegreeSpan
// {
static void DegreeSpan_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(DegreeSpan, _a), 0,
        ::g::Uno::Float_typeof(), offsetof(DegreeSpan, _b), 0);
}

uType* DegreeSpan_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DegreeSpan);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.DegreeSpan", options);
    type->fp_build_ = DegreeSpan_build;
    return type;
}

// public DegreeSpan(float a, float b)
void DegreeSpan__ctor__fn(DegreeSpan* __this, float* a, float* b)
{
    __this->ctor_(*a, *b);
}

// public bool IsWithinBounds(float x)
void DegreeSpan__IsWithinBounds_fn(DegreeSpan* __this, float* x, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*x);
}

// public DegreeSpan New(float a, float b)
void DegreeSpan__New1_fn(float* a, float* b, DegreeSpan** __retval)
{
    *__retval = DegreeSpan::New1(*a, *b);
}

// public DegreeSpan(float a, float b) [instance]
void DegreeSpan::ctor_(float a, float b)
{
    _a = a;
    _b = b;
}

// public bool IsWithinBounds(float x) [instance]
bool DegreeSpan::IsWithinBounds(float x)
{
    float angle1 = _a;
    float angle2 = _b;
    float rAngle = ::g::Uno::Math::Mod1(::g::Uno::Math::Mod1(angle2 - angle1, 360.0f) + 360.0f, 360.0f);

    if (rAngle >= 180.0f)
    {
        float a = angle1;
        angle1 = angle2;
        angle2 = a;
    }

    if (angle1 <= angle2)
        return (x >= angle1) && (x <= angle2);
    else
        return (x >= angle2) || (x <= angle2);
}

// public DegreeSpan New(float a, float b) [static]
DegreeSpan* DegreeSpan::New1(float a, float b)
{
    DegreeSpan* obj1 = (DegreeSpan*)uNew(DegreeSpan_typeof());
    obj1->ctor_(a, b);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/WhileEdgeSwiped.uno
// -------------------------------------------------------------------------

// public enum Edge
uEnumType* Edge_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Gestures.Edge", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/KeepInView.uno
// --------------------------------------------------------------------

// public sealed class KeepFocusInView
// {
static void KeepFocusInView_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Input::FocusGainedHandler_typeof();
    ::TYPES[1] = ::g::Fuse::Input::FocusLostHandler_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(20);
}

::g::Fuse::Node_type* KeepFocusInView_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Gestures::KeepInViewCommon_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(KeepFocusInView);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepFocusInView", options);
    type->fp_build_ = KeepFocusInView_build;
    type->fp_ctor_ = (void*)KeepFocusInView__New3_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepFocusInView__OnUnrooted_fn;
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

// public generated KeepFocusInView()
void KeepFocusInView__ctor_4_fn(KeepFocusInView* __this)
{
    __this->ctor_4();
}

// public generated KeepFocusInView New()
void KeepFocusInView__New3_fn(KeepFocusInView** __retval)
{
    *__retval = KeepFocusInView::New3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga)
void KeepFocusInView__OnGotFocus_fn(KeepFocusInView* __this, uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    __this->OnGotFocus(s, fga);
}

// private void OnLostFocus(object s, object a)
void KeepFocusInView__OnLostFocus_fn(KeepFocusInView* __this, uObject* s, uObject* a)
{
    __this->OnLostFocus(s, a);
}

// protected override sealed void OnRooted()
void KeepFocusInView__OnRooted_fn(KeepFocusInView* __this)
{
    ::g::Fuse::Gestures::KeepInViewCommon__OnRooted_fn(__this);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[0/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[1/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
}

// protected override sealed void OnUnrooted()
void KeepFocusInView__OnUnrooted_fn(KeepFocusInView* __this)
{
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Gained()), __this->Parent(), uDelegate::New(::TYPES[0/*Fuse.Input.FocusGainedHandler*/], (void*)KeepFocusInView__OnGotFocus_fn, __this));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Focus::Lost()), __this->Parent(), uDelegate::New(::TYPES[1/*Fuse.Input.FocusLostHandler*/], (void*)KeepFocusInView__OnLostFocus_fn, __this));
    ::g::Fuse::Gestures::KeepInViewCommon__OnUnrooted_fn(__this);
}

// public generated KeepFocusInView() [instance]
void KeepFocusInView::ctor_4()
{
    ctor_3();
}

// private void OnGotFocus(object s, Fuse.Input.FocusGainedArgs fga) [instance]
void KeepFocusInView::OnGotFocus(uObject* s, ::g::Fuse::Input::FocusGainedArgs* fga)
{
    Target(::g::Fuse::Input::Focus::FocusedVisual());
}

// private void OnLostFocus(object s, object a) [instance]
void KeepFocusInView::OnLostFocus(uObject* s, uObject* a)
{
    Target(nullptr);
}

// public generated KeepFocusInView New() [static]
KeepFocusInView* KeepFocusInView::New3()
{
    KeepFocusInView* obj1 = (KeepFocusInView*)uNew(KeepFocusInView_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/KeepInView.uno
// --------------------------------------------------------------------

// public class KeepInViewCommon
// {
static void KeepInViewCommon_build(uType* type)
{
    ::TYPES[2] = ::g::Fuse::PlacedHandler_typeof();
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Node_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Node_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Node_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Node_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Node_type, interface6));
    type->SetFields(17,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(KeepInViewCommon, _target), 0,
        ::g::Uno::Bool_typeof(), offsetof(KeepInViewCommon, _attached), 0,
        ::TYPES[3/*Fuse.Elements.Element*/], offsetof(KeepInViewCommon, _rootElement), 0);
}

::g::Fuse::Node_type* KeepInViewCommon_typeof()
{
    static uSStrong< ::g::Fuse::Node_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 7;
    options.ObjectSize = sizeof(KeepInViewCommon);
    options.TypeSize = sizeof(::g::Fuse::Node_type);
    type = (::g::Fuse::Node_type*)uClassType::New("Fuse.Gestures.KeepInViewCommon", options);
    type->fp_build_ = KeepInViewCommon_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))KeepInViewCommon__OnUnrooted_fn;
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

// internal KeepInViewCommon()
void KeepInViewCommon__ctor_3_fn(KeepInViewCommon* __this)
{
    __this->ctor_3();
}

// private void AttachElement()
void KeepInViewCommon__AttachElement_fn(KeepInViewCommon* __this)
{
    __this->AttachElement();
}

// protected override void OnRooted()
void KeepInViewCommon__OnRooted_fn(KeepInViewCommon* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_rootElement = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[3/*Fuse.Elements.Element*/]);

    if (__this->_rootElement != nullptr)
    {
        uPtr(__this->_rootElement)->add_Placed(uDelegate::New(::TYPES[2/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->AttachElement();
    }
}

// protected override void OnUnrooted()
void KeepInViewCommon__OnUnrooted_fn(KeepInViewCommon* __this)
{
    if (__this->_rootElement != nullptr)
    {
        uPtr(__this->_rootElement)->remove_Placed(uDelegate::New(::TYPES[2/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, __this));
        __this->ReleaseElement();
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void ReleaseElement()
void KeepInViewCommon__ReleaseElement_fn(KeepInViewCommon* __this)
{
    __this->ReleaseElement();
}

// public Fuse.Node get_Target()
void KeepInViewCommon__get_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node** __retval)
{
    *__retval = __this->Target();
}

// public void set_Target(Fuse.Node value)
void KeepInViewCommon__set_Target_fn(KeepInViewCommon* __this, ::g::Fuse::Node* value)
{
    __this->Target(value);
}

// private void Update(object s, object a)
void KeepInViewCommon__Update_fn(KeepInViewCommon* __this, uObject* s, uObject* a)
{
    __this->Update(s, a);
}

// internal KeepInViewCommon() [instance]
void KeepInViewCommon::ctor_3()
{
    ctor_2();
}

// private void AttachElement() [instance]
void KeepInViewCommon::AttachElement()
{
    if (_target == nullptr)
        return;

    uPtr(_target)->add_Placed(uDelegate::New(::TYPES[2/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = true;
    Update(nullptr, nullptr);
}

// private void ReleaseElement() [instance]
void KeepInViewCommon::ReleaseElement()
{
    if (!_attached)
        return;

    uPtr(_target)->remove_Placed(uDelegate::New(::TYPES[2/*Fuse.PlacedHandler*/], (void*)KeepInViewCommon__Update_fn, this));
    _attached = false;
}

// public Fuse.Node get_Target() [instance]
::g::Fuse::Node* KeepInViewCommon::Target()
{
    return _target;
}

// public void set_Target(Fuse.Node value) [instance]
void KeepInViewCommon::Target(::g::Fuse::Node* value)
{
    ::g::Fuse::Elements::Element* prev = _target;
    ReleaseElement();
    ::g::Fuse::Node* v = value;

    while (v != nullptr)
    {
        _target = uAs< ::g::Fuse::Elements::Element*>(v, ::TYPES[3/*Fuse.Elements.Element*/]);

        if (_target != nullptr)
            break;

        v = uPtr(v)->Parent();
    }

    if (v == nullptr)
    {
        if (prev != nullptr)
            uPtr(prev)->OnBringIntoView(nullptr);

        _target = nullptr;
    }
    else
        AttachElement();
}

// private void Update(object s, object a) [instance]
void KeepInViewCommon::Update(uObject* s, uObject* a)
{
    if (_target != nullptr)
        uPtr(_target)->BringIntoView();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.uno
// -----------------------------------------------------------------------------

// private enum Scroller.MoveUserFlags
uEnumType* Scroller__MoveUserFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Gestures.Scroller.MoveUserFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Started", 1LL,
        "Release", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.uno
// -----------------------------------------------------------------------------

// public sealed class Scroller
// {
// static generated Scroller()
static void Scroller__cctor_1_fn(uType* __type)
{
    Scroller::_horizontalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(1.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), 2, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(45.0f, 135.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, -135.0f)));
    Scroller::_verticalGesture_ = ::g::Fuse::Gestures::SwipeGestureHelper::New1(1.0f, uArray::Init< ::g::Fuse::Gestures::DegreeSpan*>(::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), 3, (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-45.0f, 45.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(-135.0f, -180.0f), (::g::Fuse::Gestures::DegreeSpan*)::g::Fuse::Gestures::DegreeSpan::New1(135.0f, 180.0f)));
}

static void Scroller_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Input::Pointer_typeof(),
        ::g::Fuse::Controls::ScrollViewBase_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Scroller_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(Scroller_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(Scroller_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(Scroller_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(Scroller_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Scroller_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(Scroller_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Scroller_type, interface7),
        ::g::Fuse::Input::IGesture_typeof(), offsetof(Scroller_type, interface8));
    type->SetFields(17,
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(Scroller, _region), 0,
        ::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr), offsetof(Scroller, _velocity), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _delayStart), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(Scroller, _scrollable), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _pointerListening), 0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(Scroller, _gesture), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _hasUpdated), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _updateFirstFrame), 0,
        ::g::Uno::Int_typeof(), offsetof(Scroller, _down), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _pointerPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _prevPos), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _startPos), 0,
        ::g::Uno::Double_typeof(), offsetof(Scroller, _prevTime), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _softCaptureStart), 0,
        ::g::Uno::Float2_typeof(), offsetof(Scroller, _softCaptureCurrent), 0,
        ::g::Uno::Float_typeof(), offsetof(Scroller, _significance), 0,
        ::g::Uno::Bool_typeof(), offsetof(Scroller, _pressed), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Scroller, _pendingBringIntoView), 0,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&Scroller::_horizontalGesture_, uFieldFlagsStatic,
        ::g::Fuse::Gestures::SwipeGestureHelper_typeof(), (uintptr_t)&Scroller::_verticalGesture_, uFieldFlagsStatic);
}

Scroller_type* Scroller_typeof()
{
    static uSStrong<Scroller_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 37;
    options.InterfaceCount = 9;
    options.DependencyCount = 5;
    options.ObjectSize = sizeof(Scroller);
    options.TypeSize = sizeof(Scroller_type);
    type = (Scroller_type*)uClassType::New("Fuse.Gestures.Scroller", options);
    type->fp_build_ = Scroller_build;
    type->fp_cctor_ = Scroller__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Scroller__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Scroller__OnUnrooted_fn;
    type->interface8.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*, int32_t*))Scroller__FuseInputIGestureOnPointerPressed_fn;
    type->interface8.fp_OnCaptureChanged = (void(*)(uObject*, ::g::Fuse::Input::PointerEventArgs*, int32_t*, int32_t*))Scroller__FuseInputIGestureOnCaptureChanged_fn;
    type->interface8.fp_OnLostCapture = (void(*)(uObject*, bool*))Scroller__FuseInputIGestureOnLostCapture_fn;
    type->interface8.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*, int32_t*))Scroller__FuseInputIGestureOnPointerMoved_fn;
    type->interface8.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*, int32_t*))Scroller__FuseInputIGestureOnPointerReleased_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_get_Priority = (void(*)(uObject*, ::g::Fuse::Input::GesturePriorityConfig*))Scroller__FuseInputIGestureget_Priority_fn;
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

// internal Scroller(bool ignore)
void Scroller__ctor_3_fn(Scroller* __this, bool* ignore)
{
    __this->ctor_3(*ignore);
}

// public void CheckLimits()
void Scroller__CheckLimits_fn(Scroller* __this)
{
    __this->CheckLimits();
}

// private void CheckNeedUpdated([bool off])
void Scroller__CheckNeedUpdated_fn(Scroller* __this, bool* off)
{
    __this->CheckNeedUpdated(*off);
}

// public bool get_DelayStart()
void Scroller__get_DelayStart_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->DelayStart();
}

// public void set_DelayStart(bool value)
void Scroller__set_DelayStart_fn(Scroller* __this, bool* value)
{
    __this->DelayStart(*value);
}

// private float2 FromWindow(float2 p)
void Scroller__FromWindow_fn(Scroller* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FromWindow(*p);
}

// private void Fuse.Input.IGesture.OnCaptureChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType how, Fuse.Input.CaptureType prev)
void Scroller__FuseInputIGestureOnCaptureChanged_fn(Scroller* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* how, int32_t* prev)
{
    int32_t how_ = *how;

    if ((how_ & 1) == 1)
        __this->_softCaptureStart = (__this->_softCaptureCurrent = uPtr(args)->WindowPoint());

    __this->StartInvalidateVisual();
    __this->_pointerPos = uPtr(args)->WindowPoint();
    __this->_prevPos = (__this->_startPos = __this->_pointerPos);
    __this->_prevTime = args->Timestamp();
    ::g::Fuse::Motion::Simulation::PointerVelocity__Reset1_fn(uPtr(__this->_velocity), uCRef(__this->FromWindow(__this->_pointerPos)), uCRef(::g::Uno::Float2__New1(0.0f)), uCRef(0.0));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(uPtr(__this->_scrollable)->ScrollPosition()));
    __this->CheckNeedUpdated(false);
}

// private void Fuse.Input.IGesture.OnLostCapture(bool forced)
void Scroller__FuseInputIGestureOnLostCapture_fn(Scroller* __this, bool* forced)
{
    __this->StopInvalidateVisual();
    __this->_significance = 0.0f;

    if ((__this->_region != nullptr) && ::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New1(0.0f));

    __this->CheckNeedUpdated(false);
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerMoved(Fuse.Input.PointerMovedArgs args)
void Scroller__FuseInputIGestureOnPointerMoved_fn(Scroller* __this, ::g::Fuse::Input::PointerMovedArgs* args, int32_t* __retval)
{
    if (__this->_gesture == nullptr)
        return *__retval = 0, void();

    if (!uPtr(__this->_gesture)->IsHardCapture())
    {
        __this->_softCaptureCurrent = uPtr(args)->WindowPoint();
        __this->_significance = 0.0f;
        ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(__this->_softCaptureCurrent, __this->_softCaptureStart);

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 15)
            __this->_significance = ::g::Uno::Vector::Length(diff);

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 3)
        {
            if (uPtr(Scroller::_horizontalGesture_)->IsWithinBounds(diff))
                __this->_significance = ::g::Uno::Math::Abs1(diff.X);
        }

        if (uPtr(__this->_scrollable)->AllowedScrollDirections() == 12)
        {
            if (uPtr(Scroller::_verticalGesture_)->IsWithinBounds(diff))
                __this->_significance = ::g::Uno::Math::Abs1(diff.Y);
        }
    }

    __this->_pointerPos = uPtr(args)->WindowPoint();
    __this->MoveUser((!__this->_delayStart || uPtr(__this->_gesture)->IsHardCapture()) ? 1 : 0, args->Timestamp());
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerPressed(Fuse.Input.PointerPressedArgs args)
void Scroller__FuseInputIGestureOnPointerPressed_fn(Scroller* __this, ::g::Fuse::Input::PointerPressedArgs* args, int32_t* __retval)
{
    ::g::Uno::Float2 ret2;
    __this->StartInvalidateVisual();
    __this->_significance = (float)((::g::Uno::Vector::Length((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret2), ret2)) > 100.0f) ? 100 : 0);
    return *__retval = 1, void();
}

// private Fuse.Input.GestureRequest Fuse.Input.IGesture.OnPointerReleased(Fuse.Input.PointerReleasedArgs args)
void Scroller__FuseInputIGestureOnPointerReleased_fn(Scroller* __this, ::g::Fuse::Input::PointerReleasedArgs* args, int32_t* __retval)
{
    ::g::Uno::Float2 ret3;
    __this->StopInvalidateVisual();

    if (__this->_delayStart && !uPtr(__this->_gesture)->IsHardCapture())
        return *__retval = 2, void();

    if (::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
    {
        __this->_pointerPos = uPtr(args)->WindowPoint();
        __this->MoveUser(3, args->Timestamp());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(__this->_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__op_UnaryNegation(uPtr(__this->_scrollable)->ConstrainExtents((::g::Fuse::Motion::Simulation::PointerVelocity__get_CurrentVelocity_fn(uPtr(__this->_velocity), &ret3), ret3))));
    }

    return *__retval = 2, void();
}

// private Fuse.Input.GesturePriorityConfig Fuse.Input.IGesture.get_Priority()
void Scroller__FuseInputIGestureget_Priority_fn(Scroller* __this, ::g::Fuse::Input::GesturePriorityConfig* __retval)
{
    return *__retval = ::g::Fuse::Input::GesturePriorityConfig__New1((__this->_scrollable == nullptr) ? 1 : uPtr(__this->_scrollable)->GesturePriority(), (float)(!__this->DelayStart() ? 100 : 0) + __this->_significance, 0), void();
}

// public void Goto(float2 position)
void Scroller__Goto_fn(Scroller* __this, ::g::Uno::Float2* position)
{
    __this->Goto(*position);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time)
void Scroller__MoveUser_fn(Scroller* __this, int32_t* flags, double* time)
{
    __this->MoveUser(*flags, *time);
}

// internal Scroller New(bool ignore)
void Scroller__New2_fn(bool* ignore, Scroller** __retval)
{
    *__retval = Scroller::New2(*ignore);
}

// private void OnPointerWheelMoved(object sender, Fuse.Input.PointerWheelMovedArgs args)
void Scroller__OnPointerWheelMoved_fn(Scroller* __this, uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    __this->OnPointerWheelMoved(sender, args);
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args)
void Scroller__OnRequestBringIntoView_fn(Scroller* __this, uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    __this->OnRequestBringIntoView(sender, args);
}

// protected override sealed void OnRooted()
void Scroller__OnRooted_fn(Scroller* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    __this->_scrollable = uAs< ::g::Fuse::Controls::ScrollView*>(__this->Parent(), ::g::Fuse::Controls::ScrollView_typeof());

    if (__this->_scrollable == nullptr)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Scroller can only be used in a ScrollView")));

    uPtr(__this->_scrollable)->AddPropertyListener((uObject*)__this);
    uPtr(__this->_scrollable)->_scroller = __this;
    uPtr(__this->_scrollable)->add_RequestBringIntoView(uDelegate::New(::g::Fuse::RequestBringIntoViewHandler_typeof(), (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->add_ScrollPositionChanged(uDelegate::New(::g::Fuse::Controls::ScrollPositionChangedHandler_typeof(), (void*)Scroller__OnScrollPositionChanged_fn, __this));
    __this->_region = uPtr(uPtr(__this->_scrollable)->Motion())->AcquireSimulation();
    __this->UpdatePointerEvents(false);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args)
void Scroller__OnScrollPositionChanged_fn(Scroller* __this, uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    __this->OnScrollPositionChanged(s, args);
}

// protected override sealed void OnUnrooted()
void Scroller__OnUnrooted_fn(Scroller* __this)
{
    __this->StopInvalidateVisual();
    uPtr(__this->_scrollable)->RemovePropertyListener((uObject*)__this);
    uPtr(__this->_scrollable)->remove_RequestBringIntoView(uDelegate::New(::g::Fuse::RequestBringIntoViewHandler_typeof(), (void*)Scroller__OnRequestBringIntoView_fn, __this));
    uPtr(__this->_scrollable)->remove_ScrollPositionChanged(uDelegate::New(::g::Fuse::Controls::ScrollPositionChangedHandler_typeof(), (void*)Scroller__OnScrollPositionChanged_fn, __this));
    uPtr(__this->_scrollable)->_scroller = nullptr;

    if (__this->_hasUpdated)
    {
        __this->_hasUpdated = false;
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::g::Uno::Action_typeof(), (void*)Scroller__OnUpdated_fn, __this), 0);
    }

    __this->UpdatePointerEvents(true);

    if (__this->_region != nullptr)
    {
        uPtr(uPtr(__this->_scrollable)->Motion())->ReleaseSimulation();
        __this->_region = nullptr;
    }

    __this->_scrollable = nullptr;
    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// private void OnUpdated()
void Scroller__OnUpdated_fn(Scroller* __this)
{
    __this->OnUpdated();
}

// private void PerformBringIntoView()
void Scroller__PerformBringIntoView_fn(Scroller* __this)
{
    __this->PerformBringIntoView();
}

// private bool get_ScrollableUserScroll()
void Scroller__get_ScrollableUserScroll_fn(Scroller* __this, bool* __retval)
{
    *__retval = __this->ScrollableUserScroll();
}

// private void StartInvalidateVisual()
void Scroller__StartInvalidateVisual_fn(Scroller* __this)
{
    __this->StartInvalidateVisual();
}

// private void StopInvalidateVisual()
void Scroller__StopInvalidateVisual_fn(Scroller* __this)
{
    __this->StopInvalidateVisual();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel)
void Scroller__UnoUXIPropertyListenerOnPropertyChanged_fn(Scroller* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
    ::g::Uno::UX::Selector sel_ = *sel;

    if (obj != __this->_scrollable)
        return;

    if (::g::Uno::UX::Selector__op_Equality(sel_, ::g::Fuse::Controls::ScrollViewBase::UserScrollName()))
        __this->UpdatePointerEvents(false);
}

// private void UpdatePointerEvents([bool forceOff])
void Scroller__UpdatePointerEvents_fn(Scroller* __this, bool* forceOff)
{
    __this->UpdatePointerEvents(*forceOff);
}

// private void UpdateScrollMax()
void Scroller__UpdateScrollMax_fn(Scroller* __this)
{
    __this->UpdateScrollMax();
}

uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_horizontalGesture_;
uSStrong< ::g::Fuse::Gestures::SwipeGestureHelper*> Scroller::_verticalGesture_;

// internal Scroller(bool ignore) [instance]
void Scroller::ctor_3(bool ignore)
{
    _velocity = ((::g::Fuse::Motion::Simulation::PointerVelocity*)::g::Fuse::Motion::Simulation::PointerVelocity::New1(::g::Fuse::Motion::Simulation::PointerVelocity_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)));
    _delayStart = true;
    _down = -1;
    ctor_2();
}

// public void CheckLimits() [instance]
void Scroller::CheckLimits()
{
    UpdateScrollMax();

    if (((_region != nullptr) && ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()))) && !::g::Fuse::Motion::Simulation::BoundedRegion2D::IsUser(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof())))
        Goto(uPtr(_scrollable)->ScrollPosition());
}

// private void CheckNeedUpdated([bool off]) [instance]
void Scroller::CheckNeedUpdated(bool off)
{
    bool needUpdated = ((_region != nullptr) && !::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()))) && IsRootingStarted();

    if (needUpdated == _hasUpdated)
        return;

    if (needUpdated)
    {
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::g::Uno::Action_typeof(), (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = true;
        _updateFirstFrame = true;
    }
    else if (off)
    {
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::g::Uno::Action_typeof(), (void*)Scroller__OnUpdated_fn, this), 0);
        _hasUpdated = false;
    }
}

// public bool get_DelayStart() [instance]
bool Scroller::DelayStart()
{
    return _delayStart;
}

// public void set_DelayStart(bool value) [instance]
void Scroller::DelayStart(bool value)
{
    _delayStart = value;
    ::g::Fuse::Diagnostics::Deprecated(uString::Const("Scroller.DelayStart is no longer supported."), this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.uno"), 42, uString::Const("set_DelayStart"));
}

// private float2 FromWindow(float2 p) [instance]
::g::Uno::Float2 Scroller::FromWindow(::g::Uno::Float2 p)
{
    return uPtr(uPtr(_scrollable)->Parent())->WindowToLocal(p);
}

// public void Goto(float2 position) [instance]
void Scroller::Goto(::g::Uno::Float2 position)
{
    if (_scrollable == nullptr)
        return;

    position = uPtr(_scrollable)->Constrain(position);
    UpdateScrollMax();

    if (_region != nullptr)
    {
        if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof())))
            ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(uPtr(_scrollable)->ScrollPosition()));

        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MoveTo(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), position);
    }

    CheckNeedUpdated(false);
}

// private void MoveUser(Fuse.Gestures.Scroller.MoveUserFlags flags, double time) [instance]
void Scroller::MoveUser(int32_t flags, double time)
{
    ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(FromWindow(_prevPos), FromWindow(_pointerPos));

    if ((flags & 2) == 2)
        diff = ::g::Uno::Float2__New1(0.0f);

    _prevPos = _pointerPos;
    double elapsed = time - _prevTime;
    _prevTime = time;

    if ((flags & 1) == 1)
    {
        ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(uPtr(_scrollable)->ScrollPosition()));
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), diff);
        OnUpdated();
    }

    ::g::Fuse::Motion::Simulation::PointerVelocity__AddSample_fn(uPtr(_velocity), uCRef(FromWindow(_pointerPos)), uCRef((double)(float)elapsed), uCRef<int32_t>((!((flags & 1) == 1) ? 1 : 0) | (((flags & 2) == 2) ? 2 : 0)));
}

// private void OnPointerWheelMoved(object sender, Fuse.Input.PointerWheelMovedArgs args) [instance]
void Scroller::OnPointerWheelMoved(uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    ::g::Uno::Float2 ret4;
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StartUser(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(uPtr(_scrollable)->ScrollPosition()));
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::StepUser(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__op_UnaryNegation(uPtr(args)->WheelDelta()));
    UpdateScrollMax();
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()), ::g::Fuse::Time::FrameInterval());
    uPtr(_scrollable)->SetScrollPosition1(::g::Uno::Math::Min3(::g::Uno::Math::Max3((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret4), ret4), uPtr(_scrollable)->MinScroll()), uPtr(_scrollable)->MaxScroll()), (uObject*)this);
    ::g::Fuse::Motion::Simulation::BoundedRegion2D::EndUser(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), ::g::Uno::Float2__New1(0.0f));
}

// private void OnRequestBringIntoView(object sender, Fuse.RequestBringIntoViewArgs args) [instance]
void Scroller::OnRequestBringIntoView(uObject* sender, ::g::Fuse::RequestBringIntoViewArgs* args)
{
    _pendingBringIntoView = uPtr(args)->Visual();
    ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::g::Uno::Action_typeof(), (void*)Scroller__PerformBringIntoView_fn, this), 1, 5);
}

// private void OnScrollPositionChanged(object s, Fuse.Controls.ScrollPositionChangedArgs args) [instance]
void Scroller::OnScrollPositionChanged(uObject* s, ::g::Fuse::Controls::ScrollPositionChangedArgs* args)
{
    ::g::Uno::Float2 ret5;

    if (uPtr(args)->Origin() == this)
        return;

    if (uPtr(args)->IsAdjustment())
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Adjust(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), uPtr(args)->ArrangeOffset());
    else
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::Reset(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), (::g::Uno::UX::ValueChangedArgs__get_Value_fn(uPtr(args), &ret5), ret5));

    CheckNeedUpdated(true);
}

// private void OnUpdated() [instance]
void Scroller::OnUpdated()
{
    ::g::Uno::Float2 ret6;

    if (_updateFirstFrame)
    {
        _updateFirstFrame = false;
        return;
    }

    if ((_region == nullptr) || (_scrollable == nullptr))
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Invalid scroller update"), nullptr, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.uno"), 380, uString::Const("OnUpdated"));
        return;
    }

    UpdateScrollMax();
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::Simulation_typeof()), ::g::Fuse::Time::FrameInterval());
    uPtr(_scrollable)->SetScrollPosition1((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret6), ret6), (uObject*)this);
    CheckNeedUpdated(true);
}

// private void PerformBringIntoView() [instance]
void Scroller::PerformBringIntoView()
{
    if ((_pendingBringIntoView == nullptr) || !uPtr(_pendingBringIntoView)->IsRootingCompleted())
        return;

    ::g::Uno::Float2 pos = uPtr(_scrollable)->GetVisualScrollPosition(_pendingBringIntoView);
    Goto(pos);
    _pendingBringIntoView = nullptr;
}

// private bool get_ScrollableUserScroll() [instance]
bool Scroller::ScrollableUserScroll()
{
    return (_scrollable != nullptr) ? uPtr(_scrollable)->UserScroll() : true;
}

// private void StartInvalidateVisual() [instance]
void Scroller::StartInvalidateVisual()
{
    if (!_pressed)
        ::g::Fuse::UpdateManager::AddAction1(uDelegate::New(::g::Uno::Action_typeof(), (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_scrollable)), 0);

    _pressed = true;
}

// private void StopInvalidateVisual() [instance]
void Scroller::StopInvalidateVisual()
{
    if (_pressed)
        ::g::Fuse::UpdateManager::RemoveAction1(uDelegate::New(::g::Uno::Action_typeof(), (void*)::g::Fuse::Visual__InvalidateVisual_fn, uPtr(_scrollable)), 0);

    _pressed = false;
}

// private void UpdatePointerEvents([bool forceOff]) [instance]
void Scroller::UpdatePointerEvents(bool forceOff)
{
    bool shouldListen = (!forceOff && (_scrollable != nullptr)) && ScrollableUserScroll();

    if (shouldListen == _pointerListening)
        return;

    if (shouldListen)
    {
        if (_gesture != nullptr)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent gesture state"), nullptr, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.uno"), 111, uString::Const("UpdatePointerEvents"));
        else
            _gesture = ::g::Fuse::Input::Gestures::Add((uObject*)this, _scrollable, 9);

        ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::WheelMoved()), _scrollable, uDelegate::New(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), (void*)Scroller__OnPointerWheelMoved_fn, this));
    }
    else if (_scrollable != nullptr)
    {
        if (_gesture == nullptr)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("inconsistent gesture state"), nullptr, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.uno"), 120, uString::Const("UpdatePointerEvents"));
        else
        {
            ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::WheelMoved()), _scrollable, uDelegate::New(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), (void*)Scroller__OnPointerWheelMoved_fn, this));
            uPtr(_gesture)->Dispose();
            _gesture = nullptr;
        }
    }
    else
        U_THROW(::g::Uno::Exception::New2(uString::Const("Invalid tear-down of pointer events")));

    _pointerListening = shouldListen;
}

// private void UpdateScrollMax() [instance]
void Scroller::UpdateScrollMax()
{
    if (_scrollable == nullptr)
        return;

    if (_region != nullptr)
    {
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MaxPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), uPtr(_scrollable)->MaxScroll());
        ::g::Fuse::Motion::Simulation::BoundedRegion2D::MinPosition(uInterface(uPtr(_region), ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof()), uPtr(_scrollable)->MinScroll());
    }
}

// internal Scroller New(bool ignore) [static]
Scroller* Scroller::New2(bool ignore)
{
    Scroller* obj1 = (Scroller*)uNew(Scroller_typeof());
    obj1->ctor_3(ignore);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.Actions.uno
// -------------------------------------------------------------------------------------

// public sealed class ScrollTo
// {
static void ScrollTo_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unabled to locate ScrollView");
    ::STRINGS[1] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.Actions.uno");
    ::STRINGS[2] = uString::Const("Perform");
    ::TYPES[4] = ::g::Fuse::Node_typeof()->MakeMethod(1/*FindByType<Fuse.Controls.ScrollView>*/, ::g::Fuse::Controls::ScrollView_typeof(), nullptr);
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::Float2_typeof(), offsetof(ScrollTo, _position), 0,
        ::g::Uno::Float2_typeof(), offsetof(ScrollTo, _relativePosition), 0,
        ::g::Uno::Bool_typeof(), offsetof(ScrollTo, _hasRelativePosition), 0,
        ::g::Fuse::Gestures::ScrollToHow_typeof(), offsetof(ScrollTo, _how), 0,
        ::g::Fuse::Controls::ScrollView_typeof(), offsetof(ScrollTo, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ScrollTo_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 15;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ScrollTo);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ScrollTo", options);
    type->fp_build_ = ScrollTo_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ScrollTo__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public Fuse.Gestures.ScrollToHow get_How()
void ScrollTo__get_How_fn(ScrollTo* __this, int32_t* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.ScrollToHow value)
void ScrollTo__set_How_fn(ScrollTo* __this, int32_t* value)
{
    __this->How(*value);
}

// protected override sealed void Perform(Fuse.Node target)
void ScrollTo__Perform_fn(ScrollTo* __this, ::g::Fuse::Node* target)
{
    ::g::Fuse::Controls::ScrollView* ind1;
    ind1 = __this->Target();
    ::g::Fuse::Controls::ScrollView* scrollView = (ind1 != nullptr) ? ind1 : (::g::Fuse::Controls::ScrollView*)uPtr(target)->FindByType(::TYPES[4/*Fuse.Node.FindByType<Fuse.Controls.ScrollView>*/]);

    if (scrollView == nullptr)
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"Unabled to ...*/], __this, ::STRINGS[1/*"/Users/mort...*/], 107, ::STRINGS[2/*"Perform"*/], nullptr);
        return;
    }

    ::g::Uno::Float2 toPos = __this->_hasRelativePosition ? uPtr(scrollView)->RelativeToAbsolutePosition(__this->_relativePosition) : __this->_position;

    if (__this->How() == 0)
        uPtr(scrollView)->Goto(toPos);
    else
        uPtr(scrollView)->ScrollPosition(toPos);
}

// public generated Fuse.Controls.ScrollView get_Target()
void ScrollTo__get_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Controls.ScrollView value)
void ScrollTo__set_Target_fn(ScrollTo* __this, ::g::Fuse::Controls::ScrollView* value)
{
    __this->Target(value);
}

// public Fuse.Gestures.ScrollToHow get_How() [instance]
int32_t ScrollTo::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.ScrollToHow value) [instance]
void ScrollTo::How(int32_t value)
{
    _how = value;
}

// public generated Fuse.Controls.ScrollView get_Target() [instance]
::g::Fuse::Controls::ScrollView* ScrollTo::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Controls.ScrollView value) [instance]
void ScrollTo::Target(::g::Fuse::Controls::ScrollView* value)
{
    _Target = value;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.ScrollView/Scroller.Actions.uno
// -------------------------------------------------------------------------------------

// public enum ScrollToHow
uEnumType* ScrollToHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Gestures.ScrollToHow", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Goto", 0LL,
        "Seek", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public sealed class SetSwipeActive
// {
static void SetSwipeActive_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Uno::Bool_typeof(), offsetof(SetSwipeActive, _Bypass), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(SetSwipeActive, _Target), 0,
        ::g::Uno::Bool_typeof(), offsetof(SetSwipeActive, _Value), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* SetSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 13;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SetSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.SetSwipeActive", options);
    type->fp_build_ = SetSwipeActive_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))SetSwipeActive__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// public generated bool get_Bypass()
void SetSwipeActive__get_Bypass_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Bypass();
}

// public generated void set_Bypass(bool value)
void SetSwipeActive__set_Bypass_fn(SetSwipeActive* __this, bool* value)
{
    __this->Bypass(*value);
}

// protected override sealed void Perform(Fuse.Node target)
void SetSwipeActive__Perform_fn(SetSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != nullptr)
        uPtr(__this->Target())->SetActive(__this->Value(), nullptr, __this->Bypass());
}

// public generated Fuse.Gestures.SwipeGesture get_Target()
void SetSwipeActive__get_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value)
void SetSwipeActive__set_Target_fn(SetSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated bool get_Value()
void SetSwipeActive__get_Value_fn(SetSwipeActive* __this, bool* __retval)
{
    *__retval = __this->Value();
}

// public generated void set_Value(bool value)
void SetSwipeActive__set_Value_fn(SetSwipeActive* __this, bool* value)
{
    __this->Value(*value);
}

// public generated bool get_Bypass() [instance]
bool SetSwipeActive::Bypass()
{
    return _Bypass;
}

// public generated void set_Bypass(bool value) [instance]
void SetSwipeActive::Bypass(bool value)
{
    _Bypass = value;
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance]
::g::Fuse::Gestures::SwipeGesture* SetSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance]
void SetSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}

// public generated bool get_Value() [instance]
bool SetSwipeActive::Value()
{
    return _Value;
}

// public generated void set_Value(bool value) [instance]
void SetSwipeActive::Value(bool value)
{
    _Value = value;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public sealed class Swiped
// {
static void Swiped_build(uType* type)
{
    ::TYPES[5] = ::g::Uno::Action2_typeof()->MakeType(::g::Uno::Bool_typeof(), ::g::Uno::Bool_typeof(), nullptr);
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Triggers::Trigger_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Triggers::Trigger_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(::g::Fuse::Triggers::Trigger_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(::g::Fuse::Triggers::Trigger_type, interface8));
    type->SetFields(38,
        ::g::Fuse::Gestures::SwipedHow_typeof(), offsetof(Swiped, _how), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(Swiped, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(Swiped, _Source), 0);
}

::g::Fuse::Triggers::Trigger_type* Swiped_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Trigger_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 41;
    options.InterfaceCount = 9;
    options.ObjectSize = sizeof(Swiped);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Trigger_type);
    type = (::g::Fuse::Triggers::Trigger_type*)uClassType::New("Fuse.Gestures.Swiped", options);
    type->fp_build_ = Swiped_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))Swiped__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))Swiped__OnUnrooted_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public Swiped(Fuse.Gestures.SwipeGesture source)
void Swiped__ctor_5_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public Fuse.Gestures.SwipedHow get_How()
void Swiped__get_How_fn(Swiped* __this, int32_t* __retval)
{
    *__retval = __this->How();
}

// public void set_How(Fuse.Gestures.SwipedHow value)
void Swiped__set_How_fn(Swiped* __this, int32_t* value)
{
    __this->How(*value);
}

// public Swiped New(Fuse.Gestures.SwipeGesture source)
void Swiped__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, Swiped** __retval)
{
    *__retval = Swiped::New2(source);
}

// protected override sealed void OnRooted()
void Swiped__OnRooted_fn(Swiped* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->add_Swiped(uDelegate::New(::TYPES[5/*Uno.Action<bool, bool>*/], (void*)Swiped__OnSwiped_fn, __this));
}

// private void OnSwiped(bool v, bool cancelled)
void Swiped__OnSwiped_fn(Swiped* __this, bool* v, bool* cancelled)
{
    __this->OnSwiped(*v, *cancelled);
}

// protected override sealed void OnUnrooted()
void Swiped__OnUnrooted_fn(Swiped* __this)
{
    uPtr(__this->_region)->remove_Swiped(uDelegate::New(::TYPES[5/*Uno.Action<bool, bool>*/], (void*)Swiped__OnSwiped_fn, __this));
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source()
void Swiped__get_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value)
void Swiped__set_Source_fn(Swiped* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// public Swiped(Fuse.Gestures.SwipeGesture source) [instance]
void Swiped::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_4();
    Source(source);
}

// public Fuse.Gestures.SwipedHow get_How() [instance]
int32_t Swiped::How()
{
    return _how;
}

// public void set_How(Fuse.Gestures.SwipedHow value) [instance]
void Swiped::How(int32_t value)
{
    _how = value;
}

// private void OnSwiped(bool v, bool cancelled) [instance]
void Swiped::OnSwiped(bool v, bool cancelled)
{
    if (cancelled)
    {
        if (How() == 3)
            Pulse();

        return;
    }

    if (v && ((How() == 0) || (How() == 2)))
        Pulse();

    if (!v && ((How() == 1) || (How() == 2)))
        Pulse();
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance]
::g::Fuse::Gestures::SwipeGesture* Swiped::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance]
void Swiped::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public Swiped New(Fuse.Gestures.SwipeGesture source) [static]
Swiped* Swiped::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    Swiped* obj1 = (Swiped*)uNew(Swiped_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public enum SwipedHow
uEnumType* SwipedHow_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Gestures.SwipedHow", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "ToActive", 0LL,
        "ToInactive", 1LL,
        "ToEither", 2LL,
        "Cancelled", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public enum SwipeDirection
uEnumType* SwipeDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Left", 0LL,
        "Up", 1LL,
        "Right", 2LL,
        "Down", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public sealed class SwipeGesture
// {
// static generated SwipeGesture()
static void SwipeGesture__cctor_1_fn(uType* __type)
{
    SwipeGesture::GesturePriorityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[3/*"GesturePrio...*/]);
    SwipeGesture::_isActiveName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[4/*"IsActive"*/]);
}

static void SwipeGesture_build(uType* type)
{
    ::STRINGS[3] = uString::Const("GesturePriority");
    ::STRINGS[4] = uString::Const("IsActive");
    ::STRINGS[5] = uString::Const("Element");
    ::STRINGS[6] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno");
    ::STRINGS[7] = uString::Const("OnRooted");
    ::TYPES[3] = ::g::Fuse::Elements::Element_typeof();
    type->SetDependencies(
        ::g::Fuse::Gestures::Internal::Swiper_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(SwipeGesture_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipeGesture_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipeGesture_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipeGesture_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(SwipeGesture_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(SwipeGesture_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(SwipeGesture_type, interface6),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipeGesture_type, interface7));
    type->SetFields(17,
        ::g::Fuse::Gestures::Internal::Swiper_typeof(), offsetof(SwipeGesture, _swiper), 0,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(SwipeGesture, _region), 0,
        ::g::Fuse::Gestures::SwipeType_typeof(), offsetof(SwipeGesture, _type), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeGesture, _hasEdge), 0,
        ::g::Fuse::Gestures::Edge_typeof(), offsetof(SwipeGesture, _edge), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeGesture, _hasDirection), 0,
        ::g::Fuse::Gestures::SwipeDirection_typeof(), offsetof(SwipeGesture, _direction), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(SwipeGesture, _gesturePriority), 0,
        ::g::Uno::Bool_typeof(), offsetof(SwipeGesture, _hasThreshold), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SwipeGesture::GesturePriorityName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SwipeGesture::_isActiveName_, uFieldFlagsStatic);
}

SwipeGesture_type* SwipeGesture_typeof()
{
    static uSStrong<SwipeGesture_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Behavior_typeof();
    options.FieldCount = 28;
    options.InterfaceCount = 8;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SwipeGesture);
    options.TypeSize = sizeof(SwipeGesture_type);
    type = (SwipeGesture_type*)uClassType::New("Fuse.Gestures.SwipeGesture", options);
    type->fp_build_ = SwipeGesture_build;
    type->fp_ctor_ = (void*)SwipeGesture__New2_fn;
    type->fp_cctor_ = SwipeGesture__cctor_1_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipeGesture__OnUnrooted_fn;
    type->interface7.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
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

// public SwipeGesture()
void SwipeGesture__ctor_3_fn(SwipeGesture* __this)
{
    __this->ctor_3();
}

// public Fuse.Gestures.SwipeDirection get_Direction()
void SwipeGesture__get_Direction_fn(SwipeGesture* __this, int32_t* __retval)
{
    *__retval = __this->Direction();
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value)
void SwipeGesture__set_Direction_fn(SwipeGesture* __this, int32_t* value)
{
    __this->Direction(*value);
}

// public Fuse.Gestures.Edge get_Edge()
void SwipeGesture__get_Edge_fn(SwipeGesture* __this, int32_t* __retval)
{
    *__retval = __this->Edge();
}

// public void set_Edge(Fuse.Gestures.Edge value)
void SwipeGesture__set_Edge_fn(SwipeGesture* __this, int32_t* value)
{
    __this->Edge(*value);
}

// public float get_HitSize()
void SwipeGesture__get_HitSize_fn(SwipeGesture* __this, float* __retval)
{
    *__retval = __this->HitSize();
}

// public void set_HitSize(float value)
void SwipeGesture__set_HitSize_fn(SwipeGesture* __this, float* value)
{
    __this->HitSize(*value);
}

// public bool get_IsActive()
void SwipeGesture__get_IsActive_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsActive();
}

// public void set_IsActive(bool value)
void SwipeGesture__set_IsActive_fn(SwipeGesture* __this, bool* value)
{
    __this->IsActive(*value);
}

// public bool get_IsEnabled()
void SwipeGesture__get_IsEnabled_fn(SwipeGesture* __this, bool* __retval)
{
    *__retval = __this->IsEnabled();
}

// public void set_IsEnabled(bool value)
void SwipeGesture__set_IsEnabled_fn(SwipeGesture* __this, bool* value)
{
    __this->IsEnabled(*value);
}

// public Fuse.Elements.Element get_LengthNode()
void SwipeGesture__get_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element** __retval)
{
    *__retval = __this->LengthNode();
}

// public void set_LengthNode(Fuse.Elements.Element value)
void SwipeGesture__set_LengthNode_fn(SwipeGesture* __this, ::g::Fuse::Elements::Element* value)
{
    __this->LengthNode(value);
}

// public SwipeGesture New()
void SwipeGesture__New2_fn(SwipeGesture** __retval)
{
    *__retval = SwipeGesture::New2();
}

// protected override sealed void OnRooted()
void SwipeGesture__OnRooted_fn(SwipeGesture* __this)
{
    ::g::Fuse::Node__OnRooted_fn(__this);
    ::g::Fuse::Elements::Element* element = uAs< ::g::Fuse::Elements::Element*>(__this->Parent(), ::TYPES[3/*Fuse.Elements.Element*/]);

    if (element == nullptr)
    {
        ::g::Fuse::Diagnostics::UserRootError(::STRINGS[5/*"Element"*/], __this->Parent(), __this, ::STRINGS[6/*"/Users/mort...*/], 262, ::STRINGS[7/*"OnRooted"*/]);
        return;
    }

    uPtr(__this->_region)->SetActive(__this->IsActive());
    __this->_swiper = ::g::Fuse::Gestures::Internal::Swiper::AttachSwiper(element);
    uPtr(__this->_swiper)->AddRegion(__this->Region());
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
}

// protected override sealed void OnUnrooted()
void SwipeGesture__OnUnrooted_fn(SwipeGesture* __this)
{
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);

    if (__this->_swiper != nullptr)
    {
        uPtr(__this->_swiper)->RemoveRegion(__this->_region);
        uPtr(__this->_swiper)->Detach();
        __this->_swiper = nullptr;
    }

    ::g::Fuse::Node__OnUnrooted_fn(__this);
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region()
void SwipeGesture__get_Region_fn(SwipeGesture* __this, ::g::Fuse::Gestures::Internal::SwipeRegion** __retval)
{
    *__retval = __this->Region();
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass])
void SwipeGesture__SetActive_fn(SwipeGesture* __this, bool* value, uObject* origin, bool* bypass)
{
    __this->SetActive(*value, origin, *bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin)
void SwipeGesture__SetIsActive_fn(SwipeGesture* __this, bool* value, uObject* origin)
{
    __this->SetIsActive(*value, origin);
}

// public Fuse.Gestures.SwipeType get_Type()
void SwipeGesture__get_Type_fn(SwipeGesture* __this, int32_t* __retval)
{
    *__retval = __this->Type();
}

// public void set_Type(Fuse.Gestures.SwipeType value)
void SwipeGesture__set_Type_fn(SwipeGesture* __this, int32_t* value)
{
    __this->Type(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop)
void SwipeGesture__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipeGesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((obj == __this->_region) && ::g::Uno::UX::Selector__op_Equality(prop_, SwipeGesture::_isActiveName_))
        __this->OnPropertyChanged1(SwipeGesture::_isActiveName_, (uObject*)__this->_region);
}

::g::Uno::UX::Selector SwipeGesture::GesturePriorityName_;
::g::Uno::UX::Selector SwipeGesture::_isActiveName_;

// public SwipeGesture() [instance]
void SwipeGesture::ctor_3()
{
    _region = ::g::Fuse::Gestures::Internal::SwipeRegion::New2();
    _gesturePriority = 1;
    ctor_2();
    Type(0);
    Direction(0);
}

// public Fuse.Gestures.SwipeDirection get_Direction() [instance]
int32_t SwipeGesture::Direction()
{
    return _direction;
}

// public void set_Direction(Fuse.Gestures.SwipeDirection value) [instance]
void SwipeGesture::Direction(int32_t value)
{
    _direction = value;
    _hasDirection = true;
    uPtr(_region)->Area = 0;

    switch (Direction())
    {
        case 0:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
            uPtr(_region)->Priority = 101;
            break;
        }
        case 1:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
            uPtr(_region)->Priority = 102;
            break;
        }
        case 2:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
            uPtr(_region)->Priority = 103;
            break;
        }
        case 3:
        {
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
            uPtr(_region)->Priority = 104;
            break;
        }
    }
}

// public Fuse.Gestures.Edge get_Edge() [instance]
int32_t SwipeGesture::Edge()
{
    return _edge;
}

// public void set_Edge(Fuse.Gestures.Edge value) [instance]
void SwipeGesture::Edge(int32_t value)
{
    _edge = value;
    _hasEdge = true;
    uPtr(_region)->Area = 1;

    switch (_edge)
    {
        case 0:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 0.0f, 1.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(1.0f, 0.0f);
            uPtr(_region)->Priority = 1;
            break;
        }
        case 2:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 0.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, 1.0f);
            uPtr(_region)->Priority = 2;
            break;
        }
        case 1:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(1.0f, 0.0f, 1.0f, 1.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(-1.0f, 0.0f);
            uPtr(_region)->Priority = 3;
            break;
        }
        case 3:
        {
            uPtr(_region)->AreaVector = ::g::Uno::Float4__New2(0.0f, 1.0f, 1.0f, 1.0f);
            uPtr(_region)->Direction = ::g::Uno::Float2__New2(0.0f, -1.0f);
            uPtr(_region)->Priority = 4;
            break;
        }
    }
}

// public float get_HitSize() [instance]
float SwipeGesture::HitSize()
{
    return uPtr(_region)->AreaVectorDistance;
}

// public void set_HitSize(float value) [instance]
void SwipeGesture::HitSize(float value)
{
    uPtr(_region)->AreaVectorDistance = value;
}

// public bool get_IsActive() [instance]
bool SwipeGesture::IsActive()
{
    return uPtr(_region)->IsActive();
}

// public void set_IsActive(bool value) [instance]
void SwipeGesture::IsActive(bool value)
{
    SetIsActive(value, (uObject*)this);
}

// public bool get_IsEnabled() [instance]
bool SwipeGesture::IsEnabled()
{
    return uPtr(_region)->IsEnabled();
}

// public void set_IsEnabled(bool value) [instance]
void SwipeGesture::IsEnabled(bool value)
{
    uPtr(_region)->IsEnabled(value);
}

// public Fuse.Elements.Element get_LengthNode() [instance]
::g::Fuse::Elements::Element* SwipeGesture::LengthNode()
{
    return uPtr(_region)->LengthElement;
}

// public void set_LengthNode(Fuse.Elements.Element value) [instance]
void SwipeGesture::LengthNode(::g::Fuse::Elements::Element* value)
{
    uPtr(_region)->LengthElement = value;
}

// internal Fuse.Gestures.Internal.SwipeRegion get_Region() [instance]
::g::Fuse::Gestures::Internal::SwipeRegion* SwipeGesture::Region()
{
    return _region;
}

// internal void SetActive(bool value, Uno.UX.IPropertyListener origin, [bool bypass]) [instance]
void SwipeGesture::SetActive(bool value, uObject* origin, bool bypass)
{
    if (_swiper == nullptr)
        uPtr(_region)->SetIsActive(value, origin);
    else
        uPtr(_swiper)->SetActivation(_region, value, bypass);
}

// public void SetIsActive(bool value, Uno.UX.IPropertyListener origin) [instance]
void SwipeGesture::SetIsActive(bool value, uObject* origin)
{
    SetActive(value, origin, false);
}

// public Fuse.Gestures.SwipeType get_Type() [instance]
int32_t SwipeGesture::Type()
{
    return _type;
}

// public void set_Type(Fuse.Gestures.SwipeType value) [instance]
void SwipeGesture::Type(int32_t value)
{
    _type = value;
    uPtr(_region)->IsInterruptible = (Type() != 0);
    uPtr(_region)->RevertActive = (Type() != 1);
    uPtr(_region)->AutoTrigger = (Type() == 2);

    if ((_type == 1) && !_hasThreshold)
    {
        uPtr(_region)->ActivationThreshold = 0.5f;
        uPtr(_region)->DeactivationThreshold = 0.5f;
    }
}

// public SwipeGesture New() [static]
SwipeGesture* SwipeGesture::New2()
{
    SwipeGesture* obj1 = (SwipeGesture*)uNew(SwipeGesture_typeof());
    obj1->ctor_3();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Internal/Helpers.uno
// --------------------------------------------------------------------------

// internal sealed class SwipeGestureHelper
// {
static void SwipeGestureHelper_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Gestures::DegreeSpan_typeof()->Array(), offsetof(SwipeGestureHelper, _spans), 0,
        ::g::Uno::Float_typeof(), offsetof(SwipeGestureHelper, _lengthThreshold), 0);
}

uType* SwipeGestureHelper_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SwipeGestureHelper);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Gestures.SwipeGestureHelper", options);
    type->fp_build_ = SwipeGestureHelper_build;
    return type;
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans)
void SwipeGestureHelper__ctor__fn(SwipeGestureHelper* __this, float* lengthThreshold, uArray* spans)
{
    __this->ctor_(*lengthThreshold, spans);
}

// public bool IsWithinBounds(float2 vector)
void SwipeGestureHelper__IsWithinBounds_fn(SwipeGestureHelper* __this, ::g::Uno::Float2* vector, bool* __retval)
{
    *__retval = __this->IsWithinBounds(*vector);
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans)
void SwipeGestureHelper__New1_fn(float* lengthThreshold, uArray* spans, SwipeGestureHelper** __retval)
{
    *__retval = SwipeGestureHelper::New1(*lengthThreshold, spans);
}

// public SwipeGestureHelper(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [instance]
void SwipeGestureHelper::ctor_(float lengthThreshold, uArray* spans)
{
    _spans = spans;
    _lengthThreshold = lengthThreshold;
}

// public bool IsWithinBounds(float2 vector) [instance]
bool SwipeGestureHelper::IsWithinBounds(::g::Uno::Float2 vector)
{
    float length = ::g::Uno::Vector::Length(vector);

    if (length < _lengthThreshold)
        return false;

    float angle = ::g::Uno::Math::RadiansToDegrees1(::g::Uno::Math::Atan22(vector.X, vector.Y));

    for (int32_t i = 0; i < uPtr(_spans)->Length(); i++)
        if (uPtr(uPtr(_spans)->Strong< ::g::Fuse::Gestures::DegreeSpan*>(i))->IsWithinBounds(angle))
            return true;

    return false;
}

// public SwipeGestureHelper New(float lengthThreshold, Fuse.Gestures.DegreeSpan[] spans) [static]
SwipeGestureHelper* SwipeGestureHelper::New1(float lengthThreshold, uArray* spans)
{
    SwipeGestureHelper* obj1 = (SwipeGestureHelper*)uNew(SwipeGestureHelper_typeof());
    obj1->ctor_(lengthThreshold, spans);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public enum SwipeType
uEnumType* SwipeType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Gestures.SwipeType", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Simple", 0LL,
        "Active", 1LL,
        "Auto", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public sealed class SwipingAnimation
// {
static void SwipingAnimation_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof());
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(SwipingAnimation_type, interface0),
        ::g::Fuse::Scripting::IScriptObject_typeof(), offsetof(SwipingAnimation_type, interface1),
        ::g::Fuse::IProperties_typeof(), offsetof(SwipingAnimation_type, interface2),
        ::g::Fuse::INotifyUnrooted_typeof(), offsetof(SwipingAnimation_type, interface3),
        ::g::Fuse::ISourceLocation_typeof(), offsetof(SwipingAnimation_type, interface4),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(SwipingAnimation_type, interface5),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Binding_typeof(), nullptr), offsetof(SwipingAnimation_type, interface6),
        ::g::Fuse::Animations::IUnwrappedPlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface7),
        ::g::Fuse::Animations::IBasePlayerFeedback_typeof(), offsetof(SwipingAnimation_type, interface8),
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(SwipingAnimation_type, interface9));
    type->SetFields(38,
        ::g::Fuse::Gestures::Internal::SwipeRegion_typeof(), offsetof(SwipingAnimation, _region), 0,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(SwipingAnimation, _Source), 0);
}

SwipingAnimation_type* SwipingAnimation_typeof()
{
    static uSStrong<SwipingAnimation_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Trigger_typeof();
    options.FieldCount = 40;
    options.InterfaceCount = 10;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SwipingAnimation);
    options.TypeSize = sizeof(SwipingAnimation_type);
    type = (SwipingAnimation_type*)uClassType::New("Fuse.Gestures.SwipingAnimation", options);
    type->fp_build_ = SwipingAnimation_build;
    type->fp_OnRooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Node*))SwipingAnimation__OnUnrooted_fn;
    type->interface9.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn;
    type->interface8.fp_OnPlaybackDone = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnPlaybackDone_fn;
    type->interface8.fp_OnStable = (void(*)(uObject*, uObject*))::g::Fuse::Triggers::Trigger__FuseAnimationsIBasePlayerFeedbackOnStable_fn;
    type->interface7.fp_OnProgressUpdated = (void(*)(uObject*, uObject*, double*, double*, int32_t*))::g::Fuse::Triggers::Trigger__FuseAnimationsIUnwrappedPlayerFeedbackOnProgressUpdated_fn;
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

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source)
void SwipingAnimation__ctor_5_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* source)
{
    __this->ctor_5(source);
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source)
void SwipingAnimation__New2_fn(::g::Fuse::Gestures::SwipeGesture* source, SwipingAnimation** __retval)
{
    *__retval = SwipingAnimation::New2(source);
}

// private void OnProgressChanged(double progress)
void SwipingAnimation__OnProgressChanged1_fn(SwipingAnimation* __this, double* progress)
{
    __this->OnProgressChanged1(*progress);
}

// protected override sealed void OnRooted()
void SwipingAnimation__OnRooted_fn(SwipingAnimation* __this)
{
    ::g::Fuse::Triggers::Trigger__OnRooted_fn(__this);
    __this->_region = uPtr(__this->Source())->Region();
    uPtr(__this->_region)->AddPropertyListener((uObject*)__this);
    __this->OnProgressChanged1(uPtr(uPtr(__this->Source())->Region())->Progress());
}

// protected override sealed void OnUnrooted()
void SwipingAnimation__OnUnrooted_fn(SwipingAnimation* __this)
{
    uPtr(__this->_region)->RemovePropertyListener((uObject*)__this);
    ::g::Fuse::Triggers::Trigger__OnUnrooted_fn(__this);
}

// public generated Fuse.Gestures.SwipeGesture get_Source()
void SwipingAnimation__get_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Source();
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value)
void SwipingAnimation__set_Source_fn(SwipingAnimation* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Source(value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector prop)
void SwipingAnimation__UnoUXIPropertyListenerOnPropertyChanged_fn(SwipingAnimation* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if ((sender != __this->_region) || ::g::Uno::UX::Selector__op_Inequality(prop_, ::g::Fuse::Gestures::Internal::SwipeRegion::ProgressName()))
        return;

    __this->OnProgressChanged1(uPtr(__this->_region)->Progress());
}

// public SwipingAnimation(Fuse.Gestures.SwipeGesture source) [instance]
void SwipingAnimation::ctor_5(::g::Fuse::Gestures::SwipeGesture* source)
{
    ctor_4();
    Source(source);
}

// private void OnProgressChanged(double progress) [instance]
void SwipingAnimation::OnProgressChanged1(double progress)
{
    double diff = progress - uPtr(uPtr(Source())->Region())->StableProgress();
    Seek(progress, (diff >= 0.0) ? 0 : 1);
}

// public generated Fuse.Gestures.SwipeGesture get_Source() [instance]
::g::Fuse::Gestures::SwipeGesture* SwipingAnimation::Source()
{
    return _Source;
}

// private generated void set_Source(Fuse.Gestures.SwipeGesture value) [instance]
void SwipingAnimation::Source(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Source = value;
}

// public SwipingAnimation New(Fuse.Gestures.SwipeGesture source) [static]
SwipingAnimation* SwipingAnimation::New2(::g::Fuse::Gestures::SwipeGesture* source)
{
    SwipingAnimation* obj1 = (SwipingAnimation*)uNew(SwipingAnimation_typeof());
    obj1->ctor_5(source);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Gestures/Swipe.uno
// ---------------------------------------------------------------

// public sealed class ToggleSwipeActive
// {
static void ToggleSwipeActive_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Triggers::Actions::TriggerAction_type, interface0));
    type->SetFields(10,
        ::g::Fuse::Gestures::SwipeGesture_typeof(), offsetof(ToggleSwipeActive, _Target), 0);
}

::g::Fuse::Triggers::Actions::TriggerAction_type* ToggleSwipeActive_typeof()
{
    static uSStrong< ::g::Fuse::Triggers::Actions::TriggerAction_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Triggers::Actions::TriggerAction_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(ToggleSwipeActive);
    options.TypeSize = sizeof(::g::Fuse::Triggers::Actions::TriggerAction_type);
    type = (::g::Fuse::Triggers::Actions::TriggerAction_type*)uClassType::New("Fuse.Gestures.ToggleSwipeActive", options);
    type->fp_build_ = ToggleSwipeActive_build;
    type->fp_Perform = (void(*)(::g::Fuse::Triggers::Actions::TriggerAction*, ::g::Fuse::Node*))ToggleSwipeActive__Perform_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Triggers::Actions::TriggerAction__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Triggers::Actions::TriggerAction__get_SourceFileName_fn;
    return type;
}

// protected override sealed void Perform(Fuse.Node target)
void ToggleSwipeActive__Perform_fn(ToggleSwipeActive* __this, ::g::Fuse::Node* target)
{
    if (__this->Target() != nullptr)
        uPtr(__this->Target())->SetActive(!uPtr(__this->Target())->IsActive(), nullptr, false);
}

// public generated Fuse.Gestures.SwipeGesture get_Target()
void ToggleSwipeActive__get_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture** __retval)
{
    *__retval = __this->Target();
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value)
void ToggleSwipeActive__set_Target_fn(ToggleSwipeActive* __this, ::g::Fuse::Gestures::SwipeGesture* value)
{
    __this->Target(value);
}

// public generated Fuse.Gestures.SwipeGesture get_Target() [instance]
::g::Fuse::Gestures::SwipeGesture* ToggleSwipeActive::Target()
{
    return _Target;
}

// public generated void set_Target(Fuse.Gestures.SwipeGesture value) [instance]
void ToggleSwipeActive::Target(::g::Fuse::Gestures::SwipeGesture* value)
{
    _Target = value;
}
// }

}}} // ::g::Fuse::Gestures
