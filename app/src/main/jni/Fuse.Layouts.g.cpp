// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Fuse.Controls.LayoutControl.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.Elements.Optiona-911492a3.h>
#include <Fuse.Elements.SimpleAlignment.h>
#include <Fuse.InvalidateLayoutReason.h>
#include <Fuse.Layer.h>
#include <Fuse.LayoutDependent.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.LayoutRole.h>
#include <Fuse.Layouts.CircleLayout.h>
#include <Fuse.Layouts.Column.h>
#include <Fuse.Layouts.ColumnLa-5b19dba.h>
#include <Fuse.Layouts.ColumnLayout.h>
#include <Fuse.Layouts.DefaultLayout.h>
#include <Fuse.Layouts.Definiti-53aefe9c.h>
#include <Fuse.Layouts.DefinitionBase.h>
#include <Fuse.Layouts.Dock.h>
#include <Fuse.Layouts.DockLayout.h>
#include <Fuse.Layouts.FlowDirection.h>
#include <Fuse.Layouts.GridChildOrder.h>
#include <Fuse.Layouts.GridLayout.h>
#include <Fuse.Layouts.Layout.h>
#include <Fuse.Layouts.Layouts.h>
#include <Fuse.Layouts.Metric.h>
#include <Fuse.Layouts.Orientation.h>
#include <Fuse.Layouts.Row.h>
#include <Fuse.Layouts.StackLayout.h>
#include <Fuse.Layouts.StackLayoutMode.h>
#include <Fuse.Layouts.WrapLayout.h>
#include <Fuse.Node.h>
#include <Fuse.Properties.h>
#include <Fuse.PropertyHandle.h>
#include <Fuse.Visual.h>
#include <Uno.Action.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Delegate.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Int.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.String.h>
#include <Uno.Vector.h>
static uString* STRINGS[5];
static uType* TYPES[32];

namespace g{
namespace Fuse{
namespace Layouts{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/CircleLayout.uno
// -------------------------------------------------------------------------------------

// public sealed class CircleLayout
// {
static void CircleLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(4,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _radius), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _itemSpacing), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _startAngle), 0,
        ::g::Uno::Float_typeof(), offsetof(CircleLayout, _endAngle), 0);
}

::g::Fuse::Layouts::Layout_type* CircleLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(CircleLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.CircleLayout", options);
    type->fp_build_ = CircleLayout_build;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))CircleLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))CircleLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void CircleLayout__ArrangePaddingBox_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize1(padding_);
    int32_t c = 0;

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != nullptr; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            continue;

        c++;
    }

    float angleRange = __this->_endAngle - __this->_startAngle;
    float step = angleRange / (float)c;
    float arcSize = (step - __this->_itemSpacing) / 2.0f;
    float fitRadius = (__this->Radius() * ::g::Uno::Math::Sin1(arcSize)) / (::g::Uno::Math::Sin1(arcSize) + 1.0f);
    ::g::Uno::Float2 elementRadius = ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Division1(nlp.Size(), 2.0f), __this->Radius() - fitRadius);
    ::g::Uno::Float2 elementSize = ::g::Uno::Float2__op_Multiply1(nlp.Size(), fitRadius);
    float angle = __this->_startAngle;
    nlp.SetSize(elementSize, true, true);

    for (::g::Fuse::Visual* e1 = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e1 != nullptr; e1 = (::g::Fuse::Visual*)uPtr(e1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!__this->AffectsLayout(e1))
            continue;

        float x = (::g::Uno::Math::Cos1(angle) * elementRadius.X) + (lp_.Size().X / 2.0f);
        float y = (::g::Uno::Math::Sin1(angle) * elementRadius.Y) + (lp_.Size().Y / 2.0f);
        ::g::Uno::Float2 p = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(x, y)), ::g::Uno::Float2__op_Division1(elementSize, 2.0f));
        uPtr(e1)->ArrangeMarginBox(p, nlp);
        angle = angle + step;
    }
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void CircleLayout__GetContentSize_fn(CircleLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public float get_Radius()
void CircleLayout__get_Radius_fn(CircleLayout* __this, float* __retval)
{
    *__retval = __this->Radius();
}

// public void set_Radius(float value)
void CircleLayout__set_Radius_fn(CircleLayout* __this, float* value)
{
    __this->Radius(*value);
}

// public float get_Radius() [instance]
float CircleLayout::Radius()
{
    return _radius;
}

// public void set_Radius(float value) [instance]
void CircleLayout::Radius(float value)
{
    _radius = value;
    InvalidateLayout();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno
// -----------------------------------------------------------------------------------

// public sealed class Column
// {
static void Column_build(uType* type)
{
    type->SetFields(8);
}

uType* Column_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Column);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Column", options);
    type->fp_build_ = Column_build;
    type->fp_ctor_ = (void*)Column__New2_fn;
    return type;
}

// public Column()
void Column__ctor_4_fn(Column* __this)
{
    __this->ctor_4();
}

// public Column New()
void Column__New2_fn(Column** __retval)
{
    *__retval = Column::New2();
}

// public Column() [instance]
void Column::ctor_4()
{
    ctor_1();
}

// public Column New() [static]
Column* Column::New2()
{
    Column* obj1 = (Column*)uNew(Column_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/ColumnLayout.uno
// -------------------------------------------------------------------------------------

// public sealed class ColumnLayout
// {
static void ColumnLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Float_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(ColumnLayout, _orientation), 0,
        ::g::Uno::Bool_typeof(), offsetof(ColumnLayout, _hasColumnCount), 0,
        ::g::Uno::Int_typeof(), offsetof(ColumnLayout, _columnCount), 0,
        ::g::Uno::Bool_typeof(), offsetof(ColumnLayout, _hasColumnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _columnSize), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _columnSpacing), 0,
        ::g::Uno::Float_typeof(), offsetof(ColumnLayout, _itemSpacing), 0,
        ::g::Fuse::Layouts::ColumnLayoutSizing_typeof(), offsetof(ColumnLayout, _sizing), 0);
}

::g::Fuse::Layouts::Layout_type* ColumnLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 12;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ColumnLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.ColumnLayout", options);
    type->fp_build_ = ColumnLayout_build;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))ColumnLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))ColumnLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, [bool doArrange], [float4 padding])
void ColumnLayout__Arrange_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(container, *lp, *doArrange, *padding);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void ColumnLayout__ArrangePaddingBox_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    __this->Arrange(container, lp_, true, padding_);
}

// public int get_ColumnCount()
void ColumnLayout__get_ColumnCount_fn(ColumnLayout* __this, int32_t* __retval)
{
    *__retval = __this->ColumnCount();
}

// public void set_ColumnCount(int value)
void ColumnLayout__set_ColumnCount_fn(ColumnLayout* __this, int32_t* value)
{
    __this->ColumnCount(*value);
}

// public float get_ColumnSize()
void ColumnLayout__get_ColumnSize_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSize();
}

// public void set_ColumnSize(float value)
void ColumnLayout__set_ColumnSize_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSize(*value);
}

// public float get_ColumnSpacing()
void ColumnLayout__get_ColumnSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ColumnSpacing();
}

// public void set_ColumnSpacing(float value)
void ColumnLayout__set_ColumnSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ColumnSpacing(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void ColumnLayout__GetContentSize_fn(ColumnLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Arrange(container, lp_, false, ::g::Uno::Float4__New1(0.0f)), void();
}

// public float get_ItemSpacing()
void ColumnLayout__get_ItemSpacing_fn(ColumnLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value)
void ColumnLayout__set_ItemSpacing_fn(ColumnLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// private int LeastAt(float[] c)
void ColumnLayout__LeastAt_fn(ColumnLayout* __this, uArray* c, int32_t* __retval)
{
    *__retval = __this->LeastAt(c);
}

// private float Max(float[] c)
void ColumnLayout__Max_fn(ColumnLayout* __this, uArray* c, float* __retval)
{
    *__retval = __this->Max(c);
}

// public Fuse.Layouts.Orientation get_Orientation()
void ColumnLayout__get_Orientation_fn(ColumnLayout* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value)
void ColumnLayout__set_Orientation_fn(ColumnLayout* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing()
void ColumnLayout__get_Sizing_fn(ColumnLayout* __this, int32_t* __retval)
{
    *__retval = __this->Sizing();
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value)
void ColumnLayout__set_Sizing_fn(ColumnLayout* __this, int32_t* value)
{
    __this->Sizing(*value);
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, [bool doArrange], [float4 padding]) [instance]
::g::Uno::Float2 ColumnLayout::Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding)
{
    bool vert = Orientation() == 1;
    int32_t columnCount = ::g::Uno::Math::Max8(1, ColumnCount());
    float columnSize = ColumnSize();
    float columnSpace = columnSize + ColumnSpacing();
    bool useColumnSize = _hasColumnSize;
    ::g::Uno::Float2 avail = lp.GetAvailableSize();
    avail = ::g::Uno::Float2__op_Subtraction2(avail, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding.X, padding.Y), ::g::Uno::Float2__New2(padding.Z, padding.W)));

    if (!useColumnSize && ((vert && !lp.HasX()) || (!vert && !lp.HasY())))
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (::g::Fuse::Visual* v = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v != nullptr; v = (::g::Fuse::Visual*)uPtr(v)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        {
            if (!AffectsLayout(v))
                continue;

            ::g::Uno::Float2 c = uPtr(v)->GetMarginSize(::g::Fuse::LayoutParams__CreateEmpty());
            mx = ::g::Uno::Math::Max3(mx, c);
        }

        columnSize = vert ? mx.X : mx.Y;
        columnSpace = columnSize + ColumnSpacing();
        useColumnSize = true;
    }

    if (useColumnSize)
    {
        if (!_hasColumnCount)
        {
            if (vert)
                columnCount = (int32_t)::g::Uno::Math::Floor1((avail.X + ColumnSpacing()) / columnSpace);
            else
                columnCount = (int32_t)::g::Uno::Math::Floor1((avail.Y + ColumnSpacing()) / columnSpace);

            columnCount = ::g::Uno::Math::Max8(1, columnCount);
        }

        if (Sizing() == 1)
        {
            columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
            columnSize = columnSpace - ColumnSpacing();
        }
    }
    else
    {
        columnSpace = ((vert ? avail.X : avail.Y) + ColumnSpacing()) / (float)columnCount;
        columnSize = columnSpace - ColumnSpacing();
    }

    uArray* at = uArray::New(::TYPES[2/*float[]*/], columnCount);

    for (::g::Fuse::Visual* v1 = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); v1 != nullptr; v1 = (::g::Fuse::Visual*)uPtr(v1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        ::g::Uno::Float2 avs = ::g::Uno::Float2__New2(vert ? columnSize : 0.0f, vert ? 0.0f : columnSize);
        int32_t col = LeastAt(at);
        ::g::Uno::Float2 nsz;

        if (uPtr(at)->Item<float>(col) > 0.0f)
            uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + ItemSpacing();

        if (doArrange)
        {
            if (ArrangeMarginBoxSpecial(v1, padding, lp))
                continue;

            ::g::Uno::Float2 pos = vert ? ::g::Uno::Float2__New2(padding.X + ((float)col * columnSpace), padding.Y + uPtr(at)->Item<float>(col)) : ::g::Uno::Float2__New2(padding.X + uPtr(at)->Item<float>(col), padding.Y + ((float)col * columnSpace));
            nsz = uPtr(v1)->ArrangeMarginBox(pos, ::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        }
        else if (AffectsLayout(v1))
            nsz = uPtr(v1)->GetMarginSize(::g::Fuse::LayoutParams__CreateXY(avs, vert, !vert));
        else
            continue;

        uPtr(at)->Item<float>(col) = uPtr(at)->Item<float>(col) + (vert ? nsz.Y : nsz.X);
    }

    if (doArrange)
    {
        if (!_hasColumnSize)
            _columnSize = columnSize;

        if (!_hasColumnCount)
            _columnCount = columnCount;
    }

    float size = ((float)columnCount * columnSpace) - ColumnSpacing();
    ::g::Uno::Float2 q = vert ? ::g::Uno::Float2__New2(size, Max(at)) : ::g::Uno::Float2__New2(Max(at), size);
    return q;
}

// public int get_ColumnCount() [instance]
int32_t ColumnLayout::ColumnCount()
{
    return _columnCount;
}

// public void set_ColumnCount(int value) [instance]
void ColumnLayout::ColumnCount(int32_t value)
{
    if (!_hasColumnCount || (_columnCount != value))
    {
        _columnCount = value;
        _hasColumnCount = true;
        InvalidateLayout();
    }
}

// public float get_ColumnSize() [instance]
float ColumnLayout::ColumnSize()
{
    return _columnSize;
}

// public void set_ColumnSize(float value) [instance]
void ColumnLayout::ColumnSize(float value)
{
    if (!_hasColumnSize || (_columnSize != value))
    {
        _hasColumnSize = true;
        _columnSize = value;
        InvalidateLayout();
    }
}

// public float get_ColumnSpacing() [instance]
float ColumnLayout::ColumnSpacing()
{
    return _columnSpacing;
}

// public void set_ColumnSpacing(float value) [instance]
void ColumnLayout::ColumnSpacing(float value)
{
    if (_columnSpacing != value)
    {
        _columnSpacing = value;
        InvalidateLayout();
    }
}

// public float get_ItemSpacing() [instance]
float ColumnLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance]
void ColumnLayout::ItemSpacing(float value)
{
    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// private int LeastAt(float[] c) [instance]
int32_t ColumnLayout::LeastAt(uArray* c)
{
    float sz = uPtr(c)->Item<float>(0);
    int32_t i = 0;

    for (int32_t j = 1; j < c->Length(); j++)
        if (uPtr(c)->Item<float>(j) < sz)
        {
            sz = uPtr(c)->Item<float>(j);
            i = j;
        }

    return i;
}

// private float Max(float[] c) [instance]
float ColumnLayout::Max(uArray* c)
{
    float mx = uPtr(c)->Item<float>(0);

    for (int32_t j = 1; j < c->Length(); j++)
        mx = ::g::Uno::Math::Max1(mx, uPtr(c)->Item<float>(j));

    return mx;
}

// public Fuse.Layouts.Orientation get_Orientation() [instance]
int32_t ColumnLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance]
void ColumnLayout::Orientation(int32_t value)
{
    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.ColumnLayoutSizing get_Sizing() [instance]
int32_t ColumnLayout::Sizing()
{
    return _sizing;
}

// public void set_Sizing(Fuse.Layouts.ColumnLayoutSizing value) [instance]
void ColumnLayout::Sizing(int32_t value)
{
    if (_sizing != value)
    {
        _sizing = value;
        InvalidateLayout();
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/ColumnLayout.uno
// -------------------------------------------------------------------------------------

// public enum ColumnLayoutSizing
uEnumType* ColumnLayoutSizing_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.ColumnLayoutSizing", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Fixed", 0LL,
        "Fill", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno
// -----------------------------------------------------------------------------------

// internal enum DefinitionBase.CreationType
uEnumType* DefinitionBase__CreationType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.DefinitionBase.CreationType", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Explicit", 0LL,
        "Parsed", 1LL,
        "Count", 2LL,
        "Implied", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/DefaultLayout.uno
// --------------------------------------------------------------------------------------

// public sealed class DefaultLayout
// {
static void DefaultLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(4);
}

::g::Fuse::Layouts::Layout_type* DefaultLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DefaultLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DefaultLayout", options);
    type->fp_build_ = DefaultLayout_build;
    type->fp_ctor_ = (void*)DefaultLayout__New2_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DefaultLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DefaultLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int32_t*))DefaultLayout__IsMarginBoxDependent_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated DefaultLayout()
