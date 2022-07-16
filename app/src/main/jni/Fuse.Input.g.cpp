// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.AppBase.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.HitTestCallback.h>
#include <Fuse.HitTestContext.h>
#include <Fuse.HitTestResult.h>
#include <Fuse.Input.Capture.h>
#include <Fuse.Input.CaptureType.h>
#include <Fuse.Input.Focus.h>
#include <Fuse.Input.FocusDelegator.h>
#include <Fuse.Input.FocusGained.h>
#include <Fuse.Input.FocusGainedArgs.h>
#include <Fuse.Input.FocusGainedHandler.h>
#include <Fuse.Input.FocusLost.h>
#include <Fuse.Input.FocusLostArgs.h>
#include <Fuse.Input.FocusLostHandler.h>
#include <Fuse.Input.FocusNavig-f129d750.h>
#include <Fuse.Input.FocusPredi-61a953fb.h>
#include <Fuse.Input.FocusPredi-c5d517c0.h>
#include <Fuse.Input.FocusPrediction.h>
#include <Fuse.Input.Gesture.h>
#include <Fuse.Input.GesturePri-c96394d3.h>
#include <Fuse.Input.GesturePriority.h>
#include <Fuse.Input.GestureRequest.h>
#include <Fuse.Input.Gestures.A-bb9bac44.h>
#include <Fuse.Input.Gestures.h>
#include <Fuse.Input.GestureType.h>
#include <Fuse.Input.HitTestHelpers.h>
#include <Fuse.Input.IGesture.h>
#include <Fuse.Input.INotifyFocus.h>
#include <Fuse.Input.IPointerEv-b8626879.h>
#include <Fuse.Input.IsFocusabl-96ae5e02.h>
#include <Fuse.Input.IsFocusabl-9f350c7e.h>
#include <Fuse.Input.IsFocusabl-d997a976.h>
#include <Fuse.Input.Keyboard.h>
#include <Fuse.Input.KeyEventArgs.h>
#include <Fuse.Input.KeyPressed.h>
#include <Fuse.Input.KeyPressedArgs.h>
#include <Fuse.Input.KeyPressedHandler.h>
#include <Fuse.Input.KeyReleased.h>
#include <Fuse.Input.KeyReleasedArgs.h>
#include <Fuse.Input.KeyReleasedHandler.h>
#include <Fuse.Input.Pointer.Ca-9ceac05a.h>
#include <Fuse.Input.Pointer.De-f917cc7c.h>
#include <Fuse.Input.Pointer.h>
#include <Fuse.Input.Pointer.PELHolder.h>
#include <Fuse.Input.Pointer.PELStatus.h>
#include <Fuse.Input.Pointer.Po-f366938e.h>
#include <Fuse.Input.PointerEnt-12404675.h>
#include <Fuse.Input.PointerEntered.h>
#include <Fuse.Input.PointerEnteredArgs.h>
#include <Fuse.Input.PointerEventArgs.h>
#include <Fuse.Input.PointerEventData.h>
#include <Fuse.Input.PointerLeft.h>
#include <Fuse.Input.PointerLeftArgs.h>
#include <Fuse.Input.PointerLeftHandler.h>
#include <Fuse.Input.PointerMoved.h>
#include <Fuse.Input.PointerMovedArgs.h>
#include <Fuse.Input.PointerMovedHandler.h>
#include <Fuse.Input.PointerPre-a4f25721.h>
#include <Fuse.Input.PointerPressed.h>
#include <Fuse.Input.PointerPressedArgs.h>
#include <Fuse.Input.PointerRel-561bb5f8.h>
#include <Fuse.Input.PointerReleased.h>
#include <Fuse.Input.PointerReleasedArgs.h>
#include <Fuse.Input.PointerWhe-bba8a6d9.h>
#include <Fuse.Input.PointerWhe-c022b7e3.h>
#include <Fuse.Input.PointerWheelMoved.h>
#include <Fuse.Input.SelectionQuery.h>
#include <Fuse.Input.TextEntered.h>
#include <Fuse.Input.TextEnteredArgs.h>
#include <Fuse.Input.TextEnteredHandler.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutPriority.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.RootViewport.h>
#include <Fuse.Scripting.IEvent-1effd56d.h>
#include <Fuse.UpdateManager.h>
#include <Fuse.UpdateStage.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualEvent-2.h>
#include <Fuse.VisualEventArgs.h>
#include <Fuse.VisualEventMode.h>
#include <Uno.Action.h>
#include <Uno.Action2-2.h>
#include <Uno.ArgumentException.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dicti-5d5b73f.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-9e7bc8e0.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Comparison-1.h>
#include <Uno.Delegate.h>
#include <Uno.Diagnostics.Clock.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Func1-2.h>
#include <Uno.IDisposable.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Platform.Key.h>
#include <Uno.Platform.PointerType.h>
#include <Uno.Predicate-1.h>
#include <Uno.String.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
static uString* STRINGS[18];
static uType* TYPES[15];

namespace g{
namespace Fuse{
namespace Input{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// private sealed class Gestures.ActiveGesture
// {
static void Gestures__ActiveGesture_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Input::Gesture_typeof(), offsetof(Gestures__ActiveGesture, Gesture), 0,
        ::g::Uno::Bool_typeof(), offsetof(Gestures__ActiveGesture, ChangeRequest), 0,
        ::g::Fuse::Input::PointerEventArgs_typeof(), offsetof(Gestures__ActiveGesture, Args), 0,
        ::g::Fuse::Input::CaptureType_typeof(), offsetof(Gestures__ActiveGesture, CaptureType), 0,
        ::g::Uno::Float_typeof(), offsetof(Gestures__ActiveGesture, Significance), 0,
        ::g::Uno::Int_typeof(), offsetof(Gestures__ActiveGesture, PriorityAdjustment), 0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(Gestures__ActiveGesture, Priority), 0);
}

uType* Gestures__ActiveGesture_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Gestures__ActiveGesture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Gestures.ActiveGesture", options);
    type->fp_build_ = Gestures__ActiveGesture_build;
    type->fp_ctor_ = (void*)Gestures__ActiveGesture__New1_fn;
    return type;
}

// public generated ActiveGesture()
void Gestures__ActiveGesture__ctor__fn(Gestures__ActiveGesture* __this)
{
    __this->ctor_();
}

// public generated ActiveGesture New()
void Gestures__ActiveGesture__New1_fn(Gestures__ActiveGesture** __retval)
{
    *__retval = Gestures__ActiveGesture::New1();
}

// public generated ActiveGesture() [instance]
void Gestures__ActiveGesture::ctor_()
{
}

// public generated ActiveGesture New() [static]
Gestures__ActiveGesture* Gestures__ActiveGesture::New1()
{
    Gestures__ActiveGesture* obj1 = (Gestures__ActiveGesture*)uNew(Gestures__ActiveGesture_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// internal sealed class Capture
// {
static void Capture_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Invalid Capture parameters");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), nullptr);
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Capture, VisualDepth), 0,
        ::g::Uno::Action_typeof(), offsetof(Capture, LostCallback), 0,
        ::g::Fuse::Input::CaptureType_typeof(), offsetof(Capture, Type), 0,
        ::g::Uno::Bool_typeof(), offsetof(Capture, Deleted), 0,
        ::TYPES[0/*Uno.Collections.List<int>*/], offsetof(Capture, PointIndex), 0,
        uObject_typeof(), offsetof(Capture, _Identity), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Capture, _Visual), 0);
}

uType* Capture_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.ObjectSize = sizeof(Capture);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Capture", options);
    type->fp_build_ = Capture_build;
    return type;
}

// public Capture(Fuse.Visual n, object identity)
void Capture__ctor__fn(Capture* __this, ::g::Fuse::Visual* n, uObject* identity)
{
    __this->ctor_(n, identity);
}

// public bool AcceptsPoint(int index)
void Capture__AcceptsPoint_fn(Capture* __this, int32_t* index, bool* __retval)
{
    *__retval = __this->AcceptsPoint(*index);
}

// public int CompareStrength(Fuse.Input.Capture o)
void Capture__CompareStrength_fn(Capture* __this, Capture* o, int32_t* __retval)
{
    *__retval = __this->CompareStrength(o);
}

// public generated object get_Identity()
void Capture__get_Identity_fn(Capture* __this, uObject** __retval)
{
    *__retval = __this->Identity();
}

// private generated void set_Identity(object value)
void Capture__set_Identity_fn(Capture* __this, uObject* value)
{
    __this->Identity(value);
}

// public bool get_IsSuitable()
void Capture__get_IsSuitable_fn(Capture* __this, bool* __retval)
{
    *__retval = __this->IsSuitable();
}

// public Capture New(Fuse.Visual n, object identity)
void Capture__New1_fn(::g::Fuse::Visual* n, uObject* identity, Capture** __retval)
{
    *__retval = Capture::New1(n, identity);
}

// public generated Fuse.Visual get_Visual()
void Capture__get_Visual_fn(Capture* __this, ::g::Fuse::Visual** __retval)
{
    *__retval = __this->Visual();
}

// private generated void set_Visual(Fuse.Visual value)
void Capture__set_Visual_fn(Capture* __this, ::g::Fuse::Visual* value)
{
    __this->Visual(value);
}

// public Capture(Fuse.Visual n, object identity) [instance]
void Capture::ctor_(::g::Fuse::Visual* n, uObject* identity)
{
    PointIndex = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<int>*/]));

    if ((n == nullptr) || (identity == nullptr))
        U_THROW(::g::Uno::Exception::New2(::STRINGS[0/*"Invalid Cap...*/]));

    Visual(n);
    Identity(identity);
    VisualDepth = 0;
    ::g::Fuse::Visual* q = Visual();

    while (uPtr(q)->Parent() != nullptr)
    {
        VisualDepth++;
        q = uPtr(q)->Parent();
    }
}

// public bool AcceptsPoint(int index) [instance]
bool Capture::AcceptsPoint(int32_t index)
{
    bool ret2;
    return (::g::Uno::Collections::List__Contains_fn(uPtr(PointIndex), uCRef<int32_t>(index), &ret2), ret2);
}

// public int CompareStrength(Fuse.Input.Capture o) [instance]
int32_t Capture::CompareStrength(Capture* o)
{
    bool hardThis = (Type & 2) == 2;
    bool hardO = (uPtr(o)->Type & 2) == 2;

    if (hardThis == hardO)
        return 0;

    return hardThis ? 1 : -1;
}

// public generated object get_Identity() [instance]
uObject* Capture::Identity()
{
    return _Identity;
}

// private generated void set_Identity(object value) [instance]
void Capture::Identity(uObject* value)
{
    _Identity = value;
}

// public bool get_IsSuitable() [instance]
bool Capture::IsSuitable()
{
    return uPtr(Visual())->IsContextEnabled() && uPtr(Visual())->IsRootingCompleted();
}

// public generated Fuse.Visual get_Visual() [instance]
::g::Fuse::Visual* Capture::Visual()
{
    return _Visual;
}

// private generated void set_Visual(Fuse.Visual value) [instance]
void Capture::Visual(::g::Fuse::Visual* value)
{
    _Visual = value;
}

// public Capture New(Fuse.Visual n, object identity) [static]
Capture* Capture::New1(::g::Fuse::Visual* n, uObject* identity)
{
    Capture* obj1 = (Capture*)uNew(Capture_typeof());
    obj1->ctor_(n, identity);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// private sealed class Pointer.CaptureLockImpl
// {
static void Pointer__CaptureLockImpl_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Inconsistent Count");
    ::STRINGS[2] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno");
    ::STRINGS[3] = uString::Const("Dispose");
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Pointer__CaptureLockImpl_type, interface0));
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(Pointer__CaptureLockImpl, Count), 0,
        ::g::Uno::Bool_typeof(), offsetof(Pointer__CaptureLockImpl, AnyDeleted), 0);
}

Pointer__CaptureLockImpl_type* Pointer__CaptureLockImpl_typeof()
{
    static uSStrong<Pointer__CaptureLockImpl_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Pointer__CaptureLockImpl);
    options.TypeSize = sizeof(Pointer__CaptureLockImpl_type);
    type = (Pointer__CaptureLockImpl_type*)uClassType::New("Fuse.Input.Pointer.CaptureLockImpl", options);
    type->fp_build_ = Pointer__CaptureLockImpl_build;
    type->fp_ctor_ = (void*)Pointer__CaptureLockImpl__New1_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))Pointer__CaptureLockImpl__Dispose_fn;
    return type;
}

// public generated CaptureLockImpl()
void Pointer__CaptureLockImpl__ctor__fn(Pointer__CaptureLockImpl* __this)
{
    __this->ctor_();
}

// public void Delete(Fuse.Input.Capture c)
void Pointer__CaptureLockImpl__Delete_fn(Pointer__CaptureLockImpl* __this, ::g::Fuse::Input::Capture* c)
{
    __this->Delete(c);
}

// public void Dispose()
void Pointer__CaptureLockImpl__Dispose_fn(Pointer__CaptureLockImpl* __this)
{
    __this->Dispose();
}

// public generated CaptureLockImpl New()
void Pointer__CaptureLockImpl__New1_fn(Pointer__CaptureLockImpl** __retval)
{
    *__retval = Pointer__CaptureLockImpl::New1();
}

// public generated CaptureLockImpl() [instance]
void Pointer__CaptureLockImpl::ctor_()
{
}

// public void Delete(Fuse.Input.Capture c) [instance]
void Pointer__CaptureLockImpl::Delete(::g::Fuse::Input::Capture* c)
{
    uPtr(c)->Deleted = true;
    AnyDeleted = true;
}

// public void Dispose() [instance]
void Pointer__CaptureLockImpl::Dispose()
{
    ::g::Fuse::Input::Capture* ret2;

    if ((--Count) > 0)
        return;

    if (Count < 0)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[1/*"Inconsisten...*/], this, ::STRINGS[2/*"/Users/mort...*/], 238, ::STRINGS[3/*"Dispose"*/]);
        Count = 0;
    }

    if (AnyDeleted)
    {
        for (int32_t i = uPtr(::g::Fuse::Input::Pointer::_captures())->Count() - 1; i >= 0; --i)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_captures()), uCRef<int32_t>(i), &ret2), ret2))->Deleted)
                uPtr(::g::Fuse::Input::Pointer::_captures())->RemoveAt(i);

        AnyDeleted = false;
    }
}

// public generated CaptureLockImpl New() [static]
Pointer__CaptureLockImpl* Pointer__CaptureLockImpl::New1()
{
    Pointer__CaptureLockImpl* obj1 = (Pointer__CaptureLockImpl*)uNew(Pointer__CaptureLockImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// public enum CaptureType
uEnumType* CaptureType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Input.CaptureType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "None", 0LL,
        "Soft", 1LL,
        "Hard", 2LL,
        "Children", 4LL,
        "NodeShare", 8LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// private sealed class Pointer.DefaultPointerEventResponder
// {
static void Pointer__DefaultPointerEventResponder_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Action2_typeof()->MakeType(::g::Fuse::Input::PointerPressedArgs_typeof(), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Visual_typeof(), nullptr), nullptr);
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof(),
        ::g::Fuse::Input::Pointer_typeof());
    type->SetInterfaces(
        ::g::Fuse::Input::IPointerEventResponder_typeof(), offsetof(Pointer__DefaultPointerEventResponder_type, interface0));
}

Pointer__DefaultPointerEventResponder_type* Pointer__DefaultPointerEventResponder_typeof()
{
    static uSStrong<Pointer__DefaultPointerEventResponder_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Pointer__DefaultPointerEventResponder);
    options.TypeSize = sizeof(Pointer__DefaultPointerEventResponder_type);
    type = (Pointer__DefaultPointerEventResponder_type*)uClassType::New("Fuse.Input.Pointer.DefaultPointerEventResponder", options);
    type->fp_build_ = Pointer__DefaultPointerEventResponder_build;
    type->fp_ctor_ = (void*)Pointer__DefaultPointerEventResponder__New1_fn;
    type->interface0.fp_OnPointerPressed = (void(*)(uObject*, ::g::Fuse::Input::PointerPressedArgs*))Pointer__DefaultPointerEventResponder__OnPointerPressed_fn;
    type->interface0.fp_OnPointerMoved = (void(*)(uObject*, ::g::Fuse::Input::PointerMovedArgs*))Pointer__DefaultPointerEventResponder__OnPointerMoved_fn;
    type->interface0.fp_OnPointerReleased = (void(*)(uObject*, ::g::Fuse::Input::PointerReleasedArgs*))Pointer__DefaultPointerEventResponder__OnPointerReleased_fn;
    return type;
}

// public generated DefaultPointerEventResponder()
void Pointer__DefaultPointerEventResponder__ctor__fn(Pointer__DefaultPointerEventResponder* __this)
{
    __this->ctor_();
}

// public generated DefaultPointerEventResponder New()
void Pointer__DefaultPointerEventResponder__New1_fn(Pointer__DefaultPointerEventResponder** __retval)
{
    *__retval = Pointer__DefaultPointerEventResponder::New1();
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args)
void Pointer__DefaultPointerEventResponder__OnPointerMoved_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(args);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args)
void Pointer__DefaultPointerEventResponder__OnPointerPressed_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(args);
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args)
void Pointer__DefaultPointerEventResponder__OnPointerReleased_fn(Pointer__DefaultPointerEventResponder* __this, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(args);
}

// public generated DefaultPointerEventResponder() [instance]
void Pointer__DefaultPointerEventResponder::ctor_()
{
}

// public void OnPointerMoved(Fuse.Input.PointerMovedArgs args) [instance]
void Pointer__DefaultPointerEventResponder::OnPointerMoved(::g::Fuse::Input::PointerMovedArgs* args)
{
    bool ret3;
    ::g::Fuse::Input::Pointer__PointerRecord* ret4;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret3), ret3))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret4), ret4);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        p->WindowPoint = args->WindowPoint();
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());

    if (args->Visual() == nullptr)
        return;

    uPtr(::g::Fuse::Input::Pointer::Moved())->RaiseWithBubble(args, 1);
}

// public void OnPointerPressed(Fuse.Input.PointerPressedArgs args) [instance]
void Pointer__DefaultPointerEventResponder::OnPointerPressed(::g::Fuse::Input::PointerPressedArgs* args)
{
    ::g::Fuse::Input::Pointer__PointerRecord* collection1;
    collection1 = ::g::Fuse::Input::Pointer__PointerRecord::New1();
    uPtr(collection1)->WindowPoint = uPtr(args)->WindowPoint();
    uPtr(collection1)->DistanceMoved = 0.0f;
    ::g::Fuse::Input::Pointer__PointerRecord* p = collection1;
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int32_t>(args->PointIndex()), p);
    ::g::Fuse::Input::Pointer::Coord(args->WindowPoint());

    if (args->Visual() == nullptr)
    {
        ::g::Fuse::Input::Focus::Release();
        return;
    }

    uPtr(::g::Fuse::Input::Pointer::Pressed())->RaiseWithBubble1(args, 1, uDelegate::New(::TYPES[1/*Uno.Action<Fuse.Input.PointerPressedArgs, Uno.Collections.IList<Fuse.Visual>>*/], (void*)::g::Fuse::Input::Pointer__CheckFocus_fn));
    uPtr(p)->WasHandled = args->IsHandled();
}

