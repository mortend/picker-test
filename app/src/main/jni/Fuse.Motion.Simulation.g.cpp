// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Animations.Easing.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.Internal.Statistics.h>
#include <Fuse.Motion.MotionUnit.h>
#include <Fuse.Motion.OverflowType.h>
#include <Fuse.Motion.Simulatio-301730d6.h>
#include <Fuse.Motion.Simulatio-30cc5468.h>
#include <Fuse.Motion.Simulatio-3f5b1766.h>
#include <Fuse.Motion.Simulatio-478cd251.h>
#include <Fuse.Motion.Simulatio-5b73d93d.h>
#include <Fuse.Motion.Simulatio-8633ea10.h>
#include <Fuse.Motion.Simulatio-8f1d04b6.h>
#include <Fuse.Motion.Simulatio-98f33310.h>
#include <Fuse.Motion.Simulatio-a3511392.h>
#include <Fuse.Motion.Simulatio-babbef3d.h>
#include <Fuse.Motion.Simulatio-c7788631.h>
#include <Fuse.Motion.Simulatio-c99a618b.h>
#include <Fuse.Motion.Simulatio-cba029fa.h>
#include <Fuse.Motion.Simulatio-dc75e704.h>
#include <Uno.Bool.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[1];
static uType* TYPES[4];

namespace g{
namespace Fuse{
namespace Motion{
namespace Simulation{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/AngularAdapter.uno
// ---------------------------------------------------------------------------------

// internal sealed class AdapterMultiplier<T>
// {
static void AdapterMultiplier_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    type->SetPrecalc(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), nullptr),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1/*GetScalar<T>*/, type->T(0), nullptr),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), nullptr));
    type->SetInterfaces(
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), nullptr), offsetof(AdapterMultiplier_type, interface0),
        ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(type->T(0), nullptr), offsetof(AdapterMultiplier_type, interface1),
        ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/], offsetof(AdapterMultiplier_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->T(0), nullptr), offsetof(AdapterMultiplier, _blender), 0,
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), nullptr), offsetof(AdapterMultiplier, _impl), 0,
        ::g::Uno::Double_typeof(), offsetof(AdapterMultiplier, _multiplier), 0);
}

AdapterMultiplier_type* AdapterMultiplier_typeof()
{
    static uSStrong<AdapterMultiplier_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(AdapterMultiplier);
    options.TypeSize = sizeof(AdapterMultiplier_type);
    type = (AdapterMultiplier_type*)uClassType::New("Fuse.Motion.Simulation.AdapterMultiplier`1", options);
    type->fp_build_ = AdapterMultiplier_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))AdapterMultiplier__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))AdapterMultiplier__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))AdapterMultiplier__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))AdapterMultiplier__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))AdapterMultiplier__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))AdapterMultiplier__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))AdapterMultiplier__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))AdapterMultiplier__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))AdapterMultiplier__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))AdapterMultiplier__get_IsStatic_fn;
    return type;
}

// public AdapterMultiplier(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier)
void AdapterMultiplier__ctor__fn(AdapterMultiplier* __this, uObject* impl, double* multiplier)
{
    __this->ctor_(impl, *multiplier);
}

// public T get_Destination()
void AdapterMultiplier__get_Destination_fn(AdapterMultiplier* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret4(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret5(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((AdapterMultiplier__Out_fn(__this, (::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(__this->_impl), __types[0]), &ret5), ret5), &ret4), ret4)), void();
}

// public void set_Destination(T value)
void AdapterMultiplier__set_Destination_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret6(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_impl), __types[0]), (AdapterMultiplier__In_fn(__this, value, &ret6), ret6));
}

// private T In(T val)
void AdapterMultiplier__In_fn(AdapterMultiplier* __this, void* val, uTRef __retval)
{
    uT ret2(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((::g::Fuse::Internal::Blender__ScalarMult_fn(uPtr(__this->_blender), val, uCRef(__this->_multiplier), &ret2), ret2)), void();
}

// public bool get_IsStatic()
void AdapterMultiplier__get_IsStatic_fn(AdapterMultiplier* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public AdapterMultiplier New(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier)
void AdapterMultiplier__New1_fn(uType* __type, uObject* impl, double* multiplier, AdapterMultiplier** __retval)
{
    *__retval = AdapterMultiplier::New1(__type, impl, *multiplier);
}

// private T Out(T val)
void AdapterMultiplier__Out_fn(AdapterMultiplier* __this, void* val, uTRef __retval)
{
    uT ret3(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((::g::Fuse::Internal::Blender__ScalarMult_fn(uPtr(__this->_blender), val, uCRef(1.0 / __this->_multiplier), &ret3), ret3)), void();
}

// public T get_Position()
void AdapterMultiplier__get_Position_fn(AdapterMultiplier* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret7(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret8(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((AdapterMultiplier__Out_fn(__this, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_impl), __types[0]), &ret8), ret8), &ret7), ret7)), void();
}

// public void set_Position(T value)
void AdapterMultiplier__set_Position_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret9(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_impl), __types[0]), (AdapterMultiplier__In_fn(__this, value, &ret9), ret9));
}

// public void Reset(T value)
void AdapterMultiplier__Reset_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
}

// public void Start()
void AdapterMultiplier__Start_fn(AdapterMultiplier* __this)
{
    __this->Start();
}

// public void Update(double elapsed)
void AdapterMultiplier__Update_fn(AdapterMultiplier* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity()
void AdapterMultiplier__get_Velocity_fn(AdapterMultiplier* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret10(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret11(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((AdapterMultiplier__Out_fn(__this, (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(__this->_impl), __types[0]), &ret11), ret11), &ret10), ret10)), void();
}

// public void set_Velocity(T value)
void AdapterMultiplier__set_Velocity_fn(AdapterMultiplier* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret12(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(__this->_impl), __types[0]), (AdapterMultiplier__In_fn(__this, value, &ret12), ret12));
}

// public AdapterMultiplier(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier) [instance]
void AdapterMultiplier::ctor_(uObject* impl, double multiplier)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.BlenderMap.GetScalar<T>*/),
    };
    _blender = ((::g::Fuse::Internal::ScalarBlender*)::g::Fuse::Internal::BlenderMap::GetScalar(__types[0]));
    _impl = impl;
    _multiplier = multiplier;
}

// public bool get_IsStatic() [instance]
bool AdapterMultiplier::IsStatic()
{
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]));
}

// public void Start() [instance]
void AdapterMultiplier::Start()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Start(uInterface(uPtr(_impl), __types[0]));
}

// public void Update(double elapsed) [instance]
void AdapterMultiplier::Update(double elapsed)
{
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
}

// public AdapterMultiplier New(Fuse.Motion.Simulation.DestinationSimulation<T> impl, double multiplier) [static]
AdapterMultiplier* AdapterMultiplier::New1(uType* __type, uObject* impl, double multiplier)
{
    AdapterMultiplier* obj1 = (AdapterMultiplier*)uNew(__type);
    obj1->ctor_(impl, multiplier);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/AngularAdapter.uno
// ---------------------------------------------------------------------------------

// internal sealed class AngularAdapter<T>
// {
static void AngularAdapter_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    ::TYPES[1] = ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof();
    ::TYPES[2] = ::g::Fuse::Motion::Simulation::Simulation_typeof();
    ::TYPES[3] = ::g::Fuse::Motion::Simulation::MotionSimulation_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetPrecalc(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), nullptr),
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(1/*GetScalar<T>*/, type->T(0), nullptr),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), nullptr));
    type->SetInterfaces(
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), nullptr), offsetof(AngularAdapter_type, interface0),
        ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(type->T(0), nullptr), offsetof(AngularAdapter_type, interface1),
        ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/], offsetof(AngularAdapter_type, interface2));
    type->SetFields(0,
        ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(type->T(0), nullptr), offsetof(AngularAdapter, _impl), 0,
        ::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(type->T(0), nullptr), offsetof(AngularAdapter, _blender), 0);
}

AngularAdapter_type* AngularAdapter_typeof()
{
    static uSStrong<AngularAdapter_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.PrecalcCount = 3;
    options.ObjectSize = sizeof(AngularAdapter);
    options.TypeSize = sizeof(AngularAdapter_type);
    type = (AngularAdapter_type*)uClassType::New("Fuse.Motion.Simulation.AngularAdapter`1", options);
    type->fp_build_ = AngularAdapter_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))AngularAdapter__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))AngularAdapter__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))AngularAdapter__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))AngularAdapter__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))AngularAdapter__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))AngularAdapter__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))AngularAdapter__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))AngularAdapter__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))AngularAdapter__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))AngularAdapter__get_IsStatic_fn;
    return type;
}

// public AngularAdapter(Fuse.Motion.Simulation.DestinationSimulation<T> impl)
void AngularAdapter__ctor__fn(AngularAdapter* __this, uObject* impl)
{
    __this->ctor_(impl);
}

// public T get_Destination()
void AngularAdapter__get_Destination_fn(AngularAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret7(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(__this->_impl), __types[0]), &ret7), ret7)), void();
}

// public void set_Destination(T value)
void AngularAdapter__set_Destination_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
    __this->Wrap();
}

// public bool get_IsStatic()
void AngularAdapter__get_IsStatic_fn(AngularAdapter* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public AngularAdapter New(Fuse.Motion.Simulation.DestinationSimulation<T> impl)
void AngularAdapter__New1_fn(uType* __type, uObject* impl, AngularAdapter** __retval)
{
    *__retval = AngularAdapter::New1(__type, impl);
}

// public T get_Position()
void AngularAdapter__get_Position_fn(AngularAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret8(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(__this->_impl), __types[0]), &ret8), ret8)), void();
}

// public void set_Position(T value)
void AngularAdapter__set_Position_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
    __this->Wrap();
}

// public void Reset(T value)
void AngularAdapter__Reset_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
}

// public void Start()
void AngularAdapter__Start_fn(AngularAdapter* __this)
{
    __this->Start();
}

// public void Update(double elapsed)
void AngularAdapter__Update_fn(AngularAdapter* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity()
void AngularAdapter__get_Velocity_fn(AngularAdapter* __this, uTRef __retval)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    uT ret9(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    return __retval.Store((::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(__this->_impl), __types[0]), &ret9), ret9)), void();
}

// public void set_Velocity(T value)
void AngularAdapter__set_Velocity_fn(AngularAdapter* __this, void* value)
{
    uType* __types[] = {
        __this->__type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(__this->_impl), __types[0]), value);
}

// private void Wrap()
void AngularAdapter__Wrap_fn(AngularAdapter* __this)
{
    __this->Wrap();
}

// public AngularAdapter(Fuse.Motion.Simulation.DestinationSimulation<T> impl) [instance]
void AngularAdapter::ctor_(uObject* impl)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.BlenderMap.GetScalar<T>*/),
    };
    _blender = ((::g::Fuse::Internal::ScalarBlender*)::g::Fuse::Internal::BlenderMap::GetScalar(__types[0]));
    _impl = impl;
}

// public bool get_IsStatic() [instance]
bool AngularAdapter::IsStatic()
{
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]));
}

// public void Start() [instance]
void AngularAdapter::Start()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Start(uInterface(uPtr(_impl), __types[0]));
}

// public void Update(double elapsed) [instance]
void AngularAdapter::Update(double elapsed)
{
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_impl), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
}