void DefaultLayout__ctor_2_fn(DefaultLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void DefaultLayout__ArrangePaddingBox_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams av = lp_.CloneAndDerive();
    av.RemoveSize(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W)));

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != nullptr; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        if (!__this->ArrangeMarginBoxSpecial(e, padding_, lp_))
            uPtr(e)->ArrangeMarginBox(::g::Uno::Float2__New2(padding_.X, padding_.Y), av);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void DefaultLayout__GetContentSize_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 size = __this->GetElementsSize(container, lp_);
    return *__retval = size, void();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp)
void DefaultLayout__GetElementsSize_fn(DefaultLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(container, *lp);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child)
void DefaultLayout__IsMarginBoxDependent_fn(DefaultLayout* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    return *__retval = 2, void();
}

// public generated DefaultLayout New()
void DefaultLayout__New2_fn(DefaultLayout** __retval)
{
    *__retval = DefaultLayout::New2();
}

// public generated DefaultLayout() [instance]
void DefaultLayout::ctor_2()
{
    ctor_1();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) [instance]
::g::Uno::Float2 DefaultLayout::GetElementsSize(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    ::g::Uno::Float2 ds = ::g::Uno::Float2__New1(0.0f);

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != nullptr; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(e))
            continue;

        ds = ::g::Uno::Math::Max3(ds, uPtr(e)->GetMarginSize(lp));
    }

    return ds;
}

// public generated DefaultLayout New() [static]
DefaultLayout* DefaultLayout::New2()
{
    DefaultLayout* obj1 = (DefaultLayout*)uNew(DefaultLayout_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno
// -----------------------------------------------------------------------------------

// public abstract class DefinitionBase
// {
static void DefinitionBase_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(1,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, _actualOffset), 0,
        DefinitionBase__CreationType_typeof(), offsetof(DefinitionBase, Creation), 0,
        ::g::Fuse::Layouts::Metric_typeof(), offsetof(DefinitionBase, _metric), 0,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, _extent), 0,
        ::g::Uno::Float_typeof(), offsetof(DefinitionBase, ActualExtent), 0,
        ::g::Uno::Bool_typeof(), offsetof(DefinitionBase, HasActualExtent), 0,
        ::g::Uno::Action_typeof(), offsetof(DefinitionBase, Changed1), 0);
}

uType* DefinitionBase_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 8;
    options.MethodTypeCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DefinitionBase);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.DefinitionBase", options);
    type->MethodTypes[0] = type->NewMethodType(1, 0,0);
    type->fp_build_ = DefinitionBase_build;
    return type;
}

// protected DefinitionBase()
void DefinitionBase__ctor_1_fn(DefinitionBase* __this)
{
    __this->ctor_1();
}

// public float get_ActualOffset()
void DefinitionBase__get_ActualOffset_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->ActualOffset();
}

// internal void set_ActualOffset(float value)
void DefinitionBase__set_ActualOffset_fn(DefinitionBase* __this, float* value)
{
    __this->ActualOffset(*value);
}

// internal generated void add_Changed(Uno.Action value)
void DefinitionBase__add_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->add_Changed(value);
}

// internal generated void remove_Changed(Uno.Action value)
void DefinitionBase__remove_Changed_fn(DefinitionBase* __this, uDelegate* value)
{
    __this->remove_Changed(value);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation)
void DefinitionBase__Copy_fn(DefinitionBase* __this, uType* __type, DefinitionBase* copy, int32_t* creation)
{
    __this->Copy(__type, copy, *creation);
}

// public float get_Extent()
void DefinitionBase__get_Extent_fn(DefinitionBase* __this, float* __retval)
{
    *__retval = __this->Extent();
}

// public void set_Extent(float value)
void DefinitionBase__set_Extent_fn(DefinitionBase* __this, float* value)
{
    __this->Extent(*value);
}

// internal bool get_IsImplied()
void DefinitionBase__get_IsImplied_fn(DefinitionBase* __this, bool* __retval)
{
    *__retval = __this->IsImplied();
}

// public Fuse.Layouts.Metric get_Metric()
void DefinitionBase__get_Metric_fn(DefinitionBase* __this, int32_t* __retval)
{
    *__retval = __this->Metric();
}

// public void set_Metric(Fuse.Layouts.Metric value)
void DefinitionBase__set_Metric_fn(DefinitionBase* __this, int32_t* value)
{
    __this->Metric(*value);
}

// protected internal void OnChanged()
void DefinitionBase__OnChanged_fn(DefinitionBase* __this)
{
    __this->OnChanged();
}

// protected DefinitionBase() [instance]
void DefinitionBase::ctor_1()
{
    _metric = 1;
    _extent = 1.0f;
    ctor_();
}

// public float get_ActualOffset() [instance]
float DefinitionBase::ActualOffset()
{
    return _actualOffset;
}

// internal void set_ActualOffset(float value) [instance]
void DefinitionBase::ActualOffset(float value)
{
    _actualOffset = value;
}

// internal generated void add_Changed(Uno.Action value) [instance]
void DefinitionBase::add_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(Changed1, value), ::TYPES[6/*Uno.Action*/]);
}

// internal generated void remove_Changed(Uno.Action value) [instance]
void DefinitionBase::remove_Changed(uDelegate* value)
{
    Changed1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(Changed1, value), ::TYPES[6/*Uno.Action*/]);
}

// internal void Copy<T>(T copy, Fuse.Layouts.DefinitionBase.CreationType creation) [instance]
void DefinitionBase::Copy(uType* __type, DefinitionBase* copy, int32_t creation)
{
    Metric(uPtr(copy)->Metric());
    Extent(copy->Extent());
    Creation = creation;
}

// public float get_Extent() [instance]
float DefinitionBase::Extent()
{
    return _extent;
}

// public void set_Extent(float value) [instance]
void DefinitionBase::Extent(float value)
{
    if (_extent != value)
    {
        _extent = ::g::Uno::Math::Max1(0.0f, value);
        OnChanged();
    }
}

// internal bool get_IsImplied() [instance]
bool DefinitionBase::IsImplied()
{
    return Creation == 3;
}

// public Fuse.Layouts.Metric get_Metric() [instance]
int32_t DefinitionBase::Metric()
{
    return _metric;
}

// public void set_Metric(Fuse.Layouts.Metric value) [instance]
void DefinitionBase::Metric(int32_t value)
{
    if (_metric != value)
    {
        _metric = value;
        OnChanged();
    }
}

// protected internal void OnChanged() [instance]
void DefinitionBase::OnChanged()
{
    if (::g::Uno::Delegate::op_Inequality(Changed1, nullptr))
        uPtr(Changed1)->InvokeVoid();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/DockLayout.uno
// -----------------------------------------------------------------------------------

// public enum Dock
uEnumType* Dock_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.Dock", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Left", 0LL,
        "Right", 1LL,
        "Top", 2LL,
        "Bottom", 3LL,
        "Fill", 4LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/DockLayout.uno
// -----------------------------------------------------------------------------------

// public sealed class DockLayout
// {
// static generated DockLayout()
static void DockLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    DockLayout::_dockProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void DockLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[3] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), nullptr);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[5] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(4,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&DockLayout::_dockProperty_, uFieldFlagsStatic);
}

::g::Fuse::Layouts::Layout_type* DockLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DockLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.DockLayout", options);
    type->fp_build_ = DockLayout_build;
    type->fp_ctor_ = (void*)DockLayout__New2_fn;
    type->fp_cctor_ = DockLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))DockLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))DockLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// public generated DockLayout()
void DockLayout__ctor_2_fn(DockLayout* __this)
{
    __this->ctor_2();
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void DockLayout__ArrangePaddingBox_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float2 availablePosition = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 availableSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != nullptr; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        int32_t d = DockLayout::GetDock(c);
        bool horz = (d == 0) || (d == 1);
        nlp.SetSize(availableSize, !horz, horz);
        ::g::Uno::Float2 desiredSize = (d != 4) ? uPtr(c)->GetMarginSize(nlp) : ::g::Uno::Float2__New1(0.0f);

        switch (d)
        {
            case 0:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.X = (availablePosition.X + desiredSize.X);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 1:
            {
                desiredSize.Y = availableSize.Y;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2((availablePosition.X + availableSize.X) - desiredSize.X, availablePosition.Y), nlp);
                availableSize.X = (availableSize.X - desiredSize.X);
                break;
            }
            case 2:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(availablePosition, nlp);
                availablePosition.Y = (availablePosition.Y + desiredSize.Y);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 3:
            {
                desiredSize.X = availableSize.X;
                nlp.SetSize(desiredSize, true, true);
                uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__New2(availablePosition.X, (availablePosition.Y + availableSize.Y) - desiredSize.Y), nlp);
                availableSize.Y = (availableSize.Y - desiredSize.Y);
                break;
            }
            case 4:
                break;
        }

        availableSize = ::g::Uno::Math::Max3(availableSize, ::g::Uno::Float2__New1(0.0f));
    }

    nlp.SetSize(availableSize, true, true);

    for (::g::Fuse::Visual* c1 = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c1 != nullptr; c1 = (::g::Fuse::Visual*)uPtr(c1)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!__this->AffectsLayout(c1))
            continue;

        if (DockLayout::GetDock(c1) != 4)
            continue;

        uPtr(c1)->ArrangeMarginBox(availablePosition, nlp);
    }
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void DockLayout__GetContentSize_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.SetRelativeSize(lp_.Size(), lp_.HasX(), lp_.HasY());
    return *__retval = __this->MeasureSubtree(container, (::g::Fuse::Node*)uPtr(container)->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]), nlp), void();
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm)
void DockLayout__GetDock_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = DockLayout::GetDock(elm);
}

// private float2 MeasureSubtree(Fuse.Visual container, Fuse.Node child, Fuse.LayoutParams lp)
void DockLayout__MeasureSubtree_fn(DockLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::Node* child, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->MeasureSubtree(container, child, *lp);
}

// public generated DockLayout New()
void DockLayout__New2_fn(DockLayout** __retval)
{
    *__retval = DockLayout::New2();
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock)
void DockLayout__SetDock_fn(::g::Fuse::Visual* elm, int32_t* dock)
{
    DockLayout::SetDock(elm, *dock);
}

uSStrong< ::g::Fuse::PropertyHandle*> DockLayout::_dockProperty_;

// public generated DockLayout() [instance]
void DockLayout::ctor_2()
{
    ctor_1();
}