// public void OnPointerReleased(Fuse.Input.PointerReleasedArgs args) [instance]
void Pointer__DefaultPointerEventResponder::OnPointerReleased(::g::Fuse::Input::PointerReleasedArgs* args)
{
    bool ret5;
    ::g::Fuse::Input::Pointer__PointerRecord* ret6;
    bool ret7;

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret5), ret5))
    {
        ::g::Fuse::Input::Pointer__PointerRecord* p = (::g::Uno::Collections::Dictionary__get_Item_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret6), ret6);
        uPtr(p)->DistanceMoved = (uPtr(p)->DistanceMoved + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(args->WindowPoint(), uPtr(p)->WindowPoint)));
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(::g::Fuse::Input::Pointer::_pointersDown()), uCRef<int32_t>(args->PointIndex()), &ret7);
    }

    ::g::Fuse::Input::Pointer::Coord(uPtr(args)->WindowPoint());

    if (args->Visual() == nullptr)
        return;

    uPtr(::g::Fuse::Input::Pointer::Released())->RaiseWithBubble(args, 1);
}

// public generated DefaultPointerEventResponder New() [static]
Pointer__DefaultPointerEventResponder* Pointer__DefaultPointerEventResponder::New1()
{
    Pointer__DefaultPointerEventResponder* obj2 = (Pointer__DefaultPointerEventResponder*)uNew(Pointer__DefaultPointerEventResponder_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Focus.uno
// ------------------------------------------------------------------

// public partial static class Focus
// {
// static generated Focus()
static void Focus__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Focus::_gained_ = ::g::Fuse::Input::FocusGained::New1();
    Focus::_lost_ = ::g::Fuse::Input::FocusLost::New1();
    Focus::_isFoucsableChanged_ = ::g::Fuse::Input::IsFocusableChangedEvent::New1();
    Focus::_focusDelegatorHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Focus_build(uType* type)
{
    ::STRINGS[4] = uString::Const("GiveTo");
    ::STRINGS[5] = uString::Const("Move");
    ::STRINGS[6] = uString::Const("Release");
    ::TYPES[2] = ::g::Fuse::Visual_typeof();
    ::TYPES[3] = ::g::Fuse::Input::INotifyFocus_typeof();
    ::TYPES[4] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr);
    ::TYPES[5] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[6] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr);
    ::TYPES[7] = ::g::Uno::IDisposable_typeof();
    ::TYPES[8] = ::g::Fuse::Input::FocusDelegator_typeof();
    type->SetFields(0,
        ::g::Fuse::Input::FocusGained_typeof(), (uintptr_t)&Focus::_gained_, uFieldFlagsStatic,
        ::g::Fuse::Input::FocusLost_typeof(), (uintptr_t)&Focus::_lost_, uFieldFlagsStatic,
        ::g::Fuse::Input::IsFocusableChangedEvent_typeof(), (uintptr_t)&Focus::_isFoucsableChanged_, uFieldFlagsStatic,
        ::TYPES[2/*Fuse.Visual*/], (uintptr_t)&Focus::_focusedObject_, uFieldFlagsStatic,
        ::TYPES[2/*Fuse.Visual*/], (uintptr_t)&Focus::_lastFocusedVisual_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Focus::_focusDelegatorHandle_, uFieldFlagsStatic);
}

uClassType* Focus_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Focus", options);
    type->fp_build_ = Focus_build;
    type->fp_cctor_ = Focus__cctor__fn;
    return type;
}

// internal static bool CanSetFocus(Fuse.Node node)
void Focus__CanSetFocus_fn(::g::Fuse::Node* node, bool* __retval)
{
    *__retval = Focus::CanSetFocus(node);
}

// private static void ChangeFocusedVisual(Fuse.Visual node, [string memberName])
void Focus__ChangeFocusedVisual_fn(::g::Fuse::Visual* node, uString* memberName)
{
    Focus::ChangeFocusedVisual(node, memberName);
}

// private static Fuse.Visual FindRoot()
void Focus__FindRoot_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Focus::FindRoot();
}

// public static Fuse.Visual get_FocusedVisual()
void Focus__get_FocusedVisual_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Focus::FocusedVisual();
}

// public static Fuse.VisualEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained()
void Focus__get_Gained_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Focus::Gained();
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Visual n)
void Focus__GetDelegator_fn(::g::Fuse::Visual* n, uDelegate** __retval)
{
    *__retval = Focus::GetDelegator(n);
}

// public static Fuse.Visual GetFocusDelegate(Fuse.Visual n)
void Focus__GetFocusDelegate_fn(::g::Fuse::Visual* n, ::g::Fuse::Visual** __retval)
{
    *__retval = Focus::GetFocusDelegate(n);
}

// public static void GiveTo(Fuse.Visual n)
void Focus__GiveTo_fn(::g::Fuse::Visual* n)
{
    Focus::GiveTo(n);
}

// internal static bool HandlesFocusEvent(Fuse.Visual n)
void Focus__HandlesFocusEvent_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Focus::HandlesFocusEvent(n);
}

// public static bool IsFocusable(Fuse.Visual n)
void Focus__IsFocusable_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Focus::IsFocusable(n);
}

// public static Fuse.VisualEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost()
void Focus__get_Lost_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Focus::Lost();
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction)
void Focus__Move_fn(int32_t* direction)
{
    Focus::Move(*direction);
}

// private static Fuse.Visual Predict(Fuse.Input.FocusNavigationDirection direction)
void Focus__Predict_fn(int32_t* direction, ::g::Fuse::Visual** __retval)
{
    *__retval = Focus::Predict(*direction);
}

// public static void Release()
void Focus__Release_fn()
{
    Focus::Release();
}

uSStrong< ::g::Fuse::Input::FocusGained*> Focus::_gained_;
uSStrong< ::g::Fuse::Input::FocusLost*> Focus::_lost_;
uSStrong< ::g::Fuse::Input::IsFocusableChangedEvent*> Focus::_isFoucsableChanged_;
uSStrong< ::g::Fuse::Visual*> Focus::_focusedObject_;
uSStrong< ::g::Fuse::Visual*> Focus::_lastFocusedVisual_;
uSStrong< ::g::Fuse::PropertyHandle*> Focus::_focusDelegatorHandle_;

// internal static bool CanSetFocus(Fuse.Node node) [static]
bool Focus::CanSetFocus(::g::Fuse::Node* node)
{
    Focus_typeof()->Init();

    if (node == nullptr)
        return true;

    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(node, ::TYPES[2/*Fuse.Visual*/]);

    if (v == nullptr)
        return false;

    return (uPtr(v)->IsRootingCompleted() && uPtr(v)->IsContextEnabled()) && Focus::IsFocusable(v);
}

// private static void ChangeFocusedVisual(Fuse.Visual node, [string memberName]) [static]
void Focus::ChangeFocusedVisual(::g::Fuse::Visual* node, uString* memberName)
{
    Focus_typeof()->Init();

    if (node == Focus::_focusedObject_)
        return;

    while (node != nullptr)
    {
        uDelegate* delegator = Focus::GetDelegator(node);

        if (::g::Uno::Delegate::op_Inequality(delegator, nullptr))
        {
            node = (::g::Fuse::Visual*)uPtr(delegator)->Invoke();
            continue;
        }

        ::g::Fuse::Visual* focusDelegate = Focus::GetFocusDelegate(node);

        if (focusDelegate != nullptr)
        {
            node = focusDelegate;
            continue;
        }

        break;
    }

    if (!Focus::CanSetFocus(node))
        node = nullptr;

    if (node == Focus::_focusedObject_)
        return;

    Focus::_lastFocusedVisual_ = Focus::_focusedObject_;
    Focus::_focusedObject_ = node;

    if (Focus::_lastFocusedVisual_ != nullptr)
    {
        uObject* nf = uAs<uObject*>(Focus::_lastFocusedVisual_, ::TYPES[3/*Fuse.Input.INotifyFocus*/]);

        if (nf != nullptr)
            ::g::Fuse::Input::INotifyFocus::OnFocusLost(uInterface(uPtr(nf), ::TYPES[3/*Fuse.Input.INotifyFocus*/]));

        uPtr(Focus::Lost())->RaiseWithBubble(::g::Fuse::Input::FocusLostArgs::New3(Focus::_lastFocusedVisual_), 0);
    }

    if (Focus::_focusedObject_ != nullptr)
    {
        uObject* nf1 = uAs<uObject*>(Focus::_focusedObject_, ::TYPES[3/*Fuse.Input.INotifyFocus*/]);

        if (nf1 != nullptr)
            ::g::Fuse::Input::INotifyFocus::OnFocusGained(uInterface(uPtr(nf1), ::TYPES[3/*Fuse.Input.INotifyFocus*/]));

        uPtr(Focus::Gained())->RaiseWithBubble(::g::Fuse::Input::FocusGainedArgs::New3(Focus::_focusedObject_), 0);
    }
}

// private static Fuse.Visual FindRoot() [static]
::g::Fuse::Visual* Focus::FindRoot()
{
    Focus_typeof()->Init();
    ::g::Fuse::Node* ret3;
    ::g::Fuse::AppBase* app = ::g::Fuse::AppBase::Current2();

    if (app != nullptr)
    {
        ::g::Fuse::Visual* root = nullptr;
        uObject* enum1 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(app)->Children()), ::TYPES[4/*Uno.Collections.IEnumerable<Fuse.Node>*/]));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum1), ::TYPES[5/*Uno.Collections.IEnumerator*/])))
                    {
                        ::g::Fuse::Node* child = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum1), ::TYPES[6/*Uno.Collections.IEnumerator<Fuse.Node>*/]), &ret3), ret3);

                        if (uIs(child, ::TYPES[2/*Fuse.Visual*/]))
                        {
                            root = uCast< ::g::Fuse::Visual*>(child, ::TYPES[2/*Fuse.Visual*/]);
                            break;
                        }
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[7/*Uno.IDisposable*/]));
                }
                                throw __t;
                goto __after_finally_0;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum1), ::TYPES[7/*Uno.IDisposable*/]));
            }
            __after_finally_0:;
        }

        while (root != nullptr)
            if (uPtr(root)->Parent() != nullptr)
                root = uPtr(root)->Parent();
            else
                break;

        return root;
    }

    return nullptr;
}

// private static Fuse.Input.FocusDelegator GetDelegator(Fuse.Visual n) [static]
uDelegate* Focus::GetDelegator(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    uObject* res;

    if (uPtr(uPtr(n)->Properties())->TryGet(Focus::_focusDelegatorHandle_, &res))
        return uCast<uDelegate*>(res, ::TYPES[8/*Fuse.Input.FocusDelegator*/]);

    return nullptr;
}

// public static Fuse.Visual GetFocusDelegate(Fuse.Visual n) [static]
::g::Fuse::Visual* Focus::GetFocusDelegate(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    return uPtr(n)->_focusDelegate;
}

// public static void GiveTo(Fuse.Visual n) [static]
void Focus::GiveTo(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    Focus::ChangeFocusedVisual(n, ::STRINGS[4/*"GiveTo"*/]);
}

// internal static bool HandlesFocusEvent(Fuse.Visual n) [static]
bool Focus::HandlesFocusEvent(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    return (Focus::IsFocusable(n) || ::g::Uno::Delegate::op_Inequality(Focus::GetDelegator(n), nullptr)) || (Focus::GetFocusDelegate(n) != nullptr);
}

// public static bool IsFocusable(Fuse.Visual n) [static]
bool Focus::IsFocusable(::g::Fuse::Visual* n)
{
    Focus_typeof()->Init();
    return uPtr(n)->_isFocusable;
}

// public static void Move(Fuse.Input.FocusNavigationDirection direction) [static]
void Focus::Move(int32_t direction)
{
    Focus_typeof()->Init();
    ::g::Fuse::Visual* predictedFocus = Focus::Predict(direction);

    if (predictedFocus == nullptr)
        return;

    Focus::ChangeFocusedVisual(predictedFocus, ::STRINGS[5/*"Move"*/]);
}

// private static Fuse.Visual Predict(Fuse.Input.FocusNavigationDirection direction) [static]
::g::Fuse::Visual* Focus::Predict(int32_t direction)
{
    Focus_typeof()->Init();
    ::g::Fuse::Visual* node = ::g::Fuse::Input::FocusPredictStrategy::Predict(Focus::_focusedObject_, direction);

    if (node == nullptr)
    {
        ::g::Fuse::Visual* root = Focus::FindRoot();

        if (root != nullptr)
        {
            node = ::g::Fuse::Input::FocusPredictStrategy::Predict(root, direction);

            if ((node == nullptr) && Focus::CanSetFocus(root))
                node = root;
        }
    }

    return node;
}

// public static void Release() [static]
void Focus::Release()
{
    Focus_typeof()->Init();
    Focus::_lastFocusedVisual_ = nullptr;
    Focus::ChangeFocusedVisual(nullptr, ::STRINGS[6/*"Release"*/]);
}

// public static Fuse.Visual get_FocusedVisual() [static]
::g::Fuse::Visual* Focus::FocusedVisual()
{
    Focus_typeof()->Init();
    return Focus::_focusedObject_;
}

// public static Fuse.VisualEvent<Fuse.Input.FocusGainedHandler, Fuse.Input.FocusGainedArgs> get_Gained() [static]
::g::Fuse::VisualEvent* Focus::Gained()
{
    Focus_typeof()->Init();
    return Focus::_gained_;
}

// public static Fuse.VisualEvent<Fuse.Input.FocusLostHandler, Fuse.Input.FocusLostArgs> get_Lost() [static]
::g::Fuse::VisualEvent* Focus::Lost()
{
    Focus_typeof()->Init();
    return Focus::_lost_;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Focus.uno
// ------------------------------------------------------------------

// public delegate Fuse.Visual FocusDelegator()
uDelegateType* FocusDelegator_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.FocusDelegator", 0, 0);
    type->SetSignature(::g::Fuse::Visual_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// internal sealed class FocusGained
// {
static void FocusGained_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusGainedHandler_typeof(), ::g::Fuse::Input::FocusGainedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* FocusGained_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusGained);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.FocusGained", options);
    type->fp_build_ = FocusGained_build;
    type->fp_ctor_ = (void*)FocusGained__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))FocusGained__Invoke_fn;
    return type;
}