// private void Wrap() [instance]
void AngularAdapter::Wrap()
{
    uType* __types[] = {
        __type->Precalced(2/*Fuse.Motion.Simulation.MotionSimulation<T>*/),
        __type->Precalced(0/*Fuse.Motion.Simulation.DestinationSimulation<T>*/),
    };
    uT ret3(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret5(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret6(__type->T(0), alloca(__type->T(0)->ValueSize));
    double ret2;
    double ret4;
    double pos = (uPtr(_blender)->ToDouble_ex((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_impl), __types[0]), &ret3), ret3), &ret2), ret2);
    double dst = (uPtr(_blender)->ToDouble_ex((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_impl), __types[1]), &ret5), ret5), &ret4), ret4);
    double rpos = ::g::Uno::Math::Mod(pos, 6.2831853071795862);
    double rdst = ::g::Uno::Math::Mod(dst, 6.2831853071795862);
    double diff = rpos - rdst;

    if (diff > 3.1415926535897931)
        diff = diff - 6.2831853071795862;
    else if (diff < -3.1415926535897931)
        diff = diff + 6.2831853071795862;

    double npos = dst + diff;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_impl), __types[0]), (uPtr(_blender)->FromDouble_ex(uCRef(npos), &ret6), ret6));
}

// public AngularAdapter New(Fuse.Motion.Simulation.DestinationSimulation<T> impl) [static]
AngularAdapter* AngularAdapter::New1(uType* __type, uObject* impl)
{
    AngularAdapter* obj1 = (AngularAdapter*)uNew(__type);
    obj1->ctor_(impl);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/BoundedRegion2D.uno
// ----------------------------------------------------------------------------------

// internal sealed class BasicBoundedRegion2D
// {
static void BasicBoundedRegion2D_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::BoundedRegion2D_typeof(), offsetof(BasicBoundedRegion2D_type, interface0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr), offsetof(BasicBoundedRegion2D_type, interface1),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(BasicBoundedRegion2D_type, interface2));
    type->SetFields(0,
        BasicBoundedRegion2D__MoveMode_typeof(), offsetof(BasicBoundedRegion2D, _moveMode), 0,
        ::g::Uno::Float2_typeof(), offsetof(BasicBoundedRegion2D, _maxPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(BasicBoundedRegion2D, _minPosition), 0,
        ::g::Uno::Float2_typeof(), offsetof(BasicBoundedRegion2D, _overflowExtent), 0,
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr), offsetof(BasicBoundedRegion2D, _destination), 0,
        ::g::Uno::Float2_typeof(), offsetof(BasicBoundedRegion2D, _velocity), 0,
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr), offsetof(BasicBoundedRegion2D, _friction), 0,
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr), offsetof(BasicBoundedRegion2D, _snap), 0,
        ::g::Fuse::Motion::OverflowType_typeof(), offsetof(BasicBoundedRegion2D, _overflow), 0,
        ::g::Uno::Float2_typeof(), offsetof(BasicBoundedRegion2D, _Position), 0);
}

BasicBoundedRegion2D_type* BasicBoundedRegion2D_typeof()
{
    static uSStrong<BasicBoundedRegion2D_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(BasicBoundedRegion2D);
    options.TypeSize = sizeof(BasicBoundedRegion2D_type);
    type = (BasicBoundedRegion2D_type*)uClassType::New("Fuse.Motion.Simulation.BasicBoundedRegion2D", options);
    type->fp_build_ = BasicBoundedRegion2D_build;
    type->fp_ctor_ = (void*)BasicBoundedRegion2D__New1_fn;
    type->interface0.fp_StartUser = (void(*)(uObject*))BasicBoundedRegion2D__StartUser_fn;
    type->interface0.fp_StepUser = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__StepUser_fn;
    type->interface0.fp_EndUser = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__EndUser_fn;
    type->interface0.fp_MoveTo = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__MoveTo_fn;
    type->interface0.fp_Reset = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__Reset_fn;
    type->interface0.fp_Adjust = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__Adjust_fn;
    type->interface0.fp_get_MaxPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__get_MaxPosition_fn;
    type->interface0.fp_set_MaxPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__set_MaxPosition_fn;
    type->interface0.fp_get_MinPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__get_MinPosition_fn;
    type->interface0.fp_set_MinPosition = (void(*)(uObject*, ::g::Uno::Float2*))BasicBoundedRegion2D__set_MinPosition_fn;
    type->interface0.fp_get_IsUser = (void(*)(uObject*, bool*))BasicBoundedRegion2D__get_IsUser_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))BasicBoundedRegion2D__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))BasicBoundedRegion2D__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))BasicBoundedRegion2D__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))BasicBoundedRegion2D__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))BasicBoundedRegion2D__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))BasicBoundedRegion2D__get_IsStatic_fn;
    return type;
}

// internal BasicBoundedRegion2D()
void BasicBoundedRegion2D__ctor__fn(BasicBoundedRegion2D* __this)
{
    __this->ctor_();
}

// public void Adjust(float2 adjust)
void BasicBoundedRegion2D__Adjust_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* adjust)
{
    __this->Adjust(*adjust);
}

// private float2 CalcOver(float2 sp)
void BasicBoundedRegion2D__CalcOver_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* sp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOver(*sp);
}

// public float2 get_Destination()
void BasicBoundedRegion2D__get_Destination_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Destination();
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_DestinationSimulation()
void BasicBoundedRegion2D__get_DestinationSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval)
{
    *__retval = __this->DestinationSimulation();
}

// internal void set_DestinationSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value)
void BasicBoundedRegion2D__set_DestinationSimulation_fn(BasicBoundedRegion2D* __this, uObject* value)
{
    __this->DestinationSimulation(value);
}

// public void EndUser([float2 velocity])
void BasicBoundedRegion2D__EndUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* velocity)
{
    __this->EndUser(*velocity);
}

// internal Fuse.Motion.Simulation.MotionSimulation<float2> get_FrictionSimulation()
void BasicBoundedRegion2D__get_FrictionSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval)
{
    *__retval = __this->FrictionSimulation();
}

// internal void set_FrictionSimulation(Fuse.Motion.Simulation.MotionSimulation<float2> value)
void BasicBoundedRegion2D__set_FrictionSimulation_fn(BasicBoundedRegion2D* __this, uObject* value)
{
    __this->FrictionSimulation(value);
}

// public bool get_IsStatic()
void BasicBoundedRegion2D__get_IsStatic_fn(BasicBoundedRegion2D* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public bool get_IsUser()
void BasicBoundedRegion2D__get_IsUser_fn(BasicBoundedRegion2D* __this, bool* __retval)
{
    *__retval = __this->IsUser();
}

// public float2 get_MaxPosition()
void BasicBoundedRegion2D__get_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MaxPosition();
}

// public void set_MaxPosition(float2 value)
void BasicBoundedRegion2D__set_MaxPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->MaxPosition(*value);
}

// public float2 get_MinPosition()
void BasicBoundedRegion2D__get_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MinPosition();
}

// public void set_MinPosition(float2 value)
void BasicBoundedRegion2D__set_MinPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->MinPosition(*value);
}

// private void MoveDestination(double elapsed)
void BasicBoundedRegion2D__MoveDestination_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->MoveDestination(*elapsed);
}

// private void MoveFriction(double elapsed)
void BasicBoundedRegion2D__MoveFriction_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->MoveFriction(*elapsed);
}

// private bool MoveSnap(double elapsed, [bool X], [bool Y])
void BasicBoundedRegion2D__MoveSnap_fn(BasicBoundedRegion2D* __this, double* elapsed, bool* X, bool* Y, bool* __retval)
{
    *__retval = __this->MoveSnap(*elapsed, *X, *Y);
}

// public void MoveTo(float2 target)
void BasicBoundedRegion2D__MoveTo_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* target)
{
    __this->MoveTo(*target);
}

// internal BasicBoundedRegion2D New()
void BasicBoundedRegion2D__New1_fn(BasicBoundedRegion2D** __retval)
{
    *__retval = BasicBoundedRegion2D::New1();
}

// public Fuse.Motion.OverflowType get_Overflow()
void BasicBoundedRegion2D__get_Overflow_fn(BasicBoundedRegion2D* __this, int32_t* __retval)
{
    *__retval = __this->Overflow();
}

// public void set_Overflow(Fuse.Motion.OverflowType value)
void BasicBoundedRegion2D__set_Overflow_fn(BasicBoundedRegion2D* __this, int32_t* value)
{
    __this->Overflow(*value);
}

// public float2 get_OverflowExtent()
void BasicBoundedRegion2D__get_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->OverflowExtent();
}

// public void set_OverflowExtent(float2 value)
void BasicBoundedRegion2D__set_OverflowExtent_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->OverflowExtent(*value);
}

// public generated float2 get_Position()
void BasicBoundedRegion2D__get_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Position();
}

// public generated void set_Position(float2 value)
void BasicBoundedRegion2D__set_Position_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->Position(*value);
}

// public void Reset(float2 position)
void BasicBoundedRegion2D__Reset_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* position)
{
    __this->Reset(*position);
}

// private float2 SnapPosition(float2 prev, float2 next)
void BasicBoundedRegion2D__SnapPosition_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* prev, ::g::Uno::Float2* next, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapPosition(*prev, *next);
}

// private void SnapSetPositionVelocity(float2 nextPosition, float2 nextVelocity)
void BasicBoundedRegion2D__SnapSetPositionVelocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* nextPosition, ::g::Uno::Float2* nextVelocity)
{
    __this->SnapSetPositionVelocity(*nextPosition, *nextVelocity);
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_SnapSimulation()
void BasicBoundedRegion2D__get_SnapSimulation_fn(BasicBoundedRegion2D* __this, uObject** __retval)
{
    *__retval = __this->SnapSimulation();
}

// internal void set_SnapSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value)
void BasicBoundedRegion2D__set_SnapSimulation_fn(BasicBoundedRegion2D* __this, uObject* value)
{
    __this->SnapSimulation(value);
}

// private float2 SnapVelocity(float2 position, float2 v)
void BasicBoundedRegion2D__SnapVelocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* position, ::g::Uno::Float2* v, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapVelocity(*position, *v);
}

// public void StartUser()
void BasicBoundedRegion2D__StartUser_fn(BasicBoundedRegion2D* __this)
{
    __this->StartUser();
}

// public void StepUser(float2 inOffset)
void BasicBoundedRegion2D__StepUser_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* inOffset)
{
    __this->StepUser(*inOffset);
}

// public void Update(double elapsed)
void BasicBoundedRegion2D__Update_fn(BasicBoundedRegion2D* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public float2 get_Velocity()
void BasicBoundedRegion2D__get_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Velocity();
}

// public void set_Velocity(float2 value)
void BasicBoundedRegion2D__set_Velocity_fn(BasicBoundedRegion2D* __this, ::g::Uno::Float2* value)
{
    __this->Velocity(*value);
}

// internal BasicBoundedRegion2D() [instance]
void BasicBoundedRegion2D::ctor_()
{
    _maxPosition = ::g::Uno::Float2__New1(FLT_INF);
    _minPosition = ::g::Uno::Float2__New1(-FLT_INF);
    _overflowExtent = ::g::Uno::Float2__New1(150.0f);
    _friction = (uObject*)((::g::Fuse::Motion::Simulation::Friction*)::g::Fuse::Motion::Simulation::Friction::CreatePoints(::g::Fuse::Motion::Simulation::Friction_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)));
    _snap = (uObject*)((::g::Fuse::Motion::Simulation::SmoothSnap*)::g::Fuse::Motion::Simulation::SmoothSnap::CreatePoints(::g::Fuse::Motion::Simulation::SmoothSnap_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr)));
    _overflow = 2;
}