// private float2 MeasureSubtree(Fuse.Visual container, Fuse.Node child, Fuse.LayoutParams lp) [instance]
::g::Uno::Float2 DockLayout::MeasureSubtree(::g::Fuse::Visual* container, ::g::Fuse::Node* child, ::g::Fuse::LayoutParams lp)
{
    ::g::Fuse::Visual* c = uAs< ::g::Fuse::Visual*>(child, ::TYPES[4/*Fuse.Visual*/]);

    if (child == nullptr)
    {
        ::g::Uno::Float2 mx = ::g::Uno::Float2__New1(0.0f);

        for (c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != nullptr; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
        {
            if (!AffectsLayout(c))
                continue;

            if (DockLayout::GetDock(c) == 4)
            {
                ::g::Uno::Float2 sz = uPtr(c)->GetMarginSize(lp);
                mx = ::g::Uno::Math::Max3(sz, mx);
            }
        }

        return mx;
    }

    if (c == nullptr)
        return MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);

    switch (DockLayout::GetDock(c))
    {
        case 0:
        case 1:
        {
            ::g::Fuse::LayoutParams nlp = lp.Clone();
            nlp.RetainXY(false, nlp.HasY());
            ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(nlp);
            lp.RemoveSize(::g::Uno::Float2__New2(cds.X, 0.0f));
            ::g::Uno::Float2 subtree = MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
            return ::g::Uno::Float2__New2(cds.X + subtree.X, ::g::Uno::Math::Max1(cds.Y, subtree.Y));
        }
        case 2:
        case 3:
        {
            ::g::Fuse::LayoutParams nlp1 = lp.Clone();
            nlp1.RetainXY(nlp1.HasX(), false);
            ::g::Uno::Float2 cds1 = uPtr(c)->GetMarginSize(nlp1);
            lp.RemoveSize(::g::Uno::Float2__New2(0.0f, cds1.Y));
            ::g::Uno::Float2 subtree1 = MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
            return ::g::Uno::Float2__New2(::g::Uno::Math::Max1(cds1.X, subtree1.X), cds1.Y + subtree1.Y);
        }
        case 4:
            return MeasureSubtree(container, (::g::Fuse::Node*)uPtr(child)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), lp);
    }

    return ::g::Uno::Float2__New1(0.0f);
}

// public static Fuse.Layouts.Dock GetDock(Fuse.Visual elm) [static]
int32_t DockLayout::GetDock(::g::Fuse::Visual* elm)
{
    DockLayout_typeof()->Init();
    uObject* val;

    if (uPtr(uPtr(elm)->Properties())->TryGet(DockLayout::_dockProperty_, &val))
        return uUnbox<int32_t>(::g::Fuse::Layouts::Dock_typeof(), val);

    return 4;
}

// public generated DockLayout New() [static]
DockLayout* DockLayout::New2()
{
    DockLayout* obj1 = (DockLayout*)uNew(DockLayout_typeof());
    obj1->ctor_2();
    return obj1;
}

// public static void SetDock(Fuse.Visual elm, Fuse.Layouts.Dock dock) [static]
void DockLayout::SetDock(::g::Fuse::Visual* elm, int32_t dock)
{
    DockLayout_typeof()->Init();
    uPtr(uPtr(elm)->Properties())->Set(DockLayout::_dockProperty_, uBox<int32_t>(::g::Fuse::Layouts::Dock_typeof(), dock));
    elm->InvalidateLayout(2);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/WrapLayout.uno
// -----------------------------------------------------------------------------------

// public enum FlowDirection
uEnumType* FlowDirection_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.FlowDirection", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "LeftToRight", 0LL,
        "RightToLeft", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno
// -----------------------------------------------------------------------------------

// public enum GridChildOrder
uEnumType* GridChildOrder_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.GridChildOrder", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "RowMajor", 0LL,
        "ColumnMajor", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno
// -----------------------------------------------------------------------------------

// public sealed class GridLayout
// {
// static generated GridLayout()
static void GridLayout__cctor_1_fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    ::g::Fuse::Layouts::Row* collection2;
    ::g::Fuse::Layouts::Column* collection1;
    GridLayout::_staticDefaultRow_ = (collection2 = ::g::Fuse::Layouts::Row::New2(), uPtr(collection2)->Metric(3), 3, uPtr(collection2)->Extent(1.0f), 1.0f, collection2);
    GridLayout::_staticDefaultColumn_ = (collection1 = ::g::Fuse::Layouts::Column::New2(), uPtr(collection1)->Metric(3), 3, uPtr(collection1)->Extent(1.0f), 1.0f, collection1);
    GridLayout::_rowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualRowProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_rowSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_actualColumnProperty_ = ::g::Fuse::Properties::CreateHandle();
    GridLayout::_columnSpanProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void GridLayout_build(uType* type)
{
    ::STRINGS[0] = uString::Const("A grid is using incompatible layout parameters which may result in incorrect layout. A grid using `Default` row or column sizing must have only one row or column, or have a known size. Add a `DefaultRow` or `DefaultColumn` to get the desired sizing.");
    ::STRINGS[1] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno");
    ::STRINGS[2] = uString::Const("CheckMeasureSettings");
    ::TYPES[6] = ::g::Uno::Action_typeof();
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[7] = type->MakeMethod(6/*UserCount<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[8] = type->MakeMethod(6/*UserCount<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[9] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Uno::Int_typeof(), nullptr);
    ::TYPES[10] = type->MakeMethod(5/*TrimPad<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[11] = type->MakeMethod(5/*TrimPad<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[12] = ::g::Uno::Collections::ICollection_typeof();
    ::TYPES[13] = ::g::Uno::Collections::IList_typeof();
    ::TYPES[14] = type->MakeMethod(4/*HasDefaultMetric<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[15] = type->MakeMethod(4/*HasDefaultMetric<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[16] = type->MakeMethod(1/*CalcInitialExtents<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[17] = type->MakeMethod(1/*CalcInitialExtents<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[18] = type->MakeMethod(3/*GetTotalProportion<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[19] = type->MakeMethod(3/*GetTotalProportion<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[20] = type->MakeMethod(0/*CalcFill<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[21] = type->MakeMethod(0/*CalcFill<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[22] = type->MakeMethod(2/*CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/, ::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[23] = type->MakeMethod(2/*CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/, ::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[24] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), nullptr);
    ::TYPES[25] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), nullptr);
    ::TYPES[26] = ::g::Fuse::Layouts::DefinitionBase_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[12/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[0]->U(0), nullptr),
        ::TYPES[13/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[0]->U(0), nullptr));
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[12/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[1]->U(0), nullptr),
        ::TYPES[13/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[1]->U(0), nullptr));
    type->MethodTypes[2]->SetPrecalc(
        ::TYPES[12/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[2]->U(0), nullptr),
        ::TYPES[13/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[2]->U(0), nullptr));
    type->MethodTypes[3]->SetPrecalc(
        ::TYPES[12/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[3]->U(0), nullptr),
        ::TYPES[13/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[3]->U(0), nullptr));
    type->MethodTypes[4]->SetPrecalc(
        ::TYPES[12/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[4]->U(0), nullptr),
        ::TYPES[13/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[4]->U(0), nullptr));
    type->MethodTypes[5]->SetPrecalc(
        ::TYPES[12/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[5]->U(0), nullptr),
        ::TYPES[26/*Fuse.Layouts.DefinitionBase*/]->MakeMethod(0/*Copy<T>*/, type->MethodTypes[5]->U(0), nullptr),
        ::TYPES[13/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[5]->U(0), nullptr));
    type->MethodTypes[6]->SetPrecalc(
        ::TYPES[12/*Uno.Collections.ICollection`1*/]->MakeType(type->MethodTypes[6]->U(0), nullptr),
        ::TYPES[13/*Uno.Collections.IList`1*/]->MakeType(type->MethodTypes[6]->U(0), nullptr));
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Layouts::GridChildOrder_typeof(), offsetof(GridLayout, _childOrder), 0,
        ::g::Fuse::Layouts::Row_typeof(), offsetof(GridLayout, _defaultRow), 0,
        ::g::Fuse::Layouts::Column_typeof(), offsetof(GridLayout, _defaultColumn), 0,
        ::g::Uno::Float_typeof(), offsetof(GridLayout, _cellSpacing), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(GridLayout, _contentAlignment), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Layouts::Row_typeof(), nullptr), offsetof(GridLayout, _rows), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Layouts::Column_typeof(), nullptr), offsetof(GridLayout, _columns), 0,
        ::g::Uno::Bool_typeof(), offsetof(GridLayout, _checkMeasureWarning), 0,
        ::g::Fuse::Layouts::Row_typeof(), (uintptr_t)&GridLayout::_staticDefaultRow_, uFieldFlagsStatic,
        ::g::Fuse::Layouts::Column_typeof(), (uintptr_t)&GridLayout::_staticDefaultColumn_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_rowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_actualRowProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_rowSpanProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_columnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_actualColumnProperty_, uFieldFlagsStatic,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&GridLayout::_columnSpanProperty_, uFieldFlagsStatic);
}

::g::Fuse::Layouts::Layout_type* GridLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 20;
    options.InterfaceCount = 1;
    options.MethodTypeCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(GridLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.GridLayout", options);
    type->MethodTypes[0] = type->NewMethodType(1, 2,0);
    type->MethodTypes[1] = type->NewMethodType(1, 2,0);
    type->MethodTypes[2] = type->NewMethodType(1, 2,0);
    type->MethodTypes[3] = type->NewMethodType(1, 2,0);
    type->MethodTypes[4] = type->NewMethodType(1, 2,0);
    type->MethodTypes[5] = type->NewMethodType(1, 3,0);
    type->MethodTypes[6] = type->NewMethodType(1, 2,0);
    type->fp_build_ = GridLayout_build;
    type->fp_cctor_ = GridLayout__cctor_1_fn;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))GridLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))GridLayout__GetContentSize_fn;
    type->fp_IsMarginBoxDependent = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, int32_t*))GridLayout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnRooted_fn;
    type->fp_OnUnrooted = (void(*)(::g::Fuse::Layouts::Layout*))GridLayout__OnUnrooted_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// private bool AddListener(Fuse.Layouts.DefinitionBase item)
void GridLayout__AddListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->AddListener(item);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void GridLayout__ArrangePaddingBox_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::Layouts::Column* ret4;
    ::g::Fuse::Layouts::Column* ret5;
    ::g::Fuse::Layouts::Row* ret6;
    ::g::Fuse::Layouts::Row* ret7;
    ::g::Uno::Float2 remainSize = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp_.Size(), ::g::Uno::Float2__New2(padding_.X, padding_.Y)), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Uno::Float2 measured = __this->Measure(container, ::g::Fuse::LayoutParams__Create(remainSize));
    ::g::Uno::Float2 off = ::g::Uno::Float2__New1(0.0f);
    int32_t eca = __this->EffectiveContentAlignment();

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(eca))
    {
        case 0:
        {
            off.X = padding_.X;
            break;
        }
        case 1:
        {
            off.X = (((remainSize.X / 2.0f) - (measured.X / 2.0f)) + padding_.X);
            break;
        }
        case 2:
        {
            off.X = ((lp_.X() - measured.X) - padding_.Z);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(eca))
    {
        case 0:
        {
            off.Y = padding_.Y;
            break;
        }
        case 1:
        {
            off.Y = (((remainSize.Y / 2.0f) - (measured.Y / 2.0f)) + padding_.Y);
            break;
        }
        case 2:
        {
            off.Y = ((lp_.Y() - measured.Y) - padding_.W);
            break;
        }
    }

    float effectiveCellSpacing = __this->EffectiveCellSpacing();
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();

    for (::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); child != nullptr; child = (::g::Fuse::Visual*)uPtr(child)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(child, padding_, lp_))
            continue;

        int32_t column = __this->GetActualColumn(child);
        int32_t row = __this->GetActualRow(child);
        int32_t rowSpan = GridLayout::GetRowSpan(child);
        int32_t columnSpan = GridLayout::GetColumnSpan(child);
        float x = 0.0f;
        float y = 0.0f;
        float w = remainSize.X;
        float h = remainSize.Y;

        if ((column >= 0) && (column < uPtr(__this->_columns)->Count()))
        {
            ::g::Fuse::Layouts::Column* c = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_columns), uCRef<int32_t>(column), &ret4), ret4);
            x = uPtr(c)->ActualOffset();
            w = c->ActualExtent;

            for (int32_t s = column + 1; s < ::g::Uno::Math::Min8(uPtr(__this->_columns)->Count(), column + columnSpan); ++s)
                w = w + (uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_columns), uCRef<int32_t>(s), &ret5), ret5))->ActualExtent + effectiveCellSpacing);
        }

        if ((row >= 0) && (row < uPtr(__this->_rows)->Count()))
        {
            ::g::Fuse::Layouts::Row* r = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_rows), uCRef<int32_t>(row), &ret6), ret6);
            y = uPtr(r)->ActualOffset();
            h = r->ActualExtent;

            for (int32_t s1 = row + 1; s1 < ::g::Uno::Math::Min8(uPtr(__this->_rows)->Count(), row + rowSpan); ++s1)
                h = h + (uPtr((::g::Uno::Collections::RootableList__get_Item_fn(uPtr(__this->_rows), uCRef<int32_t>(s1), &ret7), ret7))->ActualExtent + effectiveCellSpacing);
        }

        nlp.SetSize(::g::Uno::Float2__New2(w, h), true, true);
        uPtr(child)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(off, ::g::Uno::Float2__New2(x, y)), nlp);
    }
}

// private void CalcActualPositions(Fuse.Visual container)
void GridLayout__CalcActualPositions_fn(GridLayout* __this, ::g::Fuse::Visual* container)
{
    __this->CalcActualPositions(container);
}