// public generated FocusGained()
void FocusGained__ctor_1_fn(FocusGained* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusGainedHandler handler, object sender, Fuse.Input.FocusGainedArgs args)
void FocusGained__Invoke_fn(FocusGained* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusGainedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusGained New()
void FocusGained__New1_fn(FocusGained** __retval)
{
    *__retval = FocusGained::New1();
}

// public generated FocusGained() [instance]
void FocusGained::ctor_1()
{
    ctor_();
}

// public generated FocusGained New() [static]
FocusGained* FocusGained::New1()
{
    FocusGained* obj1 = (FocusGained*)uNew(FocusGained_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// public sealed class FocusGainedArgs
// {
static void FocusGainedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* FocusGainedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusGainedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.FocusGainedArgs", options);
    type->fp_build_ = FocusGainedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public FocusGainedArgs(Fuse.Visual visual)
void FocusGainedArgs__ctor_2_fn(FocusGainedArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public FocusGainedArgs New(Fuse.Visual visual)
void FocusGainedArgs__New3_fn(::g::Fuse::Visual* visual, FocusGainedArgs** __retval)
{
    *__retval = FocusGainedArgs::New3(visual);
}

// public FocusGainedArgs(Fuse.Visual visual) [instance]
void FocusGainedArgs::ctor_2(::g::Fuse::Visual* visual)
{
    ctor_1(visual);
}

// public FocusGainedArgs New(Fuse.Visual visual) [static]
FocusGainedArgs* FocusGainedArgs::New3(::g::Fuse::Visual* visual)
{
    FocusGainedArgs* obj1 = (FocusGainedArgs*)uNew(FocusGainedArgs_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// public delegate void FocusGainedHandler(object sender, Fuse.Input.FocusGainedArgs args)
uDelegateType* FocusGainedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.FocusGainedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusGainedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// internal sealed class FocusLost
// {
static void FocusLost_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::FocusLostHandler_typeof(), ::g::Fuse::Input::FocusLostArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* FocusLost_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusLost);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.FocusLost", options);
    type->fp_build_ = FocusLost_build;
    type->fp_ctor_ = (void*)FocusLost__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))FocusLost__Invoke_fn;
    return type;
}

// public generated FocusLost()
void FocusLost__ctor_1_fn(FocusLost* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.FocusLostHandler handler, object sender, Fuse.Input.FocusLostArgs args)
void FocusLost__Invoke_fn(FocusLost* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::FocusLostArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated FocusLost New()
void FocusLost__New1_fn(FocusLost** __retval)
{
    *__retval = FocusLost::New1();
}

// public generated FocusLost() [instance]
void FocusLost::ctor_1()
{
    ctor_();
}

// public generated FocusLost New() [static]
FocusLost* FocusLost::New1()
{
    FocusLost* obj1 = (FocusLost*)uNew(FocusLost_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// public sealed class FocusLostArgs
// {
static void FocusLostArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* FocusLostArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(FocusLostArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.FocusLostArgs", options);
    type->fp_build_ = FocusLostArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public FocusLostArgs(Fuse.Visual visual)
void FocusLostArgs__ctor_2_fn(FocusLostArgs* __this, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(visual);
}

// public FocusLostArgs New(Fuse.Visual visual)
void FocusLostArgs__New3_fn(::g::Fuse::Visual* visual, FocusLostArgs** __retval)
{
    *__retval = FocusLostArgs::New3(visual);
}

// public FocusLostArgs(Fuse.Visual visual) [instance]
void FocusLostArgs::ctor_2(::g::Fuse::Visual* visual)
{
    ctor_1(visual);
}

// public FocusLostArgs New(Fuse.Visual visual) [static]
FocusLostArgs* FocusLostArgs::New3(::g::Fuse::Visual* visual)
{
    FocusLostArgs* obj1 = (FocusLostArgs*)uNew(FocusLostArgs_typeof());
    obj1->ctor_2(visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// public delegate void FocusLostHandler(object sender, Fuse.Input.FocusLostArgs args)
uDelegateType* FocusLostHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.FocusLostHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::FocusLostArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Focus.uno
// ------------------------------------------------------------------

// public enum FocusNavigationDirection
uEnumType* FocusNavigationDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Input.FocusNavigationDirection", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Up", 0LL,
        "Down", 1LL,
        "Left", 2LL,
        "Right", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Focus.Prediction.uno
// -----------------------------------------------------------------------------

// internal static class FocusPrediction
// {
static void FocusPrediction_build(uType* type)
{
}

uClassType* FocusPrediction_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.FocusPrediction", options);
    type->fp_build_ = FocusPrediction_build;
    return type;
}

// private static Fuse.Visual FirstVisualChild(Fuse.Visual visual)
void FocusPrediction__FirstVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::FirstVisualChild(visual);
}

// private static Fuse.Visual LastVisualChild(Fuse.Visual visual)
void FocusPrediction__LastVisualChild_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::LastVisualChild(visual);
}

// private static Fuse.Visual NextSibling(Fuse.Visual visual)
void FocusPrediction__NextSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::NextSibling(visual);
}

// private static Fuse.Visual NextSibling(Fuse.Visual parent, Fuse.Visual child)
void FocusPrediction__NextSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::NextSibling1(parent, child);
}

// private static Fuse.Visual Predict(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter, Uno.Func<Fuse.Visual, Fuse.Visual> getChild, Uno.Func<Fuse.Visual, Fuse.Visual> getSibling)
void FocusPrediction__Predict_fn(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::Predict(visual, filter, getChild, getSibling);
}

// public static Fuse.Visual PredictNextVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter)
void FocusPrediction__PredictNextVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PredictNextVisual(visual, filter);
}

// public static Fuse.Visual PredictPreviousVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter)
void FocusPrediction__PredictPreviousVisual_fn(::g::Fuse::Visual* visual, uDelegate* filter, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PredictPreviousVisual(visual, filter);
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual visual)
void FocusPrediction__PreviousSibling_fn(::g::Fuse::Visual* visual, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PreviousSibling(visual);
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual parent, Fuse.Visual child)
void FocusPrediction__PreviousSibling1_fn(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPrediction::PreviousSibling1(parent, child);
}

// private static Fuse.Visual FirstVisualChild(Fuse.Visual visual) [static]
::g::Fuse::Visual* FocusPrediction::FirstVisualChild(::g::Fuse::Visual* visual)
{
    return (::g::Fuse::Visual*)uPtr(visual)->FirstChild(::TYPES[2/*Fuse.Visual*/]->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::TYPES[2/*Fuse.Visual*/], nullptr));
}

// private static Fuse.Visual LastVisualChild(Fuse.Visual visual) [static]
::g::Fuse::Visual* FocusPrediction::LastVisualChild(::g::Fuse::Visual* visual)
{
    return (::g::Fuse::Visual*)uPtr(visual)->LastChild(::TYPES[2/*Fuse.Visual*/]->MakeMethod(7/*LastChild<Fuse.Visual>*/, ::TYPES[2/*Fuse.Visual*/], nullptr));
}

// private static Fuse.Visual NextSibling(Fuse.Visual visual) [static]
::g::Fuse::Visual* FocusPrediction::NextSibling(::g::Fuse::Visual* visual)
{
    return (uPtr(visual)->Parent() != nullptr) ? (::g::Fuse::Visual*)FocusPrediction::NextSibling1(uPtr(visual)->Parent(), visual) : nullptr;
}

// private static Fuse.Visual NextSibling(Fuse.Visual parent, Fuse.Visual child) [static]
::g::Fuse::Visual* FocusPrediction::NextSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child)
{
    int32_t ret1;
    ::g::Fuse::Node* ret2;
    int32_t count = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(parent)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr)));
    int32_t index = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1/*IndexOf<Fuse.Node>*/, ::g::Fuse::Node_typeof(), nullptr), parent->Children(), child, &ret1), ret1);
    int32_t offset = index + 1;

    if (offset < count)

        for (int32_t i = offset; i < count; i++)
        {
            ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(parent)->Children()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr)), uCRef<int32_t>(i), &ret2), ret2), ::TYPES[2/*Fuse.Visual*/]);

            if (c != nullptr)
                return c;
        }

    return FocusPrediction::NextSibling(parent);
}

// private static Fuse.Visual Predict(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter, Uno.Func<Fuse.Visual, Fuse.Visual> getChild, Uno.Func<Fuse.Visual, Fuse.Visual> getSibling) [static]
::g::Fuse::Visual* FocusPrediction::Predict(::g::Fuse::Visual* visual, uDelegate* filter, uDelegate* getChild, uDelegate* getSibling)
{
    bool ret3;
    bool ret4;

    if (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(visual)->Children()), ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr))) > 0)
    {
        ::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(getChild)->Invoke(1, visual);
        return (uPtr(filter)->Invoke(&ret3, 1, child), ret3) ? child : (::g::Fuse::Visual*)FocusPrediction::Predict(child, filter, getChild, getSibling);
    }

    ::g::Fuse::Visual* sibling = (::g::Fuse::Visual*)uPtr(getSibling)->Invoke(1, visual);

    if (sibling != nullptr)
        return (uPtr(filter)->Invoke(&ret4, 1, sibling), ret4) ? sibling : (::g::Fuse::Visual*)FocusPrediction::Predict(sibling, filter, getChild, getSibling);

    return nullptr;
}

// public static Fuse.Visual PredictNextVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) [static]
::g::Fuse::Visual* FocusPrediction::PredictNextVisual(::g::Fuse::Visual* visual, uDelegate* filter)
{
    return FocusPrediction::Predict(visual, uDelegate::New(::TYPES[9/*Uno.Predicate<Fuse.Node>*/], (void*)FocusPrediction__PredictFilter__Filter_fn, FocusPrediction__PredictFilter::New1(visual, filter)), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[2/*Fuse.Visual*/], ::TYPES[2/*Fuse.Visual*/], nullptr), (void*)FocusPrediction__FirstVisualChild_fn), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[2/*Fuse.Visual*/], ::TYPES[2/*Fuse.Visual*/], nullptr), (void*)FocusPrediction__NextSibling_fn));
}

// public static Fuse.Visual PredictPreviousVisual(Fuse.Visual visual, Uno.Predicate<Fuse.Node> filter) [static]
::g::Fuse::Visual* FocusPrediction::PredictPreviousVisual(::g::Fuse::Visual* visual, uDelegate* filter)
{
    return FocusPrediction::Predict(visual, uDelegate::New(::TYPES[9/*Uno.Predicate<Fuse.Node>*/], (void*)FocusPrediction__PredictFilter__Filter_fn, FocusPrediction__PredictFilter::New1(visual, filter)), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[2/*Fuse.Visual*/], ::TYPES[2/*Fuse.Visual*/], nullptr), (void*)FocusPrediction__LastVisualChild_fn), uDelegate::New(::g::Uno::Func1_typeof()->MakeType(::TYPES[2/*Fuse.Visual*/], ::TYPES[2/*Fuse.Visual*/], nullptr), (void*)FocusPrediction__PreviousSibling_fn));
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual visual) [static]
::g::Fuse::Visual* FocusPrediction::PreviousSibling(::g::Fuse::Visual* visual)
{
    return (uPtr(visual)->Parent() != nullptr) ? (::g::Fuse::Visual*)FocusPrediction::PreviousSibling1(uPtr(visual)->Parent(), visual) : nullptr;
}

// private static Fuse.Visual PreviousSibling(Fuse.Visual parent, Fuse.Visual child) [static]
::g::Fuse::Visual* FocusPrediction::PreviousSibling1(::g::Fuse::Visual* parent, ::g::Fuse::Visual* child)
{
    int32_t ret5;
    ::g::Fuse::Node* ret6;
    int32_t offset = (::g::Uno::Collections::EnumerableExtensions__IndexOf_fn(::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(1/*IndexOf<Fuse.Node>*/, ::g::Fuse::Node_typeof(), nullptr), uPtr(parent)->Children(), child, &ret5), ret5) - 1;

    if (offset >= 0)

        for (int32_t i = offset; i >= 0; i--)
        {
            ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(uPtr(parent)->Children()), ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr)), uCRef<int32_t>(i), &ret6), ret6), ::TYPES[2/*Fuse.Visual*/]);

            if (c != nullptr)
                return c;
        }

    return FocusPrediction::PreviousSibling(parent);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Focus.Prediction.uno
// -----------------------------------------------------------------------------

// internal static class FocusPredictStrategy
// {
static void FocusPredictStrategy_build(uType* type)
{
    ::TYPES[9] = ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr);
}

uClassType* FocusPredictStrategy_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.FocusPredictStrategy", options);
    type->fp_build_ = FocusPredictStrategy_build;
    return type;
}

// public static Fuse.Visual Predict(Fuse.Visual n, Fuse.Input.FocusNavigationDirection direction)
void FocusPredictStrategy__Predict_fn(::g::Fuse::Visual* n, int32_t* direction, ::g::Fuse::Visual** __retval)
{
    *__retval = FocusPredictStrategy::Predict(n, *direction);
}

// public static Fuse.Visual Predict(Fuse.Visual n, Fuse.Input.FocusNavigationDirection direction) [static]
::g::Fuse::Visual* FocusPredictStrategy::Predict(::g::Fuse::Visual* n, int32_t direction)
{
    if (n != nullptr)
    {
        if (direction == 1)
            return ::g::Fuse::Input::FocusPrediction::PredictNextVisual(n, uDelegate::New(::TYPES[9/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
        else if (direction == 0)
            return ::g::Fuse::Input::FocusPrediction::PredictPreviousVisual(n, uDelegate::New(::TYPES[9/*Uno.Predicate<Fuse.Node>*/], (void*)::g::Fuse::Input::Focus__CanSetFocus_fn));
    }

    return nullptr;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// public sealed class Gesture
// {
static void Gesture_build(uType* type)
{
    ::STRINGS[7] = uString::Const("handler");
    ::STRINGS[8] = uString::Const("target");
    ::STRINGS[9] = uString::Const("Missing LostCapture on ");
    ::STRINGS[10] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno");
    ::STRINGS[11] = uString::Const("OnPointerMoved");
    ::TYPES[0] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), nullptr);
    ::TYPES[10] = ::g::Fuse::Input::IGesture_typeof();
    ::TYPES[11] = ::g::Uno::Action_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Gestures_typeof(),
        ::g::Uno::Math_typeof(),
        ::g::Fuse::Input::Pointer_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Gesture_type, interface0));
    type->SetFields(0,
        ::TYPES[10/*Fuse.Input.IGesture*/], offsetof(Gesture, Handler), 0,
        ::g::Fuse::Input::GestureType_typeof(), offsetof(Gesture, Type), 0,
        ::g::Fuse::Visual_typeof(), offsetof(Gesture, Target), 0,
        ::g::Fuse::Input::CaptureType_typeof(), offsetof(Gesture, _captureType), 0,
        ::TYPES[0/*Uno.Collections.List<int>*/], offsetof(Gesture, _down), 0);
}

Gesture_type* Gesture_typeof()
{
    static uSStrong<Gesture_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(Gesture);
    options.TypeSize = sizeof(Gesture_type);
    type = (Gesture_type*)uClassType::New("Fuse.Input.Gesture", options);
    type->fp_build_ = Gesture_build;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Gesture__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// internal Gesture(Fuse.Input.IGesture handler, Fuse.Input.GestureType type, Fuse.Visual target)
void Gesture__ctor__fn(Gesture* __this, uObject* handler, int32_t* type, ::g::Fuse::Visual* target)
{
    __this->ctor_(handler, *type, target);
}

// private void Cancel()
void Gesture__Cancel_fn(Gesture* __this)
{
    __this->Cancel();
}

// private void Capture(Fuse.Input.PointerEventArgs args)
void Gesture__Capture_fn(Gesture* __this, ::g::Fuse::Input::PointerEventArgs* args)
{
    __this->Capture(args);
}

// public void Dispose()
void Gesture__Dispose_fn(Gesture* __this)
{
    __this->Dispose();
}

// private void HandleRequest(Fuse.Input.GestureRequest req, Fuse.Input.PointerEventArgs args)
void Gesture__HandleRequest_fn(Gesture* __this, int32_t* req, ::g::Fuse::Input::PointerEventArgs* args)
{
    __this->HandleRequest(*req, args);
}

// internal static float get_HardCaptureSignificanceThreshold()
void Gesture__get_HardCaptureSignificanceThreshold_fn(float* __retval)
{
    *__retval = Gesture::HardCaptureSignificanceThreshold();
}

// public bool get_IsHardCapture()
void Gesture__get_IsHardCapture_fn(Gesture* __this, bool* __retval)
{
    *__retval = __this->IsHardCapture();
}

// private void LostCapture(bool forced)
void Gesture__LostCapture_fn(Gesture* __this, bool* forced)
{
    __this->LostCapture(*forced);
}

// internal Gesture New(Fuse.Input.IGesture handler, Fuse.Input.GestureType type, Fuse.Visual target)
void Gesture__New1_fn(uObject* handler, int32_t* type, ::g::Fuse::Visual* target, Gesture** __retval)
{
    *__retval = Gesture::New1(handler, *type, target);
}

// private void OnLostCapture()
void Gesture__OnLostCapture_fn(Gesture* __this)
{
    __this->OnLostCapture();
}

// internal void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args)
void Gesture__OnPointerMoved_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    __this->OnPointerMoved(sender, args);
}

// internal void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args)
void Gesture__OnPointerPressed_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    __this->OnPointerPressed(sender, args);
}

// internal void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args)
void Gesture__OnPointerReleased_fn(Gesture* __this, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    __this->OnPointerReleased(sender, args);
}

// internal void OnRequestChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType captureType)
void Gesture__OnRequestChanged_fn(Gesture* __this, ::g::Fuse::Input::PointerEventArgs* args, int32_t* captureType)
{
    __this->OnRequestChanged(args, *captureType);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector sel)
void Gesture__UnoUXIPropertyListenerOnPropertyChanged_fn(Gesture* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* sel)
{
}

// public static float VectorSignificance(float2 vector, float2 offset)
void Gesture__VectorSignificance_fn(::g::Uno::Float2* vector, ::g::Uno::Float2* offset, float* __retval)
{
    *__retval = Gesture::VectorSignificance(*vector, *offset);
}

// internal Gesture(Fuse.Input.IGesture handler, Fuse.Input.GestureType type, Fuse.Visual target) [instance]
void Gesture::ctor_(uObject* handler, int32_t type, ::g::Fuse::Visual* target)
{
    _down = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[0/*Uno.Collections.List<int>*/]));

    if (handler == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"handler"*/]));

    if (target == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[8/*"target"*/]));

    Handler = handler;
    Type = type;
    Target = target;
}

// private void Cancel() [instance]
void Gesture::Cancel()
{
    if (uPtr(_down)->Count() == 0)
        return;

    LostCapture(false);
}

// private void Capture(Fuse.Input.PointerEventArgs args) [instance]
void Gesture::Capture(::g::Fuse::Input::PointerEventArgs* args)
{
    int32_t ind1;
    int32_t ind2;
    ::g::Fuse::Input::GesturePriorityConfig pr = ::g::Fuse::Input::IGesture::Priority(uInterface(uPtr(Handler), ::TYPES[10/*Fuse.Input.IGesture*/]));
    float sig = pr.Significance;
    int32_t captureType = ((sig >= Gesture::HardCaptureSignificanceThreshold()) || ((_captureType & 2) == 2)) ? 2 : 1;

    if (((ind1 = Type, ind1) & 4) == 4)
        captureType = captureType | 4;

    if (((ind2 = Type, ind2) & 8) == 8)
        captureType = captureType | 8;

    ::g::Fuse::Input::Gestures::AddActive(this);
    ::g::Fuse::Input::Gestures::RequestCaptureChange(this, args, captureType);
}

// public void Dispose() [instance]
void Gesture::Dispose()
{
    Cancel();
    ::g::Fuse::Input::Gestures::Remove(Handler);
}

// private void HandleRequest(Fuse.Input.GestureRequest req, Fuse.Input.PointerEventArgs args) [instance]
void Gesture::HandleRequest(int32_t req, ::g::Fuse::Input::PointerEventArgs* args)
{
    switch (req)
    {
        case 0:
            break;
        case 1:
        {
            Capture(args);
            break;
        }
        case 2:
        {
            Cancel();
            break;
        }
    }
}

// public bool get_IsHardCapture() [instance]
bool Gesture::IsHardCapture()
{
    return (_captureType & 2) == 2;
}

// private void LostCapture(bool forced) [instance]
void Gesture::LostCapture(bool forced)
{
    uPtr(_down)->Clear();
    _captureType = 0;
    ::g::Fuse::Input::Gestures::RemoveActive(this);
    ::g::Fuse::Input::Pointer::ReleaseCapture(this);
    uPtr(Target)->EndInteraction(this);
    ::g::Fuse::Input::IGesture::OnLostCapture(uInterface(uPtr(Handler), ::TYPES[10/*Fuse.Input.IGesture*/]), forced);
}

// private void OnLostCapture() [instance]
void Gesture::OnLostCapture()
{
    LostCapture(true);
}

// internal void OnPointerMoved(object sender, Fuse.Input.PointerMovedArgs args) [instance]
void Gesture::OnPointerMoved(uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    bool ret6;
    ::g::Fuse::Input::Gestures::PumpEvent(args);

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_down), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret6), ret6))
        return;

    if (!::g::Fuse::Input::Pointer::IsPressed1(uPtr(args)->PointIndex()))
    {
        ::g::Fuse::Diagnostics::InternalError(::g::Uno::String::op_Addition1(::STRINGS[9/*"Missing Los...*/], uBox<int32_t>(::g::Uno::Int_typeof(), uPtr(args)->PointIndex())), this, ::STRINGS[10/*"/Users/mort...*/], 281, ::STRINGS[11/*"OnPointerMo...*/]);
        LostCapture(true);
        return;
    }

    HandleRequest(::g::Fuse::Input::IGesture::OnPointerMoved(uInterface(uPtr(Handler), ::TYPES[10/*Fuse.Input.IGesture*/]), args), args);
}

// internal void OnPointerPressed(object sender, Fuse.Input.PointerPressedArgs args) [instance]
void Gesture::OnPointerPressed(uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    int32_t ind3;
    int32_t ind4;
    ::g::Fuse::Input::Gestures::PumpEvent(args);

    if ((uPtr(_down)->Count() != 0) && !(((ind3 = Type, ind3) & 2) == 2))
        return;

    if ((((ind4 = Type, ind4) & 1) == 1) && !uPtr(args)->IsPrimary())
        return;

    HandleRequest(::g::Fuse::Input::IGesture::OnPointerPressed(uInterface(uPtr(Handler), ::TYPES[10/*Fuse.Input.IGesture*/]), args), args);
}