// public void Adjust(float2 adjust) [instance]
void BasicBoundedRegion2D::Adjust(::g::Uno::Float2 adjust)
{
    if (::g::Uno::Float2__op_Equality(adjust, ::g::Uno::Float2__New1(0.0f)))
        return;

    if (_moveMode == 1)
        return;

    Position(::g::Uno::Float2__op_Addition2(Position(), adjust));

    switch (_moveMode)
    {
        case 1:
        case 0:
            break;
        case 4:
        {
            MoveTo(::g::Uno::Float2__op_Addition2(Destination(), adjust));
            break;
        }
    }
}

// private float2 CalcOver(float2 sp) [instance]
::g::Uno::Float2 BasicBoundedRegion2D::CalcOver(::g::Uno::Float2 sp)
{
    ::g::Uno::Float2 min = MinPosition();
    ::g::Uno::Float2 max = MaxPosition();
    ::g::Uno::Float2 over = ::g::Uno::Float2__New1(0.0f);

    if (sp.X < min.X)
        over.X = (sp.X - min.X);
    else if (sp.X > max.X)
        over.X = (sp.X - max.X);

    if (sp.Y < min.Y)
        over.Y = (sp.Y - min.Y);
    else if (sp.Y > max.Y)
        over.Y = (sp.Y - max.Y);

    return over;
}

// public float2 get_Destination() [instance]
::g::Uno::Float2 BasicBoundedRegion2D::Destination()
{
    ::g::Uno::Float2 ret11;
    return (::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_destination), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret11), ret11);
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_DestinationSimulation() [instance]
uObject* BasicBoundedRegion2D::DestinationSimulation()
{
    return _destination;
}

// internal void set_DestinationSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value) [instance]
void BasicBoundedRegion2D::DestinationSimulation(uObject* value)
{
    _destination = value;
}

// public void EndUser([float2 velocity]) [instance]
void BasicBoundedRegion2D::EndUser(::g::Uno::Float2 velocity)
{
    if (!IsUser())
        return;

    _velocity = SnapVelocity(Position(), velocity);
    _moveMode = 2;
}

// internal Fuse.Motion.Simulation.MotionSimulation<float2> get_FrictionSimulation() [instance]
uObject* BasicBoundedRegion2D::FrictionSimulation()
{
    return _friction;
}

// internal void set_FrictionSimulation(Fuse.Motion.Simulation.MotionSimulation<float2> value) [instance]
void BasicBoundedRegion2D::FrictionSimulation(uObject* value)
{
    _friction = value;
}

// public bool get_IsStatic() [instance]
bool BasicBoundedRegion2D::IsStatic()
{
    return (_moveMode == 0) || (_moveMode == 1);
}

// public bool get_IsUser() [instance]
bool BasicBoundedRegion2D::IsUser()
{
    return _moveMode == 1;
}

// public float2 get_MaxPosition() [instance]
::g::Uno::Float2 BasicBoundedRegion2D::MaxPosition()
{
    return _maxPosition;
}

// public void set_MaxPosition(float2 value) [instance]
void BasicBoundedRegion2D::MaxPosition(::g::Uno::Float2 value)
{
    ::g::Uno::Float2 ret12;

    if (::g::Uno::Float2__op_Equality(_maxPosition, value))
        return;

    _maxPosition = value;

    if (_moveMode == 4)
        ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_destination), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(::g::Uno::Math::Clamp3((::g::Fuse::Motion::Simulation::DestinationSimulation::get_Destination_ex(uInterface(uPtr(_destination), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret12), ret12), MinPosition(), MaxPosition())));
}

// public float2 get_MinPosition() [instance]
::g::Uno::Float2 BasicBoundedRegion2D::MinPosition()
{
    return _minPosition;
}

// public void set_MinPosition(float2 value) [instance]
void BasicBoundedRegion2D::MinPosition(::g::Uno::Float2 value)
{
    _minPosition = value;
}

// private void MoveDestination(double elapsed) [instance]
void BasicBoundedRegion2D::MoveDestination(double elapsed)
{
    ::g::Uno::Float2 ret2;
    ::g::Uno::Float2 ret3;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_destination), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(Velocity()));
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_destination), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
    SnapSetPositionVelocity((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_destination), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret2), ret2), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret3), ret3));

    if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_destination), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/])))
        _moveMode = 0;
}

// private void MoveFriction(double elapsed) [instance]
void BasicBoundedRegion2D::MoveFriction(double elapsed)
{
    ::g::Uno::Float2 ret4;
    ::g::Uno::Float2 ret5;
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_friction), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(_velocity));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_friction), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_friction), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
    SnapSetPositionVelocity((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_friction), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret4), ret4), (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_friction), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret5), ret5));

    if (::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_friction), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/])))
    {
        _moveMode = 3;
        return;
    }

    MoveSnap(elapsed, ::g::Uno::Math::Abs1(_velocity.X) < 1e-05f, ::g::Uno::Math::Abs1(_velocity.Y) < 1e-05f);
}

// private bool MoveSnap(double elapsed, [bool X], [bool Y]) [instance]
bool BasicBoundedRegion2D::MoveSnap(double elapsed, bool X, bool Y)
{
    ::g::Uno::Float2 ret6;
    ::g::Uno::Float2 ret7;
    ::g::Uno::Float2 ret8;
    ::g::Uno::Float2 ret9;
    ::g::Uno::Float2 ret10;
    ::g::Uno::Float2 over = CalcOver(Position());
    float off = ::g::Uno::Vector::Length(over);

    if (off <= 0.0f)
        return true;

    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_snap), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(Velocity()));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_snap), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(::g::Uno::Float2__op_Subtraction2(Position(), over)));
    ::g::Fuse::Motion::Simulation::Simulation::Update(uInterface(uPtr(_snap), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]), elapsed);
    Position((::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret6), ret6));
    ::g::Uno::Float2 nv = Velocity();
    ::g::Uno::Float2 np = Position();

    if (X)
    {
        nv.X = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret7), ret7).X;
        np.X = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret8), ret8).X;
    }

    if (Y)
    {
        nv.Y = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Velocity_ex(uInterface(uPtr(_snap), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret9), ret9).Y;
        np.Y = (::g::Fuse::Motion::Simulation::MotionSimulation::get_Position_ex(uInterface(uPtr(_snap), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), &ret10), ret10).Y;
    }

    Velocity(nv);
    Position(np);
    return ::g::Fuse::Motion::Simulation::Simulation::IsStatic(uInterface(uPtr(_snap), ::TYPES[2/*Fuse.Motion.Simulation.Simulation*/]));
}

// public void MoveTo(float2 target) [instance]
void BasicBoundedRegion2D::MoveTo(::g::Uno::Float2 target)
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation::set_Destination_ex(uInterface(uPtr(_destination), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(::g::Uno::Math::Clamp3(target, MinPosition(), MaxPosition())));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Position_ex(uInterface(uPtr(_destination), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(Position()));
    ::g::Fuse::Motion::Simulation::MotionSimulation::set_Velocity_ex(uInterface(uPtr(_destination), ::TYPES[3/*Fuse.Motion.Simulation.MotionSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(Velocity()));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Start(uInterface(uPtr(_destination), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)));
    _moveMode = 4;
}

// public Fuse.Motion.OverflowType get_Overflow() [instance]
int32_t BasicBoundedRegion2D::Overflow()
{
    return _overflow;
}

// public void set_Overflow(Fuse.Motion.OverflowType value) [instance]
void BasicBoundedRegion2D::Overflow(int32_t value)
{
    _overflow = value;
}

// public float2 get_OverflowExtent() [instance]
::g::Uno::Float2 BasicBoundedRegion2D::OverflowExtent()
{
    return _overflowExtent;
}

// public void set_OverflowExtent(float2 value) [instance]
void BasicBoundedRegion2D::OverflowExtent(::g::Uno::Float2 value)
{
    _overflowExtent = value;
}

// public generated float2 get_Position() [instance]
::g::Uno::Float2 BasicBoundedRegion2D::Position()
{
    return _Position;
}

// public generated void set_Position(float2 value) [instance]
void BasicBoundedRegion2D::Position(::g::Uno::Float2 value)
{
    _Position = value;
}

// public void Reset(float2 position) [instance]
void BasicBoundedRegion2D::Reset(::g::Uno::Float2 position)
{
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_destination), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(position));
    ::g::Fuse::Motion::Simulation::DestinationSimulation::Reset_ex(uInterface(uPtr(_snap), ::TYPES[1/*Fuse.Motion.Simulation.DestinationSimulation`1*/]->MakeType(::g::Uno::Float2_typeof(), nullptr)), uCRef(position));
    _moveMode = 0;
}

// private float2 SnapPosition(float2 prev, float2 next) [instance]
::g::Uno::Float2 BasicBoundedRegion2D::SnapPosition(::g::Uno::Float2 prev, ::g::Uno::Float2 next)
{
    switch (Overflow())
    {
        case 0:
            return next;
        case 1:
            return ::g::Uno::Math::Clamp3(next, MinPosition(), MaxPosition());
        case 2:
        {
            ::g::Uno::Float2 over = CalcOver(next);

            if ((::g::Uno::Math::Abs1(over.X) + ::g::Uno::Math::Abs1(over.Y)) < 1e-05f)
                return next;

            ::g::Uno::Float2 diff = ::g::Uno::Float2__op_Subtraction2(next, prev);
            ::g::Uno::Float2 f = ::g::Uno::Math::Clamp3(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Math::Abs2(over), _overflowExtent)), ::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__New1(1.0f));
            ::g::Uno::Float2 mod = ::g::Uno::Float2__op_Addition2(prev, ::g::Uno::Float2__op_Multiply2(diff, f));
            ::g::Uno::Float2 modOver = CalcOver(mod);

            if (::g::Uno::Math::Abs1(next.X) < ::g::Uno::Math::Abs1(modOver.X))
                mod.X = next.X;

            if (::g::Uno::Math::Abs1(next.Y) < ::g::Uno::Math::Abs1(modOver.Y))
                mod.Y = next.Y;

            return mod;
        }
    }

    return next;
}

// private void SnapSetPositionVelocity(float2 nextPosition, float2 nextVelocity) [instance]
void BasicBoundedRegion2D::SnapSetPositionVelocity(::g::Uno::Float2 nextPosition, ::g::Uno::Float2 nextVelocity)
{
    Velocity(SnapVelocity(nextPosition, nextVelocity));
    Position(SnapPosition(Position(), nextPosition));
}

// internal Fuse.Motion.Simulation.DestinationSimulation<float2> get_SnapSimulation() [instance]
uObject* BasicBoundedRegion2D::SnapSimulation()
{
    return _snap;
}

// internal void set_SnapSimulation(Fuse.Motion.Simulation.DestinationSimulation<float2> value) [instance]
void BasicBoundedRegion2D::SnapSimulation(uObject* value)
{
    _snap = value;
}

// private float2 SnapVelocity(float2 position, float2 v) [instance]
::g::Uno::Float2 BasicBoundedRegion2D::SnapVelocity(::g::Uno::Float2 position, ::g::Uno::Float2 v)
{
    ::g::Uno::Float2 over = CalcOver(position);

    if ((::g::Uno::Math::Abs1(over.X) + ::g::Uno::Math::Abs1(over.Y)) < 1e-05f)
        return v;

    switch (Overflow())
    {
        case 0:
            return v;
        case 1:
        {
            if (over.X != 0.0f)
                v.X = 0.0f;

            if (over.Y != 0.0f)
                v.Y = 0.0f;

            return v;
        }
        case 2:
        {
            ::g::Uno::Float2 f = ::g::Uno::Math::Clamp3(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Math::Abs2(over), _overflowExtent)), ::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__New1(1.0f));
            ::g::Uno::Float2 mod = ::g::Uno::Float2__op_Multiply2(v, f);

            if (::g::Uno::Math::Sign1(v.X) != ::g::Uno::Math::Sign1(over.X))
                mod.X = v.X;

            if (::g::Uno::Math::Sign1(v.Y) != ::g::Uno::Math::Sign1(over.Y))
                mod.Y = v.Y;

            return mod;
        }
    }

    return v;
}