// private void CalcAuto(Fuse.Visual container, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight)
void GridLayout__CalcAuto_fn(GridLayout* __this, ::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool* secondPass, bool* hasFirstHorzSize, bool* hasFirstVertSize, bool* expandWidth, bool* expandHeight)
{
    __this->CalcAuto(container, availableWidth, availableHeight, *secondPass, *hasFirstHorzSize, *hasFirstVertSize, *expandWidth, *expandHeight);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand)
void GridLayout__CalcFill_fn(GridLayout* __this, uType* __type, uObject* list, float* available, float* proportion, bool* expand)
{
    __this->CalcFill(__type, list, *available, *proportion, *expand);
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto)
void GridLayout__CalcInitialExtents_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* used, bool* hasAuto)
{
    __this->CalcInitialExtents(__type, list, *expand, used, hasAuto);
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing)
void GridLayout__CalcTotalExtentAndOffset_fn(GridLayout* __this, uType* __type, uObject* list, float* effectiveCellSpacing, float* __retval)
{
    *__retval = __this->CalcTotalExtentAndOffset(__type, list, *effectiveCellSpacing);
}

// public float get_CellSpacing()
void GridLayout__get_CellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->CellSpacing();
}

// public void set_CellSpacing(float value)
void GridLayout__set_CellSpacing_fn(GridLayout* __this, float* value)
{
    __this->CellSpacing(*value);
}

// private void Changed()
void GridLayout__Changed_fn(GridLayout* __this)
{
    __this->Changed();
}

// private void CheckMeasureSettings(bool hasX, bool hasY)
void GridLayout__CheckMeasureSettings_fn(GridLayout* __this, bool* hasX, bool* hasY)
{
    __this->CheckMeasureSettings(*hasX, *hasY);
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder()
void GridLayout__get_ChildOrder_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->ChildOrder();
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value)
void GridLayout__set_ChildOrder_fn(GridLayout* __this, int32_t* value)
{
    __this->ChildOrder(*value);
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList()
void GridLayout__get_ColumnList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->ColumnList();
}

// public Fuse.Elements.Alignment get_ContentAlignment()
void GridLayout__get_ContentAlignment_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value)
void GridLayout__set_ContentAlignment_fn(GridLayout* __this, int32_t* value)
{
    __this->ContentAlignment(*value);
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r)
void GridLayout__DefinitionAdded_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionAdded(r);
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r)
void GridLayout__DefinitionRemoved_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* r)
{
    __this->DefinitionRemoved(r);
}

// private float get_EffectiveCellSpacing()
void GridLayout__get_EffectiveCellSpacing_fn(GridLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveCellSpacing();
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment()
void GridLayout__get_EffectiveContentAlignment_fn(GridLayout* __this, int32_t* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand)
void GridLayout__EffectiveMetric_fn(GridLayout* __this, int32_t* src, bool* expand, int32_t* __retval)
{
    *__retval = __this->EffectiveMetric(*src, *expand);
}

// private int GetActualColumn(Fuse.Visual elm)
void GridLayout__GetActualColumn_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = __this->GetActualColumn(elm);
}

// private int GetActualRow(Fuse.Visual elm)
void GridLayout__GetActualRow_fn(GridLayout* __this, ::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = __this->GetActualRow(elm);
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY)
void GridLayout__GetAutoSize_fn(GridLayout* __this, ::g::Fuse::Visual* child, int32_t* x0, int32_t* y0, bool* expandX, bool* expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetAutoSize(child, *x0, *y0, *expandX, *expandY, knowX, knowY, autoX, autoY);
}

// public static int GetColumn(Fuse.Visual elm)
void GridLayout__GetColumn_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetColumn(elm);
}

// private Fuse.Layouts.Column GetColumnData(int column)
void GridLayout__GetColumnData_fn(GridLayout* __this, int32_t* column, ::g::Fuse::Layouts::Column** __retval)
{
    *__retval = __this->GetColumnData(*column);
}

// public static int GetColumnSpan(Fuse.Visual elm)
void GridLayout__GetColumnSpan_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetColumnSpan(elm);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void GridLayout__GetContentSize_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Measure(container, lp_), void();
}

// public static int GetRow(Fuse.Visual elm)
void GridLayout__GetRow_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetRow(elm);
}

// private Fuse.Layouts.Row GetRowData(int row)
void GridLayout__GetRowData_fn(GridLayout* __this, int32_t* row, ::g::Fuse::Layouts::Row** __retval)
{
    *__retval = __this->GetRowData(*row);
}

// public static int GetRowSpan(Fuse.Visual elm)
void GridLayout__GetRowSpan_fn(::g::Fuse::Visual* elm, int32_t* __retval)
{
    *__retval = GridLayout::GetRowSpan(elm);
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand)
void GridLayout__GetTotalProportion_fn(GridLayout* __this, uType* __type, uObject* list, bool* expand, float* __retval)
{
    *__retval = __this->GetTotalProportion(__type, list, *expand);
}

// private bool HasDefaultMetric<T>(Uno.Collections.IList<T> list)
void GridLayout__HasDefaultMetric_fn(GridLayout* __this, uType* __type, uObject* list, bool* __retval)
{
    *__retval = __this->HasDefaultMetric(__type, list);
}

// internal override sealed Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child)
void GridLayout__IsMarginBoxDependent_fn(GridLayout* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    ::g::Fuse::Layouts::Column* c = __this->GetColumnData(__this->GetActualColumn(child));
    ::g::Fuse::Layouts::Row* r = __this->GetRowData(__this->GetActualRow(child));

    if ((c == nullptr) || (r == nullptr))
        return *__retval = 0, void();

    return *__retval = ((__this->EffectiveMetric(uPtr(c)->Metric(), false) != 2) && (__this->EffectiveMetric(uPtr(r)->Metric(), false) != 2)) ? 0 : 4, void();
}

// private float2 Measure(Fuse.Visual container, Fuse.LayoutParams lp)
void GridLayout__Measure_fn(GridLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Measure(container, *lp);
}

// protected override sealed void OnRooted()
void GridLayout__OnRooted_fn(GridLayout* __this)
{
    ::g::Fuse::Layouts::Layout__OnRooted_fn(__this);
    uPtr(__this->_rows)->RootSubscribe(uDelegate::New(::TYPES[24/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionAdded_fn, __this), uDelegate::New(::TYPES[24/*Uno.Action<Fuse.Layouts.Row>*/], (void*)GridLayout__DefinitionRemoved_fn, __this));
    uPtr(__this->_columns)->RootSubscribe(uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionAdded_fn, __this), uDelegate::New(::TYPES[25/*Uno.Action<Fuse.Layouts.Column>*/], (void*)GridLayout__DefinitionRemoved_fn, __this));
}

// protected override sealed void OnUnrooted()
void GridLayout__OnUnrooted_fn(GridLayout* __this)
{
    ::g::Fuse::Layouts::Layout__OnUnrooted_fn(__this);
    uPtr(__this->_columns)->RootUnsubscribe();
    uPtr(__this->_rows)->RootUnsubscribe();
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item)
void GridLayout__RemoveListener_fn(GridLayout* __this, ::g::Fuse::Layouts::DefinitionBase* item, bool* __retval)
{
    *__retval = __this->RemoveListener(item);
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList()
void GridLayout__get_RowList_fn(GridLayout* __this, uObject** __retval)
{
    *__retval = __this->RowList();
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial)
void GridLayout__TrimPad_fn(GridLayout* __this, uType* __type, uObject* list, int32_t* count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    __this->TrimPad(__type, list, *count, primordial);
}

// private int UserCount<T>(Uno.Collections.IList<T> list)
void GridLayout__UserCount_fn(GridLayout* __this, uType* __type, uObject* list, int32_t* __retval)
{
    *__retval = __this->UserCount(__type, list);
}

uSStrong< ::g::Fuse::Layouts::Row*> GridLayout::_staticDefaultRow_;
uSStrong< ::g::Fuse::Layouts::Column*> GridLayout::_staticDefaultColumn_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualRowProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_rowSpanProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_actualColumnProperty_;
uSStrong< ::g::Fuse::PropertyHandle*> GridLayout::_columnSpanProperty_;

// private bool AddListener(Fuse.Layouts.DefinitionBase item) [instance]
bool GridLayout::AddListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->add_Changed(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// private void CalcActualPositions(Fuse.Visual container) [instance]
void GridLayout::CalcActualPositions(::g::Fuse::Visual* container)
{
    int32_t ret8;
    int32_t ret9;
    bool rowMajor = ChildOrder() == 0;
    int32_t minorCount = ::g::Uno::Math::Max8(1, rowMajor ? UserCount(::TYPES[7/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Column>*/], ColumnList()) : UserCount(::TYPES[8/*Fuse.Layouts.GridLayout.UserCount<Fuse.Layouts.Row>*/], RowList()));

    for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != nullptr; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(e))
            continue;

        if (rowMajor)
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetColumn(e) + GridLayout::GetColumnSpan(e));
        else
            minorCount = ::g::Uno::Math::Max8(minorCount, GridLayout::GetRow(e) + GridLayout::GetRowSpan(e));
    }

    ::g::Uno::Collections::List* majorAvail = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New2(::TYPES[9/*Uno.Collections.List<int>*/], minorCount);

    for (int32_t c = 0; c < minorCount; c++)
        ::g::Uno::Collections::List__Add_fn(uPtr(majorAvail), uCRef<int32_t>(0));

    int32_t rowAt = 0;
    int32_t colAt = 0;
    int32_t maxRow = 0;
    int32_t maxCol = 0;

    for (::g::Fuse::Visual* elm = (::g::Fuse::Visual*)container->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); elm != nullptr; elm = (::g::Fuse::Visual*)uPtr(elm)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(elm))
            continue;

        uObject* v;
        bool haveCol = false, haveRow = false;

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty_, &v))
        {
            colAt = uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
            haveCol = true;
        }

        if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty_, &v))
        {
            rowAt = uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
            haveRow = true;
        }

        if (haveRow && !haveCol)
            colAt = 0;

        if (haveCol && !haveRow)
            rowAt = 0;

        if (!haveRow && !haveCol)
        {
            if (rowMajor)

                while (rowAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int32_t>(colAt), &ret8), ret8))
                {
                    colAt++;

                    if (colAt >= minorCount)
                    {
                        rowAt++;
                        colAt = 0;
                    }
                }
            else

                while (colAt < (::g::Uno::Collections::List__get_Item_fn(uPtr(majorAvail), uCRef<int32_t>(rowAt), &ret9), ret9))
                {
                    rowAt++;

                    if (rowAt >= minorCount)
                    {
                        colAt++;
                        rowAt = 0;
                    }
                }
        }

        uPtr(uPtr(elm)->Properties())->Set(GridLayout::_actualRowProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), rowAt));
        uPtr(elm->Properties())->Set(GridLayout::_actualColumnProperty_, uBox<int32_t>(::g::Uno::Int_typeof(), colAt));
        int32_t xs = GridLayout::GetColumnSpan(elm);
        int32_t ys = GridLayout::GetRowSpan(elm);
        maxRow = ::g::Uno::Math::Max8(maxRow, rowAt + ys);
        maxCol = ::g::Uno::Math::Max8(maxCol, colAt + xs);

        if (rowMajor)

            for (int32_t c1 = colAt; c1 < ::g::Uno::Math::Min8(minorCount, colAt + xs); c1++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int32_t>(c1), uCRef<int32_t>(rowAt + ys));
        else

            for (int32_t c2 = rowAt; c2 < ::g::Uno::Math::Min8(minorCount, rowAt + ys); c2++)
                ::g::Uno::Collections::List__set_Item_fn(uPtr(majorAvail), uCRef<int32_t>(c2), uCRef<int32_t>(colAt + xs));
    }

    TrimPad(::TYPES[10/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Row>*/], (uObject*)_rows, maxRow, _defaultRow);
    TrimPad(::TYPES[11/*Fuse.Layouts.GridLayout.TrimPad<Fuse.Layouts.Column>*/], (uObject*)_columns, maxCol, _defaultColumn);
}

// private void CalcAuto(Fuse.Visual container, float& availableWidth, float& availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight) [instance]
void GridLayout::CalcAuto(::g::Fuse::Visual* container, float* availableWidth, float* availableHeight, bool secondPass, bool hasFirstHorzSize, bool hasFirstVertSize, bool expandWidth, bool expandHeight)
{
    for (::g::Fuse::Visual* child = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); child != nullptr; child = (::g::Fuse::Visual*)uPtr(child)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(child))
            continue;

        int32_t x = GetActualColumn(child);
        int32_t y = GetActualRow(child);
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if (colData == nullptr)
            continue;

        ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

        if (rowData == nullptr)
            continue;

        bool sizeMatch = ((EffectiveMetric(uPtr(rowData)->Metric(), expandHeight) == 1) && !hasFirstVertSize) || ((EffectiveMetric(uPtr(colData)->Metric(), expandWidth) == 1) && !hasFirstHorzSize);

        if (sizeMatch != secondPass)
            continue;

        bool knowX = false;
        bool knowY = false;
        bool autoX = false;
        bool autoY = false;
        ::g::Uno::Float2 knowSize = GetAutoSize(child, x, y, expandWidth, expandHeight, &knowX, &knowY, &autoX, &autoY);

        if (!autoX && !autoY)
            continue;

        ::g::Fuse::LayoutParams clp = ::g::Fuse::LayoutParams__CreateXY(knowSize, knowX && !autoX, knowY && !autoY);
        ::g::Uno::Float2 cds = uPtr(child)->GetMarginSize(clp);

        if (autoX)
        {
            float w = ::g::Uno::Math::Max1(uPtr(colData)->ActualExtent, cds.X);
            *availableWidth = *availableWidth - (w - colData->ActualExtent);
            colData->ActualExtent = w;
            colData->HasActualExtent = true;
        }

        if (autoY)
        {
            float h = ::g::Uno::Math::Max1(uPtr(rowData)->ActualExtent, cds.Y);
            *availableHeight = *availableHeight - (h - rowData->ActualExtent);
            rowData->ActualExtent = h;
            rowData->HasActualExtent = true;
        }
    }

    *availableWidth = ::g::Uno::Math::Max1(*availableWidth, 0.0f);
    *availableHeight = ::g::Uno::Math::Max1(*availableHeight, 0.0f);
}