// internal void OnPointerReleased(object sender, Fuse.Input.PointerReleasedArgs args) [instance]
void Gesture::OnPointerReleased(uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    bool ret7;
    bool ret8;
    ::g::Fuse::Input::Gestures::PumpEvent(args);

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_down), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret7), ret7))
        return;

    HandleRequest(::g::Fuse::Input::IGesture::OnPointerReleased(uInterface(uPtr(Handler), ::TYPES[10/*Fuse.Input.IGesture*/]), args), args);
    ::g::Uno::Collections::List__Remove_fn(uPtr(_down), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret8);
}

// internal void OnRequestChanged(Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType captureType) [instance]
void Gesture::OnRequestChanged(::g::Fuse::Input::PointerEventArgs* args, int32_t captureType)
{
    bool ret9;
    bool ret10;

    if ((_captureType == captureType) && (::g::Uno::Collections::List__Contains_fn(uPtr(_down), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret9), ret9))
        return;

    if ((_captureType == 0) ? !::g::Fuse::Input::Pointer::ModifyCapture1(this, Target, uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Gesture__OnLostCapture_fn, this), captureType, uPtr(args)->PointIndex()) : !::g::Fuse::Input::Pointer::ModifyCapture(this, captureType))
    {
        OnLostCapture();
        return;
    }

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(_down), uCRef<int32_t>(uPtr(args)->PointIndex()), &ret10), ret10))
    {
        ::g::Uno::Collections::List__Add_fn(uPtr(_down), uCRef<int32_t>(uPtr(args)->PointIndex()));

        if (uPtr(_down)->Count() > 1)
        {
            if (!::g::Fuse::Input::Pointer::ExtendCapture(this, uPtr(args)->PointIndex()))
            {
                OnLostCapture();
                return;
            }
        }
    }

    int32_t prevCapture = _captureType;
    _captureType = captureType;

    if ((captureType & 2) == 2)
        uPtr(Target)->BeginInteraction(this, uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Gesture__OnLostCapture_fn, this));

    ::g::Fuse::Input::IGesture::OnCaptureChanged(uInterface(uPtr(Handler), ::TYPES[10/*Fuse.Input.IGesture*/]), args, captureType, prevCapture);
}

// internal Gesture New(Fuse.Input.IGesture handler, Fuse.Input.GestureType type, Fuse.Visual target) [static]
Gesture* Gesture::New1(uObject* handler, int32_t type, ::g::Fuse::Visual* target)
{
    Gesture* obj5 = (Gesture*)uNew(Gesture_typeof());
    obj5->ctor_(handler, type, target);
    return obj5;
}

// public static float VectorSignificance(float2 vector, float2 offset) [static]
float Gesture::VectorSignificance(::g::Uno::Float2 vector, ::g::Uno::Float2 offset)
{
    if (::g::Fuse::Internal::VectorUtil::NormRejection(offset, vector) > 44.0f)
        return 0.0f;

    return ::g::Uno::Math::Abs1(::g::Fuse::Internal::VectorUtil::ScalarProjection(offset, vector));
}

// internal static float get_HardCaptureSignificanceThreshold() [static]
float Gesture::HardCaptureSignificanceThreshold()
{
    return 10.0f;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// public enum GesturePriority
uEnumType* GesturePriority_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Input.GesturePriority", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Lowest", 0LL,
        "Low", 1LL,
        "Normal", 2LL,
        "High", 3LL,
        "Highest", 4LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// public struct GesturePriorityConfig
// {
static void GesturePriorityConfig_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Input::GesturePriority_typeof(), offsetof(GesturePriorityConfig, Priority), 0,
        ::g::Uno::Float_typeof(), offsetof(GesturePriorityConfig, Significance), 0,
        ::g::Uno::Int_typeof(), offsetof(GesturePriorityConfig, Adjustment), 0);
}

uStructType* GesturePriorityConfig_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 3;
    options.Alignment = alignof(GesturePriorityConfig);
    options.ValueSize = sizeof(GesturePriorityConfig);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Input.GesturePriorityConfig", options);
    type->fp_build_ = GesturePriorityConfig_build;
    return type;
}

// public GesturePriorityConfig(Fuse.Input.GesturePriority priority, [float significance], [int adjustment])
void GesturePriorityConfig__ctor_1_fn(GesturePriorityConfig* __this, int32_t* priority, float* significance, int32_t* adjustment)
{
    __this->ctor_1(*priority, *significance, *adjustment);
}

// public GesturePriorityConfig New(Fuse.Input.GesturePriority priority, [float significance], [int adjustment])
void GesturePriorityConfig__New1_fn(int32_t* priority, float* significance, int32_t* adjustment, GesturePriorityConfig* __retval)
{
    *__retval = GesturePriorityConfig__New1(*priority, *significance, *adjustment);
}

// public GesturePriorityConfig(Fuse.Input.GesturePriority priority, [float significance], [int adjustment]) [instance]
void GesturePriorityConfig::ctor_1(int32_t priority, float significance, int32_t adjustment)
{
    Priority = priority;
    Significance = significance;
    Adjustment = adjustment;
}

// public GesturePriorityConfig New(Fuse.Input.GesturePriority priority, [float significance], [int adjustment]) [static]
GesturePriorityConfig GesturePriorityConfig__New1(int32_t priority, float significance, int32_t adjustment)
{
    GesturePriorityConfig obj1;
    obj1.ctor_1(priority, significance, adjustment);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// public enum GestureRequest
uEnumType* GestureRequest_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Input.GestureRequest", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Ignore", 0LL,
        "Capture", 1LL,
        "Cancel", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// public static class Gestures
// {
// static generated Gestures()
static void Gestures__cctor__fn(uType* __type)
{
    Gestures::_gestures_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[10/*Fuse.Input.IGesture*/], ::g::Fuse::Input::Gesture_typeof(), nullptr)));
    Gestures::_activeGestures_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(Gestures__ActiveGesture_typeof(), nullptr)));
}

static void Gestures_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof(),
        ::g::Fuse::UpdateManager_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Input::IGesture_typeof(), ::g::Fuse::Input::Gesture_typeof(), nullptr), (uintptr_t)&Gestures::_gestures_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(Gestures__ActiveGesture_typeof(), nullptr), (uintptr_t)&Gestures::_activeGestures_, uFieldFlagsStatic,
        ::g::Uno::Bool_typeof(), (uintptr_t)&Gestures::_changePosted_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerEventArgs_typeof(), (uintptr_t)&Gestures::_pumpArgs_, uFieldFlagsStatic);
}

uClassType* Gestures_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Gestures", options);
    type->fp_build_ = Gestures_build;
    type->fp_cctor_ = Gestures__cctor__fn;
    return type;
}

// public static Fuse.Input.Gesture Add(Fuse.Input.IGesture handler, Fuse.Visual target, Fuse.Input.GestureType type)
void Gestures__Add_fn(uObject* handler, ::g::Fuse::Visual* target, int32_t* type, ::g::Fuse::Input::Gesture** __retval)
{
    *__retval = Gestures::Add(handler, target, *type);
}

// internal static void AddActive(Fuse.Input.Gesture g)
void Gestures__AddActive_fn(::g::Fuse::Input::Gesture* g)
{
    Gestures::AddActive(g);
}

// private static int GetActiveGestureIndex(Fuse.Input.Gesture g)
void Gestures__GetActiveGestureIndex_fn(::g::Fuse::Input::Gesture* g, int32_t* __retval)
{
    *__retval = Gestures::GetActiveGestureIndex(g);
}

// private static int PriorityOrder(Fuse.Input.Gestures.ActiveGesture a, Fuse.Input.Gestures.ActiveGesture b)
void Gestures__PriorityOrder_fn(Gestures__ActiveGesture* a, Gestures__ActiveGesture* b, int32_t* __retval)
{
    *__retval = Gestures::PriorityOrder(a, b);
}

// private static void ProcessCaptureChanges()
void Gestures__ProcessCaptureChanges_fn()
{
    Gestures::ProcessCaptureChanges();
}

// internal static void PumpEvent(Fuse.Input.PointerEventArgs args)
void Gestures__PumpEvent_fn(::g::Fuse::Input::PointerEventArgs* args)
{
    Gestures::PumpEvent(args);
}

// internal static void Remove(Fuse.Input.IGesture handler)
void Gestures__Remove_fn(uObject* handler)
{
    Gestures::Remove(handler);
}

// internal static void RemoveActive(Fuse.Input.Gesture g)
void Gestures__RemoveActive_fn(::g::Fuse::Input::Gesture* g)
{
    Gestures::RemoveActive(g);
}

// internal static void RequestCaptureChange(Fuse.Input.Gesture gesture, Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType captureType)
void Gestures__RequestCaptureChange_fn(::g::Fuse::Input::Gesture* gesture, ::g::Fuse::Input::PointerEventArgs* args, int32_t* captureType)
{
    Gestures::RequestCaptureChange(gesture, args, *captureType);
}

// private static void UpdateSignificance()
void Gestures__UpdateSignificance_fn()
{
    Gestures::UpdateSignificance();
}

uSStrong< ::g::Uno::Collections::Dictionary*> Gestures::_gestures_;
uSStrong< ::g::Uno::Collections::List*> Gestures::_activeGestures_;
bool Gestures::_changePosted_;
uSStrong< ::g::Fuse::Input::PointerEventArgs*> Gestures::_pumpArgs_;

// public static Fuse.Input.Gesture Add(Fuse.Input.IGesture handler, Fuse.Visual target, Fuse.Input.GestureType type) [static]
::g::Fuse::Input::Gesture* Gestures::Add(uObject* handler, ::g::Fuse::Visual* target, int32_t type)
{
    Gestures_typeof()->Init();
    bool ret2;

    if (handler == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(::STRINGS[7/*"handler"*/]));

    if ((::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(Gestures::_gestures_), handler, &ret2), ret2))
        U_THROW(::g::Uno::ArgumentException::New4(uString::Const("This gesture handler is already registered")));

    ::g::Fuse::Input::Gesture* g = ::g::Fuse::Input::Gesture::New1(handler, type, target);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(Gestures::_gestures_), handler, g);
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), target, uDelegate::New(::g::Fuse::Input::PointerPressedHandler_typeof(), (void*)::g::Fuse::Input::Gesture__OnPointerPressed_fn, g));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), target, uDelegate::New(::g::Fuse::Input::PointerReleasedHandler_typeof(), (void*)::g::Fuse::Input::Gesture__OnPointerReleased_fn, g));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), target, uDelegate::New(::g::Fuse::Input::PointerMovedHandler_typeof(), (void*)::g::Fuse::Input::Gesture__OnPointerMoved_fn, g));
    return g;
}

// internal static void AddActive(Fuse.Input.Gesture g) [static]
void Gestures::AddActive(::g::Fuse::Input::Gesture* g)
{
    Gestures_typeof()->Init();
    Gestures__ActiveGesture* collection1;
    int32_t index = Gestures::GetActiveGestureIndex(g);

    if (index == -1)
        ::g::Uno::Collections::List__Add_fn(uPtr(Gestures::_activeGestures_), (collection1 = Gestures__ActiveGesture::New1(), uPtr(collection1)->Gesture = g, collection1));
}

// private static int GetActiveGestureIndex(Fuse.Input.Gesture g) [static]
int32_t Gestures::GetActiveGestureIndex(::g::Fuse::Input::Gesture* g)
{
    Gestures_typeof()->Init();
    Gestures__ActiveGesture* ret3;

    for (int32_t i = 0; i < uPtr(Gestures::_activeGestures_)->Count(); ++i)
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(Gestures::_activeGestures_), uCRef<int32_t>(i), &ret3), ret3))->Gesture == g)
            return i;

    return -1;
}

// private static int PriorityOrder(Fuse.Input.Gestures.ActiveGesture a, Fuse.Input.Gestures.ActiveGesture b) [static]
int32_t Gestures::PriorityOrder(Gestures__ActiveGesture* a, Gestures__ActiveGesture* b)
{
    Gestures_typeof()->Init();
    int32_t p = uPtr(b)->Priority - uPtr(a)->Priority;

    if (p != 0)
        return p;

    return b->PriorityAdjustment - a->PriorityAdjustment;
}

// private static void ProcessCaptureChanges() [static]
void Gestures::ProcessCaptureChanges()
{
    Gestures_typeof()->Init();
    Gestures__ActiveGesture* ret4;
    Gestures__ActiveGesture* ret5;

    if (!Gestures::_changePosted_)
        return;

    Gestures::_changePosted_ = false;
    Gestures::UpdateSignificance();
    uPtr(Gestures::_activeGestures_)->Sort(uDelegate::New(::g::Uno::Comparison_typeof()->MakeType(Gestures__ActiveGesture_typeof(), nullptr), (void*)Gestures__PriorityOrder_fn));

    for (int32_t i = 0; i < uPtr(Gestures::_activeGestures_)->Count(); ++i)
    {
        Gestures__ActiveGesture* ar = (::g::Uno::Collections::List__get_Item_fn(uPtr(Gestures::_activeGestures_), uCRef<int32_t>(i), &ret4), ret4);

        if (!uPtr(ar)->ChangeRequest)
            continue;

        uPtr(ar)->ChangeRequest = false;
        Gestures__ActiveGesture* prev = (i > 0) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(Gestures::_activeGestures_), uCRef<int32_t>(i - 1), &ret5), ret5) : nullptr;
        int32_t pdiff = (prev != nullptr) ? uPtr(prev)->Priority - ar->Priority : 0;

        if ((pdiff > 0) && ((ar->CaptureType & 2) == 2))
        {
            if (uPtr(ar)->Significance < (((float)uPtr(prev)->Priority * 2.0f) + uPtr(prev)->Significance))
                continue;
        }

        uPtr(ar->Gesture)->OnRequestChanged(ar->Args, ar->CaptureType);
    }
}

// internal static void PumpEvent(Fuse.Input.PointerEventArgs args) [static]
void Gestures::PumpEvent(::g::Fuse::Input::PointerEventArgs* args)
{
    Gestures_typeof()->Init();

    if (Gestures::_pumpArgs_ == nullptr)
    {
        Gestures::_pumpArgs_ = args;
        return;
    }

    if (Gestures::_pumpArgs_ == args)
        return;

    Gestures::_pumpArgs_ = args;

    if (!Gestures::_changePosted_)
        return;

    Gestures::ProcessCaptureChanges();
    Gestures::_changePosted_ = false;
}

// internal static void Remove(Fuse.Input.IGesture handler) [static]
void Gestures::Remove(uObject* handler)
{
    Gestures_typeof()->Init();
    bool ret6;
    bool ret7;
    ::g::Fuse::Input::Gesture* g;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Gestures::_gestures_), handler, (void**)(&g), &ret6), ret6))
        U_THROW(::g::Uno::ArgumentException::New4(uString::Const("Unregistered gesture")));

    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Pressed()), uPtr(g)->Target, uDelegate::New(::g::Fuse::Input::PointerPressedHandler_typeof(), (void*)::g::Fuse::Input::Gesture__OnPointerPressed_fn, uPtr(g)));
    ::g::Fuse::VisualEvent__RemoveHandler_fn(uPtr(::g::Fuse::Input::Pointer::Released()), g->Target, uDelegate::New(::g::Fuse::Input::PointerReleasedHandler_typeof(), (void*)::g::Fuse::Input::Gesture__OnPointerReleased_fn, g));
    ::g::Fuse::VisualEvent__AddHandler_fn(uPtr(::g::Fuse::Input::Pointer::Moved()), g->Target, uDelegate::New(::g::Fuse::Input::PointerMovedHandler_typeof(), (void*)::g::Fuse::Input::Gesture__OnPointerMoved_fn, g));
    ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(Gestures::_gestures_), handler, &ret7);
}

// internal static void RemoveActive(Fuse.Input.Gesture g) [static]
void Gestures::RemoveActive(::g::Fuse::Input::Gesture* g)
{
    Gestures_typeof()->Init();
    int32_t index = Gestures::GetActiveGestureIndex(g);

    if (index != -1)
        uPtr(Gestures::_activeGestures_)->RemoveAt(index);
}

// internal static void RequestCaptureChange(Fuse.Input.Gesture gesture, Fuse.Input.PointerEventArgs args, Fuse.Input.CaptureType captureType) [static]
void Gestures::RequestCaptureChange(::g::Fuse::Input::Gesture* gesture, ::g::Fuse::Input::PointerEventArgs* args, int32_t captureType)
{
    Gestures_typeof()->Init();
    Gestures__ActiveGesture* ret8;
    int32_t index = Gestures::GetActiveGestureIndex(gesture);

    if (index == -1)
        U_THROW(::g::Uno::Exception::New2(uString::Const("RequestCaptureChange on inactive gesture")));

    Gestures__ActiveGesture* ar = (::g::Uno::Collections::List__get_Item_fn(uPtr(Gestures::_activeGestures_), uCRef<int32_t>(index), &ret8), ret8);
    uPtr(ar)->ChangeRequest = true;
    ar->Args = args;
    ar->CaptureType = captureType;

    if (!Gestures::_changePosted_)
    {
        ::g::Fuse::UpdateManager::AddDeferredAction2(uDelegate::New(::TYPES[11/*Uno.Action*/], (void*)Gestures__ProcessCaptureChanges_fn), -1, 2);
        Gestures::_changePosted_ = true;
    }
}

// private static void UpdateSignificance() [static]
void Gestures::UpdateSignificance()
{
    Gestures_typeof()->Init();
    Gestures__ActiveGesture* ret9;

    for (int32_t i = 0; i < uPtr(Gestures::_activeGestures_)->Count(); ++i)
    {
        Gestures__ActiveGesture* ar = (::g::Uno::Collections::List__get_Item_fn(uPtr(Gestures::_activeGestures_), uCRef<int32_t>(i), &ret9), ret9);
        ::g::Fuse::Input::GesturePriorityConfig pr = ::g::Fuse::Input::IGesture::Priority(uInterface(uPtr(uPtr(uPtr(ar)->Gesture)->Handler), ::TYPES[10/*Fuse.Input.IGesture*/]));
        ar->Priority = pr.Priority;
        ar->Significance = pr.Significance;
        ar->PriorityAdjustment = pr.Adjustment;
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// public enum GestureType
uEnumType* GestureType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Input.GestureType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Any", 0LL,
        "Primary", 1LL,
        "Multi", 2LL,
        "Children", 4LL,
        "NodeShare", 8LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/HitTestHelpers.uno
// ---------------------------------------------------------------------------

// public static class HitTestHelpers
// {
static void HitTestHelpers_build(uType* type)
{
}

uClassType* HitTestHelpers_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.HitTestHelpers", options);
    type->fp_build_ = HitTestHelpers_build;
    return type;
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Visual root, float2 point)
void HitTestHelpers__HitTestNearest_fn(::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = HitTestHelpers::HitTestNearest(root, *point);
}

// public static Fuse.HitTestResult HitTestNearest(Fuse.Visual root, float2 point) [static]
::g::Fuse::HitTestResult* HitTestHelpers::HitTestNearest(::g::Fuse::Visual* root, ::g::Uno::Float2 point)
{
    ::g::Fuse::Input::SelectionQuery* sq = ::g::Fuse::Input::SelectionQuery::New1();
    return sq->Select1(root, point);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Gesture.uno
// --------------------------------------------------------------------

// public abstract interface IGesture
// {
uInterfaceType* IGesture_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Input.IGesture", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Focus.uno
// ------------------------------------------------------------------

// public abstract interface INotifyFocus
// {
uInterfaceType* INotifyFocus_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Input.INotifyFocus", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// public abstract interface IPointerEventResponder
// {
uInterfaceType* IPointerEventResponder_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Input.IPointerEventResponder", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// public sealed class IsFocusableChangedArgs
// {
static void IsFocusableChangedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2);
}