// public void StartUser() [instance]
void BasicBoundedRegion2D::StartUser()
{
    _moveMode = 1;
}

// public void StepUser(float2 inOffset) [instance]
void BasicBoundedRegion2D::StepUser(::g::Uno::Float2 inOffset)
{
    Position(SnapPosition(Position(), ::g::Uno::Float2__op_Addition2(inOffset, Position())));
}

// public void Update(double elapsed) [instance]
void BasicBoundedRegion2D::Update(double elapsed)
{
    switch (_moveMode)
    {
        case 0:
        case 1:
            return;
        case 2:
        {
            MoveFriction(elapsed);
            break;
        }
        case 3:
        {
            if (MoveSnap(elapsed, true, true))
                _moveMode = 0;

            break;
        }
        case 4:
        {
            MoveDestination(elapsed);
            break;
        }
    }
}

// public float2 get_Velocity() [instance]
::g::Uno::Float2 BasicBoundedRegion2D::Velocity()
{
    return _velocity;
}

// public void set_Velocity(float2 value) [instance]
void BasicBoundedRegion2D::Velocity(::g::Uno::Float2 value)
{
    _velocity = value;

    if (_moveMode == 0)
        _moveMode = 2;
}

// internal BasicBoundedRegion2D New() [static]
BasicBoundedRegion2D* BasicBoundedRegion2D::New1()
{
    BasicBoundedRegion2D* obj1 = (BasicBoundedRegion2D*)uNew(BasicBoundedRegion2D_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/BoundedRegion2D.uno
// ----------------------------------------------------------------------------------

// internal abstract interface BoundedRegion2D
// {
uInterfaceType* BoundedRegion2D_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.BoundedRegion2D", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/Simulation.uno
// -----------------------------------------------------------------------------

// internal abstract interface DestinationSimulation<T>
// {
uInterfaceType* DestinationSimulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.DestinationSimulation`1", 1, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/EasingMotion.uno
// -------------------------------------------------------------------------------

// internal sealed class EasingMotion<T>
// {
static void EasingMotion_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetDependencies(
        ::g::Fuse::Animations::Easing_typeof(),
        ::g::Uno::Math_typeof());
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), nullptr), offsetof(EasingMotion_type, interface0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), nullptr), offsetof(EasingMotion_type, interface1),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(EasingMotion_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), nullptr), offsetof(EasingMotion, _blender), 0,
        ::g::Uno::Bool_typeof(), offsetof(EasingMotion, _isDirty), 0,
        ::g::Uno::Bool_typeof(), offsetof(EasingMotion, _isStatic), 0,
        ::g::Fuse::Animations::Easing_typeof(), offsetof(EasingMotion, _easing), 0,
        ::g::Uno::Double_typeof(), offsetof(EasingMotion, _progress), 0,
        ::g::Uno::Double_typeof(), offsetof(EasingMotion, _progressSpeed), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Double_typeof(), offsetof(EasingMotion, _transitionTime), 0,
        ::g::Uno::Double_typeof(), offsetof(EasingMotion, _transitionRemain), 0,
        ::g::Uno::Bool_typeof(), offsetof(EasingMotion, _isLocked), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(EasingMotion, _duration), 0,
        ::g::Uno::Float_typeof(), offsetof(EasingMotion, _durationExp), 0,
        ::g::Uno::Float_typeof(), offsetof(EasingMotion, _nominalDistance), 0);
}

EasingMotion_type* EasingMotion_typeof()
{
    static uSStrong<EasingMotion_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 18;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.DependencyCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(EasingMotion);
    options.TypeSize = sizeof(EasingMotion_type);
    type = (EasingMotion_type*)uClassType::New("Fuse.Motion.Simulation.EasingMotion`1", options);
    type->fp_build_ = EasingMotion_build;
    type->fp_ctor_ = (void*)EasingMotion__New1_fn;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))EasingMotion__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))EasingMotion__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))EasingMotion__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))EasingMotion__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))EasingMotion__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))EasingMotion__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))EasingMotion__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))EasingMotion__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))EasingMotion__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))EasingMotion__get_IsStatic_fn;
    return type;
}