// private void CalcFill<T>(Uno.Collections.IList<T> list, float available, float proportion, bool expand) [instance]
void GridLayout::CalcFill(uType* __type, uObject* list, float available, float proportion, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret10;
    float extraWidth = 0.0f;
    float colWidth = available / proportion;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret10), ret10);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) != 1)
            continue;

        float w = Snap((uPtr(c)->Extent() * colWidth) + extraWidth);
        extraWidth = extraWidth + ((c->Extent() * colWidth) - w);
        c->ActualExtent = w;
        c->HasActualExtent = true;
    }
}

// private void CalcInitialExtents<T>(Uno.Collections.IList<T> list, bool expand, float& used, bool& hasAuto) [instance]
void GridLayout::CalcInitialExtents(uType* __type, uObject* list, bool expand, float* used, bool* hasAuto)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret11;
    *hasAuto = false;
    *used = 0.0f;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret11), ret11);
        uPtr(c)->ActualExtent = 0.0f;
        c->HasActualExtent = false;

        if ((c != nullptr) && (EffectiveMetric(c->Metric(), expand) == 0))
        {
            uPtr(c)->ActualExtent = uPtr(c)->Extent();
            c->HasActualExtent = true;
            *used = *used + c->Extent();
        }

        if (EffectiveMetric(c->Metric(), expand) == 2)
            *hasAuto = true;
    }
}

// private float CalcTotalExtentAndOffset<T>(Uno.Collections.IList<T> list, float effectiveCellSpacing) [instance]
float GridLayout::CalcTotalExtentAndOffset(uType* __type, uObject* list, float effectiveCellSpacing)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret12;
    float total = 0.0f;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        if (i > 0)
            total = total + effectiveCellSpacing;

        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret12), ret12);
        uPtr(c)->ActualOffset(total);
        total = total + c->ActualExtent;
    }

    return total;
}

// public float get_CellSpacing() [instance]
float GridLayout::CellSpacing()
{
    return _cellSpacing;
}

// public void set_CellSpacing(float value) [instance]
void GridLayout::CellSpacing(float value)
{
    if (_cellSpacing != value)
    {
        _cellSpacing = value;
        Changed();
    }
}

// private void Changed() [instance]
void GridLayout::Changed()
{
    InvalidateLayout();
}

// private void CheckMeasureSettings(bool hasX, bool hasY) [instance]
void GridLayout::CheckMeasureSettings(bool hasX, bool hasY)
{
    bool bad = false;

    if ((HasDefaultMetric(::TYPES[14/*Fuse.Layouts.GridLayout.HasDefaultMetric<Fuse.Layouts.Row>*/], (uObject*)_rows) && !hasY) && (uPtr(_rows)->Count() > 1))
        bad = true;

    if ((HasDefaultMetric(::TYPES[15/*Fuse.Layouts.GridLayout.HasDefaultMetric<Fuse.Layouts.Column>*/], (uObject*)_columns) && !hasX) && (uPtr(_columns)->Count() > 1))
        bad = true;

    if (bad && !_checkMeasureWarning)
    {
        _checkMeasureWarning = true;
        ::g::Fuse::Diagnostics::UserError(::STRINGS[0/*"A grid is u...*/], this, ::STRINGS[1/*"/Users/mort...*/], 1014, ::STRINGS[2/*"CheckMeasur...*/], nullptr);
    }
}

// public Fuse.Layouts.GridChildOrder get_ChildOrder() [instance]
int32_t GridLayout::ChildOrder()
{
    return _childOrder;
}

// public void set_ChildOrder(Fuse.Layouts.GridChildOrder value) [instance]
void GridLayout::ChildOrder(int32_t value)
{
    if (_childOrder != value)
    {
        _childOrder = value;
        Changed();
    }
}

// public Uno.Collections.IList<Fuse.Layouts.Column> get_ColumnList() [instance]
uObject* GridLayout::ColumnList()
{
    return (uObject*)_columns;
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance]
int32_t GridLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance]
void GridLayout::ContentAlignment(int32_t value)
{
    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        Changed();
    }
}

// private void DefinitionAdded(Fuse.Layouts.DefinitionBase r) [instance]
void GridLayout::DefinitionAdded(::g::Fuse::Layouts::DefinitionBase* r)
{
    if (AddListener(r))
        Changed();
}

// private void DefinitionRemoved(Fuse.Layouts.DefinitionBase r) [instance]
void GridLayout::DefinitionRemoved(::g::Fuse::Layouts::DefinitionBase* r)
{
    if (RemoveListener(r))
        Changed();
}

// private float get_EffectiveCellSpacing() [instance]
float GridLayout::EffectiveCellSpacing()
{
    return SnapUp(CellSpacing());
}

// private Fuse.Elements.Alignment get_EffectiveContentAlignment() [instance]
int32_t GridLayout::EffectiveContentAlignment()
{
    int32_t ca = ContentAlignment();

    if (ca == 0)
    {
        if (Container != nullptr)
            ca = uPtr(Container)->Alignment();
        else
            ca = 5;
    }

    return ca;
}

// private Fuse.Layouts.Metric EffectiveMetric(Fuse.Layouts.Metric src, bool expand) [instance]
int32_t GridLayout::EffectiveMetric(int32_t src, bool expand)
{
    if (src == 3)
        return expand ? 1 : 2;

    return src;
}

// private int GetActualColumn(Fuse.Visual elm) [instance]
int32_t GridLayout::GetActualColumn(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualColumnProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private int GetActualRow(Fuse.Visual elm) [instance]
int32_t GridLayout::GetActualRow(::g::Fuse::Visual* elm)
{
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_actualRowProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);

    return -1;
}

// private float2 GetAutoSize(Fuse.Visual child, int x0, int y0, bool expandX, bool expandY, bool& knowX, bool& knowY, bool& autoX, bool& autoY) [instance]
::g::Uno::Float2 GridLayout::GetAutoSize(::g::Fuse::Visual* child, int32_t x0, int32_t y0, bool expandX, bool expandY, bool* knowX, bool* knowY, bool* autoX, bool* autoY)
{
    int32_t xs = GridLayout::GetColumnSpan(child);
    int32_t ys = GridLayout::GetRowSpan(child);
    ::g::Uno::Float2 sz = ::g::Uno::Float2__New1(0.0f);
    *knowX = true;
    *knowY = true;
    *autoX = xs == 1;
    *autoY = ys == 1;

    for (int32_t x = x0; x < (x0 + xs); x++)
    {
        ::g::Fuse::Layouts::Column* colData = GetColumnData(x);

        if ((colData == nullptr) || (EffectiveMetric(uPtr(colData)->Metric(), expandX) == 2))
            *knowX = false;
        else
        {
            *autoX = false;

            if (!uPtr(colData)->HasActualExtent)
                *knowX = false;
            else
                sz.X = (sz.X + uPtr(colData)->ActualExtent);
        }

        for (int32_t y = y0; y < (y0 + ys); y++)
        {
            ::g::Fuse::Layouts::Row* rowData = GetRowData(y);

            if ((rowData == nullptr) || (EffectiveMetric(uPtr(rowData)->Metric(), expandY) == 2))
                *knowY = false;
            else
            {
                *autoY = false;

                if (!uPtr(rowData)->HasActualExtent)
                    *knowY = false;
                else
                    sz.Y = (sz.Y + uPtr(rowData)->ActualExtent);
            }
        }
    }

    return sz;
}

// private Fuse.Layouts.Column GetColumnData(int column) [instance]
::g::Fuse::Layouts::Column* GridLayout::GetColumnData(int32_t column)
{
    ::g::Fuse::Layouts::Column* ret13;

    if ((column >= 0) && (column < uPtr(_columns)->Count()))
        return (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_columns), uCRef<int32_t>(column), &ret13), ret13);

    return nullptr;
}

// private Fuse.Layouts.Row GetRowData(int row) [instance]
::g::Fuse::Layouts::Row* GridLayout::GetRowData(int32_t row)
{
    ::g::Fuse::Layouts::Row* ret14;

    if ((row >= 0) && (row < uPtr(_rows)->Count()))
        return (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_rows), uCRef<int32_t>(row), &ret14), ret14);

    return nullptr;
}

// private float GetTotalProportion<T>(Uno.Collections.IList<T> list, bool expand) [instance]
float GridLayout::GetTotalProportion(uType* __type, uObject* list, bool expand)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret15;
    float total = 0.0f;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); i++)
    {
        ::g::Fuse::Layouts::DefinitionBase* c = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret15), ret15);

        if (EffectiveMetric(uPtr(c)->Metric(), expand) == 1)
            total = total + uPtr(c)->Extent();
    }

    return total;
}

// private bool HasDefaultMetric<T>(Uno.Collections.IList<T> list) [instance]
bool GridLayout::HasDefaultMetric(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret16;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[1]), uCRef<int32_t>(i), &ret16), ret16))->Metric() == 3)
            return true;

    return false;
}

// private float2 Measure(Fuse.Visual container, Fuse.LayoutParams lp) [instance]
::g::Uno::Float2 GridLayout::Measure(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    float effectiveCellSpacing = EffectiveCellSpacing();
    CalcActualPositions(container);
    bool fillHorizontal = lp.HasX();
    bool fillVertical = lp.HasY();
    ::g::Uno::Float2 lpAvail = lp.GetAvailableSize();
    float availableWidth = lpAvail.X - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_columns)->Count() - 1));
    float availableHeight = lpAvail.Y - (effectiveCellSpacing * (float)::g::Uno::Math::Max8(0, uPtr(_rows)->Count() - 1));
    bool expandWidth = fillHorizontal;
    bool expandHeight = fillVertical;
    bool hasAutoCol;
    float usedWidth;
    CalcInitialExtents(::TYPES[16/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth, &usedWidth, &hasAutoCol);
    bool hasAutoRow;
    float usedHeight;
    CalcInitialExtents(::TYPES[17/*Fuse.Layouts.GridLayout.CalcInitialExtents<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight, &usedHeight, &hasAutoRow);
    availableWidth = ::g::Uno::Math::Max1(availableWidth - usedWidth, 0.0f);
    availableHeight = ::g::Uno::Math::Max1(availableHeight - usedHeight, 0.0f);
    float widthProportion = GetTotalProportion(::TYPES[18/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Column>*/], (uObject*)_columns, expandWidth);
    float heightProportion = GetTotalProportion(::TYPES[19/*Fuse.Layouts.GridLayout.GetTotalProportion<Fuse.Layouts.Row>*/], (uObject*)_rows, expandHeight);
    bool hasFirstHorzSize = false;

    if (!hasAutoCol && fillHorizontal)
    {
        CalcFill(::TYPES[20/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);
        hasFirstHorzSize = true;
    }

    bool hasFirstVertSize = false;

    if (!hasAutoRow && fillVertical)
    {
        CalcFill(::TYPES[21/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);
        hasFirstVertSize = true;
    }

    CalcAuto(container, &availableWidth, &availableHeight, false, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);

    if (fillHorizontal && !hasFirstHorzSize)
        CalcFill(::TYPES[20/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Column>*/], (uObject*)_columns, availableWidth, widthProportion, expandWidth);

    if (fillVertical && !hasFirstVertSize)
        CalcFill(::TYPES[21/*Fuse.Layouts.GridLayout.CalcFill<Fuse.Layouts.Row>*/], (uObject*)_rows, availableHeight, heightProportion, expandHeight);

    CalcAuto(container, &availableWidth, &availableHeight, true, hasFirstHorzSize, hasFirstVertSize, expandWidth, expandHeight);
    float totalWidth = CalcTotalExtentAndOffset(::TYPES[22/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Column>*/], (uObject*)_columns, effectiveCellSpacing);
    float totalHeight = CalcTotalExtentAndOffset(::TYPES[23/*Fuse.Layouts.GridLayout.CalcTotalExtentAndOffset<Fuse.Layouts.Row>*/], (uObject*)_rows, effectiveCellSpacing);
    CheckMeasureSettings(lp.HasX(), lp.HasY());
    return ::g::Uno::Float2__New2(totalWidth, totalHeight);
}

// private bool RemoveListener(Fuse.Layouts.DefinitionBase item) [instance]
bool GridLayout::RemoveListener(::g::Fuse::Layouts::DefinitionBase* item)
{
    if (uPtr(item)->Creation != 0)
        return false;

    uPtr(item)->remove_Changed(uDelegate::New(::TYPES[6/*Uno.Action*/], (void*)GridLayout__Changed_fn, this));
    return true;
}

// public Uno.Collections.IList<Fuse.Layouts.Row> get_RowList() [instance]
uObject* GridLayout::RowList()
{
    return (uObject*)_rows;
}

// private void TrimPad<T>(Uno.Collections.IList<T> list, int count, T primordial) [instance]
void GridLayout::TrimPad(uType* __type, uObject* list, int32_t count, ::g::Fuse::Layouts::DefinitionBase* primordial)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Fuse.Layouts.DefinitionBase.Copy<T>*/),
        __type->Precalced(2/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret22;

    while (::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) < count)
    {
        ::g::Fuse::Layouts::DefinitionBase* n = (::g::Fuse::Layouts::DefinitionBase*)__type->U(0)->New();
        n->Copy(__types[1], primordial, 3);
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(list), __types[0]), n);
    }

    for (int32_t i = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0])) - 1; i >= count; --i)
    {
        if (!uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(list), __types[2]), uCRef<int32_t>(i), &ret22), ret22))->IsImplied())
            break;

        ::g::Uno::Collections::IList::RemoveAt(uInterface(uPtr(list), __types[2]), i);
    }
}