::g::Fuse::VisualEventArgs_type* IsFocusableChangedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(IsFocusableChangedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.IsFocusableChangedArgs", options);
    type->fp_build_ = IsFocusableChangedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// internal sealed class IsFocusableChangedEvent
// {
static void IsFocusableChangedEvent_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::IsFocusableChangedHandler_typeof(), ::g::Fuse::Input::IsFocusableChangedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* IsFocusableChangedEvent_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(IsFocusableChangedEvent);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.IsFocusableChangedEvent", options);
    type->fp_build_ = IsFocusableChangedEvent_build;
    type->fp_ctor_ = (void*)IsFocusableChangedEvent__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))IsFocusableChangedEvent__Invoke_fn;
    return type;
}

// public generated IsFocusableChangedEvent()
void IsFocusableChangedEvent__ctor_1_fn(IsFocusableChangedEvent* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.IsFocusableChangedHandler handler, object sender, Fuse.Input.IsFocusableChangedArgs args)
void IsFocusableChangedEvent__Invoke_fn(IsFocusableChangedEvent* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::IsFocusableChangedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated IsFocusableChangedEvent New()
void IsFocusableChangedEvent__New1_fn(IsFocusableChangedEvent** __retval)
{
    *__retval = IsFocusableChangedEvent::New1();
}

// public generated IsFocusableChangedEvent() [instance]
void IsFocusableChangedEvent::ctor_1()
{
    ctor_();
}

// public generated IsFocusableChangedEvent New() [static]
IsFocusableChangedEvent* IsFocusableChangedEvent::New1()
{
    IsFocusableChangedEvent* obj1 = (IsFocusableChangedEvent*)uNew(IsFocusableChangedEvent_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/FocusEvents.uno
// ------------------------------------------------------------------------

// public delegate void IsFocusableChangedHandler(object sender, Fuse.Input.IsFocusableChangedArgs args)
uDelegateType* IsFocusableChangedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.IsFocusableChangedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::IsFocusableChangedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// public static class Keyboard
// {
// static generated Keyboard()
static void Keyboard__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Keyboard::_keyPressed_ = ::g::Fuse::Input::KeyPressed::New1();
    Keyboard::_keyReleased_ = ::g::Fuse::Input::KeyReleased::New1();
    Keyboard::_keysDown_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[12/*Uno.Collections.List<Uno.Platform.Key>*/]));
    Keyboard::_keyboardHandle_ = ::g::Fuse::Properties::CreateHandle();
}

static void Keyboard_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Platform::Key_typeof(), nullptr);
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetFields(0,
        ::g::Fuse::Input::KeyPressed_typeof(), (uintptr_t)&Keyboard::_keyPressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::KeyReleased_typeof(), (uintptr_t)&Keyboard::_keyReleased_, uFieldFlagsStatic,
        ::TYPES[12/*Uno.Collections.List<Uno.Platform.Key>*/], (uintptr_t)&Keyboard::_keysDown_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Keyboard::_keyboardHandle_, uFieldFlagsStatic);
}

uClassType* Keyboard_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Keyboard", options);
    type->fp_build_ = Keyboard_build;
    type->fp_cctor_ = Keyboard__cctor__fn;
    return type;
}

// public static Fuse.VisualEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed()
void Keyboard__get_KeyPressed_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Keyboard::KeyPressed();
}

// public static Fuse.VisualEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased()
void Keyboard__get_KeyReleased_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Keyboard::KeyReleased();
}

// private static Fuse.Visual get_KeyTargetVisual()
void Keyboard__get_KeyTargetVisual_fn(::g::Fuse::Visual** __retval)
{
    *__retval = Keyboard::KeyTargetVisual();
}

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
void Keyboard__RaiseKeyPressed_fn(int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyPressed(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
void Keyboard__RaiseKeyReleased_fn(int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, bool* __retval)
{
    *__retval = Keyboard::RaiseKeyReleased(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed);
}

uSStrong< ::g::Fuse::Input::KeyPressed*> Keyboard::_keyPressed_;
uSStrong< ::g::Fuse::Input::KeyReleased*> Keyboard::_keyReleased_;
uSStrong< ::g::Uno::Collections::List*> Keyboard::_keysDown_;
uSStrong< ::g::Fuse::PropertyHandle*> Keyboard::_keyboardHandle_;

// public static bool RaiseKeyPressed(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static]
bool Keyboard::RaiseKeyPressed(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    Keyboard_typeof()->Init();
    ::g::Uno::Collections::List__Add_fn(uPtr(Keyboard::_keysDown_), uCRef<int32_t>(key));
    ::g::Fuse::Input::KeyPressedArgs* args = ::g::Fuse::Input::KeyPressedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, Keyboard::KeyTargetVisual());
    uPtr(Keyboard::KeyPressed())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static bool RaiseKeyReleased(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed) [static]
bool Keyboard::RaiseKeyReleased(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed)
{
    Keyboard_typeof()->Init();
    int32_t ret3;

    for (int32_t i = 0; i < uPtr(Keyboard::_keysDown_)->Count(); i++)
        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(Keyboard::_keysDown_), uCRef<int32_t>(i), &ret3), ret3) == key)
            uPtr(Keyboard::_keysDown_)->RemoveAt(i--);

    ::g::Fuse::Input::KeyReleasedArgs* args = ::g::Fuse::Input::KeyReleasedArgs::New3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, Keyboard::KeyTargetVisual());
    uPtr(Keyboard::KeyReleased())->RaiseWithBubble(args, 0);
    return args->IsHandled();
}

// public static Fuse.VisualEvent<Fuse.Input.KeyPressedHandler, Fuse.Input.KeyPressedArgs> get_KeyPressed() [static]
::g::Fuse::VisualEvent* Keyboard::KeyPressed()
{
    Keyboard_typeof()->Init();
    return Keyboard::_keyPressed_;
}

// public static Fuse.VisualEvent<Fuse.Input.KeyReleasedHandler, Fuse.Input.KeyReleasedArgs> get_KeyReleased() [static]
::g::Fuse::VisualEvent* Keyboard::KeyReleased()
{
    Keyboard_typeof()->Init();
    return Keyboard::_keyReleased_;
}

// private static Fuse.Visual get_KeyTargetVisual() [static]
::g::Fuse::Visual* Keyboard::KeyTargetVisual()
{
    Keyboard_typeof()->Init();
    ::g::Fuse::Visual* ind1;
    ind1 = ::g::Fuse::Input::Focus::FocusedVisual();
    return (ind1 != nullptr) ? ind1 : (::g::Fuse::RootViewport*)::g::Fuse::AppBase::CurrentRootViewport();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// public abstract class KeyEventArgs
// {
static void KeyEventArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Uno::Bool_typeof(), offsetof(KeyEventArgs, _IsAltKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(KeyEventArgs, _IsControlKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(KeyEventArgs, _IsMetaKeyPressed), 0,
        ::g::Uno::Bool_typeof(), offsetof(KeyEventArgs, _IsShiftKeyPressed), 0,
        ::g::Uno::Platform::Key_typeof(), offsetof(KeyEventArgs, _Key), 0);
}

::g::Fuse::VisualEventArgs_type* KeyEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyEventArgs", options);
    type->fp_build_ = KeyEventArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Visual visual)
void KeyEventArgs__ctor_2_fn(KeyEventArgs* __this, int32_t* key, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(*key, visual);
}

// public generated bool get_IsAltKeyPressed()
void KeyEventArgs__get_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsAltKeyPressed();
}

// protected generated void set_IsAltKeyPressed(bool value)
void KeyEventArgs__set_IsAltKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsAltKeyPressed(*value);
}

// public generated bool get_IsControlKeyPressed()
void KeyEventArgs__get_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsControlKeyPressed();
}

// protected generated void set_IsControlKeyPressed(bool value)
void KeyEventArgs__set_IsControlKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsControlKeyPressed(*value);
}

// public generated bool get_IsMetaKeyPressed()
void KeyEventArgs__get_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsMetaKeyPressed();
}

// protected generated void set_IsMetaKeyPressed(bool value)
void KeyEventArgs__set_IsMetaKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsMetaKeyPressed(*value);
}

// public generated bool get_IsShiftKeyPressed()
void KeyEventArgs__get_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsShiftKeyPressed();
}

// protected generated void set_IsShiftKeyPressed(bool value)
void KeyEventArgs__set_IsShiftKeyPressed_fn(KeyEventArgs* __this, bool* value)
{
    __this->IsShiftKeyPressed(*value);
}

// public generated Uno.Platform.Key get_Key()
void KeyEventArgs__get_Key_fn(KeyEventArgs* __this, int32_t* __retval)
{
    *__retval = __this->Key();
}

// private generated void set_Key(Uno.Platform.Key value)
void KeyEventArgs__set_Key_fn(KeyEventArgs* __this, int32_t* value)
{
    __this->Key(*value);
}

// protected KeyEventArgs(Uno.Platform.Key key, Fuse.Visual visual) [instance]
void KeyEventArgs::ctor_2(int32_t key, ::g::Fuse::Visual* visual)
{
    ctor_1(visual);
    Key(key);
}

// public generated bool get_IsAltKeyPressed() [instance]
bool KeyEventArgs::IsAltKeyPressed()
{
    return _IsAltKeyPressed;
}

// protected generated void set_IsAltKeyPressed(bool value) [instance]
void KeyEventArgs::IsAltKeyPressed(bool value)
{
    _IsAltKeyPressed = value;
}

// public generated bool get_IsControlKeyPressed() [instance]
bool KeyEventArgs::IsControlKeyPressed()
{
    return _IsControlKeyPressed;
}

// protected generated void set_IsControlKeyPressed(bool value) [instance]
void KeyEventArgs::IsControlKeyPressed(bool value)
{
    _IsControlKeyPressed = value;
}

// public generated bool get_IsMetaKeyPressed() [instance]
bool KeyEventArgs::IsMetaKeyPressed()
{
    return _IsMetaKeyPressed;
}

// protected generated void set_IsMetaKeyPressed(bool value) [instance]
void KeyEventArgs::IsMetaKeyPressed(bool value)
{
    _IsMetaKeyPressed = value;
}

// public generated bool get_IsShiftKeyPressed() [instance]
bool KeyEventArgs::IsShiftKeyPressed()
{
    return _IsShiftKeyPressed;
}

// protected generated void set_IsShiftKeyPressed(bool value) [instance]
void KeyEventArgs::IsShiftKeyPressed(bool value)
{
    _IsShiftKeyPressed = value;
}

// public generated Uno.Platform.Key get_Key() [instance]
int32_t KeyEventArgs::Key()
{
    return _Key;
}

// private generated void set_Key(Uno.Platform.Key value) [instance]
void KeyEventArgs::Key(int32_t value)
{
    _Key = value;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// internal sealed class KeyPressed
// {
static void KeyPressed_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyPressedHandler_typeof(), ::g::Fuse::Input::KeyPressedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* KeyPressed_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyPressed);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.KeyPressed", options);
    type->fp_build_ = KeyPressed_build;
    type->fp_ctor_ = (void*)KeyPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))KeyPressed__Invoke_fn;
    return type;
}

// public generated KeyPressed()
void KeyPressed__ctor_1_fn(KeyPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyPressedHandler handler, object sender, Fuse.Input.KeyPressedArgs args)
void KeyPressed__Invoke_fn(KeyPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyPressedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyPressed New()
void KeyPressed__New1_fn(KeyPressed** __retval)
{
    *__retval = KeyPressed::New1();
}

// public generated KeyPressed() [instance]
void KeyPressed::ctor_1()
{
    ctor_();
}

// public generated KeyPressed New() [static]
KeyPressed* KeyPressed::New1()
{
    KeyPressed* obj1 = (KeyPressed*)uNew(KeyPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// public sealed class KeyPressedArgs
// {
static void KeyPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(7);
}

::g::Fuse::VisualEventArgs_type* KeyPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::KeyEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyPressedArgs", options);
    type->fp_build_ = KeyPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual)
void KeyPressedArgs__ctor_3_fn(KeyPressedArgs* __this, int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual)
void KeyPressedArgs__New3_fn(int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual, KeyPressedArgs** __retval)
{
    *__retval = KeyPressedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyPressedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [instance]
void KeyPressedArgs::ctor_3(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    ctor_2(key, visual);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyPressedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [static]
KeyPressedArgs* KeyPressedArgs::New3(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    KeyPressedArgs* obj1 = (KeyPressedArgs*)uNew(KeyPressedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// public delegate void KeyPressedHandler(object sender, Fuse.Input.KeyPressedArgs args)
uDelegateType* KeyPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.KeyPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyPressedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// internal sealed class KeyReleased
// {
static void KeyReleased_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::KeyReleasedHandler_typeof(), ::g::Fuse::Input::KeyReleasedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* KeyReleased_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(KeyReleased);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.KeyReleased", options);
    type->fp_build_ = KeyReleased_build;
    type->fp_ctor_ = (void*)KeyReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))KeyReleased__Invoke_fn;
    return type;
}

// public generated KeyReleased()
void KeyReleased__ctor_1_fn(KeyReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.KeyReleasedHandler handler, object sender, Fuse.Input.KeyReleasedArgs args)
void KeyReleased__Invoke_fn(KeyReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::KeyReleasedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated KeyReleased New()
void KeyReleased__New1_fn(KeyReleased** __retval)
{
    *__retval = KeyReleased::New1();
}

// public generated KeyReleased() [instance]
void KeyReleased::ctor_1()
{
    ctor_();
}

// public generated KeyReleased New() [static]
KeyReleased* KeyReleased::New1()
{
    KeyReleased* obj1 = (KeyReleased*)uNew(KeyReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// public sealed class KeyReleasedArgs
// {
static void KeyReleasedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(7);
}

::g::Fuse::VisualEventArgs_type* KeyReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::KeyEventArgs_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(KeyReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.KeyReleasedArgs", options);
    type->fp_build_ = KeyReleasedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual)
void KeyReleasedArgs__ctor_3_fn(KeyReleasedArgs* __this, int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual)
void KeyReleasedArgs__New3_fn(int32_t* key, bool* isMetaKeyPressed, bool* isControlKeyPressed, bool* isShiftKeyPressed, bool* isAltKeyPressed, ::g::Fuse::Visual* visual, KeyReleasedArgs** __retval)
{
    *__retval = KeyReleasedArgs::New3(*key, *isMetaKeyPressed, *isControlKeyPressed, *isShiftKeyPressed, *isAltKeyPressed, visual);
}

// public KeyReleasedArgs(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [instance]
void KeyReleasedArgs::ctor_3(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    ctor_2(key, visual);
    IsMetaKeyPressed(isMetaKeyPressed);
    IsControlKeyPressed(isControlKeyPressed);
    IsShiftKeyPressed(isShiftKeyPressed);
    IsAltKeyPressed(isAltKeyPressed);
}

// public KeyReleasedArgs New(Uno.Platform.Key key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, Fuse.Visual visual) [static]
KeyReleasedArgs* KeyReleasedArgs::New3(int32_t key, bool isMetaKeyPressed, bool isControlKeyPressed, bool isShiftKeyPressed, bool isAltKeyPressed, ::g::Fuse::Visual* visual)
{
    KeyReleasedArgs* obj1 = (KeyReleasedArgs*)uNew(KeyReleasedArgs_typeof());
    obj1->ctor_3(key, isMetaKeyPressed, isControlKeyPressed, isShiftKeyPressed, isAltKeyPressed, visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Keyboard.uno
// ---------------------------------------------------------------------

// public delegate void KeyReleasedHandler(object sender, Fuse.Input.KeyReleasedArgs args)
uDelegateType* KeyReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.KeyReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::KeyReleasedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// private sealed class Pointer.PELHolder
// {
static void Pointer__PELHolder_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(Pointer__PELHolder, Visual), 0,
        ::g::Fuse::Input::Pointer__PELStatus_typeof(), offsetof(Pointer__PELHolder, Status), 0);
}

uType* Pointer__PELHolder_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Pointer__PELHolder);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PELHolder", options);
    type->fp_build_ = Pointer__PELHolder_build;
    type->fp_ctor_ = (void*)Pointer__PELHolder__New1_fn;
    return type;
}

// public generated PELHolder()
void Pointer__PELHolder__ctor__fn(Pointer__PELHolder* __this)
{
    __this->ctor_();
}

// public generated PELHolder New()
void Pointer__PELHolder__New1_fn(Pointer__PELHolder** __retval)
{
    *__retval = Pointer__PELHolder::New1();
}

// public generated PELHolder() [instance]
void Pointer__PELHolder::ctor_()
{
}

// public generated PELHolder New() [static]
Pointer__PELHolder* Pointer__PELHolder::New1()
{
    Pointer__PELHolder* obj1 = (Pointer__PELHolder*)uNew(Pointer__PELHolder_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// private enum Pointer.PELStatus
uEnumType* Pointer__PELStatus_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Input.Pointer.PELStatus", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Added", 0LL,
        "Removed", 1LL,
        "Remain", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// public partial static class Pointer
// {
// static Pointer()
static void Pointer__cctor__fn(uType* __type)
{
    Pointer::_pressed_ = ::g::Fuse::Input::PointerPressed::New1();
    Pointer::_moved_ = ::g::Fuse::Input::PointerMoved::New1();
    Pointer::_released_ = ::g::Fuse::Input::PointerReleased::New1();
    Pointer::_entered_ = ::g::Fuse::Input::PointerEntered::New1();
    Pointer::_left_ = ::g::Fuse::Input::PointerLeft::New1();
    Pointer::_wheelMoved_ = ::g::Fuse::Input::PointerWheelMoved::New1();
    Pointer::_pointersDown_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr)));
    Pointer::_captures_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::Capture_typeof(), nullptr)));
    Pointer::_captureLockImpl_ = Pointer__CaptureLockImpl::New1();
    Pointer::_lastHitVisuals_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof(), nullptr), nullptr)));
    Pointer::EventResponder((uObject*)Pointer__DefaultPointerEventResponder::New1());
}