// public generated EasingMotion()
void EasingMotion__ctor__fn(EasingMotion* __this)
{
    __this->ctor_();
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateNormalized()
void EasingMotion__CreateNormalized_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreatePoints()
void EasingMotion__CreatePoints_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateRadians()
void EasingMotion__CreateRadians_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateUnit(Fuse.Motion.MotionUnit unit)
void EasingMotion__CreateUnit_fn(uType* __type, int32_t* unit, EasingMotion** __retval)
{
    *__retval = EasingMotion::CreateUnit(__type, *unit);
}

// public T get_Destination()
void EasingMotion__get_Destination_fn(EasingMotion* __this, uTRef __retval)
{
    return __retval.Store(__this->_destination()), void();
}

// public void set_Destination(T value)
void EasingMotion__set_Destination_fn(EasingMotion* __this, void* value)
{
    double ret21;

    if ((::g::Fuse::Internal::Blender__Distance_fn(uPtr(__this->_blender), __this->_destination(), value, &ret21), ret21) > 9.9999997473787516e-06)
        __this->_isDirty = true;

    __this->_destination() = value;
}

// public float get_Duration()
void EasingMotion__get_Duration_fn(EasingMotion* __this, float* __retval)
{
    *__retval = __this->Duration();
}

// public void set_Duration(float value)
void EasingMotion__set_Duration_fn(EasingMotion* __this, float* value)
{
    __this->Duration(*value);
}

// public float get_DurationExp()
void EasingMotion__get_DurationExp_fn(EasingMotion* __this, float* __retval)
{
    *__retval = __this->DurationExp();
}

// public void set_DurationExp(float value)
void EasingMotion__set_DurationExp_fn(EasingMotion* __this, float* value)
{
    __this->DurationExp(*value);
}

// public Fuse.Animations.Easing get_Easing()
void EasingMotion__get_Easing_fn(EasingMotion* __this, ::g::Fuse::Animations::Easing** __retval)
{
    *__retval = __this->Easing();
}

// public void set_Easing(Fuse.Animations.Easing value)
void EasingMotion__set_Easing_fn(EasingMotion* __this, ::g::Fuse::Animations::Easing* value)
{
    __this->Easing(value);
}

// public bool get_IsStatic()
void EasingMotion__get_IsStatic_fn(EasingMotion* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public generated EasingMotion New()
void EasingMotion__New1_fn(uType* __type, EasingMotion** __retval)
{
    *__retval = EasingMotion::New1(__type);
}

// public float get_NominalDistance()
void EasingMotion__get_NominalDistance_fn(EasingMotion* __this, float* __retval)
{
    *__retval = __this->NominalDistance();
}

// public void set_NominalDistance(float value)
void EasingMotion__set_NominalDistance_fn(EasingMotion* __this, float* value)
{
    __this->NominalDistance(*value);
}

// public T get_Position()
void EasingMotion__get_Position_fn(EasingMotion* __this, uTRef __retval)
{
    return __retval.Store(__this->_position()), void();
}

// public void set_Position(T value)
void EasingMotion__set_Position_fn(EasingMotion* __this, void* value)
{
    double ret22;

    if ((::g::Fuse::Internal::Blender__Distance_fn(uPtr(__this->_blender), __this->_position(), value, &ret22), ret22) > 9.9999997473787516e-06)
        __this->_isDirty = true;

    __this->_position() = value;
}

// public void Reset(T destination)
void EasingMotion__Reset_fn(EasingMotion* __this, void* destination)
{
    uT ret2(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    __this->_position() = destination;
    __this->_destination() = destination;
    __this->_velocity() = (uPtr(__this->_blender)->get_Zero_ex(&ret2), ret2);
    __this->_isStatic = true;
    __this->_isDirty = false;
}

// public void Start()
void EasingMotion__Start_fn(EasingMotion* __this)
{
    __this->Start();
}

// public void Update(double elapsed)
void EasingMotion__Update_fn(EasingMotion* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// private void UpdateDestination(bool start)
void EasingMotion__UpdateDestination_fn(EasingMotion* __this, bool* start)
{
    __this->UpdateDestination(*start);
}

// public T get_Velocity()
void EasingMotion__get_Velocity_fn(EasingMotion* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value)
void EasingMotion__set_Velocity_fn(EasingMotion* __this, void* value)
{
    double ret23;

    if ((::g::Fuse::Internal::Blender__Distance_fn(uPtr(__this->_blender), __this->_velocity(), value, &ret23), ret23) > 9.9999997473787516e-06)
        __this->_isDirty = true;

    __this->_velocity() = value;
}

// public generated EasingMotion() [instance]
void EasingMotion::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _isDirty = true;
    _isStatic = true;
    _easing = ::g::Fuse::Animations::Easing::Linear();
    _progress = 1.0;
    _progressSpeed = 0.0;
    _transitionTime = 1.0;
    _transitionRemain = 0.0;
    _isLocked = true;
    _duration = 0.5f;
    _durationExp = 1.0f;
    _nominalDistance = 1.0f;
}

// public float get_Duration() [instance]
float EasingMotion::Duration()
{
    return _duration;
}

// public void set_Duration(float value) [instance]
void EasingMotion::Duration(float value)
{
    _duration = value;
}

// public float get_DurationExp() [instance]
float EasingMotion::DurationExp()
{
    return _durationExp;
}

// public void set_DurationExp(float value) [instance]
void EasingMotion::DurationExp(float value)
{
    _durationExp = value;
}

// public Fuse.Animations.Easing get_Easing() [instance]
::g::Fuse::Animations::Easing* EasingMotion::Easing()
{
    return _easing;
}

// public void set_Easing(Fuse.Animations.Easing value) [instance]
void EasingMotion::Easing(::g::Fuse::Animations::Easing* value)
{
    _easing = value;
}

// public bool get_IsStatic() [instance]
bool EasingMotion::IsStatic()
{
    return _isStatic && !_isDirty;
}

// public float get_NominalDistance() [instance]
float EasingMotion::NominalDistance()
{
    return _nominalDistance;
}

// public void set_NominalDistance(float value) [instance]
void EasingMotion::NominalDistance(float value)
{
    _nominalDistance = value;
}

// public void Start() [instance]
void EasingMotion::Start()
{
    UpdateDestination(true);
}

// public void Update(double elapsed) [instance]
void EasingMotion::Update(double elapsed)
{
    uT ret3(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret4(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret5(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret6(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret7(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret8(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret9(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret10(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret11(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret12(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT desiredPosition(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT prevPos(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT desiredVelocity(__type->T(0), alloca(__type->T(0)->ValueSize));

    if (_isDirty)
        UpdateDestination(false);

    _progress = ::g::Uno::Math::Min(1.0, _progress + (_progressSpeed * elapsed));

    if (elapsed >= _transitionRemain)
        _isLocked = true;

    desiredPosition = (uPtr(_blender)->Lerp_ex(_source(), _destination(), uCRef(uPtr(_easing)->Map((double)(float)_progress)), &ret3), ret3);
    prevPos = (uPtr(_blender)->Lerp_ex(_source(), _destination(), uCRef(uPtr(_easing)->Map((double)((float)_progress - 0.001f))), &ret4), ret4);
    desiredVelocity = (uPtr(_blender)->Weight_ex((uPtr(_blender)->Sub_ex(desiredPosition, prevPos, &ret6), ret6), uCRef(999.99993896484375), &ret5), ret5);

    if (_isLocked)
    {
        _position() = desiredPosition;
        _velocity() = desiredVelocity;

        if (_progress >= 1.0)
        {
            _position() = _destination();
            _velocity() = (uPtr(_blender)->get_Zero_ex(&ret7), ret7);
            _isStatic = true;
            _isLocked = true;
            _progress = 1.0;
        }

        return;
    }

    _transitionPosition() = (uPtr(_blender)->Add_ex(_transitionPosition(), (uPtr(_blender)->Weight_ex((EasingMotion__get_Velocity_fn(this, &ret10), ret10), uCRef(elapsed), &ret9), ret9), &ret8), ret8);
    _transitionRemain = (_transitionRemain - elapsed);
    float rtp = (float)(_transitionRemain / _transitionTime);
    float tp = rtp;
    _velocity() = (uPtr(_blender)->Lerp_ex(desiredVelocity, _transitionVelocity(), uCRef((double)tp), &ret11), ret11);
    _position() = (uPtr(_blender)->Lerp_ex(desiredPosition, _transitionPosition(), uCRef((double)tp), &ret12), ret12);
}

// private void UpdateDestination(bool start) [instance]
void EasingMotion::UpdateDestination(bool start)
{
    uT ret14(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret15(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret17(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret18(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret19(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret20(__type->T(0), alloca(__type->T(0)->ValueSize));
    double ret13;
    double ret16;
    _isDirty = false;
    bool shouldLock = (uPtr(_blender)->Length_ex((EasingMotion__get_Velocity_fn(this, &ret14), ret14), &ret13), ret13) < 9.9999997473787516e-06;
    _source() = (EasingMotion__get_Position_fn(this, &ret15), ret15);
    _isStatic = false;
    double dist = (::g::Fuse::Internal::Blender__Distance_fn(uPtr(_blender), _destination(), (EasingMotion__get_Position_fn(this, &ret17), ret17), &ret16), ret16);
    double partial = dist / (double)_nominalDistance;
    double lenDuration = (double)Duration() * ::g::Uno::Math::Pow(partial, (double)_durationExp);

    if (lenDuration < 9.9999997473787516e-06)
    {
        _isStatic = true;
        EasingMotion__set_Position_fn(this, _destination());
        EasingMotion__set_Velocity_fn(this, (uPtr(_blender)->get_Zero_ex(&ret18), ret18));
        return;
    }
    else if ((partial < 1.0) && !shouldLock)
    {
        _progress = (1.0 - partial);
        _progressSpeed = (1.0 / lenDuration);
        _isLocked = false;
    }
    else
    {
        _progress = 0.0;
        _progressSpeed = (1.0 / lenDuration);
        _isLocked = shouldLock;
    }

    _transitionRemain = (_transitionTime = ::g::Uno::Math::Min((double)(Duration() / 2.0f), lenDuration));
    _transitionPosition() = (EasingMotion__get_Position_fn(this, &ret19), ret19);
    _transitionVelocity() = (EasingMotion__get_Velocity_fn(this, &ret20), ret20);
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateNormalized() [static]
EasingMotion* EasingMotion::CreateNormalized(uType* __type)
{
    EasingMotion* q = EasingMotion::New1(__type);
    q->NominalDistance(1.0f);
    return q;
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreatePoints() [static]
EasingMotion* EasingMotion::CreatePoints(uType* __type)
{
    EasingMotion* q = EasingMotion::New1(__type);
    q->NominalDistance(500.0f);
    return q;
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateRadians() [static]
EasingMotion* EasingMotion::CreateRadians(uType* __type)
{
    EasingMotion* q = EasingMotion::New1(__type);
    q->NominalDistance(3.14159274f);
    return q;
}

// public static Fuse.Motion.Simulation.EasingMotion<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static]
EasingMotion* EasingMotion::CreateUnit(uType* __type, int32_t unit)
{
    switch (unit)
    {
        case 0:
            return EasingMotion::CreatePoints(__type);
        case 1:
            return EasingMotion::CreateNormalized(__type);
        case 2:
            return EasingMotion::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int32_t>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public generated EasingMotion New() [static]
EasingMotion* EasingMotion::New1(uType* __type)
{
    EasingMotion* obj1 = (EasingMotion*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/ElasticForce.uno
// -------------------------------------------------------------------------------

// internal sealed class ElasticForce<T>
// {
static void ElasticForce_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), nullptr), offsetof(ElasticForce_type, interface0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), nullptr), offsetof(ElasticForce_type, interface1),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(ElasticForce_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), nullptr), offsetof(ElasticForce, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(ElasticForce, _scale), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(ElasticForce, _attractionForce), 0,
        ::g::Uno::Float_typeof(), offsetof(ElasticForce, _attractionCurve), 0,
        ::g::Uno::Float_typeof(), offsetof(ElasticForce, _damping), 0,
        ::g::Uno::Float_typeof(), offsetof(ElasticForce, _energyEps), 0,
        ::g::Uno::Float_typeof(), offsetof(ElasticForce, _maxSpeed), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElasticForce, _hasMaxSpeed), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElasticForce, _isStatic), 0,
        ::g::Uno::Double_typeof(), offsetof(ElasticForce, timeStep), 0,
        ::g::Uno::Double_typeof(), offsetof(ElasticForce, _remainTime), 0,
        ::g::Uno::Bool_typeof(), offsetof(ElasticForce, _IsLocked), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

ElasticForce_type* ElasticForce_typeof()
{
    static uSStrong<ElasticForce_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 15;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ElasticForce);
    options.TypeSize = sizeof(ElasticForce_type);
    type = (ElasticForce_type*)uClassType::New("Fuse.Motion.Simulation.ElasticForce`1", options);
    type->fp_build_ = ElasticForce_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))ElasticForce__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))ElasticForce__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))ElasticForce__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))ElasticForce__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))ElasticForce__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))ElasticForce__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))ElasticForce__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))ElasticForce__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))ElasticForce__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))ElasticForce__get_IsStatic_fn;
    return type;
}

// public ElasticForce([float scale])
void ElasticForce__ctor__fn(ElasticForce* __this, float* scale)
{
    __this->ctor_(*scale);
}

// private T get_Attraction()
void ElasticForce__get_Attraction_fn(ElasticForce* __this, uTRef __retval)
{
    uT ret17(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret18(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret19(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret20(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret21(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret22(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT v(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT unit(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    v = (uPtr(__this->_blender)->Sub_ex((ElasticForce__get_Destination_fn(__this, &ret18), ret18), (ElasticForce__get_Position_fn(__this, &ret19), ret19), &ret17), ret17);
    double dlength;
    unit = (uPtr(__this->_blender)->ToUnit_ex(v, &dlength, &ret20), ret20);
    float length = (float)dlength;

    if (length < __this->_scale)
        return __retval.Store((uPtr(__this->_blender)->get_Zero_ex(&ret21), ret21)), void();

    float p = ::g::Uno::Math::Pow1(length, __this->AttractionCurve());
    return __retval.Store((uPtr(__this->_blender)->Weight_ex(unit, uCRef((double)p), &ret22), ret22)), void();
}

// public float get_AttractionCurve()
void ElasticForce__get_AttractionCurve_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->AttractionCurve();
}

// public void set_AttractionCurve(float value)
void ElasticForce__set_AttractionCurve_fn(ElasticForce* __this, float* value)
{
    __this->AttractionCurve(*value);
}

// public float get_AttractionForce()
void ElasticForce__get_AttractionForce_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->AttractionForce();
}

// public void set_AttractionForce(float value)
void ElasticForce__set_AttractionForce_fn(ElasticForce* __this, float* value)
{
    __this->AttractionForce(*value);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateNormalized()
void ElasticForce__CreateNormalized_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreatePoints()
void ElasticForce__CreatePoints_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateRadians()
void ElasticForce__CreateRadians_fn(uType* __type, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateUnit(Fuse.Motion.MotionUnit unit)
void ElasticForce__CreateUnit_fn(uType* __type, int32_t* unit, ElasticForce** __retval)
{
    *__retval = ElasticForce::CreateUnit(__type, *unit);
}

// public float get_Damping()
void ElasticForce__get_Damping_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->Damping();
}

// public void set_Damping(float value)
void ElasticForce__set_Damping_fn(ElasticForce* __this, float* value)
{
    __this->Damping(*value);
}

// public T get_Destination()
void ElasticForce__get_Destination_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_attractionDestination()), void();
}

// public void set_Destination(T value)
void ElasticForce__set_Destination_fn(ElasticForce* __this, void* value)
{
    __this->_attractionDestination() = value;
    __this->_isStatic = false;
}

// private float get_Energy()
void ElasticForce__get_Energy_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->Energy();
}

// public float get_EnergyEps()
void ElasticForce__get_EnergyEps_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->EnergyEps();
}

// public void set_EnergyEps(float value)
void ElasticForce__set_EnergyEps_fn(ElasticForce* __this, float* value)
{
    __this->EnergyEps(*value);
}

// public generated bool get_IsLocked()
void ElasticForce__get_IsLocked_fn(ElasticForce* __this, bool* __retval)
{
    *__retval = __this->IsLocked();
}

// public generated void set_IsLocked(bool value)
void ElasticForce__set_IsLocked_fn(ElasticForce* __this, bool* value)
{
    __this->IsLocked(*value);
}

// public bool get_IsStatic()
void ElasticForce__get_IsStatic_fn(ElasticForce* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public void set_IsStatic(bool value)
void ElasticForce__set_IsStatic_fn(ElasticForce* __this, bool* value)
{
    __this->IsStatic(*value);
}

// private void Iterate()
void ElasticForce__Iterate_fn(ElasticForce* __this)
{
    __this->Iterate();
}

// public float get_MaxSpeed()
void ElasticForce__get_MaxSpeed_fn(ElasticForce* __this, float* __retval)
{
    *__retval = __this->MaxSpeed();
}

// public void set_MaxSpeed(float value)
void ElasticForce__set_MaxSpeed_fn(ElasticForce* __this, float* value)
{
    __this->MaxSpeed(*value);
}

// public ElasticForce New([float scale])
void ElasticForce__New1_fn(uType* __type, float* scale, ElasticForce** __retval)
{
    *__retval = ElasticForce::New1(__type, *scale);
}

// public generated T get_Position()
void ElasticForce__get_Position_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_Position()), void();
}

// public generated void set_Position(T value)
void ElasticForce__set_Position_fn(ElasticForce* __this, void* value)
{
    __this->_Position() = value;
}

// public void Reset(T value)
void ElasticForce__Reset_fn(ElasticForce* __this, void* value)
{
    uT ret14(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    ElasticForce__set_Position_fn(__this, value);
    ElasticForce__set_Destination_fn(__this, value);
    ElasticForce__set_Velocity_fn(__this, (uPtr(__this->_blender)->get_Zero_ex(&ret14), ret14));
    __this->IsStatic(true);
}

// public void Start()
void ElasticForce__Start_fn(ElasticForce* __this)
{
    __this->Start();
}

// public void Update(double elapsed)
void ElasticForce__Update_fn(ElasticForce* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity()
void ElasticForce__get_Velocity_fn(ElasticForce* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value)
void ElasticForce__set_Velocity_fn(ElasticForce* __this, void* value)
{
    __this->_velocity() = value;
    __this->_isStatic = false;
}

// public ElasticForce([float scale]) [instance]
void ElasticForce::ctor_(float scale)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _attractionForce = 500.0f;
    _attractionCurve = 0.65f;
    _damping = 10.0f;
    _energyEps = 0.01f;
    timeStep = 0.001;
    _remainTime = 0.0;
    _scale = scale;
}

// public float get_AttractionCurve() [instance]
float ElasticForce::AttractionCurve()
{
    return _attractionCurve;
}

// public void set_AttractionCurve(float value) [instance]
void ElasticForce::AttractionCurve(float value)
{
    _attractionCurve = value;
}

// public float get_AttractionForce() [instance]
float ElasticForce::AttractionForce()
{
    return _attractionForce;
}

// public void set_AttractionForce(float value) [instance]
void ElasticForce::AttractionForce(float value)
{
    _attractionForce = value;
}

// public float get_Damping() [instance]
float ElasticForce::Damping()
{
    return _damping;
}

// public void set_Damping(float value) [instance]
void ElasticForce::Damping(float value)
{
    _damping = value;
}

// private float get_Energy() [instance]
float ElasticForce::Energy()
{
    uT ret24(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret26(__type->T(0), alloca(__type->T(0)->ValueSize));
    double ret23;
    double ret25;
    return (float)((uPtr(_blender)->Length_ex((ElasticForce__get_Attraction_fn(this, &ret24), ret24), &ret23), ret23) + (uPtr(_blender)->Length_ex((ElasticForce__get_Velocity_fn(this, &ret26), ret26), &ret25), ret25));
}

// public float get_EnergyEps() [instance]
float ElasticForce::EnergyEps()
{
    return _energyEps;
}

// public void set_EnergyEps(float value) [instance]
void ElasticForce::EnergyEps(float value)
{
    _energyEps = value;
}

// public generated bool get_IsLocked() [instance]
bool ElasticForce::IsLocked()
{
    return _IsLocked;
}

// public generated void set_IsLocked(bool value) [instance]
void ElasticForce::IsLocked(bool value)
{
    _IsLocked = value;
}

// public bool get_IsStatic() [instance]
bool ElasticForce::IsStatic()
{
    return _isStatic;
}

// public void set_IsStatic(bool value) [instance]
void ElasticForce::IsStatic(bool value)
{
    if (_isStatic != value)
        _isStatic = value;
}

// private void Iterate() [instance]
void ElasticForce::Iterate()
{
    uT ret2(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret3(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret4(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret5(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret6(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret7(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret8(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret9(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret10(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret11(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret12(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret13(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT acc(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT unit(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT step(__type->T(0), alloca(__type->T(0)->ValueSize));
    acc = (uPtr(_blender)->Weight_ex((ElasticForce__get_Attraction_fn(this, &ret3), ret3), uCRef((double)(float)((double)AttractionForce() * timeStep)), &ret2), ret2);
    ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Add_ex((ElasticForce__get_Velocity_fn(this, &ret5), ret5), acc, &ret4), ret4));

    if (_hasMaxSpeed)
    {
        double length;
        unit = (uPtr(_blender)->ToUnit_ex((ElasticForce__get_Velocity_fn(this, &ret7), ret7), &length, &ret6), ret6);

        if (length > (double)_maxSpeed)
            ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex(unit, uCRef((double)_maxSpeed), &ret8), ret8));
    }

    if (!IsLocked())
    {
        step = (uPtr(_blender)->Weight_ex((ElasticForce__get_Velocity_fn(this, &ret10), ret10), uCRef((double)(float)timeStep), &ret9), ret9);
        ElasticForce__set_Position_fn(this, (uPtr(_blender)->Add_ex((ElasticForce__get_Position_fn(this, &ret12), ret12), step, &ret11), ret11));

        if (Energy() < EnergyEps())
        {
            ElasticForce__set_Position_fn(this, (ElasticForce__get_Destination_fn(this, &ret13), ret13));
            IsStatic(true);
        }
    }
}

// public float get_MaxSpeed() [instance]
float ElasticForce::MaxSpeed()
{
    return _maxSpeed;
}

// public void set_MaxSpeed(float value) [instance]
void ElasticForce::MaxSpeed(float value)
{
    _hasMaxSpeed = true;
    _maxSpeed = value;
}

// public void Start() [instance]
void ElasticForce::Start()
{
}

// public void Update(double elapsed) [instance]
void ElasticForce::Update(double elapsed)
{
    uT ret15(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret16(__type->T(0), alloca(__type->T(0)->ValueSize));
    _remainTime = (_remainTime + elapsed);

    while ((_remainTime > 0.0) && !IsStatic())
    {
        Iterate();
        _remainTime = (_remainTime - timeStep);
    }

    if (!IsStatic())
        ElasticForce__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex((ElasticForce__get_Velocity_fn(this, &ret16), ret16), uCRef((double)(float)(1.0 - ::g::Uno::Math::Min(1.0, (double)Damping() * elapsed))), &ret15), ret15));
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateNormalized() [static]
ElasticForce* ElasticForce::CreateNormalized(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.0001f);
    a->AttractionForce(50.0f);
    a->Damping(5.0f);
    a->AttractionCurve(0.75f);
    a->EnergyEps(0.0001f);
    a->MaxSpeed(1.0f);
    return a;
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreatePoints() [static]
ElasticForce* ElasticForce::CreatePoints(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.01f);
    a->AttractionForce(200.0f);
    a->AttractionCurve(0.65f);
    a->Damping(10.0f);
    a->EnergyEps(0.05f);
    return a;
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateRadians() [static]
ElasticForce* ElasticForce::CreateRadians(uType* __type)
{
    ElasticForce* a = ElasticForce::New1(__type, 0.01f);
    a->AttractionForce(200.0f);
    a->Damping(15.0f);
    a->AttractionCurve(0.75f);
    a->EnergyEps(0.01f);
    a->MaxSpeed(6.28318548f);
    return a;
}

// public static Fuse.Motion.Simulation.ElasticForce<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static]
ElasticForce* ElasticForce::CreateUnit(uType* __type, int32_t unit)
{
    switch (unit)
    {
        case 0:
            return ElasticForce::CreatePoints(__type);
        case 1:
            return ElasticForce::CreateNormalized(__type);
        case 2:
            return ElasticForce::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int32_t>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public ElasticForce New([float scale]) [static]
ElasticForce* ElasticForce::New1(uType* __type, float scale)
{
    ElasticForce* obj1 = (ElasticForce*)uNew(__type);
    obj1->ctor_(scale);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/Friction.uno
// ---------------------------------------------------------------------------

// internal sealed class Friction<T>
// {
static void Friction_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), nullptr), offsetof(Friction_type, interface0),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(Friction_type, interface1));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), nullptr), offsetof(Friction, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(Friction, _speedDropout), 0,
        ::g::Uno::Float_typeof(), offsetof(Friction, _kineticDeceleration), 0,
        ::g::Uno::Float_typeof(), offsetof(Friction, _lowFluidDeceleration), 0,
        ::g::Uno::Float_typeof(), offsetof(Friction, _highFluidDeceleration), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Bool_typeof(), offsetof(Friction, _isStatic), 0);
}

Friction_type* Friction_typeof()
{
    static uSStrong<Friction_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 2;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(Friction);
    options.TypeSize = sizeof(Friction_type);
    type = (Friction_type*)uClassType::New("Fuse.Motion.Simulation.Friction`1", options);
    type->fp_build_ = Friction_build;
    type->fp_ctor_ = (void*)Friction__New1_fn;
    type->interface0.fp_get_Position = (void(*)(uObject*, uTRef))Friction__get_Position_fn;
    type->interface0.fp_set_Position = (void(*)(uObject*, void*))Friction__set_Position_fn;
    type->interface0.fp_get_Velocity = (void(*)(uObject*, uTRef))Friction__get_Velocity_fn;
    type->interface0.fp_set_Velocity = (void(*)(uObject*, void*))Friction__set_Velocity_fn;
    type->interface1.fp_Update = (void(*)(uObject*, double*))Friction__Update_fn;
    type->interface1.fp_get_IsStatic = (void(*)(uObject*, bool*))Friction__get_IsStatic_fn;
    return type;
}

// public generated Friction()
void Friction__ctor__fn(Friction* __this)
{
    __this->ctor_();
}

// public static Fuse.Motion.Simulation.Friction<T> CreateNormalized()
void Friction__CreateNormalized_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.Friction<T> CreatePoints()
void Friction__CreatePoints_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.Friction<T> CreateRadians()
void Friction__CreateRadians_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.Friction<T> CreateUnit(Fuse.Motion.MotionUnit unit)
void Friction__CreateUnit_fn(uType* __type, int32_t* unit, Friction** __retval)
{
    *__retval = Friction::CreateUnit(__type, *unit);
}

// public float get_HighFluidDeceleration()
void Friction__get_HighFluidDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->HighFluidDeceleration();
}

// public void set_HighFluidDeceleration(float value)
void Friction__set_HighFluidDeceleration_fn(Friction* __this, float* value)
{
    __this->HighFluidDeceleration(*value);
}

// public bool get_IsStatic()
void Friction__get_IsStatic_fn(Friction* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public float get_KineticDeceleration()
void Friction__get_KineticDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->KineticDeceleration();
}

// public void set_KineticDeceleration(float value)
void Friction__set_KineticDeceleration_fn(Friction* __this, float* value)
{
    __this->KineticDeceleration(*value);
}

// public float get_LowFluidDeceleration()
void Friction__get_LowFluidDeceleration_fn(Friction* __this, float* __retval)
{
    *__retval = __this->LowFluidDeceleration();
}

// public void set_LowFluidDeceleration(float value)
void Friction__set_LowFluidDeceleration_fn(Friction* __this, float* value)
{
    __this->LowFluidDeceleration(*value);
}

// public generated Friction New()
void Friction__New1_fn(uType* __type, Friction** __retval)
{
    *__retval = Friction::New1(__type);
}

// public T get_Position()
void Friction__get_Position_fn(Friction* __this, uTRef __retval)
{
    return __retval.Store(__this->_position()), void();
}

// public void set_Position(T value)
void Friction__set_Position_fn(Friction* __this, void* value)
{
    __this->_position() = value;
}

// public float get_SpeedDropout()
void Friction__get_SpeedDropout_fn(Friction* __this, float* __retval)
{
    *__retval = __this->SpeedDropout();
}

// public void set_SpeedDropout(float value)
void Friction__set_SpeedDropout_fn(Friction* __this, float* value)
{
    __this->SpeedDropout(*value);
}

// public void Update(double elapsed)
void Friction__Update_fn(Friction* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public T get_Velocity()
void Friction__get_Velocity_fn(Friction* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_Velocity(T value)
void Friction__set_Velocity_fn(Friction* __this, void* value)
{
    __this->_velocity() = value;
    __this->_isStatic = false;
}

// public generated Friction() [instance]
void Friction::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _speedDropout = 25.0f;
    _kineticDeceleration = 60.0f;
    _lowFluidDeceleration = 1.5f;
}

// public float get_HighFluidDeceleration() [instance]
float Friction::HighFluidDeceleration()
{
    return _highFluidDeceleration;
}

// public void set_HighFluidDeceleration(float value) [instance]
void Friction::HighFluidDeceleration(float value)
{
    _highFluidDeceleration = value;
}

// public bool get_IsStatic() [instance]
bool Friction::IsStatic()
{
    return _isStatic;
}

// public float get_KineticDeceleration() [instance]
float Friction::KineticDeceleration()
{
    return _kineticDeceleration;
}

// public void set_KineticDeceleration(float value) [instance]
void Friction::KineticDeceleration(float value)
{
    _kineticDeceleration = value;
}

// public float get_LowFluidDeceleration() [instance]
float Friction::LowFluidDeceleration()
{
    return _lowFluidDeceleration;
}

// public void set_LowFluidDeceleration(float value) [instance]
void Friction::LowFluidDeceleration(float value)
{
    _lowFluidDeceleration = value;
}

// public float get_SpeedDropout() [instance]
float Friction::SpeedDropout()
{
    return _speedDropout;
}

// public void set_SpeedDropout(float value) [instance]
void Friction::SpeedDropout(float value)
{
    _speedDropout = value;
}

// public void Update(double elapsed) [instance]
void Friction::Update(double elapsed)
{
    uT ret2(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret3(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret5(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret6(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret7(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT step(__type->T(0), alloca(__type->T(0)->ValueSize));
    double ret4;
    step = (uPtr(_blender)->Weight_ex(_velocity(), uCRef((double)(float)elapsed), &ret2), ret2);
    _position() = (uPtr(_blender)->Add_ex(_position(), step, &ret3), ret3);
    double linear = (uPtr(_blender)->Length_ex(_velocity(), &ret4), ret4);

    if (linear < (double)_speedDropout)
    {
        _velocity() = (uPtr(_blender)->get_Zero_ex(&ret5), ret5);
        _isStatic = true;
        return;
    }

    double fluid = (double)_kineticDeceleration + (linear * (double)_lowFluidDeceleration);
    linear = linear + (-fluid * (double)(float)elapsed);

    if (linear < (double)_speedDropout)
    {
        _velocity() = (uPtr(_blender)->get_Zero_ex(&ret6), ret6);
        _isStatic = true;
        return;
    }

    _velocity() = (::g::Fuse::Internal::Blender__UnitWeight_fn(uPtr(_blender), _velocity(), uCRef(linear), &ret7), ret7);
}

// public static Fuse.Motion.Simulation.Friction<T> CreateNormalized() [static]
Friction* Friction::CreateNormalized(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(0.05f);
    n->KineticDeceleration(0.12f);
    n->LowFluidDeceleration(1.5f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public static Fuse.Motion.Simulation.Friction<T> CreatePoints() [static]
Friction* Friction::CreatePoints(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(25.0f);
    n->KineticDeceleration(60.0f);
    n->LowFluidDeceleration(1.5f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public static Fuse.Motion.Simulation.Friction<T> CreateRadians() [static]
Friction* Friction::CreateRadians(uType* __type)
{
    Friction* n = Friction::New1(__type);
    n->SpeedDropout(0.02f);
    n->KineticDeceleration(2.0f);
    n->LowFluidDeceleration(0.8f);
    n->HighFluidDeceleration(0.0f);
    return n;
}

// public static Fuse.Motion.Simulation.Friction<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static]
Friction* Friction::CreateUnit(uType* __type, int32_t unit)
{
    switch (unit)
    {
        case 0:
            return Friction::CreatePoints(__type);
        case 1:
            return Friction::CreateNormalized(__type);
        case 2:
            return Friction::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int32_t>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public generated Friction New() [static]
Friction* Friction::New1(uType* __type)
{
    Friction* obj1 = (Friction*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/Simulation.uno
// -----------------------------------------------------------------------------

// internal abstract interface MotionSimulation<T>
// {
uInterfaceType* MotionSimulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.MotionSimulation`1", 1, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/BoundedRegion2D.uno
// ----------------------------------------------------------------------------------

// private enum BasicBoundedRegion2D.MoveMode
uEnumType* BasicBoundedRegion2D__MoveMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Motion.Simulation.BasicBoundedRegion2D.MoveMode", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Stop", 0LL,
        "User", 1LL,
        "Friction", 2LL,
        "Snap", 3LL,
        "Destination", 4LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/PointerVelocity.uno
// ----------------------------------------------------------------------------------

// public sealed class PointerVelocity<T>
// {
static void PointerVelocity_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), nullptr));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), nullptr), offsetof(PointerVelocity, _blender), 0,
        ::g::Uno::Double_typeof(), offsetof(PointerVelocity, _speedThreshold), 0,
        ::g::Uno::Float_typeof(), offsetof(PointerVelocity, _period), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        ::g::Uno::Float_typeof(), offsetof(PointerVelocity, _accelThreshold), 0,
        ::g::Uno::Float_typeof(), offsetof(PointerVelocity, _accelLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(PointerVelocity, _accelFactor), 0,
        ::g::Uno::Float_typeof(), offsetof(PointerVelocity, _inSpeedLimit), 0,
        ::g::Uno::Float_typeof(), offsetof(PointerVelocity, _speedDistanceThreshold), 0,
        ::g::Uno::Double_typeof(), offsetof(PointerVelocity, _totalTime), 0,
        ::g::Uno::Double_typeof(), offsetof(PointerVelocity, _totalDistance), 0,
        ::g::Uno::Double_typeof(), offsetof(PointerVelocity, _prevTime), 0);
}

uType* PointerVelocity_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.GenericCount = 1;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(PointerVelocity);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Motion.Simulation.PointerVelocity`1", options);
    type->fp_build_ = PointerVelocity_build;
    type->fp_ctor_ = (void*)PointerVelocity__New1_fn;
    return type;
}

// public generated PointerVelocity()
void PointerVelocity__ctor__fn(PointerVelocity* __this)
{
    __this->ctor_();
}

// public void AddSample(T location, double elapsed, [Fuse.Motion.Simulation.SampleFlags flags])
void PointerVelocity__AddSample_fn(PointerVelocity* __this, void* location, double* elapsed, int32_t* flags)
{
    uT ret2(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret3(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret4(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret5(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT ret6(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT diff(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT unit(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    uT sample(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    int32_t flags_ = *flags;
    double elapsed_ = *elapsed;
    diff = (uPtr(__this->_blender)->Sub_ex(location, __this->_currentLocation(), &ret2), ret2);
    double length;
    unit = (uPtr(__this->_blender)->ToUnit_ex(diff, &length, &ret3), ret3);

    if (length < 9.9999997473787516e-06)
        unit = (uPtr(__this->_blender)->get_Zero_ex(&ret4), ret4);

    __this->_totalDistance = (__this->_totalDistance + length);
    __this->_currentLocation() = location;

    if (((flags_ & 2) == 2) && (length < 1.0))
        return;

    if (elapsed_ < 9.9999997473787516e-06)
        return;

    float speed = (float)(length / elapsed_);

    if ((double)speed < __this->_speedThreshold)
    {
        __this->_velocity() = (uPtr(__this->_blender)->get_Zero_ex(&ret5), ret5);
        __this->_totalDistance = 0.0;
        return;
    }

    double tdP = ::g::Uno::Math::Clamp(__this->_totalDistance / (double)__this->_speedDistanceThreshold, 0.0, 1.0);
    speed = ::g::Uno::Math::Min1((float)((double)__this->_inSpeedLimit * tdP), speed);
    float aSpeed = speed;

    if (tdP >= 1.0)
    {
        float accelRange = ::g::Uno::Math::Clamp1(speed, __this->_accelThreshold, __this->_accelLimit) / (__this->_accelLimit - __this->_accelThreshold);
        float accel = accelRange * __this->_accelFactor;
        aSpeed = speed * accel;
    }

    sample = (uPtr(__this->_blender)->Weight_ex(unit, uCRef((double)aSpeed), &ret6), ret6);
    PointerVelocity__ApplySample_fn(__this, sample, uCRef(elapsed_));
}

// public void AddSampleTime(T location, double timestamp, [Fuse.Motion.Simulation.SampleFlags flags])
void PointerVelocity__AddSampleTime_fn(PointerVelocity* __this, void* location, double* timestamp, int32_t* flags)
{
    double timestamp_ = *timestamp;
    int32_t flags_ = *flags;
    PointerVelocity__AddSample_fn(__this, location, uCRef(timestamp_ - __this->_prevTime), uCRef<int32_t>(flags_));
    __this->_prevTime = timestamp_;
}

// private void ApplySample(T sample, double elapsed)
void PointerVelocity__ApplySample_fn(PointerVelocity* __this, void* sample, double* elapsed)
{
    uT ret7(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    double elapsed_ = *elapsed;

    if (__this->_totalTime < 9.9999997473787516e-06)
        __this->_velocity() = sample;
    else
    {
        double alpha = ::g::Fuse::Internal::Statistics::ContinuousFilterAlpha(elapsed_, (double)__this->_period);
        __this->_velocity() = (uPtr(__this->_blender)->Lerp_ex(__this->_velocity(), sample, uCRef(alpha), &ret7), ret7);
    }

    __this->_totalTime = (__this->_totalTime + elapsed_);
}

// public T get_CurrentVelocity()
void PointerVelocity__get_CurrentVelocity_fn(PointerVelocity* __this, uTRef __retval)
{
    return __retval.Store(__this->_velocity()), void();
}

// public void set_CurrentVelocity(T value)
void PointerVelocity__set_CurrentVelocity_fn(PointerVelocity* __this, void* value)
{
    __this->_velocity() = value;
}

// public generated PointerVelocity New()
void PointerVelocity__New1_fn(uType* __type, PointerVelocity** __retval)
{
    *__retval = PointerVelocity::New1(__type);
}

// public void Reset(T location0)
void PointerVelocity__Reset_fn(PointerVelocity* __this, void* location0)
{
    uT ret8(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    PointerVelocity__Reset1_fn(__this, location0, (uPtr(__this->_blender)->get_Zero_ex(&ret8), ret8), uCRef(0.0));
}

// public void Reset(T location0, T velocity0, [double currentTime])
void PointerVelocity__Reset1_fn(PointerVelocity* __this, void* location0, void* velocity0, double* currentTime)
{
    double currentTime_ = *currentTime;
    __this->_velocity() = velocity0;
    __this->_totalTime = 0.0;
    __this->_startLocation() = (__this->_currentLocation() = location0);
    __this->_totalDistance = 0.0;
    __this->_prevTime = currentTime_;
}

// public generated PointerVelocity() [instance]
void PointerVelocity::ctor_()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _speedThreshold = 60.0;
    _period = 0.12f;
    _accelThreshold = 1000.0f;
    _accelLimit = 2000.0f;
    _accelFactor = 1.5f;
    _inSpeedLimit = 2000.0f;
    _speedDistanceThreshold = 50.0f;
}

// public generated PointerVelocity New() [static]
PointerVelocity* PointerVelocity::New1(uType* __type)
{
    PointerVelocity* obj1 = (PointerVelocity*)uNew(__type);
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/PointerVelocity.uno
// ----------------------------------------------------------------------------------

// public enum SampleFlags
uEnumType* SampleFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Motion.Simulation.SampleFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "Tentative", 1LL,
        "Release", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/Simulation.uno
// -----------------------------------------------------------------------------

// internal abstract interface Simulation
// {
uInterfaceType* Simulation_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Motion.Simulation.Simulation", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Motion/Simulation/SmoothSnap.uno
// -----------------------------------------------------------------------------

// internal sealed class SmoothSnap<T>
// {
static void SmoothSnap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported unit type: ");
    ::TYPES[0] = ::g::Fuse::Internal::BlenderMap_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetPrecalc(
        ::g::Fuse::Internal::BlenderMap_typeof()->MakeMethod(0/*Get<T>*/, type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Fuse::Motion::Simulation::DestinationSimulation_typeof()->MakeType(type->T(0), nullptr), offsetof(SmoothSnap_type, interface0),
        ::g::Fuse::Motion::Simulation::MotionSimulation_typeof()->MakeType(type->T(0), nullptr), offsetof(SmoothSnap_type, interface1),
        ::g::Fuse::Motion::Simulation::Simulation_typeof(), offsetof(SmoothSnap_type, interface2));
    type->SetFields(0,
        ::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), nullptr), offsetof(SmoothSnap, _blender), 0,
        ::g::Uno::Float_typeof(), offsetof(SmoothSnap, _scale), 0,
        ::g::Uno::Float_typeof(), offsetof(SmoothSnap, _speedMin), 0,
        ::g::Uno::Float_typeof(), offsetof(SmoothSnap, _speedDropoutDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(SmoothSnap, _speed), 0,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained,
        type->T(0), (uintptr_t)0, uFieldFlagsConstrained);
}

SmoothSnap_type* SmoothSnap_typeof()
{
    static uSStrong<SmoothSnap_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 8;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.DependencyCount = 1;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(SmoothSnap);
    options.TypeSize = sizeof(SmoothSnap_type);
    type = (SmoothSnap_type*)uClassType::New("Fuse.Motion.Simulation.SmoothSnap`1", options);
    type->fp_build_ = SmoothSnap_build;
    type->interface0.fp_Reset = (void(*)(uObject*, void*))SmoothSnap__Reset_fn;
    type->interface0.fp_Start = (void(*)(uObject*))SmoothSnap__Start_fn;
    type->interface0.fp_get_Destination = (void(*)(uObject*, uTRef))SmoothSnap__get_Destination_fn;
    type->interface0.fp_set_Destination = (void(*)(uObject*, void*))SmoothSnap__set_Destination_fn;
    type->interface1.fp_get_Position = (void(*)(uObject*, uTRef))SmoothSnap__get_Position_fn;
    type->interface1.fp_set_Position = (void(*)(uObject*, void*))SmoothSnap__set_Position_fn;
    type->interface1.fp_get_Velocity = (void(*)(uObject*, uTRef))SmoothSnap__get_Velocity_fn;
    type->interface1.fp_set_Velocity = (void(*)(uObject*, void*))SmoothSnap__set_Velocity_fn;
    type->interface2.fp_Update = (void(*)(uObject*, double*))SmoothSnap__Update_fn;
    type->interface2.fp_get_IsStatic = (void(*)(uObject*, bool*))SmoothSnap__get_IsStatic_fn;
    return type;
}

// public SmoothSnap([float scale])
void SmoothSnap__ctor__fn(SmoothSnap* __this, float* scale)
{
    __this->ctor_(*scale);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateNormalized()
void SmoothSnap__CreateNormalized_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreateNormalized(__type);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreatePoints()
void SmoothSnap__CreatePoints_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreatePoints(__type);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateRadians()
void SmoothSnap__CreateRadians_fn(uType* __type, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreateRadians(__type);
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateUnit(Fuse.Motion.MotionUnit unit)
void SmoothSnap__CreateUnit_fn(uType* __type, int32_t* unit, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::CreateUnit(__type, *unit);
}

// public generated T get_Destination()
void SmoothSnap__get_Destination_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Destination()), void();
}

// public generated void set_Destination(T value)
void SmoothSnap__set_Destination_fn(SmoothSnap* __this, void* value)
{
    __this->_Destination() = value;
}

// public bool get_IsStatic()
void SmoothSnap__get_IsStatic_fn(SmoothSnap* __this, bool* __retval)
{
    *__retval = __this->IsStatic();
}

// public SmoothSnap New([float scale])
void SmoothSnap__New1_fn(uType* __type, float* scale, SmoothSnap** __retval)
{
    *__retval = SmoothSnap::New1(__type, *scale);
}

// public generated T get_Position()
void SmoothSnap__get_Position_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Position()), void();
}

// public generated void set_Position(T value)
void SmoothSnap__set_Position_fn(SmoothSnap* __this, void* value)
{
    __this->_Position() = value;
}

// public void Reset(T destination)
void SmoothSnap__Reset_fn(SmoothSnap* __this, void* destination)
{
    uT ret2(__this->__type->T(0), alloca(__this->__type->T(0)->ValueSize));
    SmoothSnap__set_Destination_fn(__this, destination);
    SmoothSnap__set_Velocity_fn(__this, (uPtr(__this->_blender)->get_Zero_ex(&ret2), ret2));
    SmoothSnap__set_Position_fn(__this, destination);
}

// public void SetDuration(float t)
void SmoothSnap__SetDuration_fn(SmoothSnap* __this, float* t)
{
    __this->SetDuration(*t);
}

// public float get_Speed()
void SmoothSnap__get_Speed_fn(SmoothSnap* __this, float* __retval)
{
    *__retval = __this->Speed();
}

// public void set_Speed(float value)
void SmoothSnap__set_Speed_fn(SmoothSnap* __this, float* value)
{
    __this->Speed(*value);
}

// public float get_SpeedDropoutDistance()
void SmoothSnap__get_SpeedDropoutDistance_fn(SmoothSnap* __this, float* __retval)
{
    *__retval = __this->SpeedDropoutDistance();
}

// public void set_SpeedDropoutDistance(float value)
void SmoothSnap__set_SpeedDropoutDistance_fn(SmoothSnap* __this, float* value)
{
    __this->SpeedDropoutDistance(*value);
}

// public void Start()
void SmoothSnap__Start_fn(SmoothSnap* __this)
{
    __this->Start();
}

// public void Update(double elapsed)
void SmoothSnap__Update_fn(SmoothSnap* __this, double* elapsed)
{
    __this->Update(*elapsed);
}

// public generated T get_Velocity()
void SmoothSnap__get_Velocity_fn(SmoothSnap* __this, uTRef __retval)
{
    return __retval.Store(__this->_Velocity()), void();
}

// public generated void set_Velocity(T value)
void SmoothSnap__set_Velocity_fn(SmoothSnap* __this, void* value)
{
    __this->_Velocity() = value;
}

// public SmoothSnap([float scale]) [instance]
void SmoothSnap::ctor_(float scale)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.BlenderMap.Get<T>*/),
    };
    _blender = ((::g::Fuse::Internal::Blender*)::g::Fuse::Internal::BlenderMap::Get(__types[0]));
    _scale = 1.0f;
    _speedMin = 25.0f;
    _speedDropoutDistance = 100.0f;
    _speed = 600.0f;
    _scale = scale;
}

// public bool get_IsStatic() [instance]
bool SmoothSnap::IsStatic()
{
    uT ret15(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret16(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret17(__type->T(0), alloca(__type->T(0)->ValueSize));
    double ret14;
    return (uPtr(_blender)->Length_ex((uPtr(_blender)->Sub_ex((SmoothSnap__get_Destination_fn(this, &ret16), ret16), (SmoothSnap__get_Position_fn(this, &ret17), ret17), &ret15), ret15), &ret14), ret14) < (double)_scale;
}

// public void SetDuration(float t) [instance]
void SmoothSnap::SetDuration(float t)
{
    float s = -((t * _speedMin) - (2.0f * _speedDropoutDistance)) / t;
    Speed(::g::Uno::Math::Max1(s, _speedMin));
}

// public float get_Speed() [instance]
float SmoothSnap::Speed()
{
    return _speed;
}

// public void set_Speed(float value) [instance]
void SmoothSnap::Speed(float value)
{
    _speed = value;
}

// public float get_SpeedDropoutDistance() [instance]
float SmoothSnap::SpeedDropoutDistance()
{
    return _speedDropoutDistance;
}

// public void set_SpeedDropoutDistance(float value) [instance]
void SmoothSnap::SpeedDropoutDistance(float value)
{
    _speedDropoutDistance = value;
}

// public void Start() [instance]
void SmoothSnap::Start()
{
}

// public void Update(double elapsed) [instance]
void SmoothSnap::Update(double elapsed)
{
    uT ret3(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret4(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret5(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret6(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret7(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret8(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret9(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret10(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret11(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret12(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT ret13(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT off(__type->T(0), alloca(__type->T(0)->ValueSize));
    uT offUnit(__type->T(0), alloca(__type->T(0)->ValueSize));
    off = (uPtr(_blender)->Sub_ex((SmoothSnap__get_Destination_fn(this, &ret4), ret4), (SmoothSnap__get_Position_fn(this, &ret5), ret5), &ret3), ret3);
    double offLen;
    offUnit = (uPtr(_blender)->ToUnit_ex(off, &offLen, &ret6), ret6);
    float useSpeed = Speed();

    if (offLen < (double)_speedDropoutDistance)
        useSpeed = (((float)offLen / _speedDropoutDistance) * (Speed() - _speedMin)) + _speedMin;

    if (offLen < ((double)useSpeed * elapsed))
    {
        SmoothSnap__set_Position_fn(this, (SmoothSnap__get_Destination_fn(this, &ret7), ret7));
        SmoothSnap__set_Velocity_fn(this, (uPtr(_blender)->get_Zero_ex(&ret8), ret8));
        return;
    }

    SmoothSnap__set_Velocity_fn(this, (uPtr(_blender)->Weight_ex(offUnit, uCRef((double)useSpeed), &ret9), ret9));
    SmoothSnap__set_Position_fn(this, (uPtr(_blender)->Add_ex((SmoothSnap__get_Position_fn(this, &ret11), ret11), (uPtr(_blender)->Weight_ex((SmoothSnap__get_Velocity_fn(this, &ret13), ret13), uCRef((double)(float)elapsed), &ret12), ret12), &ret10), ret10));
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateNormalized() [static]
SmoothSnap* SmoothSnap::CreateNormalized(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 0.2f;
    s->_speedDropoutDistance = 0.4f;
    s->_speed = 3.5f;
    return s;
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreatePoints() [static]
SmoothSnap* SmoothSnap::CreatePoints(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 25.0f;
    s->_speedDropoutDistance = 100.0f;
    s->_speed = 600.0f;
    return s;
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateRadians() [static]
SmoothSnap* SmoothSnap::CreateRadians(uType* __type)
{
    SmoothSnap* s = SmoothSnap::New1(__type, 1e-05f);
    s->_speedMin = 0.628318548f;
    s->_speedDropoutDistance = 1.2566371f;
    s->_speed = 10.995575f;
    return s;
}

// public static Fuse.Motion.Simulation.SmoothSnap<T> CreateUnit(Fuse.Motion.MotionUnit unit) [static]
SmoothSnap* SmoothSnap::CreateUnit(uType* __type, int32_t unit)
{
    switch (unit)
    {
        case 0:
            return SmoothSnap::CreatePoints(__type);
        case 1:
            return SmoothSnap::CreateNormalized(__type);
        case 2:
            return SmoothSnap::CreateRadians(__type);
    }

    U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], uBox<int32_t>(::g::Fuse::Motion::MotionUnit_typeof(), unit))));
}

// public SmoothSnap New([float scale]) [static]
SmoothSnap* SmoothSnap::New1(uType* __type, float scale)
{
    SmoothSnap* obj1 = (SmoothSnap*)uNew(__type);
    obj1->ctor_(scale);
    return obj1;
}
// }

}}}} // ::g::Fuse::Motion::Simulation