// private int UserCount<T>(Uno.Collections.IList<T> list) [instance]
int32_t GridLayout::UserCount(uType* __type, uObject* list)
{
    uType* __types[] = {
        __type->Precalced(0/*Uno.Collections.ICollection<T>*/),
        __type->Precalced(1/*Uno.Collections.IList<T>*/),
    };
    ::g::Fuse::Layouts::DefinitionBase* ret23;
    int32_t c = ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(list), __types[0]));

    while ((c > 0) && uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(list, __types[1]), uCRef<int32_t>(c - 1), &ret23), ret23))->IsImplied())
        c--;

    return c;
}

// public static int GetColumn(Fuse.Visual elm) [static]
int32_t GridLayout::GetColumn(::g::Fuse::Visual* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetColumnSpan(Fuse.Visual elm) [static]
int32_t GridLayout::GetColumnSpan(::g::Fuse::Visual* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_columnSpanProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);

    return 1;
}

// public static int GetRow(Fuse.Visual elm) [static]
int32_t GridLayout::GetRow(::g::Fuse::Visual* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
    else
        return 0;
}

// public static int GetRowSpan(Fuse.Visual elm) [static]
int32_t GridLayout::GetRowSpan(::g::Fuse::Visual* elm)
{
    GridLayout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(elm)->Properties())->TryGet(GridLayout::_rowSpanProperty_, &v))
        return uUnbox<int32_t>(::g::Uno::Int_typeof(), v);
    else
        return 1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/Layout.uno
// -------------------------------------------------------------------------------

// public abstract class Layout
// {
// static generated Layout()
static void Layout__cctor__fn(uType* __type)
{
    ::g::Fuse::Properties_typeof()->Init();
    Layout::_fillPaddingProperty_ = ::g::Fuse::Properties::CreateHandle();
}

static void Layout_build(uType* type)
{
    ::STRINGS[3] = uString::Const("Only a single container is supported for Layout");
    ::STRINGS[4] = uString::Const("Removing an invalid container from Layout");
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    ::TYPES[27] = ::g::Fuse::Elements::Element_typeof();
    ::TYPES[28] = ::g::Fuse::ISourceLocation_typeof();
    type->SetInterfaces(
        ::TYPES[28/*Fuse.ISourceLocation*/], offsetof(Layout_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Controls::LayoutControl_typeof(), offsetof(Layout, Container), 0,
        ::g::Uno::String_typeof(), offsetof(Layout, _SourceFileName), 0,
        ::g::Uno::Int_typeof(), offsetof(Layout, _SourceLineNumber), 0,
        ::g::Fuse::PropertyHandle_typeof(), (uintptr_t)&Layout::_fillPaddingProperty_, uFieldFlagsStatic);
}

Layout_type* Layout_typeof()
{
    static uSStrong<Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(Layout);
    options.TypeSize = sizeof(Layout_type);
    type = (Layout_type*)uClassType::New("Fuse.Layouts.Layout", options);
    type->fp_build_ = Layout_build;
    type->fp_cctor_ = Layout__cctor__fn;
    type->fp_IsMarginBoxDependent = Layout__IsMarginBoxDependent_fn;
    type->fp_OnRooted = Layout__OnRooted_fn;
    type->fp_OnUnrooted = Layout__OnUnrooted_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))Layout__get_SourceFileName_fn;
    return type;
}

// internal Layout()
void Layout__ctor_1_fn(Layout* __this)
{
    __this->ctor_1();
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align)
void Layout__AdjustAlignBox_fn(::g::Fuse::Visual* node, ::g::Uno::Float2* sz, ::g::Uno::Float4* box, int32_t* align)
{
    Layout::AdjustAlignBox(node, *sz, *box, *align);
}

// protected bool AffectsLayout(Fuse.Node n)
void Layout__AffectsLayout_fn(Layout* __this, ::g::Fuse::Node* n, bool* __retval)
{
    *__retval = __this->AffectsLayout(n);
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp)
void Layout__ArrangeMarginBoxSpecial_fn(Layout* __this, ::g::Fuse::Node* n, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp, bool* __retval)
{
    *__retval = __this->ArrangeMarginBoxSpecial(n, *padding, *lp);
}

// private Fuse.ISourceLocation Fuse.ISourceLocation.get_SourceNearest()
void Layout__FuseISourceLocationget_SourceNearest_fn(Layout* __this, uObject** __retval)
{
    if (::g::Uno::String::op_Inequality(__this->SourceFileName(), nullptr))
        return *__retval = (uObject*)__this, void();

    if (__this->Container != nullptr)
        return *__retval = ::g::Fuse::ISourceLocation::SourceNearest(uInterface(uPtr((uObject*)__this->Container), ::TYPES[28/*Fuse.ISourceLocation*/])), void();

    return *__retval = nullptr, void();
}

// public static bool GetFillPadding(Fuse.Visual n)
void Layout__GetFillPadding_fn(::g::Fuse::Visual* n, bool* __retval)
{
    *__retval = Layout::GetFillPadding(n);
}

// protected void InvalidateLayout()
void Layout__InvalidateLayout_fn(Layout* __this)
{
    __this->InvalidateLayout();
}

// internal virtual Fuse.LayoutDependent IsMarginBoxDependent(Fuse.Visual child)
void Layout__IsMarginBoxDependent_fn(Layout* __this, ::g::Fuse::Visual* child, int32_t* __retval)
{
    return *__retval = 4, void();
}

// protected virtual void OnRooted()
void Layout__OnRooted_fn(Layout* __this)
{
}

// protected virtual void OnUnrooted()
void Layout__OnUnrooted_fn(Layout* __this)
{
}

// internal void Rooted(Fuse.Controls.LayoutControl element)
void Layout__Rooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Rooted(element);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align)
void Layout__SimpleOff_fn(float* sz, ::g::Uno::Float2* range, int32_t* align, float* __retval)
{
    *__retval = Layout::SimpleOff(*sz, *range, *align);
}

// protected float Snap(float p)
void Layout__Snap_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->Snap(*p);
}

// protected float2 Snap(float2 p)
void Layout__Snap1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Snap1(*p);
}

// protected bool get_SnapToPixels()
void Layout__get_SnapToPixels_fn(Layout* __this, bool* __retval)
{
    *__retval = __this->SnapToPixels();
}

// protected float SnapUp(float p)
void Layout__SnapUp_fn(Layout* __this, float* p, float* __retval)
{
    *__retval = __this->SnapUp(*p);
}

// protected float2 SnapUp(float2 p)
void Layout__SnapUp1_fn(Layout* __this, ::g::Uno::Float2* p, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapUp1(*p);
}

// public generated string get_SourceFileName()
void Layout__get_SourceFileName_fn(Layout* __this, uString** __retval)
{
    *__retval = __this->SourceFileName();
}

// public generated void set_SourceFileName(string value)
void Layout__set_SourceFileName_fn(Layout* __this, uString* value)
{
    __this->SourceFileName(value);
}

// public generated int get_SourceLineNumber()
void Layout__get_SourceLineNumber_fn(Layout* __this, int32_t* __retval)
{
    *__retval = __this->SourceLineNumber();
}

// public generated void set_SourceLineNumber(int value)
void Layout__set_SourceLineNumber_fn(Layout* __this, int32_t* value)
{
    __this->SourceLineNumber(*value);
}

// internal void Unrooted(Fuse.Controls.LayoutControl element)
void Layout__Unrooted_fn(Layout* __this, ::g::Fuse::Controls::LayoutControl* element)
{
    __this->Unrooted(element);
}

uSStrong< ::g::Fuse::PropertyHandle*> Layout::_fillPaddingProperty_;

// internal Layout() [instance]
void Layout::ctor_1()
{
    ctor_();
}

// protected bool AffectsLayout(Fuse.Node n) [instance]
bool Layout::AffectsLayout(::g::Fuse::Node* n)
{
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);
    return (v != nullptr) && ((uPtr(v)->LayoutRole() == 0) || (uPtr(v)->LayoutRole() == 1));
}

// protected bool ArrangeMarginBoxSpecial(Fuse.Node n, float4 padding, Fuse.LayoutParams lp) [instance]
bool Layout::ArrangeMarginBoxSpecial(::g::Fuse::Node* n, ::g::Uno::Float4 padding, ::g::Fuse::LayoutParams lp)
{
    ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

    if (e == nullptr)
        return false;

    int32_t lr = uPtr(e)->LayoutRole();

    if (lr == 3)
    {
        ::g::Fuse::Elements::Element* elm = uAs< ::g::Fuse::Elements::Element*>(e, ::TYPES[27/*Fuse.Elements.Element*/]);

        if (e != nullptr)
            uPtr(elm)->RequestLayout();

        return true;
    }

    if (lr == 2)
    {
        bool b = Layout::GetFillPadding(e);
        ::g::Uno::Float2 p = b ? ::g::Uno::Float2__New1(0.0f) : ::g::Uno::Float2__New2(padding.X, padding.Y);
        ::g::Uno::Float2 s = b ? lp.Size() : ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(lp.Size(), ::g::Uno::Float2__New2(padding.X, padding.Y)), ::g::Uno::Float2__New2(padding.Z, padding.W));
        ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
        nlp.SetSize(s, true, true);
        uPtr(e)->ArrangeMarginBox(p, nlp);
        return true;
    }

    return false;
}

// protected void InvalidateLayout() [instance]
void Layout::InvalidateLayout()
{
    if (Container != nullptr)
        uPtr(Container)->InvalidateLayout(2);
}

// internal void Rooted(Fuse.Controls.LayoutControl element) [instance]
void Layout::Rooted(::g::Fuse::Controls::LayoutControl* element)
{
    if (Container != nullptr)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[3/*"Only a sing...*/]));

    Container = element;
    OnRooted();
}

// protected float Snap(float p) [instance]
float Layout::Snap(float p)
{
    return Snap1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 Snap(float2 p) [instance]
::g::Uno::Float2 Layout::Snap1(::g::Uno::Float2 p)
{
    if (SnapToPixels())
        return uPtr(Container)->InternSnap(p);

    return p;
}

// protected bool get_SnapToPixels() [instance]
bool Layout::SnapToPixels()
{
    return (Container != nullptr) && uPtr(Container)->SnapToPixels();
}

// protected float SnapUp(float p) [instance]
float Layout::SnapUp(float p)
{
    return SnapUp1(::g::Uno::Float2__New1(p)).X;
}

// protected float2 SnapUp(float2 p) [instance]
::g::Uno::Float2 Layout::SnapUp1(::g::Uno::Float2 p)
{
    if (SnapToPixels())
        return uPtr(Container)->InternSnapUp(p);

    return p;
}

// public generated string get_SourceFileName() [instance]
uString* Layout::SourceFileName()
{
    return _SourceFileName;
}

// public generated void set_SourceFileName(string value) [instance]
void Layout::SourceFileName(uString* value)
{
    _SourceFileName = value;
}

// public generated int get_SourceLineNumber() [instance]
int32_t Layout::SourceLineNumber()
{
    return _SourceLineNumber;
}

// public generated void set_SourceLineNumber(int value) [instance]
void Layout::SourceLineNumber(int32_t value)
{
    _SourceLineNumber = value;
}

// internal void Unrooted(Fuse.Controls.LayoutControl element) [instance]
void Layout::Unrooted(::g::Fuse::Controls::LayoutControl* element)
{
    if (element != Container)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[4/*"Removing an...*/]));

    OnUnrooted();
    Container = nullptr;
}

// internal static void AdjustAlignBox(Fuse.Visual node, float2 sz, float4 box, Fuse.Elements.Alignment align) [static]
void Layout::AdjustAlignBox(::g::Fuse::Visual* node, ::g::Uno::Float2 sz, ::g::Uno::Float4 box, int32_t align)
{
    Layout_typeof()->Init();
    ::g::Uno::Float2 pos = uPtr(node)->MarginBoxPosition();
    int32_t ha = ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(align);

    if (ha != 0)
        pos.X = Layout::SimpleOff(sz.X, ::g::Uno::Float2__New2(box.X, box.Z), ha);

    int32_t va = ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(align);

    if (va != 0)
        pos.Y = Layout::SimpleOff(sz.Y, ::g::Uno::Float2__New2(box.Y, box.W), va);

    node->AdjustMarginBoxPosition(pos);
}