static void Pointer_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Input::Focus_typeof());
    type->SetFields(0,
        ::g::Fuse::Input::PointerPressed_typeof(), (uintptr_t)&Pointer::_pressed_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerMoved_typeof(), (uintptr_t)&Pointer::_moved_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerReleased_typeof(), (uintptr_t)&Pointer::_released_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerEntered_typeof(), (uintptr_t)&Pointer::_entered_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerLeft_typeof(), (uintptr_t)&Pointer::_left_, uFieldFlagsStatic,
        ::g::Fuse::Input::PointerWheelMoved_typeof(), (uintptr_t)&Pointer::_wheelMoved_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr), (uintptr_t)&Pointer::_pointersDown_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Input::Capture_typeof(), nullptr), (uintptr_t)&Pointer::_captures_, uFieldFlagsStatic,
        Pointer__CaptureLockImpl_typeof(), (uintptr_t)&Pointer::_captureLockImpl_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Int_typeof(), ::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof(), nullptr), nullptr), (uintptr_t)&Pointer::_lastHitVisuals_, uFieldFlagsStatic,
        ::g::Uno::Float2_typeof(), (uintptr_t)&Pointer::_Coord_, uFieldFlagsStatic,
        ::g::Fuse::Input::IPointerEventResponder_typeof(), (uintptr_t)&Pointer::_EventResponder_, uFieldFlagsStatic);
}

uClassType* Pointer_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 12;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Input.Pointer", options);
    type->fp_build_ = Pointer_build;
    type->fp_cctor_ = Pointer__cctor__fn;
    return type;
}

// private static Fuse.Input.Pointer.CaptureLockImpl CaptureLock()
void Pointer__CaptureLock_fn(Pointer__CaptureLockImpl** __retval)
{
    *__retval = Pointer::CaptureLock();
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Visual> nodes)
void Pointer__CheckFocus_fn(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    Pointer::CheckFocus(args, nodes);
}

// public static generated float2 get_Coord()
void Pointer__get_Coord_fn(::g::Uno::Float2* __retval)
{
    *__retval = Pointer::Coord();
}

// private static generated void set_Coord(float2 value)
void Pointer__set_Coord_fn(::g::Uno::Float2* value)
{
    Pointer::Coord(*value);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered()
void Pointer__get_Entered_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Entered();
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder()
void Pointer__get_EventResponder_fn(uObject** __retval)
{
    *__retval = Pointer::EventResponder();
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value)
void Pointer__set_EventResponder_fn(uObject* value)
{
    Pointer::EventResponder(value);
}

// public static bool ExtendCapture(object identity, int pointIndex)
void Pointer__ExtendCapture_fn(uObject* identity, int32_t* pointIndex, bool* __retval)
{
    *__retval = Pointer::ExtendCapture(identity, *pointIndex);
}

// internal static Fuse.Input.Capture GetCapture(object identity)
void Pointer__GetCapture_fn(uObject* identity, ::g::Fuse::Input::Capture** __retval)
{
    *__retval = Pointer::GetCapture(identity);
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex)
void Pointer__GetLastHitList_fn(int32_t* pointIndex, ::g::Uno::Collections::List** __retval)
{
    *__retval = Pointer::GetLastHitList(*pointIndex);
}

// internal static Fuse.Input.Capture GetPrimaryCapture(int pointIndex)
void Pointer__GetPrimaryCapture_fn(int32_t* pointIndex, ::g::Fuse::Input::Capture** __retval)
{
    *__retval = Pointer::GetPrimaryCapture(*pointIndex);
}

// private static bool IsCaptureAllowed(Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity)
void Pointer__IsCaptureAllowed_fn(int32_t* type, ::g::Fuse::Visual* visual, int32_t* pointIndex, uObject* identity, bool* __retval)
{
    *__retval = Pointer::IsCaptureAllowed(*type, visual, *pointIndex, identity);
}

// private static bool IsCaptureAllowedAgainst(Fuse.Input.Capture current, Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity)
void Pointer__IsCaptureAllowedAgainst_fn(::g::Fuse::Input::Capture* current, int32_t* type, ::g::Fuse::Visual* visual, int32_t* pointIndex, uObject* identity, bool* __retval)
{
    *__retval = Pointer::IsCaptureAllowedAgainst(current, *type, visual, *pointIndex, identity);
}

// public static bool IsPressed(int pointIndex)
void Pointer__IsPressed1_fn(int32_t* pointIndex, bool* __retval)
{
    *__retval = Pointer::IsPressed1(*pointIndex);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left()
void Pointer__get_Left_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Left();
}

// private static void LoseSoftCapturesTo(Fuse.Input.Capture to)
void Pointer__LoseSoftCapturesTo_fn(::g::Fuse::Input::Capture* to)
{
    Pointer::LoseSoftCapturesTo(to);
}

// private static void MarkAncestorHits(Fuse.Visual hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list)
void Pointer__MarkAncestorHits_fn(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list)
{
    Pointer::MarkAncestorHits(hitObject, list);
}

// public static bool ModifyCapture(object identity, Fuse.Input.CaptureType type)
void Pointer__ModifyCapture_fn(uObject* identity, int32_t* type, bool* __retval)
{
    *__retval = Pointer::ModifyCapture(identity, *type);
}

// public static bool ModifyCapture(object identity, Fuse.Visual visual, Uno.Action lostCallback, Fuse.Input.CaptureType type, int pointIndex)
void Pointer__ModifyCapture1_fn(uObject* identity, ::g::Fuse::Visual* visual, uDelegate* lostCallback, int32_t* type, int32_t* pointIndex, bool* __retval)
{
    *__retval = Pointer::ModifyCapture1(identity, visual, lostCallback, *type, *pointIndex);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved()
void Pointer__get_Moved_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Moved();
}

// public static Fuse.VisualEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed()
void Pointer__get_Pressed_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Pressed();
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args)
void Pointer__ProcessPointerEnterLeave_fn(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    Pointer::ProcessPointerEnterLeave(result, args);
}

// internal static bool RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data)
void Pointer__RaiseMoved_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaiseMoved(root, data);
}

// internal static bool RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data)
void Pointer__RaisePressed_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaisePressed(root, data);
}

// internal static bool RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data)
void Pointer__RaiseReleased_fn(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data, bool* __retval)
{
    *__retval = Pointer::RaiseReleased(root, data);
}

// public static void ReleaseCapture(object identity)
void Pointer__ReleaseCapture_fn(uObject* identity)
{
    Pointer::ReleaseCapture(identity);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released()
void Pointer__get_Released_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::Released();
}

// private static Fuse.Visual RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Visual root)
void Pointer__RoutePointerEvent_fn(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RoutePointerEvent(plainEvent, root);
}

// private static Fuse.Visual RouteToHit(Fuse.Input.PointerEventData args, Fuse.Visual root)
void Pointer__RouteToHit_fn(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root, ::g::Fuse::Visual** __retval)
{
    *__retval = Pointer::RouteToHit(args, root);
}

// public static Fuse.VisualEvent<Fuse.Input.PointerWheelMovedHandler, Fuse.Input.PointerWheelMovedArgs> get_WheelMoved()
void Pointer__get_WheelMoved_fn(::g::Fuse::VisualEvent** __retval)
{
    *__retval = Pointer::WheelMoved();
}

uSStrong< ::g::Fuse::Input::PointerPressed*> Pointer::_pressed_;
uSStrong< ::g::Fuse::Input::PointerMoved*> Pointer::_moved_;
uSStrong< ::g::Fuse::Input::PointerReleased*> Pointer::_released_;
uSStrong< ::g::Fuse::Input::PointerEntered*> Pointer::_entered_;
uSStrong< ::g::Fuse::Input::PointerLeft*> Pointer::_left_;
uSStrong< ::g::Fuse::Input::PointerWheelMoved*> Pointer::_wheelMoved_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_pointersDown_;
uSStrong< ::g::Uno::Collections::List*> Pointer::_captures_;
uSStrong<Pointer__CaptureLockImpl*> Pointer::_captureLockImpl_;
uSStrong< ::g::Uno::Collections::Dictionary*> Pointer::_lastHitVisuals_;
::g::Uno::Float2 Pointer::_Coord_;
uSStrong<uObject*> Pointer::_EventResponder_;

// private static Fuse.Input.Pointer.CaptureLockImpl CaptureLock() [static]
Pointer__CaptureLockImpl* Pointer::CaptureLock()
{
    Pointer_typeof()->Init();
    uPtr(Pointer::_captureLockImpl_)->Count++;
    return Pointer::_captureLockImpl_;
}

// private static void CheckFocus(Fuse.Input.PointerPressedArgs args, Uno.Collections.IList<Fuse.Visual> nodes) [static]
void Pointer::CheckFocus(::g::Fuse::Input::PointerPressedArgs* args, uObject* nodes)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* ret4;

    if (uPtr(args)->IsHandled())
        return;

    bool b = false;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(nodes), ::g::Uno::Collections::ICollection_typeof()->MakeType(::TYPES[2/*Fuse.Visual*/], nullptr))); ++i)
        if (::g::Fuse::Input::Focus::HandlesFocusEvent((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(nodes), ::g::Uno::Collections::IList_typeof()->MakeType(::TYPES[2/*Fuse.Visual*/], nullptr)), uCRef<int32_t>(i), &ret4), ret4)))
        {
            b = true;
            break;
        }

    if (!b)
        ::g::Fuse::Input::Focus::Release();
}

// public static bool ExtendCapture(object identity, int pointIndex) [static]
bool Pointer::ExtendCapture(uObject* identity, int32_t pointIndex)
{
    Pointer_typeof()->Init();
    bool ret5;
    ::g::Fuse::Input::Capture* c = Pointer::GetCapture(identity);

    if (c == nullptr)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Attempting to extend unknown capture"), identity, ::STRINGS[2/*"/Users/mort...*/], 521, uString::Const("ExtendCapture"));
        return false;
    }

    if (!Pointer::IsCaptureAllowed(uPtr(c)->Type, uPtr(c)->Visual(), pointIndex, uPtr(c)->Identity()))
        return false;

    if (!(::g::Uno::Collections::List__Contains_fn(uPtr(uPtr(c)->PointIndex), uCRef<int32_t>(pointIndex), &ret5), ret5))
        ::g::Uno::Collections::List__Add_fn(uPtr(uPtr(c)->PointIndex), uCRef<int32_t>(pointIndex));

    Pointer::LoseSoftCapturesTo(c);
    return true;
}

// internal static Fuse.Input.Capture GetCapture(object identity) [static]
::g::Fuse::Input::Capture* Pointer::GetCapture(uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret6;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        try
        {
            {
                for (int32_t i = 0; i < uPtr(Pointer::_captures_)->Count(); ++i)
                {
                    ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures_), uCRef<int32_t>(i), &ret6), ret6);

                    if (uPtr(c)->Deleted)
                        continue;

                    if (uPtr(c)->Identity() != identity)
                        continue;

                    ::g::Fuse::Input::Capture* __uno_retval = c;
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
                    return __uno_retval;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }

    return nullptr;
}

// private static Uno.Collections.List<Fuse.Input.Pointer.PELHolder> GetLastHitList(int pointIndex) [static]
::g::Uno::Collections::List* Pointer::GetLastHitList(int32_t pointIndex)
{
    Pointer_typeof()->Init();
    bool ret8;
    ::g::Uno::Collections::List* lastHitList = nullptr;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(Pointer::_lastHitVisuals_), uCRef<int32_t>(pointIndex), (void**)(&lastHitList), &ret8), ret8))
    {
        lastHitList = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(Pointer__PELHolder_typeof(), nullptr));
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(Pointer::_lastHitVisuals_), uCRef<int32_t>(pointIndex), lastHitList);
    }

    return lastHitList;
}

// internal static Fuse.Input.Capture GetPrimaryCapture(int pointIndex) [static]
::g::Fuse::Input::Capture* Pointer::GetPrimaryCapture(int32_t pointIndex)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret9;
    ::g::Fuse::Input::Capture* best = nullptr;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        try
        {
            {
                for (int32_t i = 0; i < uPtr(Pointer::_captures_)->Count(); ++i)
                {
                    ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures_), uCRef<int32_t>(i), &ret9), ret9);

                    if (uPtr(c)->Deleted)
                        continue;

                    if (!uPtr(c)->AcceptsPoint(pointIndex))
                        continue;

                    if (!uPtr(c)->IsSuitable())
                    {
                        uPtr(uPtr(c)->LostCallback)->InvokeVoid();
                        uPtr(cl)->Delete(c);
                        continue;
                    }

                    int32_t str = (best == nullptr) ? 1 : uPtr(c)->CompareStrength(best);

                    if ((str > 0) || ((str == 0) && (c->VisualDepth > uPtr(best)->VisualDepth)))
                        best = c;
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
        }
        __after_finally_2:;
    }

    return best;
}

// private static bool IsCaptureAllowed(Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity) [static]
bool Pointer::IsCaptureAllowed(int32_t type, ::g::Fuse::Visual* visual, int32_t pointIndex, uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret10;

    for (int32_t i = 0; i < uPtr(Pointer::_captures_)->Count(); ++i)
    {
        ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures_), uCRef<int32_t>(i), &ret10), ret10);

        if (uPtr(c)->Deleted)
            continue;

        if (!Pointer::IsCaptureAllowedAgainst(c, type, visual, pointIndex, identity))
            return false;
    }

    return true;
}

// private static bool IsCaptureAllowedAgainst(Fuse.Input.Capture current, Fuse.Input.CaptureType type, Fuse.Visual visual, int pointIndex, object identity) [static]
bool Pointer::IsCaptureAllowedAgainst(::g::Fuse::Input::Capture* current, int32_t type, ::g::Fuse::Visual* visual, int32_t pointIndex, uObject* identity)
{
    Pointer_typeof()->Init();

    if (uPtr(current)->Identity() == identity)
        return true;

    if (!uPtr(current)->AcceptsPoint(pointIndex))
        return true;

    if ((uPtr(current)->Type & 2) == 2)
        return ((visual == uPtr(current)->Visual()) && ((uPtr(current)->Type & 8) == 8)) && ((type & 8) == 8);

    return true;
}

// public static bool IsPressed(int pointIndex) [static]
bool Pointer::IsPressed1(int32_t pointIndex)
{
    Pointer_typeof()->Init();
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong<Pointer__PointerRecord*> > ret11;
    ::g::Uno::Collections::Dictionary__Enumerator<int32_t, uStrong<Pointer__PointerRecord*> > enum2 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(Pointer::_pointersDown_), &ret11), ret11);

    {
        try
        {
            {
                while (enum2.MoveNext(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr)))
                {
                    ::g::Uno::Collections::KeyValuePair<int32_t, uStrong<Pointer__PointerRecord*> > p = enum2.Current(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr));

                    if (p.Key(::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr)) == pointIndex)
                    {
                        bool __uno_retval = true;
                        enum2.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr));
                        return __uno_retval;
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum2.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr));
            }
                        throw __t;
            goto __after_finally_3;
        }

        {
            enum2.Dispose(::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Uno::Int_typeof(), Pointer__PointerRecord_typeof(), nullptr));
        }
        __after_finally_3:;
    }

    return false;
}

// private static void LoseSoftCapturesTo(Fuse.Input.Capture to) [static]
void Pointer::LoseSoftCapturesTo(::g::Fuse::Input::Capture* to)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret13;
    int32_t ret14;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        try
        {
            {
                for (int32_t i = 0; i < uPtr(Pointer::_captures_)->Count(); ++i)
                {
                    ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures_), uCRef<int32_t>(i), &ret13), ret13);

                    if (uPtr(c)->Deleted)
                        continue;

                    for (int32_t p = 0; p < uPtr(uPtr(c)->PointIndex)->Count(); ++p)
                        if (!Pointer::IsCaptureAllowedAgainst(to, uPtr(c)->Type, uPtr(c)->Visual(), (::g::Uno::Collections::List__get_Item_fn(uPtr(uPtr(c)->PointIndex), uCRef<int32_t>(p), &ret14), ret14), uPtr(c)->Identity()))
                        {
                            uPtr(uPtr(c)->LostCallback)->InvokeVoid();
                            uPtr(cl)->Delete(c);
                            break;
                        }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_4;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
        }
        __after_finally_4:;
    }
}

// private static void MarkAncestorHits(Fuse.Visual hitObject, Uno.Collections.List<Fuse.Input.Pointer.PELHolder> list) [static]
void Pointer::MarkAncestorHits(::g::Fuse::Visual* hitObject, ::g::Uno::Collections::List* list)
{
    Pointer_typeof()->Init();
    Pointer__PELHolder* collection3;
    Pointer__PELHolder* ret15;
    Pointer__PELHolder* ret16;
    Pointer__PELHolder* ret17;

    for (int32_t i = 0; i < uPtr(list)->Count(); ++i)
        uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int32_t>(i), &ret15), ret15))->Status = 1;

    while (hitObject != nullptr)
    {
        bool found = false;

        for (int32_t i1 = 0; i1 < uPtr(list)->Count(); ++i1)
            if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int32_t>(i1), &ret16), ret16))->Visual == hitObject)
            {
                uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(list), uCRef<int32_t>(i1), &ret17), ret17))->Status = 2;
                found = true;
                break;
            }

        if (!found)
            ::g::Uno::Collections::List__Add_fn(uPtr(list), (collection3 = Pointer__PELHolder::New1(), uPtr(collection3)->Visual = hitObject, uPtr(collection3)->Status = 0, collection3));

        hitObject = uPtr(hitObject)->Parent();
    }
}

// public static bool ModifyCapture(object identity, Fuse.Input.CaptureType type) [static]
bool Pointer::ModifyCapture(uObject* identity, int32_t type)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* c = Pointer::GetCapture(identity);

    if (c == nullptr)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Attempting to modify an unknown capture"), identity, ::STRINGS[2/*"/Users/mort...*/], 499, uString::Const("ModifyCapture"));
        return false;
    }

    uPtr(c)->Type = type;
    Pointer::LoseSoftCapturesTo(c);
    return true;
}