// public static bool GetFillPadding(Fuse.Visual n) [static]
bool Layout::GetFillPadding(::g::Fuse::Visual* n)
{
    Layout_typeof()->Init();
    uObject* v;

    if (uPtr(uPtr(n)->Properties())->TryGet(Layout::_fillPaddingProperty_, &v))
        return uUnbox<bool>(::g::Uno::Bool_typeof(), v);

    return (uPtr(n)->Layer() == 1) || (uPtr(n)->Layer() == 0);
}

// private static float SimpleOff(float sz, float2 range, Fuse.Elements.SimpleAlignment align) [static]
float Layout::SimpleOff(float sz, ::g::Uno::Float2 range, int32_t align)
{
    Layout_typeof()->Init();

    if (align == 1)
        return ((range.Item(1) + range.Item(0)) / 2.0f) - (sz / 2.0f);
    else if (align == 2)
        return range.Item(1) - sz;
    else
        return range.Item(0);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/Layout.uno
// -------------------------------------------------------------------------------

// public static class Layouts
// {
// static generated Layouts()
static void Layouts__cctor__fn(uType* __type)
{
    Layouts::Default_ = ::g::Fuse::Layouts::DefaultLayout::New2();
}

static void Layouts_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Layouts::Layout_typeof(), (uintptr_t)&Layouts::Default_, uFieldFlagsStatic);
}

uClassType* Layouts_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Layouts.Layouts", options);
    type->fp_build_ = Layouts_build;
    type->fp_cctor_ = Layouts__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Layouts::Layout*> Layouts::Default_;
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno
// -----------------------------------------------------------------------------------

// public enum Metric
uEnumType* Metric_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.Metric", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "Absolute", 0LL,
        "Proportion", 1LL,
        "Auto", 2LL,
        "Default", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/StackLayout.uno
// ------------------------------------------------------------------------------------

// public enum Orientation
uEnumType* Orientation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.Orientation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Horizontal", 0LL,
        "Vertical", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/GridLayout.uno
// -----------------------------------------------------------------------------------

// public sealed class Row
// {
static void Row_build(uType* type)
{
    type->SetFields(8);
}

uType* Row_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::DefinitionBase_typeof();
    options.FieldCount = 8;
    options.ObjectSize = sizeof(Row);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Layouts.Row", options);
    type->fp_build_ = Row_build;
    type->fp_ctor_ = (void*)Row__New2_fn;
    return type;
}

// public Row()
void Row__ctor_4_fn(Row* __this)
{
    __this->ctor_4();
}

// public Row New()
void Row__New2_fn(Row** __retval)
{
    *__retval = Row::New2();
}

// public Row() [instance]
void Row::ctor_4()
{
    ctor_1();
}

// public Row New() [static]
Row* Row::New2()
{
    Row* obj1 = (Row*)uNew(Row_typeof());
    obj1->ctor_4();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/StackLayout.uno
// ------------------------------------------------------------------------------------

// public sealed class StackLayout
// {
static void StackLayout_build(uType* type)
{
    ::TYPES[0] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    ::TYPES[1] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Visual>*/, ::g::Fuse::Visual_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(4,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(StackLayout, _orientation), 0,
        ::g::Uno::Float_typeof(), offsetof(StackLayout, _itemSpacing), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(StackLayout, _contentAlignment), 0,
        ::g::Fuse::Layouts::StackLayoutMode_typeof(), offsetof(StackLayout, _mode), 0);
}

::g::Fuse::Layouts::Layout_type* StackLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(StackLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.StackLayout", options);
    type->fp_build_ = StackLayout_build;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))StackLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))StackLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void StackLayout__ArrangePaddingBox_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Uno::Float4 padding_ = *padding;
    ::g::Fuse::LayoutParams lp_ = *lp;
    float d = 0.0f;
    int32_t orientation = __this->Orientation();
    ::g::Uno::Float2 paddingOffset = ::g::Uno::Float2__New2(padding_.X, padding_.Y);
    ::g::Uno::Float2 pad = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding_.X, padding_.Y), ::g::Uno::Float2__New2(padding_.Z, padding_.W));
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RemoveSize(pad);
    ::g::Uno::Float2 axis;

    if (orientation == 1)
    {
        nlp.RetainAxesXY(true, false);
        axis = ::g::Uno::Float2__New2(0.0f, 1.0f);
    }
    else
    {
        nlp.RetainAxesXY(false, true);
        axis = ::g::Uno::Float2__New2(1.0f, 0.0f);
    }

    float effectiveSpacing = __this->EffectiveItemSpacing();
    bool hasItem = false;

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != nullptr; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (__this->ArrangeMarginBoxSpecial(c, padding_, lp_))
            continue;

        if (hasItem)
            d = d + effectiveSpacing;

        ::g::Uno::Float2 cds = uPtr(c)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(axis, d), paddingOffset), nlp);
        d = d + ::g::Uno::Vector::Dot(cds, axis);
        hasItem = true;
    }

    int32_t sa = __this->EffectiveContentAlignment();

    if (sa != 0)
    {
        float off;

        if (sa == 2)
            off = ::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) - d;
        else
            off = (::g::Uno::Vector::Dot(::g::Uno::Float2__op_Subtraction2(lp_.Size(), pad), axis) / 2.0f) - (d / 2.0f);

        for (::g::Fuse::Visual* e = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); e != nullptr; e = (::g::Fuse::Visual*)uPtr(e)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
            if (__this->AffectsLayout(e))
            {
                ::g::Uno::Float2 old = uPtr(e)->MarginBoxPosition();
                e->AdjustMarginBoxPosition(::g::Uno::Float2__op_Addition2(old, ::g::Uno::Float2__op_Multiply1(axis, off)));
            }
    }
}

// public Fuse.Elements.Alignment get_ContentAlignment()
void StackLayout__get_ContentAlignment_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->ContentAlignment();
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value)
void StackLayout__set_ContentAlignment_fn(StackLayout* __this, int32_t* value)
{
    __this->ContentAlignment(*value);
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment()
void StackLayout__get_EffectiveContentAlignment_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->EffectiveContentAlignment();
}

// private float get_EffectiveItemSpacing()
void StackLayout__get_EffectiveItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->EffectiveItemSpacing();
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void StackLayout__GetContentSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    int32_t orientation = __this->Orientation();
    bool vert = orientation == 1;
    ::g::Fuse::LayoutParams nlp = lp_.CloneAndDerive();
    nlp.RetainAxesXY(vert, !vert);
    ::g::Uno::Float2 size = __this->GetElementsSize(container, nlp);

    if (__this->Mode() == 1)
    {
        bool recalc = false;

        if (orientation == 1)
        {
            if (!nlp.HasX())
            {
                nlp.SetX(size.X);
                recalc = true;
            }
        }
        else
        {
            if (!nlp.HasY())
            {
                nlp.SetY(size.Y);
                recalc = true;
            }
        }

        if (recalc)
            size = __this->GetElementsSize(container, nlp);
    }

    return *__retval = size, void();
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp)
void StackLayout__GetElementsSize_fn(StackLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetElementsSize(container, *lp);
}

// public float get_ItemSpacing()
void StackLayout__get_ItemSpacing_fn(StackLayout* __this, float* __retval)
{
    *__retval = __this->ItemSpacing();
}

// public void set_ItemSpacing(float value)
void StackLayout__set_ItemSpacing_fn(StackLayout* __this, float* value)
{
    __this->ItemSpacing(*value);
}

// public Fuse.Layouts.StackLayoutMode get_Mode()
void StackLayout__get_Mode_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->Mode();
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value)
void StackLayout__set_Mode_fn(StackLayout* __this, int32_t* value)
{
    __this->Mode(*value);
}

// public Fuse.Layouts.Orientation get_Orientation()
void StackLayout__get_Orientation_fn(StackLayout* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value)
void StackLayout__set_Orientation_fn(StackLayout* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public Fuse.Elements.Alignment get_ContentAlignment() [instance]
int32_t StackLayout::ContentAlignment()
{
    return _contentAlignment;
}

// public void set_ContentAlignment(Fuse.Elements.Alignment value) [instance]
void StackLayout::ContentAlignment(int32_t value)
{
    if (_contentAlignment != value)
    {
        _contentAlignment = value;
        InvalidateLayout();
    }
}

// private Fuse.Elements.SimpleAlignment get_EffectiveContentAlignment() [instance]
int32_t StackLayout::EffectiveContentAlignment()
{
    int32_t ca = ContentAlignment();

    if ((ca == 0) && (Container != nullptr))
        ca = uPtr(Container)->Alignment();

    if (Orientation() == 1)
        return ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlign(ca);
    else
        return ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlign(ca);
}

// private float get_EffectiveItemSpacing() [instance]
float StackLayout::EffectiveItemSpacing()
{
    return SnapUp(ItemSpacing());
}

// private float2 GetElementsSize(Fuse.Visual container, Fuse.LayoutParams lp) [instance]
::g::Uno::Float2 StackLayout::GetElementsSize(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp)
{
    int32_t orientation = Orientation();
    ::g::Uno::Float2 desiredSize = ::g::Uno::Float2__New1(0.0f);
    float effectiveSpacing = EffectiveItemSpacing();
    bool firstItem = true;

    for (::g::Fuse::Visual* c = (::g::Fuse::Visual*)uPtr(container)->FirstChild(::TYPES[0/*Fuse.Visual.FirstChild<Fuse.Visual>*/]); c != nullptr; c = (::g::Fuse::Visual*)uPtr(c)->NextSibling(::TYPES[1/*Fuse.Node.NextSibling<Fuse.Visual>*/]))
    {
        if (!AffectsLayout(c))
            continue;

        float spacing = effectiveSpacing;

        if (firstItem)
        {
            spacing = 0.0f;
            firstItem = false;
        }

        ::g::Uno::Float2 cds = uPtr(c)->GetMarginSize(lp);

        if (orientation == 0)
        {
            desiredSize.X = (desiredSize.X + (cds.X + spacing));
            desiredSize.Y = ::g::Uno::Math::Max1(desiredSize.Y, cds.Y);
        }
        else
        {
            desiredSize.X = ::g::Uno::Math::Max1(desiredSize.X, cds.X);
            desiredSize.Y = (desiredSize.Y + (cds.Y + spacing));
        }
    }

    return desiredSize;
}

// public float get_ItemSpacing() [instance]
float StackLayout::ItemSpacing()
{
    return _itemSpacing;
}

// public void set_ItemSpacing(float value) [instance]
void StackLayout::ItemSpacing(float value)
{
    if (_itemSpacing != value)
    {
        _itemSpacing = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.StackLayoutMode get_Mode() [instance]
int32_t StackLayout::Mode()
{
    return _mode;
}

// public void set_Mode(Fuse.Layouts.StackLayoutMode value) [instance]
void StackLayout::Mode(int32_t value)
{
    if (_mode != value)
    {
        _mode = value;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.Orientation get_Orientation() [instance]
int32_t StackLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance]
void StackLayout::Orientation(int32_t value)
{
    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/StackLayout.uno
// ------------------------------------------------------------------------------------

// public enum StackLayoutMode
uEnumType* StackLayoutMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Layouts.StackLayoutMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Standard", 0LL,
        "TwoPass", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Controls.Panels/Layouts/WrapLayout.uno
// -----------------------------------------------------------------------------------

// public sealed class WrapLayout
// {
static void WrapLayout_build(uType* type)
{
    ::TYPES[29] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[30] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Node_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[31] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[3] = ::g::Fuse::Visual_typeof()->MakeMethod(2/*FirstChild<Fuse.Node>*/, ::g::Fuse::Node_typeof(), nullptr);
    ::TYPES[5] = ::g::Fuse::Node_typeof()->MakeMethod(3/*NextSibling<Fuse.Node>*/, ::g::Fuse::Node_typeof(), nullptr);
    ::TYPES[4] = ::g::Fuse::Visual_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Fuse::ISourceLocation_typeof(), offsetof(::g::Fuse::Layouts::Layout_type, interface0));
    type->SetFields(4,
        ::g::Uno::Bool_typeof(), offsetof(WrapLayout, _hasItemHeight), 0,
        ::g::Uno::Float_typeof(), offsetof(WrapLayout, _itemHeight), 0,
        ::g::Uno::Bool_typeof(), offsetof(WrapLayout, _hasItemWidth), 0,
        ::g::Uno::Float_typeof(), offsetof(WrapLayout, _itemWidth), 0,
        ::g::Fuse::Layouts::Orientation_typeof(), offsetof(WrapLayout, _orientation), 0,
        ::g::Fuse::Layouts::FlowDirection_typeof(), offsetof(WrapLayout, _flowDirection), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(WrapLayout, _rowAlignment), 0);
}

::g::Fuse::Layouts::Layout_type* WrapLayout_typeof()
{
    static uSStrong< ::g::Fuse::Layouts::Layout_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Layouts::Layout_typeof();
    options.FieldCount = 11;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(WrapLayout);
    options.TypeSize = sizeof(::g::Fuse::Layouts::Layout_type);
    type = (::g::Fuse::Layouts::Layout_type*)uClassType::New("Fuse.Layouts.WrapLayout", options);
    type->fp_build_ = WrapLayout_build;
    type->fp_ArrangePaddingBox = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Uno::Float4*, ::g::Fuse::LayoutParams*))WrapLayout__ArrangePaddingBox_fn;
    type->fp_GetContentSize = (void(*)(::g::Fuse::Layouts::Layout*, ::g::Fuse::Visual*, ::g::Fuse::LayoutParams*, ::g::Uno::Float2*))WrapLayout__GetContentSize_fn;
    type->interface0.fp_get_SourceNearest = (void(*)(uObject*, uObject**))::g::Fuse::Layouts::Layout__FuseISourceLocationget_SourceNearest_fn;
    type->interface0.fp_get_SourceLineNumber = (void(*)(uObject*, int32_t*))::g::Fuse::Layouts::Layout__get_SourceLineNumber_fn;
    type->interface0.fp_get_SourceFileName = (void(*)(uObject*, uString**))::g::Fuse::Layouts::Layout__get_SourceFileName_fn;
    return type;
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, bool doArrange, [float4 padding])
void WrapLayout__Arrange_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, bool* doArrange, ::g::Uno::Float4* padding, ::g::Uno::Float2* __retval)
{
    *__retval = __this->Arrange(container, *lp, *doArrange, *padding);
}

// internal override sealed void ArrangePaddingBox(Fuse.Visual container, float4 padding, Fuse.LayoutParams lp)
void WrapLayout__ArrangePaddingBox_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Uno::Float4* padding, ::g::Fuse::LayoutParams* lp)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    ::g::Uno::Float4 padding_ = *padding;
    __this->Arrange(container, lp_, true, padding_);
}

// public Fuse.Layouts.FlowDirection get_FlowDirection()
void WrapLayout__get_FlowDirection_fn(WrapLayout* __this, int32_t* __retval)
{
    *__retval = __this->FlowDirection();
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value)
void WrapLayout__set_FlowDirection_fn(WrapLayout* __this, int32_t* value)
{
    __this->FlowDirection(*value);
}

// internal override sealed float2 GetContentSize(Fuse.Visual container, Fuse.LayoutParams lp)
void WrapLayout__GetContentSize_fn(WrapLayout* __this, ::g::Fuse::Visual* container, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    ::g::Fuse::LayoutParams lp_ = *lp;
    return *__retval = __this->Arrange(container, lp_, false, ::g::Uno::Float4__New1(0.0f)), void();
}

// private bool get_IsVert()
void WrapLayout__get_IsVert_fn(WrapLayout* __this, bool* __retval)
{
    *__retval = __this->IsVert();
}

// public float get_ItemHeight()
void WrapLayout__get_ItemHeight_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemHeight();
}

// public void set_ItemHeight(float value)
void WrapLayout__set_ItemHeight_fn(WrapLayout* __this, float* value)
{
    __this->ItemHeight(*value);
}

// public float get_ItemWidth()
void WrapLayout__get_ItemWidth_fn(WrapLayout* __this, float* __retval)
{
    *__retval = __this->ItemWidth();
}

// public void set_ItemWidth(float value)
void WrapLayout__set_ItemWidth_fn(WrapLayout* __this, float* value)
{
    __this->ItemWidth(*value);
}

// public Fuse.Layouts.Orientation get_Orientation()
void WrapLayout__get_Orientation_fn(WrapLayout* __this, int32_t* __retval)
{
    *__retval = __this->Orientation();
}

// public void set_Orientation(Fuse.Layouts.Orientation value)
void WrapLayout__set_Orientation_fn(WrapLayout* __this, int32_t* value)
{
    __this->Orientation(*value);
}

// public Fuse.Elements.Alignment get_RowAlignment()
void WrapLayout__get_RowAlignment_fn(WrapLayout* __this, int32_t* __retval)
{
    *__retval = __this->RowAlignment();
}

// public void set_RowAlignment(Fuse.Elements.Alignment value)
void WrapLayout__set_RowAlignment_fn(WrapLayout* __this, int32_t* value)
{
    __this->RowAlignment(*value);
}

// private float2 Arrange(Fuse.Visual container, Fuse.LayoutParams lp, bool doArrange, [float4 padding]) [instance]
::g::Uno::Float2 WrapLayout::Arrange(::g::Fuse::Visual* container, ::g::Fuse::LayoutParams lp, bool doArrange, ::g::Uno::Float4 padding)
{
    ::g::Fuse::LayoutParams nlp = lp.CloneAndDerive();
    nlp.RemoveSize1(padding);
    bool hasX, hasY;
    ::g::Uno::Float2 lpav = nlp.GetAvailableSize1(&hasX, &hasY);
    float majorAvail = IsVert() ? hasY ? lpav.Y : FLT_INF : hasX ? lpav.X : FLT_INF;
    float minorMaxSize = 0.0f;
    float minorUsed = 0.0f;
    float majorUsed = 0.0f;
    float majorMaxUsed = 0.0f;
    ::g::Fuse::LayoutParams clp = nlp.Clone();
    clp.RetainXY(false, false);
    clp.ConstrainMax(lpav, hasX, hasY);

    if (_hasItemWidth)
        clp.SetX(ItemWidth());

    if (_hasItemHeight)
        clp.SetY(ItemHeight());

    uArray* placements = uArray::New(::TYPES[29/*float4[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(uPtr(container)->Children()), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* minorSizes = uArray::New(::TYPES[2/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* elementOnRow = uArray::New(::TYPES[31/*int[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Node>*/])));
    uArray* majorRest = uArray::New(::TYPES[2/*float[]*/], ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Node>*/])));
    int32_t majorStart = 0;
    int32_t currentRow = 0;
    int32_t i = 0;

    for (::g::Fuse::Node* n = (::g::Fuse::Node*)container->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]); n != nullptr; n = (::g::Fuse::Node*)uPtr(n)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), i++)
    {
        ::g::Fuse::Visual* e = uAs< ::g::Fuse::Visual*>(n, ::TYPES[4/*Fuse.Visual*/]);

        if (!AffectsLayout(e))
            continue;

        ::g::Uno::Float2 eSize = uPtr(e)->GetMarginSize(clp);
        eSize = ::g::Uno::Float2__New2(_hasItemWidth ? ItemWidth() : eSize.X, _hasItemHeight ? ItemHeight() : eSize.Y);
        float cmajorSize = IsVert() ? eSize.Y : eSize.X;
        float cminorSize = IsVert() ? eSize.X : eSize.Y;
        uPtr(placements)->Item< ::g::Uno::Float4>(i).Z = cmajorSize;
        placements->Item< ::g::Uno::Float4>(i).W = cminorSize;

        if (((majorUsed + cmajorSize) > majorAvail) && (majorUsed > 0.0f))
        {
            for (int32_t j = majorStart; j < i; ++j)
                uPtr(minorSizes)->Item<float>(j) = minorMaxSize;

            majorMaxUsed = ::g::Uno::Math::Max1(majorMaxUsed, majorUsed);
            minorUsed = minorUsed + minorMaxSize;
            minorMaxSize = 0.0f;
            majorUsed = 0.0f;
            majorStart = i;
            currentRow++;
        }

        placements->Item< ::g::Uno::Float4>(i).X = majorUsed;
        placements->Item< ::g::Uno::Float4>(i).Y = minorUsed;
        minorMaxSize = ::g::Uno::Math::Max1(minorMaxSize, cminorSize);
        majorUsed = majorUsed + cmajorSize;
        uPtr(elementOnRow)->Item<int32_t>(i) = currentRow;
        uPtr(majorRest)->Item<float>(currentRow) = majorAvail - majorUsed;
    }

    for (int32_t j1 = majorStart; j1 < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(container->Children()), ::TYPES[30/*Uno.Collections.ICollection<Fuse.Node>*/])); ++j1)
        uPtr(minorSizes)->Item<float>(j1) = minorMaxSize;

    majorMaxUsed = ::g::Uno::Math::Max1(majorMaxUsed, majorUsed);
    minorUsed = minorUsed + minorMaxSize;

    if (doArrange)
    {
        int32_t saMin = IsVert() ? ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlignOptional(RowAlignment()) : ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlignOptional(RowAlignment());
        int32_t saMaj = IsVert() ? ::g::Fuse::Elements::AlignmentHelpers::GetVerticalSimpleAlignOptional(RowAlignment()) : ::g::Fuse::Elements::AlignmentHelpers::GetHorizontalSimpleAlignOptional(RowAlignment());
        ::g::Fuse::LayoutParams elp = lp.CloneAndDerive();
        i = 0;

        for (::g::Fuse::Node* n1 = (::g::Fuse::Node*)uPtr(container)->FirstChild(::TYPES[3/*Fuse.Visual.FirstChild<Fuse.Node>*/]); n1 != nullptr; n1 = (::g::Fuse::Node*)uPtr(n1)->NextSibling(::TYPES[5/*Fuse.Node.NextSibling<Fuse.Node>*/]), i++)
        {
            ::g::Fuse::Visual* element = uAs< ::g::Fuse::Visual*>(n1, ::TYPES[4/*Fuse.Visual*/]);

            if (element == nullptr)
                continue;

            if (ArrangeMarginBoxSpecial(element, padding, lp))
                continue;

            ::g::Uno::Float4 placement = uPtr(placements)->Item< ::g::Uno::Float4>(i);

            switch (saMin)
            {
                case 1:
                    break;
                case 3:
                {
                    placement.Y = (placement.Y + (uPtr(minorSizes)->Item<float>(i) - placement.W));
                    break;
                }
                case 2:
                {
                    placement.Y = (placement.Y + ((uPtr(minorSizes)->Item<float>(i) - placement.W) / 2.0f));
                    break;
                }
                case 0:
                {
                    placement.W = uPtr(minorSizes)->Item<float>(i);
                    break;
                }
            }

            switch (saMaj)
            {
                case 1:
                    break;
                case 3:
                {
                    placement.X = (placement.X + uPtr(majorRest)->Item<float>(uPtr(elementOnRow)->Item<int32_t>(i)));
                    break;
                }
                case 2:
                {
                    placement.X = (placement.X + (uPtr(majorRest)->Item<float>(uPtr(elementOnRow)->Item<int32_t>(i)) / 2.0f));
                    break;
                }
                case 0:
                    break;
            }

            if (IsVert())
                placement = ::g::Uno::Float4__New2(placement.Y, placement.X, placement.W, placement.Z);

            if (FlowDirection() == 1)
                placement = ::g::Uno::Float4__New5((nlp.X() - placement.X) - placement.Z, ::g::Uno::Float3__New2(placement.Y, placement.Z, placement.W));

            elp.SetSize(::g::Uno::Float2__New2(placement.Z, placement.W), true, true);
            uPtr(element)->ArrangeMarginBox(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__New2(padding.X, padding.Y), ::g::Uno::Float2__New2(placement.X, placement.Y)), elp);
        }
    }

    ::g::Uno::Float2 sz = IsVert() ? ::g::Uno::Float2__New2(minorUsed, majorMaxUsed) : ::g::Uno::Float2__New2(majorMaxUsed, minorUsed);
    return sz;
}

// public Fuse.Layouts.FlowDirection get_FlowDirection() [instance]
int32_t WrapLayout::FlowDirection()
{
    return _flowDirection;
}

// public void set_FlowDirection(Fuse.Layouts.FlowDirection value) [instance]
void WrapLayout::FlowDirection(int32_t value)
{
    if (_flowDirection != value)
    {
        _flowDirection = value;
        InvalidateLayout();
    }
}

// private bool get_IsVert() [instance]
bool WrapLayout::IsVert()
{
    return Orientation() == 1;
}

// public float get_ItemHeight() [instance]
float WrapLayout::ItemHeight()
{
    return _itemHeight;
}

// public void set_ItemHeight(float value) [instance]
void WrapLayout::ItemHeight(float value)
{
    if (!_hasItemHeight || (_itemHeight != value))
    {
        _itemHeight = value;
        _hasItemHeight = true;
        InvalidateLayout();
    }
}

// public float get_ItemWidth() [instance]
float WrapLayout::ItemWidth()
{
    return _itemWidth;
}

// public void set_ItemWidth(float value) [instance]
void WrapLayout::ItemWidth(float value)
{
    if (!_hasItemWidth || (_itemWidth != value))
    {
        _itemWidth = value;
        _hasItemWidth = true;
        InvalidateLayout();
    }
}

// public Fuse.Layouts.Orientation get_Orientation() [instance]
int32_t WrapLayout::Orientation()
{
    return _orientation;
}

// public void set_Orientation(Fuse.Layouts.Orientation value) [instance]
void WrapLayout::Orientation(int32_t value)
{
    if (_orientation != value)
    {
        _orientation = value;
        InvalidateLayout();
    }
}

// public Fuse.Elements.Alignment get_RowAlignment() [instance]
int32_t WrapLayout::RowAlignment()
{
    return _rowAlignment;
}

// public void set_RowAlignment(Fuse.Elements.Alignment value) [instance]
void WrapLayout::RowAlignment(int32_t value)
{
    if (_rowAlignment != value)
    {
        _rowAlignment = value;
        InvalidateLayout();
    }
}
// }

}}} // ::g::Fuse::Layouts