// public static bool ModifyCapture(object identity, Fuse.Visual visual, Uno.Action lostCallback, Fuse.Input.CaptureType type, int pointIndex) [static]
bool Pointer::ModifyCapture1(uObject* identity, ::g::Fuse::Visual* visual, uDelegate* lostCallback, int32_t type, int32_t pointIndex)
{
    Pointer_typeof()->Init();

    if (::g::Uno::Delegate::op_Equality(lostCallback, nullptr))
        U_THROW(::g::Uno::Exception::New2(uString::Const("Capture requires lostCallback Action")));

    if (identity == nullptr)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Capture requires identity object")));

    if (visual == nullptr)
        U_THROW(::g::Uno::Exception::New2(uString::Const("Capture requires visual")));

    if (!uPtr(visual)->IsContextEnabled() || !uPtr(visual)->IsRootingCompleted())
        return false;

    if (!Pointer::IsCaptureAllowed(type, visual, pointIndex, identity))
        return false;

    ::g::Fuse::Input::Capture* c = Pointer::GetCapture(identity);

    if (c != nullptr)
    {
        if (uPtr(c)->Visual() != visual)
            ::g::Fuse::Diagnostics::InternalError(uString::Const("Cannot modify the Visual of a capture"), identity, ::STRINGS[2/*"/Users/mort...*/], 473, uString::Const("ModifyCapture"));
    }
    else
    {
        c = ::g::Fuse::Input::Capture::New1(visual, identity);
        ::g::Uno::Collections::List__Add_fn(uPtr(Pointer::_captures_), c);
    }

    uPtr(c)->Type = type;
    c->LostCallback = lostCallback;
    uPtr(c->PointIndex)->Clear();
    ::g::Uno::Collections::List__Add_fn(uPtr(c->PointIndex), uCRef<int32_t>(pointIndex));
    Pointer::LoseSoftCapturesTo(c);
    return true;
}

// private static void ProcessPointerEnterLeave(Fuse.HitTestResult result, Fuse.Input.PointerEventData args) [static]
void Pointer::ProcessPointerEnterLeave(::g::Fuse::HitTestResult* result, ::g::Fuse::Input::PointerEventData* args)
{
    Pointer_typeof()->Init();
    Pointer__PELHolder* ret18;
    Pointer__PELHolder* ret19;
    Pointer__PELHolder* ret20;
    Pointer__PELHolder* ret21;
    ::g::Uno::Collections::List* lastHitList = Pointer::GetLastHitList(uPtr(args)->PointIndex);
    Pointer::MarkAncestorHits((result == nullptr) ? uCast< ::g::Fuse::Visual*>(nullptr, ::TYPES[2/*Fuse.Visual*/]) : (::g::Fuse::Visual*)uPtr(result)->HitObject(), lastHitList);

    for (int32_t j = uPtr(lastHitList)->Count() - 1; j >= 0; j--)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int32_t>(j), &ret18), ret18))->Status != 1)
            continue;

        uPtr(Pointer::Left())->RaiseWithoutBubble(::g::Fuse::Input::PointerLeftArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int32_t>(j), &ret19), ret19))->Visual), 2);
        lastHitList->RemoveAt(j);
    }

    for (int32_t j1 = 0; j1 < lastHitList->Count(); ++j1)
    {
        if (uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int32_t>(j1), &ret20), ret20))->Status != 0)
            continue;

        uPtr(Pointer::Entered())->RaiseWithoutBubble(::g::Fuse::Input::PointerEnteredArgs::New3(args, uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(lastHitList), uCRef<int32_t>(j1), &ret21), ret21))->Visual), 1);
    }
}

// internal static bool RaiseMoved(Fuse.Visual root, Fuse.Input.PointerEventData data) [static]
bool Pointer::RaiseMoved(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerMovedArgs* e = ::g::Fuse::Input::PointerMovedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerMoved(uInterface(uPtr(Pointer::EventResponder()), ::g::Fuse::Input::IPointerEventResponder_typeof()), e);
    return e->IsHandled();
}

// internal static bool RaisePressed(Fuse.Visual root, Fuse.Input.PointerEventData data) [static]
bool Pointer::RaisePressed(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerPressedArgs* e = ::g::Fuse::Input::PointerPressedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerPressed(uInterface(uPtr(Pointer::EventResponder()), ::g::Fuse::Input::IPointerEventResponder_typeof()), e);
    return e->IsHandled();
}

// internal static bool RaiseReleased(Fuse.Visual root, Fuse.Input.PointerEventData data) [static]
bool Pointer::RaiseReleased(::g::Fuse::Visual* root, ::g::Fuse::Input::PointerEventData* data)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = Pointer::RoutePointerEvent(data, root);
    ::g::Fuse::Input::PointerReleasedArgs* e = ::g::Fuse::Input::PointerReleasedArgs::New3(data, target);
    ::g::Fuse::Input::IPointerEventResponder::OnPointerReleased(uInterface(uPtr(Pointer::EventResponder()), ::g::Fuse::Input::IPointerEventResponder_typeof()), e);

    if (uPtr(data)->PointerType == 2)
        Pointer::ProcessPointerEnterLeave(nullptr, data);

    return e->IsHandled();
}

// public static void ReleaseCapture(object identity) [static]
void Pointer::ReleaseCapture(uObject* identity)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Input::Capture* ret22;
    Pointer__CaptureLockImpl* cl = Pointer::CaptureLock();

    {
        try
        {
            {
                for (int32_t i = uPtr(Pointer::_captures_)->Count() - 1; i >= 0; --i)
                {
                    ::g::Fuse::Input::Capture* c = (::g::Uno::Collections::List__get_Item_fn(uPtr(Pointer::_captures_), uCRef<int32_t>(i), &ret22), ret22);

                    if (uPtr(c)->Deleted)
                        continue;

                    if (uPtr(c)->Identity() == identity)
                        uPtr(cl)->Delete(c);
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_5;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr((uObject*)cl), ::TYPES[7/*Uno.IDisposable*/]));
        }
        __after_finally_5:;
    }
}

// private static Fuse.Visual RoutePointerEvent(Fuse.Input.PointerEventData plainEvent, Fuse.Visual root) [static]
::g::Fuse::Visual* Pointer::RoutePointerEvent(::g::Fuse::Input::PointerEventData* plainEvent, ::g::Fuse::Visual* root)
{
    Pointer_typeof()->Init();
    ::g::Fuse::Visual* target = root;
    bool toHit = true;
    ::g::Fuse::Input::Capture* c = Pointer::GetPrimaryCapture(uPtr(plainEvent)->PointIndex);

    if (c != nullptr)
    {
        target = uPtr(c)->Visual();
        toHit = (c->Type & 4) == 4;
    }

    if (toHit)
    {
        ::g::Fuse::Visual* n = Pointer::RouteToHit(plainEvent, target);

        if (n != nullptr)
            target = n;
    }

    return target;
}

// private static Fuse.Visual RouteToHit(Fuse.Input.PointerEventData args, Fuse.Visual root) [static]
::g::Fuse::Visual* Pointer::RouteToHit(::g::Fuse::Input::PointerEventData* args, ::g::Fuse::Visual* root)
{
    Pointer_typeof()->Init();
    ::g::Fuse::HitTestResult* result = ::g::Fuse::Input::HitTestHelpers::HitTestNearest(root, uPtr(args)->WindowPoint);

    while ((result != nullptr) && !uPtr(uPtr(result)->HitObject())->IsContextEnabled())
        uPtr(result)->HitObject(uPtr(uPtr(result)->HitObject())->Parent());

    Pointer::ProcessPointerEnterLeave(result, args);

    if (result == nullptr)
        return nullptr;

    return uPtr(result)->HitObject();
}

// public static generated float2 get_Coord() [static]
::g::Uno::Float2 Pointer::Coord()
{
    Pointer_typeof()->Init();
    return Pointer::_Coord_;
}

// private static generated void set_Coord(float2 value) [static]
void Pointer::Coord(::g::Uno::Float2 value)
{
    Pointer_typeof()->Init();
    Pointer::_Coord_ = value;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerEnteredHandler, Fuse.Input.PointerEnteredArgs> get_Entered() [static]
::g::Fuse::VisualEvent* Pointer::Entered()
{
    Pointer_typeof()->Init();
    return Pointer::_entered_;
}

// public static generated Fuse.Input.IPointerEventResponder get_EventResponder() [static]
uObject* Pointer::EventResponder()
{
    Pointer_typeof()->Init();
    return Pointer::_EventResponder_;
}

// public static generated void set_EventResponder(Fuse.Input.IPointerEventResponder value) [static]
void Pointer::EventResponder(uObject* value)
{
    Pointer_typeof()->Init();
    Pointer::_EventResponder_ = value;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerLeftHandler, Fuse.Input.PointerLeftArgs> get_Left() [static]
::g::Fuse::VisualEvent* Pointer::Left()
{
    Pointer_typeof()->Init();
    return Pointer::_left_;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerMovedHandler, Fuse.Input.PointerMovedArgs> get_Moved() [static]
::g::Fuse::VisualEvent* Pointer::Moved()
{
    Pointer_typeof()->Init();
    return Pointer::_moved_;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerPressedHandler, Fuse.Input.PointerPressedArgs> get_Pressed() [static]
::g::Fuse::VisualEvent* Pointer::Pressed()
{
    Pointer_typeof()->Init();
    return Pointer::_pressed_;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerReleasedHandler, Fuse.Input.PointerReleasedArgs> get_Released() [static]
::g::Fuse::VisualEvent* Pointer::Released()
{
    Pointer_typeof()->Init();
    return Pointer::_released_;
}

// public static Fuse.VisualEvent<Fuse.Input.PointerWheelMovedHandler, Fuse.Input.PointerWheelMovedArgs> get_WheelMoved() [static]
::g::Fuse::VisualEvent* Pointer::WheelMoved()
{
    Pointer_typeof()->Init();
    return Pointer::_wheelMoved_;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// internal sealed class PointerEntered
// {
static void PointerEntered_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerEnteredHandler_typeof(), ::g::Fuse::Input::PointerEnteredArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerEntered_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerEntered);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerEntered", options);
    type->fp_build_ = PointerEntered_build;
    type->fp_ctor_ = (void*)PointerEntered__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerEntered__Invoke_fn;
    return type;
}

// public generated PointerEntered()
void PointerEntered__ctor_1_fn(PointerEntered* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerEnteredHandler handler, object sender, Fuse.Input.PointerEnteredArgs args)
void PointerEntered__Invoke_fn(PointerEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerEnteredArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerEntered New()
void PointerEntered__New1_fn(PointerEntered** __retval)
{
    *__retval = PointerEntered::New1();
}

// public generated PointerEntered() [instance]
void PointerEntered::ctor_1()
{
    ctor_();
}

// public generated PointerEntered New() [static]
PointerEntered* PointerEntered::New1()
{
    PointerEntered* obj1 = (PointerEntered*)uNew(PointerEntered_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public sealed class PointerEnteredArgs
// {
static void PointerEnteredArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerEnteredArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerEnteredArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerEnteredArgs", options);
    type->fp_build_ = PointerEnteredArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerEnteredArgs__ctor_3_fn(PointerEnteredArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerEnteredArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerEnteredArgs** __retval)
{
    *__retval = PointerEnteredArgs::New3(data, visual);
}

// public PointerEnteredArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance]
void PointerEnteredArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerEnteredArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static]
PointerEnteredArgs* PointerEnteredArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerEnteredArgs* obj1 = (PointerEnteredArgs*)uNew(PointerEnteredArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public delegate void PointerEnteredHandler(object sender, Fuse.Input.PointerEnteredArgs args)
uDelegateType* PointerEnteredHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.PointerEnteredHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerEnteredArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEventArgs.uno
// -----------------------------------------------------------------------------

// public abstract class PointerEventArgs
// {
static void PointerEventArgs_build(uType* type)
{
    ::STRINGS[12] = uString::Const("x");
    ::STRINGS[13] = uString::Const("y");
    ::STRINGS[14] = uString::Const("index");
    ::STRINGS[15] = uString::Const("localX");
    ::STRINGS[16] = uString::Const("localY");
    ::TYPES[13] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetDependencies(
        ::g::Fuse::Input::Pointer_typeof());
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Fuse::Input::PointerEventData_typeof(), offsetof(PointerEventArgs, _data), 0);
}

::g::Fuse::VisualEventArgs_type* PointerEventArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(PointerEventArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerEventArgs", options);
    type->fp_build_ = PointerEventArgs_build;
    type->fp_Serialize = (void(*)(::g::Fuse::VisualEventArgs*, uObject*))PointerEventArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerEventArgs__ctor_2_fn(PointerEventArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_2(data, visual);
}

// public bool get_IsPrimary()
void PointerEventArgs__get_IsPrimary_fn(PointerEventArgs* __this, bool* __retval)
{
    *__retval = __this->IsPrimary();
}

// public int get_PointIndex()
void PointerEventArgs__get_PointIndex_fn(PointerEventArgs* __this, int32_t* __retval)
{
    *__retval = __this->PointIndex();
}

// private override sealed void Serialize(Fuse.Scripting.IEventSerializer s)
void PointerEventArgs__Serialize_fn(PointerEventArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(uPtr(s), ::TYPES[13/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[12/*"x"*/], (double)__this->WindowPoint().X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[13/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[13/*"y"*/], (double)__this->WindowPoint().Y);
    ::g::Fuse::Scripting::IEventSerializer::AddInt(uInterface(s, ::TYPES[13/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[14/*"index"*/], __this->PointIndex());
    ::g::Uno::Float2 localPoint = uPtr(__this->Visual())->WindowToLocal(__this->WindowPoint());
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[13/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[15/*"localX"*/], (double)localPoint.X);
    ::g::Fuse::Scripting::IEventSerializer::AddDouble(uInterface(s, ::TYPES[13/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[16/*"localY"*/], (double)localPoint.Y);
}

// public double get_Timestamp()
void PointerEventArgs__get_Timestamp_fn(PointerEventArgs* __this, double* __retval)
{
    *__retval = __this->Timestamp();
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual])
void PointerEventArgs__TryHardCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval)
{
    *__retval = __this->TryHardCapture(identity, lostCallback, captureVisual);
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual])
void PointerEventArgs__TrySoftCapture_fn(PointerEventArgs* __this, uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual, bool* __retval)
{
    *__retval = __this->TrySoftCapture(identity, lostCallback, captureVisual);
}

// public float2 get_WheelDelta()
void PointerEventArgs__get_WheelDelta_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WheelDelta();
}

// public float2 get_WindowPoint()
void PointerEventArgs__get_WindowPoint_fn(PointerEventArgs* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->WindowPoint();
}

// protected internal PointerEventArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance]
void PointerEventArgs::ctor_2(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_1(visual);
    _data = data;
}

// public bool get_IsPrimary() [instance]
bool PointerEventArgs::IsPrimary()
{
    return uPtr(_data)->IsPrimary;
}

// public int get_PointIndex() [instance]
int32_t PointerEventArgs::PointIndex()
{
    return uPtr(_data)->PointIndex;
}

// public double get_Timestamp() [instance]
double PointerEventArgs::Timestamp()
{
    return uPtr(_data)->Timestamp;
}

// public bool TryHardCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) [instance]
bool PointerEventArgs::TryHardCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual)
{
    return ::g::Fuse::Input::Pointer::ModifyCapture1(identity, (captureVisual != nullptr) ? captureVisual : (::g::Fuse::Visual*)Visual(), lostCallback, 2, PointIndex());
}

// public bool TrySoftCapture(object identity, Uno.Action lostCallback, [Fuse.Visual captureVisual]) [instance]
bool PointerEventArgs::TrySoftCapture(uObject* identity, uDelegate* lostCallback, ::g::Fuse::Visual* captureVisual)
{
    return ::g::Fuse::Input::Pointer::ModifyCapture1(identity, (captureVisual != nullptr) ? captureVisual : (::g::Fuse::Visual*)Visual(), lostCallback, 1, PointIndex());
}

// public float2 get_WheelDelta() [instance]
::g::Uno::Float2 PointerEventArgs::WheelDelta()
{
    return uPtr(_data)->WheelDelta;
}

// public float2 get_WindowPoint() [instance]
::g::Uno::Float2 PointerEventArgs::WindowPoint()
{
    return uPtr(_data)->WindowPoint;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEventArgs.uno
// -----------------------------------------------------------------------------

// public sealed class PointerEventData
// {
static void PointerEventData_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(PointerEventData, PointIndex), 0,
        ::g::Uno::Float2_typeof(), offsetof(PointerEventData, WindowPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(PointerEventData, WheelDelta), 0,
        ::g::Uno::Bool_typeof(), offsetof(PointerEventData, IsPrimary), 0,
        ::g::Uno::Platform::PointerType_typeof(), offsetof(PointerEventData, PointerType), 0,
        ::g::Uno::Double_typeof(), offsetof(PointerEventData, Timestamp), 0);
}

uType* PointerEventData_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 6;
    options.ObjectSize = sizeof(PointerEventData);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.PointerEventData", options);
    type->fp_build_ = PointerEventData_build;
    type->fp_ctor_ = (void*)PointerEventData__New1_fn;
    return type;
}

// public generated PointerEventData()
void PointerEventData__ctor__fn(PointerEventData* __this)
{
    __this->ctor_();
}

// public generated PointerEventData New()
void PointerEventData__New1_fn(PointerEventData** __retval)
{
    *__retval = PointerEventData::New1();
}

// public generated PointerEventData() [instance]
void PointerEventData::ctor_()
{
}

// public generated PointerEventData New() [static]
PointerEventData* PointerEventData::New1()
{
    PointerEventData* obj1 = (PointerEventData*)uNew(PointerEventData_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// internal sealed class PointerLeft
// {
static void PointerLeft_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerLeftHandler_typeof(), ::g::Fuse::Input::PointerLeftArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerLeft_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerLeft);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerLeft", options);
    type->fp_build_ = PointerLeft_build;
    type->fp_ctor_ = (void*)PointerLeft__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerLeft__Invoke_fn;
    return type;
}

// public generated PointerLeft()
void PointerLeft__ctor_1_fn(PointerLeft* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerLeftHandler handler, object sender, Fuse.Input.PointerLeftArgs args)
void PointerLeft__Invoke_fn(PointerLeft* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerLeftArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerLeft New()
void PointerLeft__New1_fn(PointerLeft** __retval)
{
    *__retval = PointerLeft::New1();
}

// public generated PointerLeft() [instance]
void PointerLeft::ctor_1()
{
    ctor_();
}

// public generated PointerLeft New() [static]
PointerLeft* PointerLeft::New1()
{
    PointerLeft* obj1 = (PointerLeft*)uNew(PointerLeft_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public sealed class PointerLeftArgs
// {
static void PointerLeftArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerLeftArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerLeftArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerLeftArgs", options);
    type->fp_build_ = PointerLeftArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerLeftArgs__ctor_3_fn(PointerLeftArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerLeftArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerLeftArgs** __retval)
{
    *__retval = PointerLeftArgs::New3(data, visual);
}

// public PointerLeftArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance]
void PointerLeftArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerLeftArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static]
PointerLeftArgs* PointerLeftArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerLeftArgs* obj1 = (PointerLeftArgs*)uNew(PointerLeftArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public delegate void PointerLeftHandler(object sender, Fuse.Input.PointerLeftArgs args)
uDelegateType* PointerLeftHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.PointerLeftHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerLeftArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// internal sealed class PointerMoved
// {
static void PointerMoved_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerMovedHandler_typeof(), ::g::Fuse::Input::PointerMovedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerMoved_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerMoved);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerMoved", options);
    type->fp_build_ = PointerMoved_build;
    type->fp_ctor_ = (void*)PointerMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerMoved__Invoke_fn;
    return type;
}

// public generated PointerMoved()
void PointerMoved__ctor_1_fn(PointerMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerMovedHandler handler, object sender, Fuse.Input.PointerMovedArgs args)
void PointerMoved__Invoke_fn(PointerMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerMovedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerMoved New()
void PointerMoved__New1_fn(PointerMoved** __retval)
{
    *__retval = PointerMoved::New1();
}

// public generated PointerMoved() [instance]
void PointerMoved::ctor_1()
{
    ctor_();
}

// public generated PointerMoved New() [static]
PointerMoved* PointerMoved::New1()
{
    PointerMoved* obj1 = (PointerMoved*)uNew(PointerMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public sealed class PointerMovedArgs
// {
static void PointerMovedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerMovedArgs", options);
    type->fp_build_ = PointerMovedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerMovedArgs__ctor_3_fn(PointerMovedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerMovedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerMovedArgs** __retval)
{
    *__retval = PointerMovedArgs::New3(data, visual);
}

// public PointerMovedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance]
void PointerMovedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerMovedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static]
PointerMovedArgs* PointerMovedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerMovedArgs* obj1 = (PointerMovedArgs*)uNew(PointerMovedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public delegate void PointerMovedHandler(object sender, Fuse.Input.PointerMovedArgs args)
uDelegateType* PointerMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.PointerMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerMovedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// internal sealed class PointerPressed
// {
static void PointerPressed_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerPressedHandler_typeof(), ::g::Fuse::Input::PointerPressedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerPressed_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerPressed);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerPressed", options);
    type->fp_build_ = PointerPressed_build;
    type->fp_ctor_ = (void*)PointerPressed__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerPressed__Invoke_fn;
    return type;
}

// public generated PointerPressed()
void PointerPressed__ctor_1_fn(PointerPressed* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerPressedHandler handler, object sender, Fuse.Input.PointerPressedArgs args)
void PointerPressed__Invoke_fn(PointerPressed* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerPressedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerPressed New()
void PointerPressed__New1_fn(PointerPressed** __retval)
{
    *__retval = PointerPressed::New1();
}

// public generated PointerPressed() [instance]
void PointerPressed::ctor_1()
{
    ctor_();
}

// public generated PointerPressed New() [static]
PointerPressed* PointerPressed::New1()
{
    PointerPressed* obj1 = (PointerPressed*)uNew(PointerPressed_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public sealed class PointerPressedArgs
// {
static void PointerPressedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerPressedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerPressedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerPressedArgs", options);
    type->fp_build_ = PointerPressedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerPressedArgs__ctor_3_fn(PointerPressedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerPressedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerPressedArgs** __retval)
{
    *__retval = PointerPressedArgs::New3(data, visual);
}

// public PointerPressedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance]
void PointerPressedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerPressedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static]
PointerPressedArgs* PointerPressedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerPressedArgs* obj1 = (PointerPressedArgs*)uNew(PointerPressedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public delegate void PointerPressedHandler(object sender, Fuse.Input.PointerPressedArgs args)
uDelegateType* PointerPressedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.PointerPressedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerPressedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Pointer.uno
// --------------------------------------------------------------------

// private sealed class Pointer.PointerRecord
// {
static void Pointer__PointerRecord_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(Pointer__PointerRecord, WindowPoint), 0,
        ::g::Uno::Bool_typeof(), offsetof(Pointer__PointerRecord, WasHandled), 0,
        ::g::Uno::Float_typeof(), offsetof(Pointer__PointerRecord, DistanceMoved), 0,
        ::g::Uno::Double_typeof(), offsetof(Pointer__PointerRecord, TimeAppeared), 0);
}

uType* Pointer__PointerRecord_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.ObjectSize = sizeof(Pointer__PointerRecord);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.Pointer.PointerRecord", options);
    type->fp_build_ = Pointer__PointerRecord_build;
    type->fp_ctor_ = (void*)Pointer__PointerRecord__New1_fn;
    return type;
}

// public generated PointerRecord()
void Pointer__PointerRecord__ctor__fn(Pointer__PointerRecord* __this)
{
    __this->ctor_();
}

// public generated PointerRecord New()
void Pointer__PointerRecord__New1_fn(Pointer__PointerRecord** __retval)
{
    *__retval = Pointer__PointerRecord::New1();
}

// public generated PointerRecord() [instance]
void Pointer__PointerRecord::ctor_()
{
    TimeAppeared = ::g::Uno::Diagnostics::Clock::GetSeconds();
}

// public generated PointerRecord New() [static]
Pointer__PointerRecord* Pointer__PointerRecord::New1()
{
    Pointer__PointerRecord* obj1 = (Pointer__PointerRecord*)uNew(Pointer__PointerRecord_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// internal sealed class PointerReleased
// {
static void PointerReleased_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerReleasedHandler_typeof(), ::g::Fuse::Input::PointerReleasedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerReleased_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerReleased);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerReleased", options);
    type->fp_build_ = PointerReleased_build;
    type->fp_ctor_ = (void*)PointerReleased__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerReleased__Invoke_fn;
    return type;
}

// public generated PointerReleased()
void PointerReleased__ctor_1_fn(PointerReleased* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerReleasedHandler handler, object sender, Fuse.Input.PointerReleasedArgs args)
void PointerReleased__Invoke_fn(PointerReleased* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerReleasedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerReleased New()
void PointerReleased__New1_fn(PointerReleased** __retval)
{
    *__retval = PointerReleased::New1();
}

// public generated PointerReleased() [instance]
void PointerReleased::ctor_1()
{
    ctor_();
}

// public generated PointerReleased New() [static]
PointerReleased* PointerReleased::New1()
{
    PointerReleased* obj1 = (PointerReleased*)uNew(PointerReleased_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public sealed class PointerReleasedArgs
// {
static void PointerReleasedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerReleasedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerReleasedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerReleasedArgs", options);
    type->fp_build_ = PointerReleasedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerReleasedArgs__ctor_3_fn(PointerReleasedArgs* __this, ::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    __this->ctor_3(data, visual);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual)
void PointerReleasedArgs__New3_fn(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual, PointerReleasedArgs** __retval)
{
    *__retval = PointerReleasedArgs::New3(data, visual);
}

// public PointerReleasedArgs(Fuse.Input.PointerEventData data, Fuse.Visual visual) [instance]
void PointerReleasedArgs::ctor_3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    ctor_2(data, visual);
}

// public PointerReleasedArgs New(Fuse.Input.PointerEventData data, Fuse.Visual visual) [static]
PointerReleasedArgs* PointerReleasedArgs::New3(::g::Fuse::Input::PointerEventData* data, ::g::Fuse::Visual* visual)
{
    PointerReleasedArgs* obj1 = (PointerReleasedArgs*)uNew(PointerReleasedArgs_typeof());
    obj1->ctor_3(data, visual);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public delegate void PointerReleasedHandler(object sender, Fuse.Input.PointerReleasedArgs args)
uDelegateType* PointerReleasedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.PointerReleasedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerReleasedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// internal sealed class PointerWheelMoved
// {
static void PointerWheelMoved_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::PointerWheelMovedHandler_typeof(), ::g::Fuse::Input::PointerWheelMovedArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* PointerWheelMoved_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(PointerWheelMoved);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.PointerWheelMoved", options);
    type->fp_build_ = PointerWheelMoved_build;
    type->fp_ctor_ = (void*)PointerWheelMoved__New1_fn;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))PointerWheelMoved__Invoke_fn;
    return type;
}

// public generated PointerWheelMoved()
void PointerWheelMoved__ctor_1_fn(PointerWheelMoved* __this)
{
    __this->ctor_1();
}

// protected override sealed void Invoke(Fuse.Input.PointerWheelMovedHandler handler, object sender, Fuse.Input.PointerWheelMovedArgs args)
void PointerWheelMoved__Invoke_fn(PointerWheelMoved* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::PointerWheelMovedArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}

// public generated PointerWheelMoved New()
void PointerWheelMoved__New1_fn(PointerWheelMoved** __retval)
{
    *__retval = PointerWheelMoved::New1();
}

// public generated PointerWheelMoved() [instance]
void PointerWheelMoved::ctor_1()
{
    ctor_();
}

// public generated PointerWheelMoved New() [static]
PointerWheelMoved* PointerWheelMoved::New1()
{
    PointerWheelMoved* obj1 = (PointerWheelMoved*)uNew(PointerWheelMoved_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public sealed class PointerWheelMovedArgs
// {
static void PointerWheelMovedArgs_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(3);
}

::g::Fuse::VisualEventArgs_type* PointerWheelMovedArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Input::PointerEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(PointerWheelMovedArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.PointerWheelMovedArgs", options);
    type->fp_build_ = PointerWheelMovedArgs_build;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/PointerEvents.uno
// --------------------------------------------------------------------------

// public delegate void PointerWheelMovedHandler(object sender, Fuse.Input.PointerWheelMovedArgs args)
uDelegateType* PointerWheelMovedHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.PointerWheelMovedHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::PointerWheelMovedArgs_typeof());
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/Focus.Prediction.uno
// -----------------------------------------------------------------------------

// private sealed class FocusPrediction.PredictFilter
// {
static void FocusPrediction__PredictFilter_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Visual_typeof(), offsetof(FocusPrediction__PredictFilter, _origin), 0,
        ::g::Uno::Predicate_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr), offsetof(FocusPrediction__PredictFilter, _filter), 0);
}

uType* FocusPrediction__PredictFilter_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(FocusPrediction__PredictFilter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.FocusPrediction.PredictFilter", options);
    type->fp_build_ = FocusPrediction__PredictFilter_build;
    return type;
}

// public PredictFilter(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter)
void FocusPrediction__PredictFilter__ctor__fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Visual* origin, uDelegate* filter)
{
    __this->ctor_(origin, filter);
}

// public bool Filter(Fuse.Node node)
void FocusPrediction__PredictFilter__Filter_fn(FocusPrediction__PredictFilter* __this, ::g::Fuse::Node* node, bool* __retval)
{
    *__retval = __this->Filter(node);
}

// public PredictFilter New(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter)
void FocusPrediction__PredictFilter__New1_fn(::g::Fuse::Visual* origin, uDelegate* filter, FocusPrediction__PredictFilter** __retval)
{
    *__retval = FocusPrediction__PredictFilter::New1(origin, filter);
}

// public PredictFilter(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) [instance]
void FocusPrediction__PredictFilter::ctor_(::g::Fuse::Visual* origin, uDelegate* filter)
{
    _origin = origin;
    _filter = filter;
}

// public bool Filter(Fuse.Node node) [instance]
bool FocusPrediction__PredictFilter::Filter(::g::Fuse::Node* node)
{
    bool ret2;
    return (node != _origin) && (uPtr(_filter)->Invoke(&ret2, 1, node), ret2);
}

// public PredictFilter New(Fuse.Visual origin, Uno.Predicate<Fuse.Node> filter) [static]
FocusPrediction__PredictFilter* FocusPrediction__PredictFilter::New1(::g::Fuse::Visual* origin, uDelegate* filter)
{
    FocusPrediction__PredictFilter* obj1 = (FocusPrediction__PredictFilter*)uNew(FocusPrediction__PredictFilter_typeof());
    obj1->ctor_(origin, filter);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/HitTestHelpers.uno
// ---------------------------------------------------------------------------

// internal sealed class SelectionQuery
// {
static void SelectionQuery_build(uType* type)
{
    ::TYPES[14] = ::g::Fuse::HitTestCallback_typeof();
    type->SetFields(0,
        ::g::Fuse::HitTestResult_typeof(), offsetof(SelectionQuery, _result), 0,
        ::g::Uno::Int_typeof(), offsetof(SelectionQuery, count), 0);
}

uType* SelectionQuery_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(SelectionQuery);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Input.SelectionQuery", options);
    type->fp_build_ = SelectionQuery_build;
    type->fp_ctor_ = (void*)SelectionQuery__New1_fn;
    return type;
}

// public generated SelectionQuery()
void SelectionQuery__ctor__fn(SelectionQuery* __this)
{
    __this->ctor_();
}

// public generated SelectionQuery New()
void SelectionQuery__New1_fn(SelectionQuery** __retval)
{
    *__retval = SelectionQuery::New1();
}

// private void Select(Fuse.HitTestResult result)
void SelectionQuery__Select_fn(SelectionQuery* __this, ::g::Fuse::HitTestResult* result)
{
    __this->Select(result);
}

// public Fuse.HitTestResult Select(Fuse.Visual root, float2 point)
void SelectionQuery__Select1_fn(SelectionQuery* __this, ::g::Fuse::Visual* root, ::g::Uno::Float2* point, ::g::Fuse::HitTestResult** __retval)
{
    *__retval = __this->Select1(root, *point);
}

// public generated SelectionQuery() [instance]
void SelectionQuery::ctor_()
{
}

// private void Select(Fuse.HitTestResult result) [instance]
void SelectionQuery::Select(::g::Fuse::HitTestResult* result)
{
    count++;

    if ((_result == nullptr) || ((uPtr(_result)->HasHitDistance() && uPtr(result)->HasHitDistance()) && (uPtr(result)->HitDistance() < uPtr(_result)->HitDistance())))
        _result = result;
}

// public Fuse.HitTestResult Select(Fuse.Visual root, float2 point) [instance]
::g::Fuse::HitTestResult* SelectionQuery::Select1(::g::Fuse::Visual* root, ::g::Uno::Float2 point)
{
    ::g::Fuse::HitTestContext* args = ::g::Fuse::HitTestContext::New1(point, uDelegate::New(::TYPES[14/*Fuse.HitTestCallback*/], (void*)SelectionQuery__Select_fn, this));
    uPtr(root)->HitTest(args);
    args->Dispose();
    return _result;
}

// public generated SelectionQuery New() [static]
SelectionQuery* SelectionQuery::New1()
{
    SelectionQuery* obj1 = (SelectionQuery*)uNew(SelectionQuery_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/TextService.uno
// ------------------------------------------------------------------------

// internal sealed class TextEntered
// {
static void TextEntered_build(uType* type)
{
    type->SetBase(::g::Fuse::VisualEvent_typeof()->MakeType(::g::Fuse::Input::TextEnteredHandler_typeof(), ::g::Fuse::Input::TextEnteredArgs_typeof(), nullptr));
    type->SetFields(2);
}

::g::Fuse::VisualEvent_type* TextEntered_typeof()
{
    static uSStrong< ::g::Fuse::VisualEvent_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEvent_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(TextEntered);
    options.TypeSize = sizeof(::g::Fuse::VisualEvent_type);
    type = (::g::Fuse::VisualEvent_type*)uClassType::New("Fuse.Input.TextEntered", options);
    type->fp_build_ = TextEntered_build;
    type->fp_Invoke = (void(*)(::g::Fuse::VisualEvent*, void*, uObject*, ::g::Fuse::VisualEventArgs*))TextEntered__Invoke_fn;
    return type;
}

// protected override sealed void Invoke(Fuse.Input.TextEnteredHandler handler, object sender, Fuse.Input.TextEnteredArgs args)
void TextEntered__Invoke_fn(TextEntered* __this, uDelegate* handler, uObject* sender, ::g::Fuse::Input::TextEnteredArgs* args)
{
    uPtr(handler)->Invoke(2, sender, args);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/TextService.uno
// ------------------------------------------------------------------------

// public sealed class TextEnteredArgs
// {
static void TextEnteredArgs_build(uType* type)
{
    ::STRINGS[17] = uString::Const("text");
    ::TYPES[13] = ::g::Fuse::Scripting::IEventSerializer_typeof();
    type->SetInterfaces(
        ::g::Fuse::Scripting::IScriptEvent_typeof(), offsetof(::g::Fuse::VisualEventArgs_type, interface0));
    type->SetFields(2,
        ::g::Uno::String_typeof(), offsetof(TextEnteredArgs, _Text), 0);
}

::g::Fuse::VisualEventArgs_type* TextEnteredArgs_typeof()
{
    static uSStrong< ::g::Fuse::VisualEventArgs_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::VisualEventArgs_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(TextEnteredArgs);
    options.TypeSize = sizeof(::g::Fuse::VisualEventArgs_type);
    type = (::g::Fuse::VisualEventArgs_type*)uClassType::New("Fuse.Input.TextEnteredArgs", options);
    type->fp_build_ = TextEnteredArgs_build;
    type->fp_Serialize = (void(*)(::g::Fuse::VisualEventArgs*, uObject*))TextEnteredArgs__Serialize_fn;
    type->interface0.fp_Serialize = (void(*)(uObject*, uObject*))::g::Fuse::VisualEventArgs__FuseScriptingIScriptEventSerialize_fn;
    return type;
}

// private override sealed void Serialize(Fuse.Scripting.IEventSerializer s)
void TextEnteredArgs__Serialize_fn(TextEnteredArgs* __this, uObject* s)
{
    ::g::Fuse::Scripting::IEventSerializer::AddString(uInterface(uPtr(s), ::TYPES[13/*Fuse.Scripting.IEventSerializer*/]), ::STRINGS[17/*"text"*/], __this->Text());
}

// public generated string get_Text()
void TextEnteredArgs__get_Text_fn(TextEnteredArgs* __this, uString** __retval)
{
    *__retval = __this->Text();
}

// private generated void set_Text(string value)
void TextEnteredArgs__set_Text_fn(TextEnteredArgs* __this, uString* value)
{
    __this->Text(value);
}

// public generated string get_Text() [instance]
uString* TextEnteredArgs::Text()
{
    return _Text;
}

// private generated void set_Text(string value) [instance]
void TextEnteredArgs::Text(uString* value)
{
    _Text = value;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/Input/TextService.uno
// ------------------------------------------------------------------------

// public delegate void TextEnteredHandler(object sender, Fuse.Input.TextEnteredArgs args)
uDelegateType* TextEnteredHandler_typeof()
{
    static uSStrong<uDelegateType*> type;
    if (type != nullptr) return type;

    type = uDelegateType::New("Fuse.Input.TextEnteredHandler", 2, 0);
    type->SetSignature(uVoid_typeof(),
        uObject_typeof(),
        ::g::Fuse::Input::TextEnteredArgs_typeof());
    return type;
}

}}} // ::g::Fuse::Input
