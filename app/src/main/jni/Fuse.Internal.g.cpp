// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Elements.Alignment.h>
#include <Fuse.Elements.AlignmentHelpers.h>
#include <Fuse.Elements.StretchDirection.h>
#include <Fuse.Elements.StretchMode.h>
#include <Fuse.Elements.StretchSizing.h>
#include <Fuse.Internal.Android-13f91488.h>
#include <Fuse.Internal.Android-1c9a2e2b.h>
#include <Fuse.Internal.Android-2427c380.h>
#include <Fuse.Internal.Android-bcfa66c9.h>
#include <Fuse.Internal.Blender-1.h>
#include <Fuse.Internal.BlenderMap.h>
#include <Fuse.Internal.Curves.h>
#include <Fuse.Internal.DoubleBlender.h>
#include <Fuse.Internal.DrawManager.h>
#include <Fuse.Internal.Float2Blender.h>
#include <Fuse.Internal.Float3Blender.h>
#include <Fuse.Internal.Float4Blender.h>
#include <Fuse.Internal.FloatBlender.h>
#include <Fuse.Internal.FontFac-55430328.h>
#include <Fuse.Internal.FrustumMatrix.h>
#include <Fuse.Internal.IImageC-7a43a0be.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.MiniLis-7d6cfb04.h>
#include <Fuse.Internal.MiniList-1.h>
#include <Fuse.Internal.MiniListMode.h>
#include <Fuse.Internal.ObjectL-6f4e51d2.h>
#include <Fuse.Internal.ObjectL-d1731bc3.h>
#include <Fuse.Internal.ObjectL-e804dd7f.h>
#include <Fuse.Internal.ObjectL-f9ace1e1.h>
#include <Fuse.Internal.ObjectList-1.h>
#include <Fuse.Internal.RawPointer-1.h>
#include <Fuse.Internal.RectPacker.h>
#include <Fuse.Internal.ScalarBlender-1.h>
#include <Fuse.Internal.Size2Blender.h>
#include <Fuse.Internal.SizeBlender.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.Internal.SkylineNode.h>
#include <Fuse.Internal.Statistics.h>
#include <Fuse.Internal.SystemFont.h>
#include <Fuse.Internal.VectorUtil.h>
#include <Fuse.LayoutParams.h>
#include <Fuse.Resources.FileImageSource.h>
#include <Fuse.Resources.HttpImageSource.h>
#include <Fuse.Resources.ImageS-a54f660e.h>
#include <Fuse.Resources.ImageS-bba1528c.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Resources.MultiD-98770b5f.h>
#include <Fuse.Resources.System-eb6e4d06.h>
#include <Fuse.SystemFont.Style.h>
#include <Fuse.SystemFont.Weight.h>
#include <jni.h>
#include <Uno.Action1-1.h>
#include <Uno.ArgumentNullException.h>
#include <Uno.ArgumentOutOfRang-f36f7996.h>
#include <Uno.Bool.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-9e7bc8e0.h>
#include <Uno.Collections.HashSet-1.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IEnumerator.h>
#include <Uno.Collections.IEnumerator1-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.Linke-224177f0.h>
#include <Uno.Collections.LinkedList-1.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.List--132bd82f.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Delegate.h>
#include <Uno.Double.h>
#include <Uno.EventArgs.h>
#include <Uno.EventHandler.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.IDisposable.h>
#include <Uno.IndexOutOfRangeException.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Internal.ArrayEnumerable-1.h>
#include <Uno.IO.File.h>
#include <Uno.Math.h>
#include <Uno.Object.h>
#include <Uno.Recti.h>
#include <Uno.SByte.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UX.FileSource.h>
#include <Uno.UX.Size.h>
#include <Uno.UX.Size2.h>
#include <Uno.UX.Unit.h>
#include <Uno.Vector.h>
#include <Uno/JNIHelper.h>
static uString* STRINGS[6];
static uType* TYPES[29];

namespace g{
namespace Fuse{
namespace Internal{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/AndroidSystemFont.uno
// ----------------------------------------------------------------------------------

// private struct AndroidSystemFont.Alias
// {
static void AndroidSystemFont__Alias_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(AndroidSystemFont__Alias, To), 0,
        ::g::Fuse::SystemFont__Weight_typeof(), offsetof(AndroidSystemFont__Alias, Weight), 0);
}

uStructType* AndroidSystemFont__Alias_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(AndroidSystemFont__Alias);
    options.ValueSize = sizeof(AndroidSystemFont__Alias);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.Alias", options);
    type->fp_build_ = AndroidSystemFont__Alias_build;
    return type;
}

// public Alias(string to, Fuse.SystemFont.Weight weight)
void AndroidSystemFont__Alias__ctor_1_fn(AndroidSystemFont__Alias* __this, uString* to, int32_t* weight)
{
    __this->ctor_1(to, *weight);
}

// public Alias New(string to, Fuse.SystemFont.Weight weight)
void AndroidSystemFont__Alias__New1_fn(uString* to, int32_t* weight, AndroidSystemFont__Alias* __retval)
{
    *__retval = AndroidSystemFont__Alias__New1(to, *weight);
}

// public Alias(string to, Fuse.SystemFont.Weight weight) [instance]
void AndroidSystemFont__Alias::ctor_1(uString* to, int32_t weight)
{
    To = to;
    Weight = weight;
}

// public Alias New(string to, Fuse.SystemFont.Weight weight) [static]
AndroidSystemFont__Alias AndroidSystemFont__Alias__New1(uString* to, int32_t weight)
{
    AndroidSystemFont__Alias obj1;
    obj1.ctor_1(to, weight);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/AndroidSystemFont.uno
// ----------------------------------------------------------------------------------

// internal static extern class AndroidSystemFont
// {
static void AndroidSystemFont_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(AndroidSystemFont__Family_typeof(), nullptr), (uintptr_t)&AndroidSystemFont::_families_, uFieldFlagsStatic,
        ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::String_typeof(), AndroidSystemFont__Alias_typeof(), nullptr), (uintptr_t)&AndroidSystemFont::_aliases_, uFieldFlagsStatic,
        ::g::Uno::Collections::HashSet_typeof()->MakeType(::g::Uno::String_typeof(), nullptr), (uintptr_t)&AndroidSystemFont::_familyNames_, uFieldFlagsStatic,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), nullptr), (uintptr_t)&AndroidSystemFont::_default_, uFieldFlagsStatic);
}

uClassType* AndroidSystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.AndroidSystemFont", options);
    type->fp_build_ = AndroidSystemFont_build;
    return type;
}

// private static void AddAlias(string name, string to, int weight)
void AndroidSystemFont__AddAlias_fn(uString* name, uString* to, int32_t* weight)
{
    AndroidSystemFont::AddAlias(name, to, *weight);
}

// private static void AddFamily(string name, string language, string variant)
void AndroidSystemFont__AddFamily_fn(uString* name, uString* language, uString* variant)
{
    AndroidSystemFont::AddFamily(name, language, variant);
}

// private static void AddFont(string path, int index, int weight, bool isItalic)
void AndroidSystemFont__AddFont_fn(uString* path, int32_t* index, int32_t* weight, bool* isItalic)
{
    AndroidSystemFont::AddFont(path, *index, *weight, *isItalic);
}

// private static void AddFonts()
void AndroidSystemFont__AddFonts_fn()
{
    AndroidSystemFont::AddFonts();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default()
void AndroidSystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = AndroidSystemFont::Default();
}

// private static void EnsureFontsAdded()
void AndroidSystemFont__EnsureFontsAdded_fn()
{
    AndroidSystemFont::EnsureFontsAdded();
}

// private static Fuse.Internal.FontFaceDescriptor Get(Fuse.Internal.AndroidSystemFont.Family family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight)
void AndroidSystemFont__Get_fn(AndroidSystemFont__Family* family, int32_t* style, int32_t* weight, ::g::Fuse::Internal::FontFaceDescriptor** __retval)
{
    *__retval = AndroidSystemFont::Get(*family, *style, *weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string familyName, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight)
void AndroidSystemFont__Get1_fn(uString* familyName, int32_t* style, int32_t* weight, ::g::Uno::Collections::List** __retval)
{
    *__retval = AndroidSystemFont::Get1(familyName, *style, *weight);
}

// private static void ThrowUno(string message)
void AndroidSystemFont__ThrowUno_fn(uString* message)
{
    AndroidSystemFont::ThrowUno(message);
}

// private static Fuse.SystemFont.Weight ToWeight(int w)
void AndroidSystemFont__ToWeight_fn(int32_t* w, int32_t* __retval)
{
    *__retval = AndroidSystemFont::ToWeight(*w);
}

uSStrong< ::g::Uno::Collections::List*> AndroidSystemFont::_families_;
uSStrong< ::g::Uno::Collections::Dictionary*> AndroidSystemFont::_aliases_;
uSStrong< ::g::Uno::Collections::HashSet*> AndroidSystemFont::_familyNames_;
uSStrong< ::g::Uno::Collections::List*> AndroidSystemFont::_default_;

// private static void AddAlias(string name, string to, int weight) [static]
void AndroidSystemFont::AddAlias(uString* name, uString* to, int32_t weight)
{
    bool ret2;
    bool ret3;
    bool ret4;

    if (::g::Uno::String::op_Inequality(name, nullptr) && !(::g::Uno::Collections::Dictionary__ContainsKey_fn(uPtr(AndroidSystemFont::_aliases_), name, &ret2), ret2))
    {
        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(AndroidSystemFont::_aliases_), name, uCRef(AndroidSystemFont__Alias__New1(to, AndroidSystemFont::ToWeight(weight))));

        if (!(::g::Uno::Collections::HashSet__Contains_fn(uPtr(AndroidSystemFont::_familyNames_), name, &ret3), ret3))
            ::g::Uno::Collections::HashSet__Add_fn(uPtr(AndroidSystemFont::_familyNames_), name, &ret4);
    }
}

// private static void AddFamily(string name, string language, string variant) [static]
void AndroidSystemFont::AddFamily(uString* name, uString* language, uString* variant)
{
    bool ret5;
    bool ret6;
    uString* lowerName = ::g::Uno::String::op_Equality(name, nullptr) ? uCast<uString*>(nullptr, ::TYPES[28/*string*/]) : (uString*)::g::Uno::String::ToLower(uPtr(name));
    ::g::Uno::Collections::List__Add_fn(uPtr(AndroidSystemFont::_families_), uCRef(AndroidSystemFont__Family__New1(lowerName, language, variant)));

    if (::g::Uno::String::op_Inequality(lowerName, nullptr) && !(::g::Uno::Collections::HashSet__Contains_fn(uPtr(AndroidSystemFont::_familyNames_), lowerName, &ret5), ret5))
        ::g::Uno::Collections::HashSet__Add_fn(uPtr(AndroidSystemFont::_familyNames_), lowerName, &ret6);
}

// private static void AddFont(string path, int index, int weight, bool isItalic) [static]
void AndroidSystemFont::AddFont(uString* path, int32_t index, int32_t weight, bool isItalic)
{
    AndroidSystemFont__Family ret7;
    ::g::Uno::Collections::List__Add_fn(uPtr((::g::Uno::Collections::List__get_Item_fn(uPtr(AndroidSystemFont::_families_), uCRef<int32_t>(uPtr(AndroidSystemFont::_families_)->Count() - 1), &ret7), ret7).Fonts), uCRef(AndroidSystemFont__FontDescriptor__New1(path, index, isItalic ? 1 : 0, AndroidSystemFont::ToWeight(weight))));
}

// private static void AddFonts() [static]
void AndroidSystemFont::AddFonts()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "AddFonts123", "()V");
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd);
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void EnsureFontsAdded() [static]
void AndroidSystemFont::EnsureFontsAdded()
{
    if (AndroidSystemFont::_families_ == nullptr)
    {
        AndroidSystemFont::_families_ = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(AndroidSystemFont__Family_typeof(), nullptr)));
        AndroidSystemFont::_aliases_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::g::Uno::Collections::Dictionary_typeof()->MakeType(::TYPES[28/*string*/], AndroidSystemFont__Alias_typeof(), nullptr)));
        AndroidSystemFont::_familyNames_ = ((::g::Uno::Collections::HashSet*)::g::Uno::Collections::HashSet::New1(::g::Uno::Collections::HashSet_typeof()->MakeType(::TYPES[28/*string*/], nullptr)));
        AndroidSystemFont::AddFonts();
    }
}

// private static Fuse.Internal.FontFaceDescriptor Get(Fuse.Internal.AndroidSystemFont.Family family, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static]
::g::Fuse::Internal::FontFaceDescriptor* AndroidSystemFont::Get(AndroidSystemFont__Family family, int32_t style, int32_t weight)
{
    AndroidSystemFont__FontDescriptor ret8;
    AndroidSystemFont__FontDescriptor ret9;
    int32_t lowestDiff = 2147483647;
    int32_t lowestIndex = -1;

    for (int32_t i = 0; i < uPtr(family.Fonts)->Count(); ++i)
    {
        AndroidSystemFont__FontDescriptor font = (::g::Uno::Collections::List__get_Item_fn(uPtr(family.Fonts), uCRef<int32_t>(i), &ret8), ret8);

        if (::g::Uno::IO::File::Exists(font.FilePath))
        {
            int32_t diff = (100 * ::g::Uno::Math::Abs5(style - font.Style)) + ::g::Uno::Math::Abs5(weight - font.Weight);

            if (diff < lowestDiff)
            {
                lowestDiff = diff;
                lowestIndex = i;

                if (diff == 0)
                    break;
            }
        }
    }

    if (lowestIndex >= 0)
    {
        AndroidSystemFont__FontDescriptor font1 = (::g::Uno::Collections::List__get_Item_fn(uPtr(family.Fonts), uCRef<int32_t>(lowestIndex), &ret9), ret9);
        return ::g::Fuse::Internal::FontFaceDescriptor::New1(::g::Fuse::Resources::SystemFileSource::New1(font1.FilePath), font1.Index);
    }

    return nullptr;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string familyName, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static]
::g::Uno::Collections::List* AndroidSystemFont::Get1(uString* familyName, int32_t style, int32_t weight)
{
    bool ret10;
    ::g::Uno::Collections::List__Enumerator<AndroidSystemFont__Family> ret11;
    AndroidSystemFont::EnsureFontsAdded();

    if (::g::Uno::String::op_Inequality(familyName, nullptr))
    {
        AndroidSystemFont__Alias alias;

        if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(AndroidSystemFont::_aliases_), familyName, &alias, &ret10), ret10))
            return AndroidSystemFont::Get1(alias.To, style, weight);
    }

    ::g::Uno::Collections::List* result = (::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::FontFaceDescriptor_typeof(), nullptr));
    bool realMatch = false;
    ::g::Uno::Collections::List__Enumerator<AndroidSystemFont__Family> enum1 = (::g::Uno::Collections::List__GetEnumerator_fn(uPtr(AndroidSystemFont::_families_), &ret11), ret11);

    {
        try
        {
            {
                while (enum1.MoveNext(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(AndroidSystemFont__Family_typeof(), nullptr)))
                {
                    AndroidSystemFont__Family family = enum1.Current(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(AndroidSystemFont__Family_typeof(), nullptr));

                    if ((::g::Uno::String::op_Equality(familyName, nullptr) || ::g::Uno::String::op_Equality(family.Name, nullptr)) || ::g::Uno::String::op_Equality(familyName, family.Name))
                    {
                        realMatch = realMatch || ::g::Uno::String::op_Equality(familyName, family.Name);
                        ::g::Fuse::Internal::FontFaceDescriptor* descriptor = AndroidSystemFont::Get(family, style, weight);

                        if (descriptor != nullptr)
                            ::g::Uno::Collections::List__Add_fn(uPtr(result), descriptor);
                    }
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(AndroidSystemFont__Family_typeof(), nullptr));
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::g::Uno::Collections::List__Enumerator_typeof()->MakeType(AndroidSystemFont__Family_typeof(), nullptr));
        }
        __after_finally_0:;
    }

    if ((result->Count() > 0) && ((realMatch || (style != 0)) || (weight != 3)))
        return result;
    else
        return AndroidSystemFont::Default();
}

// private static void ThrowUno(string message) [static]
void AndroidSystemFont::ThrowUno(uString* message)
{
    U_THROW(::g::Uno::Exception::New2(message));
}

// private static Fuse.SystemFont.Weight ToWeight(int w) [static]
int32_t AndroidSystemFont::ToWeight(int32_t w)
{
    return (w / 100) - 1;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static]
::g::Uno::Collections::List* AndroidSystemFont::Default()
{
    AndroidSystemFont__Family ret12;

    if (AndroidSystemFont::_default_ == nullptr)
    {
        AndroidSystemFont::EnsureFontsAdded();

        if (uPtr(AndroidSystemFont::_families_)->Count() >= 1)
            AndroidSystemFont::_default_ = AndroidSystemFont::Get1((::g::Uno::Collections::List__get_Item_fn(uPtr(AndroidSystemFont::_families_), uCRef<int32_t>(0), &ret12), ret12).Name, 0, 3);
    }

    return AndroidSystemFont::_default_;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal abstract class Blender<T>
// {
static void Blender_build(uType* type)
{
}

Blender_type* Blender_typeof()
{
    static uSStrong<Blender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.GenericCount = 1;
    options.ObjectSize = sizeof(Blender);
    options.TypeSize = sizeof(Blender_type);
    type = (Blender_type*)uClassType::New("Fuse.Internal.Blender`1", options);
    type->fp_build_ = Blender_build;
    return type;
}

// protected generated Blender()
void Blender__ctor__fn(Blender* __this)
{
    __this->ctor_();
}

// public double Distance(T a, T b)
void Blender__Distance_fn(Blender* __this, void* a, void* b, double* __retval)
{
    uT ret2(__this->__type->GetBase(Blender_typeof())->T(0), alloca(__this->__type->GetBase(Blender_typeof())->T(0)->ValueSize));
    double ret1;
    return *__retval = (__this->Length_ex((__this->Sub_ex(a, b, &ret2), ret2), &ret1), ret1), void();
}

// public T ScalarMult(T v, double s)
void Blender__ScalarMult_fn(Blender* __this, void* v, double* s, uTRef __retval)
{
    uT ret3(__this->__type->GetBase(Blender_typeof())->T(0), alloca(__this->__type->GetBase(Blender_typeof())->T(0)->ValueSize));
    double s_ = *s;
    return __retval.Store((__this->Weight_ex(v, uCRef(s_), &ret3), ret3)), void();
}

// public T UnitWeight(T v, double w)
void Blender__UnitWeight_fn(Blender* __this, void* v, double* w, uTRef __retval)
{
    uT ret4(__this->__type->GetBase(Blender_typeof())->T(0), alloca(__this->__type->GetBase(Blender_typeof())->T(0)->ValueSize));
    uT ret5(__this->__type->GetBase(Blender_typeof())->T(0), alloca(__this->__type->GetBase(Blender_typeof())->T(0)->ValueSize));
    uT unit(__this->__type->GetBase(Blender_typeof())->T(0), alloca(__this->__type->GetBase(Blender_typeof())->T(0)->ValueSize));
    double w_ = *w;
    double l;
    unit = (__this->ToUnit_ex(v, &l, &ret4), ret4);
    return __retval.Store((__this->Weight_ex(unit, uCRef(w_), &ret5), ret5)), void();
}

// protected generated Blender() [instance]
void Blender::ctor_()
{
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class BlenderMap
// {
// static generated BlenderMap()
static void BlenderMap__cctor__fn(uType* __type)
{
    BlenderMap::_blenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
    BlenderMap::_scalarBlenders_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/]));
}

static void BlenderMap_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Unsupported blender type: ");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Uno::Type_typeof(), uObject_typeof(), nullptr);
    ::TYPES[1] = ::g::Uno::Type_typeof();
    ::TYPES[2] = ::g::Fuse::Internal::Blender_typeof();
    ::TYPES[3] = ::g::Fuse::Internal::ScalarBlender_typeof();
    type->MethodTypes[0]->SetDependencies(
        ::TYPES[1/*Uno.Type*/]);
    type->MethodTypes[0]->SetPrecalc(
        ::TYPES[2/*Fuse.Internal.Blender`1*/]->MakeType(type->MethodTypes[0]->U(0), nullptr));
    type->MethodTypes[1]->SetDependencies(
        ::TYPES[1/*Uno.Type*/]);
    type->MethodTypes[1]->SetPrecalc(
        ::TYPES[3/*Fuse.Internal.ScalarBlender`1*/]->MakeType(type->MethodTypes[1]->U(0), nullptr));
    type->SetFields(0,
        ::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&BlenderMap::_blenders_, uFieldFlagsStatic,
        ::TYPES[0/*Uno.Collections.Dictionary<Uno.Type, object>*/], (uintptr_t)&BlenderMap::_scalarBlenders_, uFieldFlagsStatic);
}

uType* BlenderMap_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.MethodTypeCount = 2;
    options.ObjectSize = sizeof(BlenderMap);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.BlenderMap", options);
    type->MethodTypes[0] = type->NewMethodType(1, 1,1);
    type->MethodTypes[1] = type->NewMethodType(1, 1,1);
    type->fp_build_ = BlenderMap_build;
    type->fp_cctor_ = BlenderMap__cctor__fn;
    return type;
}

// public static Fuse.Internal.Blender<T> Get<T>()
void BlenderMap__Get_fn(uType* __type, ::g::Fuse::Internal::Blender** __retval)
{
    *__retval = BlenderMap::Get(__type);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>()
void BlenderMap__GetScalar_fn(uType* __type, ::g::Fuse::Internal::ScalarBlender** __retval)
{
    *__retval = BlenderMap::GetScalar(__type);
}

uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_blenders_;
uSStrong< ::g::Uno::Collections::Dictionary*> BlenderMap::_scalarBlenders_;

// public static Fuse.Internal.Blender<T> Get<T>() [static]
::g::Fuse::Internal::Blender* BlenderMap::Get(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.Blender<T>*/),
    };
    __type->Base->Init();
    bool ret2;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_blenders_), __type->U(0), (void**)(&blender), &ret2), ret2))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float2_typeof()))
            blender = ::g::Fuse::Internal::Float2Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float3_typeof()))
            blender = ::g::Fuse::Internal::Float3Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float4_typeof()))
            blender = ::g::Fuse::Internal::Float4Blender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size_typeof()))
            blender = ::g::Fuse::Internal::SizeBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::UX::Size2_typeof()))
            blender = ::g::Fuse::Internal::Size2Blender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_blenders_), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::Blender*>(blender, __types[0]);
}

// public static Fuse.Internal.ScalarBlender<T> GetScalar<T>() [static]
::g::Fuse::Internal::ScalarBlender* BlenderMap::GetScalar(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ScalarBlender<T>*/),
    };
    __type->Base->Init();
    bool ret3;
    uObject* blender;

    if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(BlenderMap::_scalarBlenders_), __type->U(0), (void**)(&blender), &ret3), ret3))
    {
        if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Float_typeof()))
            blender = ::g::Fuse::Internal::FloatBlender::New1();
        else if (::g::Uno::Type::op_Equality(__type->U(0), ::g::Uno::Double_typeof()))
            blender = ::g::Fuse::Internal::DoubleBlender::New1();
        else
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[0/*"Unsupported...*/], __type->U(0))));

        ::g::Uno::Collections::Dictionary__Add_fn(uPtr(BlenderMap::_scalarBlenders_), __type->U(0), blender);
    }

    return uCast< ::g::Fuse::Internal::ScalarBlender*>(blender, __types[0]);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Curves.uno
// -----------------------------------------------------------------------

// internal static class Curves
// {
static void Curves_build(uType* type)
{
}

uClassType* Curves_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.Curves", options);
    type->fp_build_ = Curves_build;
    return type;
}

// public static float2 CalcBezierAt(float2 p0, float2 p1, float2 p2, float2 p3, float t)
void Curves__CalcBezierAt_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* p3, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = Curves::CalcBezierAt(*p0, *p1, *p2, *p3, *t);
}

// public static void CubicHermiteToBezier(float4 p0, float4 p1, float4& t1, float4& t2)
void Curves__CubicHermiteToBezier_fn(::g::Uno::Float4* p0, ::g::Uno::Float4* p1, ::g::Uno::Float4* t1, ::g::Uno::Float4* t2)
{
    Curves::CubicHermiteToBezier(*p0, *p1, t1, t2);
}

// public static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float tension, float bias, float continuity, float4& tangentIn, float4& tangentOut)
void Curves__KochanekBartelTangent_fn(::g::Uno::Float4* pa, ::g::Uno::Float4* pb, ::g::Uno::Float4* pc, ::g::Uno::Float4* pd, float* tension, float* bias, float* continuity, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    Curves::KochanekBartelTangent(*pa, *pb, *pc, *pd, *tension, *bias, *continuity, tangentIn, tangentOut);
}

// public static float2 CalcBezierAt(float2 p0, float2 p1, float2 p2, float2 p3, float t) [static]
::g::Uno::Float2 Curves::CalcBezierAt(::g::Uno::Float2 p0, ::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2 p3, float t)
{
    float t2 = t * t;
    float t3 = t2 * t;
    return ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply(((1.0f - (3.0f * t)) + (3.0f * t2)) - t3, p0), ::g::Uno::Float2__op_Multiply(((3.0f * t) - (6.0f * t2)) + (3.0f * t3), p1)), ::g::Uno::Float2__op_Multiply((3.0f * t2) - (3.0f * t3), p2)), ::g::Uno::Float2__op_Multiply(t3, p3));
}

// public static void CubicHermiteToBezier(float4 p0, float4 p1, float4& t1, float4& t2) [static]
void Curves::CubicHermiteToBezier(::g::Uno::Float4 p0, ::g::Uno::Float4 p1, ::g::Uno::Float4* t1, ::g::Uno::Float4* t2)
{
    *t1 = ::g::Uno::Float4__op_Addition2(p0, ::g::Uno::Float4__op_Division1(*t1, 3.0f));
    *t2 = ::g::Uno::Float4__op_Subtraction2(p1, ::g::Uno::Float4__op_Division1(*t2, 3.0f));
}

// public static void KochanekBartelTangent(float4 pa, float4 pb, float4 pc, float4 pd, float tension, float bias, float continuity, float4& tangentIn, float4& tangentOut) [static]
void Curves::KochanekBartelTangent(::g::Uno::Float4 pa, ::g::Uno::Float4 pb, ::g::Uno::Float4 pc, ::g::Uno::Float4 pd, float tension, float bias, float continuity, ::g::Uno::Float4* tangentIn, ::g::Uno::Float4* tangentOut)
{
    float t = tension;
    float b = bias;
    float c = continuity;
    *tangentIn = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pb, pa)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)));
    *tangentOut = ::g::Uno::Float4__op_Addition2(::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f + b)) * (1.0f - c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pc, pb)), ::g::Uno::Float4__op_Multiply((((1.0f - t) * (1.0f - b)) * (1.0f + c)) / 2.0f, ::g::Uno::Float4__op_Subtraction2(pd, pc)));
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class DoubleBlender
// {
static void DoubleBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Double_typeof(), nullptr));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

::g::Fuse::Internal::ScalarBlender_type* DoubleBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(DoubleBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.DoubleBlender", options);
    type->fp_build_ = DoubleBlender_build;
    type->fp_ctor_ = (void*)DoubleBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))DoubleBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))DoubleBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))DoubleBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))DoubleBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))DoubleBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))DoubleBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))DoubleBlender__get_Zero_fn;
    return type;
}

// public generated DoubleBlender()
void DoubleBlender__ctor_2_fn(DoubleBlender* __this)
{
    __this->ctor_2();
}

// public override sealed double Add(double a, double b)
void DoubleBlender__Add_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed double FromDouble(double a)
void DoubleBlender__FromDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double Length(double a)
void DoubleBlender__Length_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = ::g::Uno::Math::Abs(a_), void();
}

// public override sealed double Lerp(double a, double b, double d)
void DoubleBlender__Lerp_fn(DoubleBlender* __this, double* a, double* b, double* d, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * d_), void();
}

// public generated DoubleBlender New()
void DoubleBlender__New1_fn(DoubleBlender** __retval)
{
    *__retval = DoubleBlender::New1();
}

// public override sealed double Sub(double a, double b)
void DoubleBlender__Sub_fn(DoubleBlender* __this, double* a, double* b, double* __retval)
{
    double a_ = *a;
    double b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(double a)
void DoubleBlender__ToDouble_fn(DoubleBlender* __this, double* a, double* __retval)
{
    double a_ = *a;
    return *__retval = a_, void();
}

// public override sealed double ToUnit(double a, double& length)
void DoubleBlender__ToUnit_fn(DoubleBlender* __this, double* a, double* length, double* __retval)
{
    double a_ = *a;
    *length = ::g::Uno::Math::Abs(a_);
    return *__retval = (double)((a_ < 0.0) ? -1 : 1), void();
}

// public override sealed double Weight(double v, double w)
void DoubleBlender__Weight_fn(DoubleBlender* __this, double* v, double* w, double* __retval)
{
    double v_ = *v;
    double w_ = *w;
    return *__retval = v_ * w_, void();
}

// public override sealed double get_Zero()
void DoubleBlender__get_Zero_fn(DoubleBlender* __this, double* __retval)
{
    return *__retval = 0.0, void();
}

// public generated DoubleBlender() [instance]
void DoubleBlender::ctor_2()
{
    ctor_1();
}

// public generated DoubleBlender New() [static]
DoubleBlender* DoubleBlender::New1()
{
    DoubleBlender* obj1 = (DoubleBlender*)uNew(DoubleBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Nodes/DrawManager.uno
// ------------------------------------------------------------------

// internal static class DrawManager
// {
static void DrawManager_build(uType* type)
{
    ::TYPES[4] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::DrawContext_typeof(), nullptr);
    type->SetFields(0,
        ::TYPES[4/*Uno.Action<Fuse.DrawContext>*/], (uintptr_t)&DrawManager::Prepared1_, uFieldFlagsStatic);
}

uClassType* DrawManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.DrawManager", options);
    type->fp_build_ = DrawManager_build;
    return type;
}

// public static void EndDraw(Fuse.DrawContext dc)
void DrawManager__EndDraw_fn(::g::Fuse::DrawContext* dc)
{
    DrawManager::EndDraw(dc);
}

// public static generated void add_Prepared(Uno.Action<Fuse.DrawContext> value)
void DrawManager__add_Prepared_fn(uDelegate* value)
{
    DrawManager::add_Prepared(value);
}

// public static generated void remove_Prepared(Uno.Action<Fuse.DrawContext> value)
void DrawManager__remove_Prepared_fn(uDelegate* value)
{
    DrawManager::remove_Prepared(value);
}

// public static void PrepareDraw(Fuse.DrawContext dc)
void DrawManager__PrepareDraw_fn(::g::Fuse::DrawContext* dc)
{
    DrawManager::PrepareDraw(dc);
}

uSStrong<uDelegate*> DrawManager::Prepared1_;

// public static void EndDraw(Fuse.DrawContext dc) [static]
void DrawManager::EndDraw(::g::Fuse::DrawContext* dc)
{
    uPtr(dc)->OnRenderTargetChange();
    dc->ReleaseRootbuffer();
}

// public static void PrepareDraw(Fuse.DrawContext dc) [static]
void DrawManager::PrepareDraw(::g::Fuse::DrawContext* dc)
{
    uPtr(dc)->CaptureRootbuffer();
    uDelegate* p = DrawManager::Prepared1_;

    if (::g::Uno::Delegate::op_Inequality(p, nullptr))
        uPtr(p)->InvokeVoid(dc);
}

// public static generated void add_Prepared(Uno.Action<Fuse.DrawContext> value) [static]
void DrawManager::add_Prepared(uDelegate* value)
{
    DrawManager::Prepared1_ = uCast<uDelegate*>(::g::Uno::Delegate::Combine(DrawManager::Prepared1_, value), ::TYPES[4/*Uno.Action<Fuse.DrawContext>*/]);
}

// public static generated void remove_Prepared(Uno.Action<Fuse.DrawContext> value) [static]
void DrawManager::remove_Prepared(uDelegate* value)
{
    DrawManager::Prepared1_ = uCast<uDelegate*>(::g::Uno::Delegate::Remove(DrawManager::Prepared1_, value), ::TYPES[4/*Uno.Action<Fuse.DrawContext>*/]);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/MiniList.uno
// -------------------------------------------------------------------------

// public struct MiniList<T>.Enumerator
// {
// public T get_Current() [adapter]
static void MiniList__Enumerator__get_Current_ex(uObject* __this, uObject** __retval)
{
    MiniList__Enumerator__get_Current_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public void Dispose() [adapter]
static void MiniList__Enumerator__Dispose_ex(uObject* __this)
{
    MiniList__Enumerator__Dispose_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Reset() [adapter]
static void MiniList__Enumerator__Reset_ex(uObject* __this)
{
    MiniList__Enumerator__Reset_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public bool MoveNext() [adapter]
static void MiniList__Enumerator__MoveNext_ex(uObject* __this, bool* __retval)
{
    MiniList__Enumerator__MoveNext_fn((MiniList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void MiniList__Enumerator_build(uType* type)
{
    ::TYPES[5] = ::g::Fuse::Internal::MiniList_typeof();
    ::TYPES[6] = ::g::Fuse::Internal::ObjectList__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::ObjectList__Enumerator_typeof()->MakeType(type->T(0), nullptr),
        ::g::Fuse::Internal::MiniList_typeof()->MakeType(type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), nullptr), offsetof(MiniList__Enumerator_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(MiniList__Enumerator_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(MiniList__Enumerator_type, interface2));
    type->SetFields(0,
        ::TYPES[6/*Fuse.Internal.ObjectList`1.Enumerator*/]->MakeType(type->T(0), nullptr), offsetof(MiniList__Enumerator, _iter), 0,
        ::TYPES[5/*Fuse.Internal.MiniList`1*/]->MakeType(type->T(0), nullptr), offsetof(MiniList__Enumerator, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(MiniList__Enumerator, _first), 0,
        uObject_typeof(), offsetof(MiniList__Enumerator, _value), 0,
        ::g::Fuse::Internal::MiniListMode_typeof(), offsetof(MiniList__Enumerator, _mode), 0);
}

MiniList__Enumerator_type* MiniList__Enumerator_typeof()
{
    static uSStrong<MiniList__Enumerator_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.Alignment = alignof(MiniList__Enumerator);
    options.ValueSize = sizeof(MiniList__Enumerator);
    options.TypeSize = sizeof(MiniList__Enumerator_type);
    type = (MiniList__Enumerator_type*)uStructType::New("Fuse.Internal.MiniList`1.Enumerator", options);
    type->fp_build_ = MiniList__Enumerator_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))MiniList__Enumerator__get_Current_ex;
    type->interface1.fp_Dispose = MiniList__Enumerator__Dispose_ex;
    type->interface2.fp_Reset = MiniList__Enumerator__Reset_ex;
    type->interface2.fp_MoveNext = MiniList__Enumerator__MoveNext_ex;
    return type;
}

// public Enumerator(Fuse.Internal.MiniList<T> source, bool versionLock)
void MiniList__Enumerator__ctor_1_fn(MiniList__Enumerator* __this, uType* __type, ::g::Fuse::Internal::MiniList* source, bool* versionLock)
{
    __this->ctor_1(__type, *source, *versionLock);
}

// public T get_Current()
void MiniList__Enumerator__get_Current_fn(MiniList__Enumerator* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->Current(__type);
}

// public void Dispose()
void MiniList__Enumerator__Dispose_fn(MiniList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// public bool MoveNext()
void MiniList__Enumerator__MoveNext_fn(MiniList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// public Enumerator New(Fuse.Internal.MiniList<T> source, bool versionLock)
void MiniList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Internal::MiniList* source, bool* versionLock, MiniList__Enumerator* __retval)
{
    *__retval = MiniList__Enumerator__New1(__type, *source, *versionLock);
}

// public void Reset()
void MiniList__Enumerator__Reset_fn(MiniList__Enumerator* __this, uType* __type)
{
    __this->Reset(__type);
}

// public Enumerator(Fuse.Internal.MiniList<T> source, bool versionLock) [instance]
void MiniList__Enumerator::ctor_1(uType* __type, ::g::Fuse::Internal::MiniList source, bool versionLock)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.MiniList<T>*/),
    };
    _mode = source._mode;

    if (_mode == 2)
        _iter = uPtr(source.AsList(__types[0]))->GetEnumeratorStruct(versionLock);
    else
        _value = source._list;

    _source = source;
    _first = true;
}

// public T get_Current() [instance]
uObject* MiniList__Enumerator::Current(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };

    switch (_mode)
    {
        case 0:
            return nullptr;
        case 1:
            return uAs<uObject*>(_value, __type->T(0));
        case 2:
            return (uObject*)_iter.Current(__types[0]);
    }

    return nullptr;
}

// public void Dispose() [instance]
void MiniList__Enumerator::Dispose(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };

    if (_mode == 2)
        _iter.Dispose(__types[0]);

    _mode = 0;
    _value = nullptr;
}

// public bool MoveNext() [instance]
bool MiniList__Enumerator::MoveNext(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };

    switch (_mode)
    {
        case 0:
        {
            _first = false;
            return false;
        }
        case 1:
        {
            if (_first)
            {
                _first = false;
                return true;
            }

            return false;
        }
        case 2:
            return _iter.MoveNext(__types[0]);
    }

    return false;
}

// public void Reset() [instance]
void MiniList__Enumerator::Reset(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };
    _first = true;

    if (_mode == 2)
        _iter.Reset(__types[0]);
}

// public Enumerator New(Fuse.Internal.MiniList<T> source, bool versionLock) [static]
MiniList__Enumerator MiniList__Enumerator__New1(uType* __type, ::g::Fuse::Internal::MiniList source, bool versionLock)
{
    MiniList__Enumerator obj1;
    obj1.ctor_1(__type, source, versionLock);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/ObjectList.uno
// ---------------------------------------------------------------------------

// public struct ObjectList<T>.Enumerator
// {
// public void Dispose() [adapter]
static void ObjectList__Enumerator__Dispose_ex(uObject* __this)
{
    ObjectList__Enumerator__Dispose_fn((ObjectList__Enumerator*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

static void ObjectList__Enumerator_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(ObjectList__Enumerator_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(type->T(0), nullptr), offsetof(ObjectList__Enumerator, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(ObjectList__Enumerator, _first), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList__Enumerator, _at), 0,
        ::g::Uno::SByte_typeof(), offsetof(ObjectList__Enumerator, _locked), 0);
}

ObjectList__Enumerator_type* ObjectList__Enumerator_typeof()
{
    static uSStrong<ObjectList__Enumerator_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.GenericCount = 1;
    options.InterfaceCount = 1;
    options.Alignment = alignof(ObjectList__Enumerator);
    options.ValueSize = sizeof(ObjectList__Enumerator);
    options.TypeSize = sizeof(ObjectList__Enumerator_type);
    type = (ObjectList__Enumerator_type*)uStructType::New("Fuse.Internal.ObjectList`1.Enumerator", options);
    type->fp_build_ = ObjectList__Enumerator_build;
    type->interface0.fp_Dispose = ObjectList__Enumerator__Dispose_ex;
    return type;
}

// public Enumerator(Fuse.Internal.ObjectList<T> source, bool versionLock)
void ObjectList__Enumerator__ctor_1_fn(ObjectList__Enumerator* __this, uType* __type, ::g::Fuse::Internal::ObjectList* source, bool* versionLock)
{
    __this->ctor_1(__type, source, *versionLock);
}

// public T get_Current()
void ObjectList__Enumerator__get_Current_fn(ObjectList__Enumerator* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->Current(__type);
}

// public void Dispose()
void ObjectList__Enumerator__Dispose_fn(ObjectList__Enumerator* __this, uType* __type)
{
    __this->Dispose(__type);
}

// private bool get_Done()
void ObjectList__Enumerator__get_Done_fn(ObjectList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->Done(__type);
}

// public bool MoveNext()
void ObjectList__Enumerator__MoveNext_fn(ObjectList__Enumerator* __this, uType* __type, bool* __retval)
{
    *__retval = __this->MoveNext(__type);
}

// public Enumerator New(Fuse.Internal.ObjectList<T> source, bool versionLock)
void ObjectList__Enumerator__New1_fn(uType* __type, ::g::Fuse::Internal::ObjectList* source, bool* versionLock, ObjectList__Enumerator* __retval)
{
    *__retval = ObjectList__Enumerator__New1(__type, source, *versionLock);
}

// public void Next()
void ObjectList__Enumerator__Next_fn(ObjectList__Enumerator* __this, uType* __type)
{
    __this->Next(__type);
}

// public void Reset()
void ObjectList__Enumerator__Reset_fn(ObjectList__Enumerator* __this, uType* __type)
{
    __this->Reset(__type);
}

// private void SkipNew()
void ObjectList__Enumerator__SkipNew_fn(ObjectList__Enumerator* __this, uType* __type)
{
    __this->SkipNew(__type);
}

// private void Unlock()
void ObjectList__Enumerator__Unlock_fn(ObjectList__Enumerator* __this, uType* __type)
{
    __this->Unlock(__type);
}

// public Enumerator(Fuse.Internal.ObjectList<T> source, bool versionLock) [instance]
void ObjectList__Enumerator::ctor_1(uType* __type, ::g::Fuse::Internal::ObjectList* source, bool versionLock)
{
    _source = source;
    _first = true;
    _at = uPtr(_source)->_nodeHead;
    _locked = (versionLock ? uPtr(_source)->Lock() : -1);
}

// public T get_Current() [instance]
uObject* ObjectList__Enumerator::Current(uType* __type)
{
    SkipNew(__type);

    if (_at == -1)
        return nullptr;

    return uPtr(uPtr(_source)->_nodes)->Item< ::g::Fuse::Internal::ObjectList__Node>(_at).Value;
}

// public void Dispose() [instance]
void ObjectList__Enumerator::Dispose(uType* __type)
{
    Unlock(__type);
    _source = nullptr;
    _at = -1;
}

// private bool get_Done() [instance]
bool ObjectList__Enumerator::Done(uType* __type)
{
    SkipNew(__type);
    return _at == -1;
}

// public bool MoveNext() [instance]
bool ObjectList__Enumerator::MoveNext(uType* __type)
{
    if (_first)
        _first = false;
    else
        Next(__type);

    return !Done(__type);
}

// public void Next() [instance]
void ObjectList__Enumerator::Next(uType* __type)
{
    if (_at != -1)
        _at = uPtr(uPtr(_source)->_nodes)->Item< ::g::Fuse::Internal::ObjectList__Node>(_at).Next;

    SkipNew(__type);
}

// public void Reset() [instance]
void ObjectList__Enumerator::Reset(uType* __type)
{
    _first = true;
    _at = uPtr(_source)->_nodeHead;
}

// private void SkipNew() [instance]
void ObjectList__Enumerator::SkipNew(uType* __type)
{
    while (_at != -1)
    {
        int8_t rv = uPtr(uPtr(_source)->_nodes)->Item< ::g::Fuse::Internal::ObjectList__Node>(_at).RemoveVersion;

        if ((rv != -1) && ((_locked == -1) || (rv <= _locked)))
        {
            _at = uPtr(uPtr(_source)->_nodes)->Item< ::g::Fuse::Internal::ObjectList__Node>(_at).Next;
            continue;
        }

        if ((_locked != -1) && (uPtr(uPtr(_source)->_nodes)->Item< ::g::Fuse::Internal::ObjectList__Node>(_at).AddVersion > _locked))
        {
            _at = uPtr(uPtr(_source)->_nodes)->Item< ::g::Fuse::Internal::ObjectList__Node>(_at).Next;
            continue;
        }

        break;
    }

    if (_at == -1)
        Unlock(__type);
}

// private void Unlock() [instance]
void ObjectList__Enumerator::Unlock(uType* __type)
{
    if (_locked != -1)
    {
        _locked = -1;
        uPtr(_source)->Unlock();
    }
}

// public Enumerator New(Fuse.Internal.ObjectList<T> source, bool versionLock) [static]
ObjectList__Enumerator ObjectList__Enumerator__New1(uType* __type, ::g::Fuse::Internal::ObjectList* source, bool versionLock)
{
    ObjectList__Enumerator obj1;
    obj1.ctor_1(__type, source, versionLock);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/ObjectList.uno
// ---------------------------------------------------------------------------

// public sealed class ObjectList<T>.EnumeratorClass
// {
static void ObjectList__EnumeratorClass_build(uType* type)
{
    ::TYPES[6] = ::g::Fuse::Internal::ObjectList__Enumerator_typeof();
    type->SetPrecalc(
        ::g::Fuse::Internal::ObjectList__Enumerator_typeof()->MakeType(type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(type->T(0), nullptr), offsetof(ObjectList__EnumeratorClass_type, interface0),
        ::g::Uno::IDisposable_typeof(), offsetof(ObjectList__EnumeratorClass_type, interface1),
        ::g::Uno::Collections::IEnumerator_typeof(), offsetof(ObjectList__EnumeratorClass_type, interface2));
    type->SetFields(0,
        ::TYPES[6/*Fuse.Internal.ObjectList`1.Enumerator*/]->MakeType(type->T(0), nullptr), offsetof(ObjectList__EnumeratorClass, _en), 0);
}

ObjectList__EnumeratorClass_type* ObjectList__EnumeratorClass_typeof()
{
    static uSStrong<ObjectList__EnumeratorClass_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 1;
    options.ObjectSize = sizeof(ObjectList__EnumeratorClass);
    options.TypeSize = sizeof(ObjectList__EnumeratorClass_type);
    type = (ObjectList__EnumeratorClass_type*)uClassType::New("Fuse.Internal.ObjectList`1.EnumeratorClass", options);
    type->fp_build_ = ObjectList__EnumeratorClass_build;
    type->interface0.fp_get_Current = (void(*)(uObject*, uTRef))ObjectList__EnumeratorClass__get_Current_fn;
    type->interface1.fp_Dispose = (void(*)(uObject*))ObjectList__EnumeratorClass__Dispose_fn;
    type->interface2.fp_Reset = (void(*)(uObject*))ObjectList__EnumeratorClass__Reset_fn;
    type->interface2.fp_MoveNext = (void(*)(uObject*, bool*))ObjectList__EnumeratorClass__MoveNext_fn;
    return type;
}

// public EnumeratorClass(Fuse.Internal.ObjectList<T> source)
void ObjectList__EnumeratorClass__ctor__fn(ObjectList__EnumeratorClass* __this, ::g::Fuse::Internal::ObjectList* source)
{
    __this->ctor_(source);
}

// public T get_Current()
void ObjectList__EnumeratorClass__get_Current_fn(ObjectList__EnumeratorClass* __this, uObject** __retval)
{
    *__retval = __this->Current();
}

// public void Dispose()
void ObjectList__EnumeratorClass__Dispose_fn(ObjectList__EnumeratorClass* __this)
{
    __this->Dispose();
}

// public bool MoveNext()
void ObjectList__EnumeratorClass__MoveNext_fn(ObjectList__EnumeratorClass* __this, bool* __retval)
{
    *__retval = __this->MoveNext();
}

// public EnumeratorClass New(Fuse.Internal.ObjectList<T> source)
void ObjectList__EnumeratorClass__New1_fn(uType* __type, ::g::Fuse::Internal::ObjectList* source, ObjectList__EnumeratorClass** __retval)
{
    *__retval = ObjectList__EnumeratorClass::New1(__type, source);
}

// public void Reset()
void ObjectList__EnumeratorClass__Reset_fn(ObjectList__EnumeratorClass* __this)
{
    __this->Reset();
}

// public EnumeratorClass(Fuse.Internal.ObjectList<T> source) [instance]
void ObjectList__EnumeratorClass::ctor_(::g::Fuse::Internal::ObjectList* source)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };
    _en = ::g::Fuse::Internal::ObjectList__Enumerator__New1(__types[0], source, false);
}

// public T get_Current() [instance]
uObject* ObjectList__EnumeratorClass::Current()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };
    return _en.Current(__types[0]);
}

// public void Dispose() [instance]
void ObjectList__EnumeratorClass::Dispose()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };
    _en.Dispose(__types[0]);
}

// public bool MoveNext() [instance]
bool ObjectList__EnumeratorClass::MoveNext()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };
    return _en.MoveNext(__types[0]);
}

// public void Reset() [instance]
void ObjectList__EnumeratorClass::Reset()
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };
    _en.Reset(__types[0]);
}

// public EnumeratorClass New(Fuse.Internal.ObjectList<T> source) [static]
ObjectList__EnumeratorClass* ObjectList__EnumeratorClass::New1(uType* __type, ::g::Fuse::Internal::ObjectList* source)
{
    ObjectList__EnumeratorClass* obj1 = (ObjectList__EnumeratorClass*)uNew(__type);
    obj1->ctor_(source);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/ObjectList.uno
// ---------------------------------------------------------------------------

// public enum ObjectList<T>.Equality
uEnumType* ObjectList__Equality_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Internal.ObjectList`1.Equality", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Object", 0LL,
        "Value", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/AndroidSystemFont.uno
// ----------------------------------------------------------------------------------

// private struct AndroidSystemFont.Family
// {
static void AndroidSystemFont__Family_build(uType* type)
{
    ::TYPES[7] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Internal::AndroidSystemFont__FontDescriptor_typeof(), nullptr);
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(AndroidSystemFont__Family, Name), 0,
        ::g::Uno::String_typeof(), offsetof(AndroidSystemFont__Family, Language), 0,
        ::g::Uno::String_typeof(), offsetof(AndroidSystemFont__Family, Variant), 0,
        ::TYPES[7/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.FontDescriptor>*/], offsetof(AndroidSystemFont__Family, Fonts), 0);
}

uStructType* AndroidSystemFont__Family_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.Alignment = alignof(AndroidSystemFont__Family);
    options.ValueSize = sizeof(AndroidSystemFont__Family);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.Family", options);
    type->fp_build_ = AndroidSystemFont__Family_build;
    return type;
}

// public Family(string name, string language, string variant)
void AndroidSystemFont__Family__ctor_1_fn(AndroidSystemFont__Family* __this, uString* name, uString* language, uString* variant)
{
    __this->ctor_1(name, language, variant);
}

// public Family New(string name, string language, string variant)
void AndroidSystemFont__Family__New1_fn(uString* name, uString* language, uString* variant, AndroidSystemFont__Family* __retval)
{
    *__retval = AndroidSystemFont__Family__New1(name, language, variant);
}

// public Family(string name, string language, string variant) [instance]
void AndroidSystemFont__Family::ctor_1(uString* name, uString* language, uString* variant)
{
    Name = name;
    Language = language;
    Variant = variant;
    Fonts = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[7/*Uno.Collections.List<Fuse.Internal.AndroidSystemFont.FontDescriptor>*/]));
}

// public Family New(string name, string language, string variant) [static]
AndroidSystemFont__Family AndroidSystemFont__Family__New1(uString* name, uString* language, uString* variant)
{
    AndroidSystemFont__Family obj1;
    obj1.ctor_1(name, language, variant);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class Float2Blender
// {
static void Float2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float2_typeof(), nullptr));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

::g::Fuse::Internal::Blender_type* Float2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Float2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float2Blender", options);
    type->fp_build_ = Float2Blender_build;
    type->fp_ctor_ = (void*)Float2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float2Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float2Blender__get_Zero_fn;
    return type;
}

// public generated Float2Blender()
void Float2Blender__ctor_1_fn(Float2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float2 Add(float2 a, float2 b)
void Float2Blender__Add_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float2 a)
void Float2Blender__Length_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(a_), void();
}

// public override sealed float2 Lerp(float2 a, float2 b, double d)
void Float2Blender__Lerp_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, double* d, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp2(a_, b_, (float)d_), void();
}

// public generated Float2Blender New()
void Float2Blender__New1_fn(Float2Blender** __retval)
{
    *__retval = Float2Blender::New1();
}

// public override sealed float2 Sub(float2 a, float2 b)
void Float2Blender__Sub_fn(Float2Blender* __this, ::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    ::g::Uno::Float2 b_ = *b;
    return *__retval = ::g::Uno::Float2__op_Subtraction2(a_, b_), void();
}

// public override sealed float2 ToUnit(float2 a, double& length)
void Float2Blender__ToUnit_fn(Float2Blender* __this, ::g::Uno::Float2* a, double* length, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(a_);
    return *__retval = ::g::Uno::Vector::Normalize(a_), void();
}

// public override sealed float2 Weight(float2 v, double w)
void Float2Blender__Weight_fn(Float2Blender* __this, ::g::Uno::Float2* v, double* w, ::g::Uno::Float2* __retval)
{
    ::g::Uno::Float2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float2__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float2 get_Zero()
void Float2Blender__get_Zero_fn(Float2Blender* __this, ::g::Uno::Float2* __retval)
{
    return *__retval = ::g::Uno::Float2__New1(0.0f), void();
}

// public generated Float2Blender() [instance]
void Float2Blender::ctor_1()
{
    ctor_();
}

// public generated Float2Blender New() [static]
Float2Blender* Float2Blender::New1()
{
    Float2Blender* obj1 = (Float2Blender*)uNew(Float2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class Float3Blender
// {
static void Float3Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float3_typeof(), nullptr));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

::g::Fuse::Internal::Blender_type* Float3Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Float3Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float3Blender", options);
    type->fp_build_ = Float3Blender_build;
    type->fp_ctor_ = (void*)Float3Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float3Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float3Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float3Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float3Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float3Blender__get_Zero_fn;
    return type;
}

// public generated Float3Blender()
void Float3Blender__ctor_1_fn(Float3Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float3 Add(float3 a, float3 b)
void Float3Blender__Add_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float3 a)
void Float3Blender__Length_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length1(a_), void();
}

// public override sealed float3 Lerp(float3 a, float3 b, double d)
void Float3Blender__Lerp_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, double* d, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp4(a_, b_, (float)d_), void();
}

// public generated Float3Blender New()
void Float3Blender__New1_fn(Float3Blender** __retval)
{
    *__retval = Float3Blender::New1();
}

// public override sealed float3 Sub(float3 a, float3 b)
void Float3Blender__Sub_fn(Float3Blender* __this, ::g::Uno::Float3* a, ::g::Uno::Float3* b, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    ::g::Uno::Float3 b_ = *b;
    return *__retval = ::g::Uno::Float3__op_Subtraction2(a_, b_), void();
}

// public override sealed float3 ToUnit(float3 a, double& length)
void Float3Blender__ToUnit_fn(Float3Blender* __this, ::g::Uno::Float3* a, double* length, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 a_ = *a;
    *length = (double)::g::Uno::Vector::Length1(a_);
    return *__retval = ::g::Uno::Vector::Normalize1(a_), void();
}

// public override sealed float3 Weight(float3 v, double w)
void Float3Blender__Weight_fn(Float3Blender* __this, ::g::Uno::Float3* v, double* w, ::g::Uno::Float3* __retval)
{
    ::g::Uno::Float3 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float3__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float3 get_Zero()
void Float3Blender__get_Zero_fn(Float3Blender* __this, ::g::Uno::Float3* __retval)
{
    return *__retval = ::g::Uno::Float3__New1(0.0f), void();
}

// public generated Float3Blender() [instance]
void Float3Blender::ctor_1()
{
    ctor_();
}

// public generated Float3Blender New() [static]
Float3Blender* Float3Blender::New1()
{
    Float3Blender* obj1 = (Float3Blender*)uNew(Float3Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class Float4Blender
// {
static void Float4Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::Float4_typeof(), nullptr));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

::g::Fuse::Internal::Blender_type* Float4Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Float4Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Float4Blender", options);
    type->fp_build_ = Float4Blender_build;
    type->fp_ctor_ = (void*)Float4Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Float4Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Float4Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Float4Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Float4Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Float4Blender__get_Zero_fn;
    return type;
}

// public generated Float4Blender()
void Float4Blender__ctor_1_fn(Float4Blender* __this)
{
    __this->ctor_1();
}

// public override sealed float4 Add(float4 a, float4 b)
void Float4Blender__Add_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Addition2(a_, b_), void();
}

// public override sealed double Length(float4 a)
void Float4Blender__Length_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length2(a_), void();
}

// public override sealed float4 Lerp(float4 a, float4 b, double d)
void Float4Blender__Lerp_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, double* d, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::Math::Lerp6(a_, b_, (float)d_), void();
}

// public generated Float4Blender New()
void Float4Blender__New1_fn(Float4Blender** __retval)
{
    *__retval = Float4Blender::New1();
}

// public override sealed float4 Sub(float4 a, float4 b)
void Float4Blender__Sub_fn(Float4Blender* __this, ::g::Uno::Float4* a, ::g::Uno::Float4* b, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    ::g::Uno::Float4 b_ = *b;
    return *__retval = ::g::Uno::Float4__op_Subtraction2(a_, b_), void();
}

// public override sealed float4 ToUnit(float4 a, double& length)
void Float4Blender__ToUnit_fn(Float4Blender* __this, ::g::Uno::Float4* a, double* length, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 a_ = *a;
    *length = (double)::g::Uno::Vector::Length2(a_);
    return *__retval = ::g::Uno::Vector::Normalize2(a_), void();
}

// public override sealed float4 Weight(float4 v, double w)
void Float4Blender__Weight_fn(Float4Blender* __this, ::g::Uno::Float4* v, double* w, ::g::Uno::Float4* __retval)
{
    ::g::Uno::Float4 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::Float4__op_Multiply1(v_, (float)w_), void();
}

// public override sealed float4 get_Zero()
void Float4Blender__get_Zero_fn(Float4Blender* __this, ::g::Uno::Float4* __retval)
{
    return *__retval = ::g::Uno::Float4__New1(0.0f), void();
}

// public generated Float4Blender() [instance]
void Float4Blender::ctor_1()
{
    ctor_();
}

// public generated Float4Blender New() [static]
Float4Blender* Float4Blender::New1()
{
    Float4Blender* obj1 = (Float4Blender*)uNew(Float4Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class FloatBlender
// {
static void FloatBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::ScalarBlender_typeof()->MakeType(::g::Uno::Float_typeof(), nullptr));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

::g::Fuse::Internal::ScalarBlender_type* FloatBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::ScalarBlender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::ScalarBlender_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(FloatBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::ScalarBlender_type);
    type = (::g::Fuse::Internal::ScalarBlender_type*)uClassType::New("Fuse.Internal.FloatBlender", options);
    type->fp_build_ = FloatBlender_build;
    type->fp_ctor_ = (void*)FloatBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Add_fn;
    type->fp_FromDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, double*, uTRef))FloatBlender__FromDouble_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))FloatBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))FloatBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))FloatBlender__Sub_fn;
    type->fp_ToDouble = (void(*)(::g::Fuse::Internal::ScalarBlender*, void*, double*))FloatBlender__ToDouble_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))FloatBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))FloatBlender__get_Zero_fn;
    return type;
}

// public generated FloatBlender()
void FloatBlender__ctor_2_fn(FloatBlender* __this)
{
    __this->ctor_2();
}

// public override sealed float Add(float a, float b)
void FloatBlender__Add_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ + b_, void();
}

// public override sealed float FromDouble(double a)
void FloatBlender__FromDouble_fn(FloatBlender* __this, double* a, float* __retval)
{
    double a_ = *a;
    return *__retval = (float)a_, void();
}

// public override sealed double Length(float a)
void FloatBlender__Length_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_), void();
}

// public override sealed float Lerp(float a, float b, double d)
void FloatBlender__Lerp_fn(FloatBlender* __this, float* a, float* b, double* d, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    double d_ = *d;
    return *__retval = a_ + ((b_ - a_) * (float)d_), void();
}

// public generated FloatBlender New()
void FloatBlender__New1_fn(FloatBlender** __retval)
{
    *__retval = FloatBlender::New1();
}

// public override sealed float Sub(float a, float b)
void FloatBlender__Sub_fn(FloatBlender* __this, float* a, float* b, float* __retval)
{
    float a_ = *a;
    float b_ = *b;
    return *__retval = a_ - b_, void();
}

// public override sealed double ToDouble(float a)
void FloatBlender__ToDouble_fn(FloatBlender* __this, float* a, double* __retval)
{
    float a_ = *a;
    return *__retval = (double)a_, void();
}

// public override sealed float ToUnit(float a, double& length)
void FloatBlender__ToUnit_fn(FloatBlender* __this, float* a, double* length, float* __retval)
{
    float a_ = *a;
    *length = (double)::g::Uno::Math::Abs1(a_);
    return *__retval = (float)((a_ < 0.0f) ? -1 : 1), void();
}

// public override sealed float Weight(float v, double w)
void FloatBlender__Weight_fn(FloatBlender* __this, float* v, double* w, float* __retval)
{
    float v_ = *v;
    double w_ = *w;
    return *__retval = v_ * (float)w_, void();
}

// public override sealed float get_Zero()
void FloatBlender__get_Zero_fn(FloatBlender* __this, float* __retval)
{
    return *__retval = 0.0f, void();
}

// public generated FloatBlender() [instance]
void FloatBlender::ctor_2()
{
    ctor_1();
}

// public generated FloatBlender New() [static]
FloatBlender* FloatBlender::New1()
{
    FloatBlender* obj1 = (FloatBlender*)uNew(FloatBlender_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/AndroidSystemFont.uno
// ----------------------------------------------------------------------------------

// private struct AndroidSystemFont.FontDescriptor
// {
static void AndroidSystemFont__FontDescriptor_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::String_typeof(), offsetof(AndroidSystemFont__FontDescriptor, FilePath), 0,
        ::g::Uno::Int_typeof(), offsetof(AndroidSystemFont__FontDescriptor, Index), 0,
        ::g::Fuse::SystemFont__Style_typeof(), offsetof(AndroidSystemFont__FontDescriptor, Style), 0,
        ::g::Fuse::SystemFont__Weight_typeof(), offsetof(AndroidSystemFont__FontDescriptor, Weight), 0);
}

uStructType* AndroidSystemFont__FontDescriptor_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.Alignment = alignof(AndroidSystemFont__FontDescriptor);
    options.ValueSize = sizeof(AndroidSystemFont__FontDescriptor);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.AndroidSystemFont.FontDescriptor", options);
    type->fp_build_ = AndroidSystemFont__FontDescriptor_build;
    return type;
}

// public FontDescriptor(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight)
void AndroidSystemFont__FontDescriptor__ctor_1_fn(AndroidSystemFont__FontDescriptor* __this, uString* filePath, int32_t* index, int32_t* style, int32_t* weight)
{
    __this->ctor_1(filePath, *index, *style, *weight);
}

// public FontDescriptor New(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight)
void AndroidSystemFont__FontDescriptor__New1_fn(uString* filePath, int32_t* index, int32_t* style, int32_t* weight, AndroidSystemFont__FontDescriptor* __retval)
{
    *__retval = AndroidSystemFont__FontDescriptor__New1(filePath, *index, *style, *weight);
}

// public FontDescriptor(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [instance]
void AndroidSystemFont__FontDescriptor::ctor_1(uString* filePath, int32_t index, int32_t style, int32_t weight)
{
    FilePath = filePath;
    Index = index;
    Style = style;
    Weight = weight;
}

// public FontDescriptor New(string filePath, int index, Fuse.SystemFont.Style style, Fuse.SystemFont.Weight weight) [static]
AndroidSystemFont__FontDescriptor AndroidSystemFont__FontDescriptor__New1(uString* filePath, int32_t index, int32_t style, int32_t weight)
{
    AndroidSystemFont__FontDescriptor obj1;
    obj1.ctor_1(filePath, index, style, weight);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/SystemFont.uno
// ---------------------------------------------------------------------------

// internal sealed class FontFaceDescriptor
// {
static void FontFaceDescriptor_build(uType* type)
{
    ::TYPES[8] = ::g::Uno::Internal::ArrayEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[9] = ::g::Uno::String_typeof()->Array();
    ::TYPES[10] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(4/*SequenceEqual<string>*/, ::g::Uno::String_typeof(), nullptr);
    ::TYPES[11] = ::g::Uno::Int_typeof();
    ::TYPES[12] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[14] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::String_typeof(), nullptr);
    ::TYPES[15] = ::g::Uno::IDisposable_typeof();
    type->SetFields(0,
        ::g::Uno::UX::FileSource_typeof(), offsetof(FontFaceDescriptor, FileSource), 0,
        ::TYPES[11/*int*/], offsetof(FontFaceDescriptor, Index), 0,
        ::TYPES[12/*Uno.Collections.IEnumerable<string>*/], offsetof(FontFaceDescriptor, Styles), 0);
}

uType* FontFaceDescriptor_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(FontFaceDescriptor);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.FontFaceDescriptor", options);
    type->fp_build_ = FontFaceDescriptor_build;
    type->fp_Equals = (void(*)(uObject*, uObject*, bool*))FontFaceDescriptor__Equals_fn;
    type->fp_GetHashCode = (void(*)(uObject*, int32_t*))FontFaceDescriptor__GetHashCode_fn;
    return type;
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, int index)
void FontFaceDescriptor__ctor__fn(FontFaceDescriptor* __this, ::g::Uno::UX::FileSource* fileSource, int32_t* index)
{
    __this->ctor_(fileSource, *index);
}

// public override sealed bool Equals(object o)
void FontFaceDescriptor__Equals_fn(FontFaceDescriptor* __this, uObject* o, bool* __retval)
{
    FontFaceDescriptor* f = uAs<FontFaceDescriptor*>(o, __this->__type);
    return *__retval = (((f != nullptr) && ::g::Uno::String::op_Equality(uPtr(__this->FileSource)->Name, uPtr(uPtr(f)->FileSource)->Name)) && (__this->Index == uPtr(f)->Index)) && ::g::Uno::Collections::EnumerableExtensions::SequenceEqual(::TYPES[10/*Uno.Collections.EnumerableExtensions.SequenceEqual<string>*/], __this->Styles, uPtr(f)->Styles), void();
}

// public override sealed int GetHashCode()
void FontFaceDescriptor__GetHashCode_fn(FontFaceDescriptor* __this, int32_t* __retval)
{
    int32_t ind1;
    uString* ret5;
    int32_t hash = 17;
    hash = (hash * 23) + uPtr(uPtr(__this->FileSource)->Name)->GetHashCode();
    hash = (hash * 23) + ::g::Uno::Int::GetHashCode((ind1 = __this->Index, ind1), ::TYPES[11/*int*/]);
    uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(__this->Styles), ::TYPES[12/*Uno.Collections.IEnumerable<string>*/]));

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[13/*Uno.Collections.IEnumerator*/])))
                {
                    uString* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[14/*Uno.Collections.IEnumerator<string>*/]), &ret5), ret5);
                    hash = (hash * 23) + uPtr(s)->GetHashCode();
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[15/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_1;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[15/*Uno.IDisposable*/]));
        }
        __after_finally_1:;
    }

    return *__retval = hash, void();
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, int index)
void FontFaceDescriptor__New1_fn(::g::Uno::UX::FileSource* fileSource, int32_t* index, FontFaceDescriptor** __retval)
{
    *__retval = FontFaceDescriptor::New1(fileSource, *index);
}

// public FontFaceDescriptor(Uno.UX.FileSource fileSource, int index) [instance]
void FontFaceDescriptor::ctor_(::g::Uno::UX::FileSource* fileSource, int32_t index)
{
    FileSource = fileSource;
    Index = index;
    Styles = (uObject*)((::g::Uno::Internal::ArrayEnumerable*)::g::Uno::Internal::ArrayEnumerable::New1(::TYPES[8/*Uno.Internal.ArrayEnumerable<string>*/], uArray::New(::TYPES[9/*string[]*/], 0)));
}

// public FontFaceDescriptor New(Uno.UX.FileSource fileSource, int index) [static]
FontFaceDescriptor* FontFaceDescriptor::New1(::g::Uno::UX::FileSource* fileSource, int32_t index)
{
    FontFaceDescriptor* obj4 = (FontFaceDescriptor*)uNew(FontFaceDescriptor_typeof());
    obj4->ctor_(fileSource, index);
    return obj4;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/FrustumMatrix.uno
// ------------------------------------------------------------------------------

// internal static class FrustumMatrix
// {
static void FrustumMatrix_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

uClassType* FrustumMatrix_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.FrustumMatrix", options);
    type->fp_build_ = FrustumMatrix_build;
    return type;
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far)
void FrustumMatrix__OrthoLHInverse_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoLHInverse(*width, *height, *near, *far);
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar)
void FrustumMatrix__OrthoRHInverse_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* __retval)
{
    *__retval = FrustumMatrix::OrthoRHInverse(*width, *height, *zNear, *zFar);
}

// public static bool TryOrthoLH(float width, float height, float near, float far, float4x4& result)
void FrustumMatrix__TryOrthoLH_fn(float* width, float* height, float* near, float* far, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = FrustumMatrix::TryOrthoLH(*width, *height, *near, *far, result);
}

// public static bool TryOrthoRH(float width, float height, float zNear, float zFar, float4x4& result)
void FrustumMatrix__TryOrthoRH_fn(float* width, float* height, float* zNear, float* zFar, ::g::Uno::Float4x4* result, bool* __retval)
{
    *__retval = FrustumMatrix::TryOrthoRH(*width, *height, *zNear, *zFar, result);
}

// public static float4x4 OrthoLHInverse(float width, float height, float near, float far) [static]
::g::Uno::Float4x4 FrustumMatrix::OrthoLHInverse(float width, float height, float near, float far)
{
    float halfWidth = width * 0.5f;
    float halfHeight = height * 0.5f;
    ::g::Uno::Float4x4 result = ::g::Uno::Float4x4__Identity();
    result.M11 = halfWidth;
    result.M22 = halfHeight;
    result.M33 = (-(far - near) / 2.0f);
    result.M43 = ((near + far) / 2.0f);
    return result;
}

// public static float4x4 OrthoRHInverse(float width, float height, float zNear, float zFar) [static]
::g::Uno::Float4x4 FrustumMatrix::OrthoRHInverse(float width, float height, float zNear, float zFar)
{
    ::g::Uno::Float4x4 result = FrustumMatrix::OrthoLHInverse(width, height, zNear, zFar);
    result.M33 = (result.M33 * -1.0f);
    result.M43 = (result.M43 * -1.0f);
    return result;
}

// public static bool TryOrthoLH(float width, float height, float near, float far, float4x4& result) [static]
bool FrustumMatrix::TryOrthoLH(float width, float height, float near, float far, ::g::Uno::Float4x4* result)
{
    float depth = far - near;

    if ((::g::Uno::Math::Min1(::g::Uno::Math::Abs1(width), ::g::Uno::Math::Abs1(height)) < 1e-05f) || (::g::Uno::Math::Abs1(depth) < 1e-05f))
    {
        *result = ::g::Uno::Float4x4__Identity();
        return false;
    }

    *result = ::g::Uno::Float4x4__Identity();
    (*result).M11 = (2.0f / width);
    (*result).M22 = (2.0f / height);
    (*result).M33 = (-2.0f / depth);
    (*result).M43 = ((far + near) / depth);
    return true;
}

// public static bool TryOrthoRH(float width, float height, float zNear, float zFar, float4x4& result) [static]
bool FrustumMatrix::TryOrthoRH(float width, float height, float zNear, float zFar, ::g::Uno::Float4x4* result)
{
    if (FrustumMatrix::TryOrthoLH(width, height, zNear, zFar, result))
    {
        (*result).M33 = ((*result).M33 * -1.0f);
        return true;
    }

    return false;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Internal/ImageContainer.uno
// ---------------------------------------------------------------------------------

// internal abstract interface IImageContainerOwner
// {
uInterfaceType* IImageContainerOwner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Internal.IImageContainerOwner", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Internal/ImageContainer.uno
// ---------------------------------------------------------------------------------

// internal sealed class ImageContainer
// {
static void ImageContainer_build(uType* type)
{
    ::STRINGS[1] = uString::Const("Switching listen state on null Image");
    ::STRINGS[2] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Internal/ImageContainer.uno");
    ::STRINGS[3] = uString::Const("UpdateSourceListen");
    ::STRINGS[4] = uString::Const("ResampleMode.Mipmap has been deprecated. Use ResampleMode.Linear instead.");
    ::STRINGS[5] = uString::Const("set_ResampleMode");
    ::TYPES[13] = ::g::Uno::Collections::IEnumerator_typeof();
    ::TYPES[16] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), nullptr);
    ::TYPES[17] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), nullptr);
    ::TYPES[15] = ::g::Uno::IDisposable_typeof();
    ::TYPES[18] = ::g::Fuse::Internal::IImageContainerOwner_typeof();
    ::TYPES[19] = ::g::Uno::Action1_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), nullptr);
    ::TYPES[20] = ::g::Fuse::Resources::FileImageSource_typeof();
    ::TYPES[21] = ::g::Fuse::Resources::HttpImageSource_typeof();
    ::TYPES[22] = ::g::Fuse::Resources::MultiDensityImageSource_typeof();
    ::TYPES[23] = ::g::Uno::Collections::IEnumerable_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), nullptr);
    ::TYPES[24] = ::g::Uno::Collections::IEnumerator1_typeof()->MakeType(::g::Fuse::Resources::ImageSource_typeof(), nullptr);
    ::TYPES[25] = ::g::Uno::EventHandler_typeof();
    ::TYPES[26] = ::g::Fuse::Resources::ImageSourceErrorHandler_typeof();
    type->SetDependencies(
        ::g::Uno::EventArgs_typeof());
    type->SetFields(0,
        ::TYPES[18/*Fuse.Internal.IImageContainerOwner*/], offsetof(ImageContainer, _owner), uFieldFlagsWeak,
        ::g::Fuse::Internal::SizingContainer_typeof(), offsetof(ImageContainer, Sizing), 0,
        ::g::Uno::Float_typeof(), offsetof(ImageContainer, _density), 0,
        ::g::Fuse::Resources::MemoryPolicy_typeof(), offsetof(ImageContainer, _memoryPolicy), 0,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Uno::UX::FileSource_typeof(), nullptr), offsetof(ImageContainer, _files), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageContainer, _sourcePinned), 0,
        ::g::Fuse::Resources::ImageSource_typeof(), offsetof(ImageContainer, _source), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageContainer, _isSourceListen), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageContainer, _isRooted), 0,
        ::g::Fuse::Drawing::ResampleMode_typeof(), offsetof(ImageContainer, _resampleMode), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageContainer, _isVisible), 0,
        ::TYPES[25/*Uno.EventHandler*/], offsetof(ImageContainer, ParamChanged1), 0,
        ::TYPES[25/*Uno.EventHandler*/], offsetof(ImageContainer, SourceChanged1), 0,
        ::TYPES[26/*Fuse.Resources.ImageSourceErrorHandler*/], offsetof(ImageContainer, SourceError1), 0);
}

uType* ImageContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 14;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(ImageContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.ImageContainer", options);
    type->fp_build_ = ImageContainer_build;
    return type;
}

// private void CheckPinning()
void ImageContainer__CheckPinning_fn(ImageContainer* __this)
{
    __this->CheckPinning();
}

// private void CreateMultiDensitySource()
void ImageContainer__CreateMultiDensitySource_fn(ImageContainer* __this)
{
    __this->CreateMultiDensitySource();
}

// public float get_Density()
void ImageContainer__get_Density_fn(ImageContainer* __this, float* __retval)
{
    *__retval = __this->Density();
}

// public void set_Density(float value)
void ImageContainer__set_Density_fn(ImageContainer* __this, float* value)
{
    __this->Density(*value);
}

// public texture2D GetTexture()
void ImageContainer__GetTexture_fn(ImageContainer* __this, ::g::Uno::Graphics::Texture2D** __retval)
{
    *__retval = __this->GetTexture();
}

// public bool get_IsRooted()
void ImageContainer__get_IsRooted_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsRooted();
}

// public void set_IsRooted(bool value)
void ImageContainer__set_IsRooted_fn(ImageContainer* __this, bool* value)
{
    __this->IsRooted(*value);
}

// public bool get_IsVisible()
void ImageContainer__get_IsVisible_fn(ImageContainer* __this, bool* __retval)
{
    *__retval = __this->IsVisible();
}

// public void set_IsVisible(bool value)
void ImageContainer__set_IsVisible_fn(ImageContainer* __this, bool* value)
{
    __this->IsVisible(*value);
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy()
void ImageContainer__get_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    *__retval = __this->MemoryPolicy();
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value)
void ImageContainer__set_MemoryPolicy_fn(ImageContainer* __this, ::g::Fuse::Resources::MemoryPolicy* value)
{
    __this->MemoryPolicy(value);
}

// private void OnFilesChanged(Uno.UX.FileSource ignoreFile)
void ImageContainer__OnFilesChanged_fn(ImageContainer* __this, ::g::Uno::UX::FileSource* ignoreFile)
{
    __this->OnFilesChanged(ignoreFile);
}

// private void OnParamChanged()
void ImageContainer__OnParamChanged_fn(ImageContainer* __this)
{
    __this->OnParamChanged();
}

// private void OnRooted()
void ImageContainer__OnRooted_fn(ImageContainer* __this)
{
    __this->OnRooted();
}

// private void OnSizingChanged()
void ImageContainer__OnSizingChanged_fn(ImageContainer* __this)
{
    __this->OnSizingChanged();
}

// private void OnSourceChanged(object s, object a)
void ImageContainer__OnSourceChanged_fn(ImageContainer* __this, uObject* s, uObject* a)
{
    __this->OnSourceChanged(s, a);
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args)
void ImageContainer__OnSourceError_fn(ImageContainer* __this, uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    __this->OnSourceError(s, args);
}

// private void OnUnrooted()
void ImageContainer__OnUnrooted_fn(ImageContainer* __this)
{
    __this->OnUnrooted();
}

// public generated void add_ParamChanged(Uno.EventHandler value)
void ImageContainer__add_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_ParamChanged(value);
}

// public generated void remove_ParamChanged(Uno.EventHandler value)
void ImageContainer__remove_ParamChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_ParamChanged(value);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src)
void ImageContainer__ReapplyOptions_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* src)
{
    __this->ReapplyOptions(src);
}

// private void ReleaseSource()
void ImageContainer__ReleaseSource_fn(ImageContainer* __this)
{
    __this->ReleaseSource();
}

// public Fuse.Drawing.ResampleMode get_ResampleMode()
void ImageContainer__get_ResampleMode_fn(ImageContainer* __this, int32_t* __retval)
{
    *__retval = __this->ResampleMode();
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value)
void ImageContainer__set_ResampleMode_fn(ImageContainer* __this, int32_t* value)
{
    __this->ResampleMode(*value);
}

// public Fuse.Resources.ImageSource get_Source()
void ImageContainer__get_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value)
void ImageContainer__set_Source_fn(ImageContainer* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public generated void add_SourceChanged(Uno.EventHandler value)
void ImageContainer__add_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceChanged(value);
}

// public generated void remove_SourceChanged(Uno.EventHandler value)
void ImageContainer__remove_SourceChanged_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceChanged(value);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value)
void ImageContainer__add_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->add_SourceError(value);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value)
void ImageContainer__remove_SourceError_fn(ImageContainer* __this, uDelegate* value)
{
    __this->remove_SourceError(value);
}

// public Fuse.Elements.StretchMode get_StretchMode()
void ImageContainer__get_StretchMode_fn(ImageContainer* __this, int32_t* __retval)
{
    *__retval = __this->StretchMode();
}

// public void set_StretchMode(Fuse.Elements.StretchMode value)
void ImageContainer__set_StretchMode_fn(ImageContainer* __this, int32_t* value)
{
    __this->StretchMode(*value);
}

// private void UpdateSourceListen([bool forceOff])
void ImageContainer__UpdateSourceListen_fn(ImageContainer* __this, bool* forceOff)
{
    __this->UpdateSourceListen(*forceOff);
}

// private void CheckPinning() [instance]
void ImageContainer::CheckPinning()
{
    if (_source == nullptr)
        return;

    bool on = _isRooted;

    if (uPtr(MemoryPolicy())->UnpinInvisible() && !_isVisible)
        on = false;

    if (on != _sourcePinned)
    {
        if (on)
            uPtr(_source)->Pin();
        else
            uPtr(_source)->Unpin();

        _sourcePinned = on;
    }
}

// private void CreateMultiDensitySource() [instance]
void ImageContainer::CreateMultiDensitySource()
{
    ::g::Fuse::Resources::FileImageSource* collection5;
    float ind9;
    ::g::Fuse::Resources::MemoryPolicy* ind10;
    ::g::Uno::UX::FileSource* ret14;
    ::g::Fuse::Resources::MultiDensityImageSource* s = ::g::Fuse::Resources::MultiDensityImageSource::New2();
    uObject* enum4 = (uObject*)uPtr(_files)->GetEnumerator();

    {
        try
        {
            {
                while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum4), ::TYPES[13/*Uno.Collections.IEnumerator*/])))
                {
                    ::g::Uno::UX::FileSource* f = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum4), ::TYPES[16/*Uno.Collections.IEnumerator<Uno.UX.FileSource>*/]), &ret14), ret14);
                    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(uPtr(s)->Sources()), ::TYPES[17/*Uno.Collections.ICollection<Fuse.Resources.ImageSource>*/]), (collection5 = ::g::Fuse::Resources::FileImageSource::New3(f), ind9 = Density(), uPtr(collection5)->Density(ind9), ind9, ind10 = MemoryPolicy(), uPtr(collection5)->DefaultPolicy(ind10), ind10, collection5));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[15/*Uno.IDisposable*/]));
            }
                        throw __t;
            goto __after_finally_2;
        }

        {
            ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum4), ::TYPES[15/*Uno.IDisposable*/]));
        }
        __after_finally_2:;
    }

    Source(s);
}

// public float get_Density() [instance]
float ImageContainer::Density()
{
    return _density;
}

// public void set_Density(float value) [instance]
void ImageContainer::Density(float value)
{
    if (_density != value)
    {
        _density = value;
        OnParamChanged();
    }
}

// public texture2D GetTexture() [instance]
::g::Uno::Graphics::Texture2D* ImageContainer::GetTexture()
{
    if (Source() != nullptr)
        return uPtr(Source())->GetTexture();

    return nullptr;
}

// public bool get_IsRooted() [instance]
bool ImageContainer::IsRooted()
{
    return _isRooted;
}

// public void set_IsRooted(bool value) [instance]
void ImageContainer::IsRooted(bool value)
{
    if (_isRooted == value)
        return;

    _isRooted = value;

    if (_isRooted)
        OnRooted();
    else
        OnUnrooted();

    CheckPinning();
    UpdateSourceListen(false);
}

// public bool get_IsVisible() [instance]
bool ImageContainer::IsVisible()
{
    return _isVisible;
}

// public void set_IsVisible(bool value) [instance]
void ImageContainer::IsVisible(bool value)
{
    if (_isVisible != value)
    {
        _isVisible = value;
        CheckPinning();
    }
}

// public Fuse.Resources.MemoryPolicy get_MemoryPolicy() [instance]
::g::Fuse::Resources::MemoryPolicy* ImageContainer::MemoryPolicy()
{
    return _memoryPolicy;
}

// public void set_MemoryPolicy(Fuse.Resources.MemoryPolicy value) [instance]
void ImageContainer::MemoryPolicy(::g::Fuse::Resources::MemoryPolicy* value)
{
    _memoryPolicy = value;
    ReapplyOptions(Source());
    CheckPinning();
}

// private void OnFilesChanged(Uno.UX.FileSource ignoreFile) [instance]
void ImageContainer::OnFilesChanged(::g::Uno::UX::FileSource* ignoreFile)
{
    ::g::Fuse::Resources::FileImageSource* collection3;
    float ind6;
    ::g::Uno::UX::FileSource* ind7;
    ::g::Fuse::Resources::MemoryPolicy* ind8;
    ::g::Uno::UX::FileSource* ret15;

    if (uPtr(_files)->Count() == 0)
        Source(nullptr);
    else if (uPtr(_files)->Count() == 1)
        Source((collection3 = ::g::Fuse::Resources::FileImageSource::New2(), ind6 = Density(), uPtr(collection3)->Density(ind6), ind6, ind7 = (::g::Uno::Collections::RootableList__get_Item_fn(uPtr(_files), uCRef<int32_t>(0), &ret15), ret15), uPtr(collection3)->File(ind7), ind7, ind8 = MemoryPolicy(), uPtr(collection3)->DefaultPolicy(ind8), ind8, collection3));
    else
        CreateMultiDensitySource();
}

// private void OnParamChanged() [instance]
void ImageContainer::OnParamChanged()
{
    if (::g::Uno::Delegate::op_Inequality(ParamChanged1, nullptr))
        uPtr(ParamChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != nullptr)
        ::g::Fuse::Internal::IImageContainerOwner::OnParamChanged(uInterface(uPtr(_owner), ::TYPES[18/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnRooted() [instance]
void ImageContainer::OnRooted()
{
    if (_files != nullptr)
    {
        uPtr(_files)->Subscribe(uDelegate::New(::TYPES[19/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFilesChanged_fn, this), uDelegate::New(::TYPES[19/*Uno.Action<Uno.UX.FileSource>*/], (void*)ImageContainer__OnFilesChanged_fn, this));
        OnFilesChanged(nullptr);
    }
}

// private void OnSizingChanged() [instance]
void ImageContainer::OnSizingChanged()
{
    OnParamChanged();

    if (_owner != nullptr)
        ::g::Fuse::Internal::IImageContainerOwner::OnSizingChanged(uInterface(uPtr(_owner), ::TYPES[18/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceChanged(object s, object a) [instance]
void ImageContainer::OnSourceChanged(uObject* s, uObject* a)
{
    CheckPinning();

    if (::g::Uno::Delegate::op_Inequality(SourceChanged1, nullptr))
        uPtr(SourceChanged1)->Invoke(2, this, (::g::Uno::EventArgs*)::g::Uno::EventArgs::Empty());

    if (_owner != nullptr)
        ::g::Fuse::Internal::IImageContainerOwner::OnSourceChanged(uInterface(uPtr(_owner), ::TYPES[18/*Fuse.Internal.IImageContainerOwner*/]));
}

// private void OnSourceError(object s, Fuse.Resources.ImageSourceErrorArgs args) [instance]
void ImageContainer::OnSourceError(uObject* s, ::g::Fuse::Resources::ImageSourceErrorArgs* args)
{
    if (::g::Uno::Delegate::op_Inequality(SourceError1, nullptr))
        uPtr(SourceError1)->Invoke(2, this, args);
}

// private void OnUnrooted() [instance]
void ImageContainer::OnUnrooted()
{
    if (_files != nullptr)
        uPtr(_files)->Unsubscribe();
}

// public generated void add_ParamChanged(Uno.EventHandler value) [instance]
void ImageContainer::add_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(ParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_ParamChanged(Uno.EventHandler value) [instance]
void ImageContainer::remove_ParamChanged(uDelegate* value)
{
    ParamChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(ParamChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// private void ReapplyOptions(Fuse.Resources.ImageSource src) [instance]
void ImageContainer::ReapplyOptions(::g::Fuse::Resources::ImageSource* src)
{
    ::g::Fuse::Resources::ImageSource* ret16;
    ::g::Fuse::Resources::FileImageSource* f = uAs< ::g::Fuse::Resources::FileImageSource*>(src, ::TYPES[20/*Fuse.Resources.FileImageSource*/]);

    if ((f != nullptr) && (MemoryPolicy() != nullptr))
        uPtr(f)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::HttpImageSource* hf = uAs< ::g::Fuse::Resources::HttpImageSource*>(src, ::TYPES[21/*Fuse.Resources.HttpImageSource*/]);

    if ((hf != nullptr) && (MemoryPolicy() != nullptr))
        uPtr(hf)->DefaultPolicy(MemoryPolicy());

    ::g::Fuse::Resources::MultiDensityImageSource* mf = uAs< ::g::Fuse::Resources::MultiDensityImageSource*>(src, ::TYPES[22/*Fuse.Resources.MultiDensityImageSource*/]);

    if (mf != nullptr)
    {
        uObject* enum2 = (uObject*)::g::Uno::Collections::IEnumerable::GetEnumerator(uInterface(uPtr(uPtr(mf)->Sources()), ::TYPES[23/*Uno.Collections.IEnumerable<Fuse.Resources.ImageSource>*/]));

        {
            try
            {
                {
                    while (::g::Uno::Collections::IEnumerator::MoveNext(uInterface(uPtr(enum2), ::TYPES[13/*Uno.Collections.IEnumerator*/])))
                    {
                        ::g::Fuse::Resources::ImageSource* s = (::g::Uno::Collections::IEnumerator1::get_Current_ex(uInterface(uPtr(enum2), ::TYPES[24/*Uno.Collections.IEnumerator<Fuse.Resources.ImageSource>*/]), &ret16), ret16);
                        ReapplyOptions(s);
                    }
                }
            }

            catch (const uThrowable& __t)
            {
                {
                    ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[15/*Uno.IDisposable*/]));
                }
                                throw __t;
                goto __after_finally_3;
            }

            {
                ::g::Uno::IDisposable::Dispose(uInterface(uPtr(enum2), ::TYPES[15/*Uno.IDisposable*/]));
            }
            __after_finally_3:;
        }
    }
}

// private void ReleaseSource() [instance]
void ImageContainer::ReleaseSource()
{
    if (_source == nullptr)
        return;

    UpdateSourceListen(true);

    if (_sourcePinned)
    {
        uPtr(_source)->Unpin();
        _sourcePinned = false;
    }

    _source = nullptr;
}

// public Fuse.Drawing.ResampleMode get_ResampleMode() [instance]
int32_t ImageContainer::ResampleMode()
{
    return _resampleMode;
}

// public void set_ResampleMode(Fuse.Drawing.ResampleMode value) [instance]
void ImageContainer::ResampleMode(int32_t value)
{
    if (_resampleMode != value)
    {
        if (value == 2)
            ::g::Fuse::Diagnostics::Deprecated(::STRINGS[4/*"ResampleMod...*/], this, ::STRINGS[2/*"/Users/mort...*/], 293, ::STRINGS[5/*"set_Resampl...*/]);

        _resampleMode = value;
        OnParamChanged();
    }
}

// public Fuse.Resources.ImageSource get_Source() [instance]
::g::Fuse::Resources::ImageSource* ImageContainer::Source()
{
    return _source;
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance]
void ImageContainer::Source(::g::Fuse::Resources::ImageSource* value)
{
    if (_source != value)
    {
        ReleaseSource();
        _source = value;
        UpdateSourceListen(false);
        OnSourceChanged(nullptr, nullptr);
    }
}

// public generated void add_SourceChanged(Uno.EventHandler value) [instance]
void ImageContainer::add_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void remove_SourceChanged(Uno.EventHandler value) [instance]
void ImageContainer::remove_SourceChanged(uDelegate* value)
{
    SourceChanged1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceChanged1, value), ::TYPES[25/*Uno.EventHandler*/]);
}

// public generated void add_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance]
void ImageContainer::add_SourceError(uDelegate* value)
{
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Combine(SourceError1, value), ::TYPES[26/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public generated void remove_SourceError(Fuse.Resources.ImageSourceErrorHandler value) [instance]
void ImageContainer::remove_SourceError(uDelegate* value)
{
    SourceError1 = uCast<uDelegate*>(::g::Uno::Delegate::Remove(SourceError1, value), ::TYPES[26/*Fuse.Resources.ImageSourceErrorHandler*/]);
}

// public Fuse.Elements.StretchMode get_StretchMode() [instance]
int32_t ImageContainer::StretchMode()
{
    return uPtr(Sizing)->stretchMode;
}

// public void set_StretchMode(Fuse.Elements.StretchMode value) [instance]
void ImageContainer::StretchMode(int32_t value)
{
    if (uPtr(Sizing)->SetStretchMode(value))
        OnSizingChanged();
}

// private void UpdateSourceListen([bool forceOff]) [instance]
void ImageContainer::UpdateSourceListen(bool forceOff)
{
    bool should = (!forceOff && (_source != nullptr)) && IsRooted();

    if (should == _isSourceListen)
        return;

    if (_source == nullptr)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[1/*"Switching l...*/], this, ::STRINGS[2/*"/Users/mort...*/], 177, ::STRINGS[3/*"UpdateSourc...*/]);
        _isSourceListen = false;
        return;
    }

    _isSourceListen = should;

    if (should)
    {
        uPtr(_source)->add_Changed(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
        uPtr(_source)->add_Error(uDelegate::New(::TYPES[26/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));
    }
    else
    {
        uPtr(_source)->remove_Changed(uDelegate::New(::TYPES[25/*Uno.EventHandler*/], (void*)ImageContainer__OnSourceChanged_fn, this));
        uPtr(_source)->remove_Error(uDelegate::New(::TYPES[26/*Fuse.Resources.ImageSourceErrorHandler*/], (void*)ImageContainer__OnSourceError_fn, this));
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/MiniList.uno
// -------------------------------------------------------------------------

// internal struct MiniList<T>
// {
// public void Insert(int index, T value) [adapter]
static void MiniList__Insert_ex(uObject* __this, int32_t* index, uObject* value)
{
    MiniList__Insert_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index, value);
}

// public void RemoveAt(int index) [adapter]
static void MiniList__RemoveAt_ex(uObject* __this, int32_t* index)
{
    MiniList__RemoveAt_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index);
}

// public T get_Item(int index) [adapter]
static void MiniList__get_Item_ex(uObject* __this, int32_t* index, uObject** __retval)
{
    MiniList__get_Item_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, index, __retval);
}

// public void Clear() [adapter]
static void MiniList__Clear_ex(uObject* __this)
{
    MiniList__Clear_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type);
}

// public void Add(T value) [adapter]
static void MiniList__Add_ex(uObject* __this, uObject* value)
{
    MiniList__Add_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value);
}

// public bool Remove(T value) [adapter]
static void MiniList__Remove_ex(uObject* __this, uObject* value, bool* __retval)
{
    MiniList__Remove_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value, __retval);
}

// public bool Contains(T value) [adapter]
static void MiniList__Contains_ex(uObject* __this, uObject* value, bool* __retval)
{
    MiniList__Contains_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, value, __retval);
}

// public int get_Count() [adapter]
static void MiniList__get_Count_ex(uObject* __this, int32_t* __retval)
{
    MiniList__get_Count_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [adapter]
static void MiniList__GetEnumerator_ex(uObject* __this, uObject** __retval)
{
    MiniList__GetEnumerator_fn((MiniList*)((uint8_t*)__this + sizeof(uObject)), __this->__type, __retval);
}

static void MiniList_build(uType* type)
{
    type->SetPrecalc(
        MiniList__Enumerator_typeof()->MakeType(type->T(0), nullptr),
        ::g::Fuse::Internal::ObjectList_typeof()->MakeType(type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), nullptr), offsetof(MiniList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), nullptr), offsetof(MiniList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), nullptr), offsetof(MiniList_type, interface2));
    type->SetFields(0,
        uObject_typeof(), offsetof(MiniList, _list), 0,
        ::g::Fuse::Internal::MiniListMode_typeof(), offsetof(MiniList, _mode), 0);
}

MiniList_type* MiniList_typeof()
{
    static uSStrong<MiniList_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 2;
    options.Alignment = alignof(MiniList);
    options.ValueSize = sizeof(MiniList);
    options.TypeSize = sizeof(MiniList_type);
    type = (MiniList_type*)uStructType::New("Fuse.Internal.MiniList`1", options);
    type->fp_build_ = MiniList_build;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))MiniList__Insert_ex;
    type->interface0.fp_RemoveAt = MiniList__RemoveAt_ex;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))MiniList__get_Item_ex;
    type->interface1.fp_Clear = MiniList__Clear_ex;
    type->interface1.fp_Add = (void(*)(uObject*, void*))MiniList__Add_ex;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))MiniList__Remove_ex;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))MiniList__Contains_ex;
    type->interface1.fp_get_Count = MiniList__get_Count_ex;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))MiniList__GetEnumerator_ex;
    return type;
}

// public void Add(T value)
void MiniList__Add_fn(MiniList* __this, uType* __type, uObject* value)
{
    __this->Add(__type, value);
}

// private Fuse.Internal.ObjectList<T> get_AsList()
void MiniList__get_AsList_fn(MiniList* __this, uType* __type, ::g::Fuse::Internal::ObjectList** __retval)
{
    *__retval = __this->AsList(__type);
}

// public void Clear()
void MiniList__Clear_fn(MiniList* __this, uType* __type)
{
    __this->Clear(__type);
}

// public bool Contains(T value)
void MiniList__Contains_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval)
{
    *__retval = __this->Contains(__type, value);
}

// public int get_Count()
void MiniList__get_Count_fn(MiniList* __this, uType* __type, int32_t* __retval)
{
    *__retval = __this->Count(__type);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator()
void MiniList__GetEnumerator_fn(MiniList* __this, uType* __type, uObject** __retval)
{
    *__retval = __this->GetEnumerator(__type);
}

// public void Insert(int index, T value)
void MiniList__Insert_fn(MiniList* __this, uType* __type, int32_t* index, uObject* value)
{
    __this->Insert(__type, *index, value);
}

// public T get_Item(int index)
void MiniList__get_Item_fn(MiniList* __this, uType* __type, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(__type, *index);
}

// public bool Remove(T value)
void MiniList__Remove_fn(MiniList* __this, uType* __type, uObject* value, bool* __retval)
{
    *__retval = __this->Remove(__type, value);
}

// public void RemoveAt(int index)
void MiniList__RemoveAt_fn(MiniList* __this, uType* __type, int32_t* index)
{
    __this->RemoveAt(__type, *index);
}

// public void Add(T value) [instance]
void MiniList::Add(uType* __type, uObject* value)
{
    Insert(__type, Count(__type), value);
}

// private Fuse.Internal.ObjectList<T> get_AsList() [instance]
::g::Fuse::Internal::ObjectList* MiniList::AsList(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.ObjectList<T>*/),
    };
    return uCast< ::g::Fuse::Internal::ObjectList*>(_list, __types[0]);
}

// public void Clear() [instance]
void MiniList::Clear(uType* __type)
{
    switch (_mode)
    {
        case 0:
            break;
        case 1:
        {
            _list = nullptr;
            _mode = 0;
            break;
        }
        case 2:
        {
            uPtr(AsList(__type))->Clear();
            break;
        }
    }
}

// public bool Contains(T value) [instance]
bool MiniList::Contains(uType* __type, uObject* value)
{
    switch (_mode)
    {
        case 0:
            return false;
        case 1:
            return ::g::Uno::Object::Equals1(_list, value);
        case 2:
            return uPtr(AsList(__type))->Contains(value);
    }

    return false;
}

// public int get_Count() [instance]
int32_t MiniList::Count(uType* __type)
{
    switch (_mode)
    {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return uPtr(AsList(__type))->Count();
    }

    return 0;
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance]
uObject* MiniList::GetEnumerator(uType* __type)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.MiniList<T>.Enumerator*/),
    };
    return uBox(__types[0], MiniList__Enumerator__New1(__types[0], *this, false));
}

// public void Insert(int index, T value) [instance]
void MiniList::Insert(uType* __type, int32_t index, uObject* value)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.ObjectList<T>*/),
    };

    if (value == nullptr)
        U_THROW(::g::Uno::ArgumentNullException::New6(uString::Const("value")));

    if (_mode == 0)
    {
        if (index != 0)
            U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("index")));

        _list = value;
        _mode = 1;
        return;
    }

    if (_mode == 1)
    {
        ::g::Fuse::Internal::ObjectList* l = (::g::Fuse::Internal::ObjectList*)::g::Fuse::Internal::ObjectList::New1(__types[0], 1);
        l->Add(uAs<uObject*>(_list, __type->T(0)));
        _list = l;
        _mode = 2;
    }

    uPtr(AsList(__type))->Insert(index, value);
}

// public T get_Item(int index) [instance]
uObject* MiniList::Item(uType* __type, int32_t index)
{
    switch (_mode)
    {
        case 0:
            U_THROW(::g::Uno::IndexOutOfRangeException::New4());
        case 1:
        {
            if (index != 0)
                U_THROW(::g::Uno::IndexOutOfRangeException::New4());

            return uAs<uObject*>(_list, __type->T(0));
        }
        case 2:
            return (uObject*)uPtr(AsList(__type))->Item(index);
    }

    return nullptr;
}

// public bool Remove(T value) [instance]
bool MiniList::Remove(uType* __type, uObject* value)
{
    if (_mode == 0)
        return false;

    if (_mode == 1)
    {
        if (!::g::Uno::Object::Equals1(_list, value))
            return false;

        _list = nullptr;
        _mode = 0;
        return true;
    }

    return uPtr(AsList(__type))->Remove(value);
}

// public void RemoveAt(int index) [instance]
void MiniList::RemoveAt(uType* __type, int32_t index)
{
    if (_mode == 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("index")));

    if (_mode == 1)
    {
        if (index != 0)
            U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("index")));

        _mode = 0;
        _list = nullptr;
        return;
    }

    uPtr(AsList(__type))->RemoveAt(index);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/MiniList.uno
// -------------------------------------------------------------------------

// internal enum MiniListMode
uEnumType* MiniListMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Internal.MiniListMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Empty", 0LL,
        "Single", 1LL,
        "List", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/ObjectList.uno
// ---------------------------------------------------------------------------

// private struct ObjectList<T>.Node
// {
static void ObjectList__Node_build(uType* type)
{
    type->SetFields(0,
        type->T(0), offsetof(ObjectList__Node, Value), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList__Node, Next), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList__Node, Prev), 0,
        ::g::Uno::SByte_typeof(), offsetof(ObjectList__Node, AddVersion), 0,
        ::g::Uno::SByte_typeof(), offsetof(ObjectList__Node, RemoveVersion), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList__Node, Ordered), 0);
}

uStructType* ObjectList__Node_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 6;
    options.GenericCount = 1;
    options.Alignment = alignof(ObjectList__Node);
    options.ValueSize = sizeof(ObjectList__Node);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.ObjectList`1.Node", options);
    type->fp_build_ = ObjectList__Node_build;
    return type;
}

// public void Clear()
void ObjectList__Node__Clear_fn(ObjectList__Node* __this, uType* __type)
{
    __this->Clear(__type);
}

// public void Clear() [instance]
void ObjectList__Node::Clear(uType* __type)
{
    Next = -1;
    Prev = -1;
    AddVersion = 0;
    RemoveVersion = -1;
    Value = nullptr;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/ObjectList.uno
// ---------------------------------------------------------------------------

// internal sealed class ObjectList<T>
// {
static void ObjectList_build(uType* type)
{
    type->SetPrecalc(
        ObjectList__Node_typeof()->MakeType(type->T(0), nullptr)->Array(),
        ObjectList__Enumerator_typeof()->MakeType(type->T(0), nullptr),
        ObjectList__EnumeratorClass_typeof()->MakeType(type->T(0), nullptr),
        ObjectList__Node_typeof()->MakeType(type->T(0), nullptr));
    type->SetInterfaces(
        ::g::Uno::Collections::IList_typeof()->MakeType(type->T(0), nullptr), offsetof(ObjectList_type, interface0),
        ::g::Uno::Collections::ICollection_typeof()->MakeType(type->T(0), nullptr), offsetof(ObjectList_type, interface1),
        ::g::Uno::Collections::IEnumerable_typeof()->MakeType(type->T(0), nullptr), offsetof(ObjectList_type, interface2));
    type->SetFields(0,
        ObjectList__Node_typeof()->MakeType(type->T(0), nullptr)->Array(), offsetof(ObjectList, _nodes), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList, _capacity), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList, _size), 0,
        ::g::Uno::Bool_typeof(), offsetof(ObjectList, _ordered), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList, _nodeHead), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList, _nodeTail), 0,
        ::g::Uno::Int_typeof(), offsetof(ObjectList, _free), 0,
        ::g::Uno::SByte_typeof(), offsetof(ObjectList, _lockVersion), 0,
        ::g::Uno::SByte_typeof(), offsetof(ObjectList, _lockCount), 0,
        ObjectList__Equality_typeof(), offsetof(ObjectList, _equality), 0);
}

ObjectList_type* ObjectList_typeof()
{
    static uSStrong<ObjectList_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 10;
    options.GenericCount = 1;
    options.InterfaceCount = 3;
    options.PrecalcCount = 4;
    options.ObjectSize = sizeof(ObjectList);
    options.TypeSize = sizeof(ObjectList_type);
    type = (ObjectList_type*)uClassType::New("Fuse.Internal.ObjectList`1", options);
    type->fp_build_ = ObjectList_build;
    type->interface0.fp_Insert = (void(*)(uObject*, int32_t*, void*))ObjectList__Insert_fn;
    type->interface0.fp_RemoveAt = (void(*)(uObject*, int32_t*))ObjectList__RemoveAt_fn;
    type->interface0.fp_get_Item = (void(*)(uObject*, int32_t*, uTRef))ObjectList__get_Item_fn;
    type->interface1.fp_Clear = (void(*)(uObject*))ObjectList__Clear_fn;
    type->interface1.fp_Add = (void(*)(uObject*, void*))ObjectList__Add_fn;
    type->interface1.fp_Remove = (void(*)(uObject*, void*, bool*))ObjectList__Remove_fn;
    type->interface1.fp_Contains = (void(*)(uObject*, void*, bool*))ObjectList__Contains_fn;
    type->interface1.fp_get_Count = (void(*)(uObject*, int32_t*))ObjectList__get_Count_fn;
    type->interface2.fp_GetEnumerator = (void(*)(uObject*, uObject**))ObjectList__GetEnumerator_fn;
    return type;
}

// public ObjectList([Fuse.Internal.ObjectList<T>.Equality equality])
void ObjectList__ctor__fn(ObjectList* __this, int32_t* equality)
{
    __this->ctor_(*equality);
}

// public void Add(T value)
void ObjectList__Add_fn(ObjectList* __this, uObject* value)
{
    __this->Add(value);
}

// private int AllocNext()
void ObjectList__AllocNext_fn(ObjectList* __this, int32_t* __retval)
{
    *__retval = __this->AllocNext();
}

// private void CleanupVersion()
void ObjectList__CleanupVersion_fn(ObjectList* __this)
{
    __this->CleanupVersion();
}

// public void Clear()
void ObjectList__Clear_fn(ObjectList* __this)
{
    __this->Clear();
}

// private void CollapseNode(int q)
void ObjectList__CollapseNode_fn(ObjectList* __this, int32_t* q)
{
    __this->CollapseNode(*q);
}

// public bool Contains(T value)
void ObjectList__Contains_fn(ObjectList* __this, uObject* value, bool* __retval)
{
    *__retval = __this->Contains(value);
}

// public int get_Count()
void ObjectList__get_Count_fn(ObjectList* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// private bool Equals(T a, T b)
void ObjectList__Equals2_fn(ObjectList* __this, uObject* a, uObject* b, bool* __retval)
{
    *__retval = __this->Equals2(a, b);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator()
void ObjectList__GetEnumerator_fn(ObjectList* __this, uObject** __retval)
{
    *__retval = __this->GetEnumerator();
}

// internal Fuse.Internal.ObjectList<T>.Enumerator GetEnumeratorStruct(bool versionLock)
void ObjectList__GetEnumeratorStruct_fn(ObjectList* __this, bool* versionLock, ObjectList__Enumerator* __retval)
{
    *__retval = __this->GetEnumeratorStruct(*versionLock);
}

// private void Grow(int ncap)
void ObjectList__Grow_fn(ObjectList* __this, int32_t* ncap)
{
    __this->Grow(*ncap);
}

// public void Insert(int index, T value)
void ObjectList__Insert_fn(ObjectList* __this, int32_t* index, uObject* value)
{
    __this->Insert(*index, value);
}

// public T get_Item(int index)
void ObjectList__get_Item_fn(ObjectList* __this, int32_t* index, uObject** __retval)
{
    *__retval = __this->Item(*index);
}

// private sbyte Lock()
void ObjectList__Lock_fn(ObjectList* __this, int8_t* __retval)
{
    *__retval = __this->Lock();
}

// public ObjectList New([Fuse.Internal.ObjectList<T>.Equality equality])
void ObjectList__New1_fn(uType* __type, int32_t* equality, ObjectList** __retval)
{
    *__retval = ObjectList::New1(__type, *equality);
}

// private int NodeAt(int index)
void ObjectList__NodeAt_fn(ObjectList* __this, int32_t* index, int32_t* __retval)
{
    *__retval = __this->NodeAt(*index);
}

// private int NodeFor(T value)
void ObjectList__NodeFor_fn(ObjectList* __this, uObject* value, int32_t* __retval)
{
    *__retval = __this->NodeFor(value);
}

// private void Order()
void ObjectList__Order_fn(ObjectList* __this)
{
    __this->Order();
}

// public bool Remove(T value)
void ObjectList__Remove_fn(ObjectList* __this, uObject* value, bool* __retval)
{
    *__retval = __this->Remove(value);
}

// public void RemoveAt(int index)
void ObjectList__RemoveAt_fn(ObjectList* __this, int32_t* index)
{
    __this->RemoveAt(*index);
}

// private void RemoveNode(int q)
void ObjectList__RemoveNode_fn(ObjectList* __this, int32_t* q)
{
    __this->RemoveNode(*q);
}

// private void Unalloc(int q)
void ObjectList__Unalloc_fn(ObjectList* __this, int32_t* q)
{
    __this->Unalloc(*q);
}

// private void Unlock()
void ObjectList__Unlock_fn(ObjectList* __this)
{
    __this->Unlock();
}

// public ObjectList([Fuse.Internal.ObjectList<T>.Equality equality]) [instance]
void ObjectList::ctor_(int32_t equality)
{
    _nodeHead = -1;
    _nodeTail = -1;
    _free = -1;
    _lockVersion = 0;
    _lockCount = 0;
    _equality = equality;
    Grow(8);
}

// public void Add(T value) [instance]
void ObjectList::Add(uObject* value)
{
    int32_t q = AllocNext();
    _ordered = false;

    if (_nodeHead == -1)
    {
        uPtr(_nodes)->Item<ObjectList__Node>(q).Value = value;
        uPtr(_nodes)->Item<ObjectList__Node>(q).AddVersion = _lockVersion;
        _nodeHead = q;
        _nodeTail = q;
        _size++;
        return;
    }

    uPtr(_nodes)->Item<ObjectList__Node>(_nodeTail).Next = q;
    uPtr(_nodes)->Item<ObjectList__Node>(q).Prev = _nodeTail;
    uPtr(_nodes)->Item<ObjectList__Node>(q).Value = value;
    uPtr(_nodes)->Item<ObjectList__Node>(q).AddVersion = _lockVersion;
    _nodeTail = q;
    _size++;
}

// private int AllocNext() [instance]
int32_t ObjectList::AllocNext()
{
    if (_free == -1)
        Grow(_capacity * 2);

    int32_t q = _free;
    _free = uPtr(_nodes)->Item<ObjectList__Node>(q).Next;
    uPtr(_nodes)->Item<ObjectList__Node>(q).Next = -1;
    return q;
}

// private void CleanupVersion() [instance]
void ObjectList::CleanupVersion()
{
    _lockVersion = 0;
    int32_t n = _nodeHead;

    while (n != -1)
    {
        int32_t p = n;
        n = uPtr(_nodes)->Item<ObjectList__Node>(n).Next;
        uPtr(_nodes)->Item<ObjectList__Node>(p).AddVersion = 0;

        if (uPtr(_nodes)->Item<ObjectList__Node>(p).RemoveVersion != -1)
            CollapseNode(p);
    }
}

// public void Clear() [instance]
void ObjectList::Clear()
{
    int32_t q = _nodeHead;

    while (q != -1)
    {
        int32_t n = uPtr(_nodes)->Item<ObjectList__Node>(q).Next;
        Unalloc(q);
        q = n;
    }

    _size = 0;
    _nodeHead = -1;
    _nodeTail = -1;
    _ordered = false;
}

// private void CollapseNode(int q) [instance]
void ObjectList::CollapseNode(int32_t q)
{
    int32_t p = uPtr(_nodes)->Item<ObjectList__Node>(q).Prev;

    if (p != -1)
        uPtr(_nodes)->Item<ObjectList__Node>(p).Next = uPtr(_nodes)->Item<ObjectList__Node>(q).Next;
    else
        _nodeHead = uPtr(_nodes)->Item<ObjectList__Node>(q).Next;

    int32_t n = uPtr(_nodes)->Item<ObjectList__Node>(q).Next;

    if (n != -1)
        uPtr(_nodes)->Item<ObjectList__Node>(n).Prev = uPtr(_nodes)->Item<ObjectList__Node>(q).Prev;
    else
        _nodeTail = uPtr(_nodes)->Item<ObjectList__Node>(q).Prev;

    Unalloc(q);
}

// public bool Contains(T value) [instance]
bool ObjectList::Contains(uObject* value)
{
    return NodeFor(value) != -1;
}

// public int get_Count() [instance]
int32_t ObjectList::Count()
{
    return _size;
}

// private bool Equals(T a, T b) [instance]
bool ObjectList::Equals2(uObject* a, uObject* b)
{
    if (_equality == 0)
        return a == b;

    return ::g::Uno::Object::Equals1(a, b);
}

// public Uno.Collections.IEnumerator<T> GetEnumerator() [instance]
uObject* ObjectList::GetEnumerator()
{
    uType* __types[] = {
        __type->Precalced(2/*Fuse.Internal.ObjectList<T>.EnumeratorClass*/),
    };
    return (uObject*)ObjectList__EnumeratorClass::New1(__types[0], this);
}

// internal Fuse.Internal.ObjectList<T>.Enumerator GetEnumeratorStruct(bool versionLock) [instance]
ObjectList__Enumerator ObjectList::GetEnumeratorStruct(bool versionLock)
{
    uType* __types[] = {
        __type->Precalced(1/*Fuse.Internal.ObjectList<T>.Enumerator*/),
    };
    return ObjectList__Enumerator__New1(__types[0], this, versionLock);
}

// private void Grow(int ncap) [instance]
void ObjectList::Grow(int32_t ncap)
{
    uType* __types[] = {
        __type->Precalced(0/*Fuse.Internal.ObjectList<T>.Node[]*/),
        __type->Precalced(3/*Fuse.Internal.ObjectList<T>.Node*/),
    };

    if (ncap < (_capacity + 1))
        U_THROW(::g::Uno::Exception::New2(uString::Const("invalid Grow")));

    uArray* next = uArray::New(__types[0], ncap);

    for (int32_t i = 0; i < _capacity; ++i)
        uPtr(next)->Item<ObjectList__Node>(i) = uPtr(_nodes)->Item<ObjectList__Node>(i);

    for (int32_t i1 = _capacity; i1 < ncap; ++i1)
    {
        uPtr(next)->Item<ObjectList__Node>(i1).Clear(__types[1]);
        next->Item<ObjectList__Node>(i1).Next = _free;
        _free = i1;
    }

    if (_free == -1)
        U_THROW(::g::Uno::Exception::New2(uString::Const("unexpected _free==-1")));

    _nodes = next;
    _capacity = ncap;
}

// public void Insert(int index, T value) [instance]
void ObjectList::Insert(int32_t index, uObject* value)
{
    if ((index < 0) || (index > _size))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("index")));

    if ((_nodeHead == -1) || (index == _size))
    {
        Add(value);
        return;
    }

    int32_t cur = NodeAt(index);
    int32_t nu = AllocNext();
    _ordered = false;
    int32_t p = uPtr(_nodes)->Item<ObjectList__Node>(cur).Prev;

    if (p != -1)
        uPtr(_nodes)->Item<ObjectList__Node>(p).Next = nu;
    else
        _nodeHead = nu;

    uPtr(_nodes)->Item<ObjectList__Node>(cur).Prev = nu;
    uPtr(_nodes)->Item<ObjectList__Node>(nu).Prev = p;
    uPtr(_nodes)->Item<ObjectList__Node>(nu).Next = cur;
    uPtr(_nodes)->Item<ObjectList__Node>(nu).Value = value;
    uPtr(_nodes)->Item<ObjectList__Node>(nu).AddVersion = _lockVersion;
    _size++;
}

// public T get_Item(int index) [instance]
uObject* ObjectList::Item(int32_t index)
{
    if (_lockVersion > 0)
        return uPtr(_nodes)->Item<ObjectList__Node>(NodeAt(index)).Value;

    if ((index < 0) || (index >= _size))
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("index")));

    if (!_ordered)
        Order();

    return uPtr(_nodes)->Item<ObjectList__Node>(uPtr(_nodes)->Item<ObjectList__Node>(index).Ordered).Value;
}

// private sbyte Lock() [instance]
int8_t ObjectList::Lock()
{
    if (_lockVersion == 127)
        U_THROW(::g::Uno::Exception::New2(uString::Const("excessive iteration starts")));

    _lockCount++;
    return _lockVersion++;
}

// private int NodeAt(int index) [instance]
int32_t ObjectList::NodeAt(int32_t index)
{
    if (index < 0)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("index")));

    int32_t n = _nodeHead;

    while (n != -1)
    {
        if (uPtr(_nodes)->Item<ObjectList__Node>(n).RemoveVersion == -1)
            index--;

        if (index < 0)
            break;

        n = uPtr(_nodes)->Item<ObjectList__Node>(n).Next;
    }

    if (n == -1)
        U_THROW(::g::Uno::ArgumentOutOfRangeException::New6(uString::Const("index")));

    return n;
}

// private int NodeFor(T value) [instance]
int32_t ObjectList::NodeFor(uObject* value)
{
    int32_t n = _nodeHead;

    while (n != -1)
    {
        if (Equals2(uPtr(_nodes)->Item<ObjectList__Node>(n).Value, value))
            return n;

        n = uPtr(_nodes)->Item<ObjectList__Node>(n).Next;
    }

    return -1;
}

// private void Order() [instance]
void ObjectList::Order()
{
    int32_t c = 0;
    int32_t n = _nodeHead;

    while (n != -1)
    {
        uPtr(_nodes)->Item<ObjectList__Node>(c).Ordered = n;
        n = uPtr(_nodes)->Item<ObjectList__Node>(n).Next;
        c++;
    }

    _ordered = true;
}

// public bool Remove(T value) [instance]
bool ObjectList::Remove(uObject* value)
{
    int32_t q = NodeFor(value);

    if (q == -1)
        return false;

    RemoveNode(q);
    return true;
}

// public void RemoveAt(int index) [instance]
void ObjectList::RemoveAt(int32_t index)
{
    RemoveNode(NodeAt(index));
}

// private void RemoveNode(int q) [instance]
void ObjectList::RemoveNode(int32_t q)
{
    if (_lockVersion > 0)
    {
        uPtr(_nodes)->Item<ObjectList__Node>(q).RemoveVersion = _lockVersion;
        _ordered = false;
        _size--;
        return;
    }

    CollapseNode(q);
    _ordered = false;
    _size--;
}

// private void Unalloc(int q) [instance]
void ObjectList::Unalloc(int32_t q)
{
    uType* __types[] = {
        __type->Precalced(3/*Fuse.Internal.ObjectList<T>.Node*/),
    };
    _ordered = false;
    uPtr(_nodes)->Item<ObjectList__Node>(q).Clear(__types[0]);
    uPtr(_nodes)->Item<ObjectList__Node>(q).Next = _free;
    _free = q;
}

// private void Unlock() [instance]
void ObjectList::Unlock()
{
    _lockCount--;

    if (_lockCount < 0)
        U_THROW(::g::Uno::Exception::New2(uString::Const("invalid call to Unlock")));

    if (_lockCount == 0)
        CleanupVersion();
}

// public ObjectList New([Fuse.Internal.ObjectList<T>.Equality equality]) [static]
ObjectList* ObjectList::New1(uType* __type, int32_t equality)
{
    ObjectList* obj1 = (ObjectList*)uNew(__type);
    obj1->ctor_(equality);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/RawPointer.uno
// ---------------------------------------------------------------------------

// internal struct RawPointer<T>
// {
static void RawPointer_build(uType* type)
{
}

uStructType* RawPointer_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.GenericCount = 1;
    options.Alignment = alignof(void*);
    options.ValueSize = sizeof(void*);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.RawPointer`1", options);
    type->fp_build_ = RawPointer_build;
    return type;
}

// public static explicit operator T(Fuse.Internal.RawPointer<T> weak)
void RawPointer__op_Explicit1_fn(uType* __type, void** weak, uObject** __retval)
{
    *__retval = RawPointer::op_Explicit1(__type, *weak);
}

// public static implicit operator Fuse.Internal.RawPointer<T>(T obj)
void RawPointer__op_Implicit_fn(uType* __type, uObject* obj, void** __retval)
{
    *__retval = RawPointer::op_Implicit(__type, obj);
}

// public static explicit operator T(Fuse.Internal.RawPointer<T> weak) [static]
uObject* RawPointer::op_Explicit1(uType* __type, void* weak)
{
    return (uObject*) weak;
}

// public static implicit operator Fuse.Internal.RawPointer<T>(T obj) [static]
void* RawPointer::op_Implicit(uType* __type, uObject* obj)
{
    return (void*) obj;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/RectPacker.uno
// ---------------------------------------------------------------------------

// internal sealed class RectPacker
// {
static void RectPacker_build(uType* type)
{
    ::TYPES[27] = ::g::Uno::Collections::LinkedList_typeof()->MakeType(::g::Fuse::Internal::SkylineNode_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::TYPES[27/*Uno.Collections.LinkedList<Fuse.Internal.SkylineNode>*/], offsetof(RectPacker, _skyline), 0,
        ::g::Uno::Int2_typeof(), offsetof(RectPacker, _Size), 0);
}

uType* RectPacker_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RectPacker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.RectPacker", options);
    type->fp_build_ = RectPacker_build;
    return type;
}

// public RectPacker(int2 size)
void RectPacker__ctor__fn(RectPacker* __this, ::g::Uno::Int2* size)
{
    __this->ctor_(*size);
}

// private void MergeNeighbours(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node)
void RectPacker__MergeNeighbours_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node)
{
    __this->MergeNeighbours(node);
}

// public RectPacker New(int2 size)
void RectPacker__New1_fn(::g::Uno::Int2* size, RectPacker** __retval)
{
    *__retval = RectPacker::New1(*size);
}

// private void ReplaceNodes(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, Fuse.Internal.SkylineNode newSkyline)
void RectPacker__ReplaceNodes_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode* newSkyline)
{
    __this->ReplaceNodes(node, *newSkyline);
}

// public generated int2 get_Size()
void RectPacker__get_Size_fn(RectPacker* __this, ::g::Uno::Int2* __retval)
{
    *__retval = __this->Size();
}

// private generated void set_Size(int2 value)
void RectPacker__set_Size_fn(RectPacker* __this, ::g::Uno::Int2* value)
{
    __this->Size(*value);
}

// public bool TryAdd(int2 size, Uno.Recti& rect)
void RectPacker__TryAdd_fn(RectPacker* __this, ::g::Uno::Int2* size, ::g::Uno::Recti* rect, bool* __retval)
{
    *__retval = __this->TryAdd(*size, rect);
}

// private bool TryFit(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, int2 size, int& height)
void RectPacker__TryFit_fn(RectPacker* __this, ::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2* size, int32_t* height, bool* __retval)
{
    *__retval = __this->TryFit(node, *size, height);
}

// public RectPacker(int2 size) [instance]
void RectPacker::ctor_(::g::Uno::Int2 size)
{
    ::g::Uno::Collections::LinkedListNode* ret2;
    Size(size);
    _skyline = ((::g::Uno::Collections::LinkedList*)::g::Uno::Collections::LinkedList::New1(::TYPES[27/*Uno.Collections.LinkedList<Fuse.Internal.SkylineNode>*/]));
    ::g::Uno::Collections::LinkedList__AddFirst_fn(uPtr(_skyline), uCRef(::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New1(0), Size().X)), &ret2);
}

// private void MergeNeighbours(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node) [instance]
void RectPacker::MergeNeighbours(::g::Uno::Collections::LinkedListNode* node)
{
    ::g::Fuse::Internal::SkylineNode ret3;
    ::g::Fuse::Internal::SkylineNode ret4;
    ::g::Uno::Collections::LinkedListNode* ret5;
    ::g::Fuse::Internal::SkylineNode ret6;
    ::g::Fuse::Internal::SkylineNode ret7;
    ::g::Uno::Collections::LinkedListNode* ret8;

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next()) != nullptr)
    {
        ::g::Fuse::Internal::SkylineNode l = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret3), ret3);
        ::g::Fuse::Internal::SkylineNode r = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr((::g::Uno::Collections::LinkedListNode*)node->Next()), &ret4), ret4);

        if (l.Position.Y == r.Position.Y)
        {
            ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), node, uCRef(::g::Fuse::Internal::SkylineNode__New1(l.Position, l.Width + r.Width)), &ret5), ret5);
            uPtr(_skyline)->Remove1((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next());
            uPtr(_skyline)->Remove1(node);
            node = newNode;
        }
    }

    if (((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()) != nullptr)
    {
        ::g::Fuse::Internal::SkylineNode l1 = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr((::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous()), &ret6), ret6);
        ::g::Fuse::Internal::SkylineNode r1 = (::g::Uno::Collections::LinkedListNode__get_Value_fn(node, &ret7), ret7);

        if (l1.Position.Y == r1.Position.Y)
        {
            ::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Previous(), uCRef(::g::Fuse::Internal::SkylineNode__New1(l1.Position, l1.Width + r1.Width)), &ret8);
            uPtr(_skyline)->Remove1((::g::Uno::Collections::LinkedListNode*)node->Previous());
            uPtr(_skyline)->Remove1(node);
        }
    }
}

// private void ReplaceNodes(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, Fuse.Internal.SkylineNode newSkyline) [instance]
void RectPacker::ReplaceNodes(::g::Uno::Collections::LinkedListNode* node, ::g::Fuse::Internal::SkylineNode newSkyline)
{
    ::g::Uno::Collections::LinkedListNode* ret9;
    ::g::Fuse::Internal::SkylineNode ret10;
    ::g::Fuse::Internal::SkylineNode ret11;
    ::g::Fuse::Internal::SkylineNode ret12;
    ::g::Uno::Collections::LinkedListNode* ret13;
    ::g::Uno::Collections::LinkedListNode* newNode = (::g::Uno::Collections::LinkedList__AddBefore_fn(uPtr(_skyline), node, uCRef(newSkyline), &ret9), ret9);
    int32_t remainingWidth = newSkyline.Width;

    while ((node != nullptr) && ((::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret10), ret10).Width <= remainingWidth))
    {
        remainingWidth = remainingWidth - (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret11), ret11).Width;
        ::g::Uno::Collections::LinkedListNode* next = (::g::Uno::Collections::LinkedListNode*)node->Next();
        uPtr(_skyline)->Remove1(node);
        node = next;
    }

    if (remainingWidth > 0)
    {
        ::g::Fuse::Internal::SkylineNode value = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret12), ret12);
        uPtr(_skyline)->Remove1(node);
        ::g::Uno::Collections::LinkedList__AddAfter_fn(uPtr(_skyline), newNode, uCRef(::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New2(value.Position.X + remainingWidth, value.Position.Y), value.Width - remainingWidth)), &ret13);
    }

    MergeNeighbours(newNode);
}

// public generated int2 get_Size() [instance]
::g::Uno::Int2 RectPacker::Size()
{
    return _Size;
}

// private generated void set_Size(int2 value) [instance]
void RectPacker::Size(::g::Uno::Int2 value)
{
    _Size = value;
}

// public bool TryAdd(int2 size, Uno.Recti& rect) [instance]
bool RectPacker::TryAdd(::g::Uno::Int2 size, ::g::Uno::Recti* rect)
{
    ::g::Fuse::Internal::SkylineNode ret14;
    ::g::Uno::Collections::LinkedListNode* lowestNode = nullptr;
    int32_t lowest = 2147483647;
    ::g::Uno::Collections::LinkedListNode* node = (::g::Uno::Collections::LinkedListNode*)uPtr(_skyline)->First();

    while (node != nullptr)
    {
        int32_t height;

        if (TryFit(node, size, &height))
        {
            if (height < lowest)
            {
                lowestNode = node;
                lowest = height;
            }
        }

        node = (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next();
    }

    if (lowestNode == nullptr)
    {
        *rect = ::g::Uno::Recti__New1(0, 0, 0, 0);
        return false;
    }
    else
    {
        int32_t x = (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(lowestNode), &ret14), ret14).Position.X;
        *rect = ::g::Uno::Recti__New2(::g::Uno::Int2__New2(x, lowest), size);
        ReplaceNodes(lowestNode, ::g::Fuse::Internal::SkylineNode__New1(::g::Uno::Int2__New2(x, lowest + size.Y), size.X));
        return true;
    }
}

// private bool TryFit(Uno.Collections.LinkedListNode<Fuse.Internal.SkylineNode> node, int2 size, int& height) [instance]
bool RectPacker::TryFit(::g::Uno::Collections::LinkedListNode* node, ::g::Uno::Int2 size, int32_t* height)
{
    ::g::Fuse::Internal::SkylineNode ret15;
    ::g::Fuse::Internal::SkylineNode ret16;
    int32_t remainingWidth = size.X;
    *height = 0;

    while (node != nullptr)
    {
        *height = ::g::Uno::Math::Max8(*height, (::g::Uno::Collections::LinkedListNode__get_Value_fn(uPtr(node), &ret15), ret15).Position.Y);

        if ((*height + size.Y) > Size().Y)
            return false;

        remainingWidth = remainingWidth - (::g::Uno::Collections::LinkedListNode__get_Value_fn(node, &ret16), ret16).Width;

        if (remainingWidth <= 0)
            return true;

        node = (::g::Uno::Collections::LinkedListNode*)uPtr(node)->Next();
    }

    return false;
}

// public RectPacker New(int2 size) [static]
RectPacker* RectPacker::New1(::g::Uno::Int2 size)
{
    RectPacker* obj1 = (RectPacker*)uNew(RectPacker_typeof());
    obj1->ctor_(size);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal abstract class ScalarBlender<T>
// {
static void ScalarBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(type->T(0), nullptr));
}

ScalarBlender_type* ScalarBlender_typeof()
{
    static uSStrong<ScalarBlender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.GenericCount = 1;
    options.ObjectSize = sizeof(ScalarBlender);
    options.TypeSize = sizeof(ScalarBlender_type);
    type = (ScalarBlender_type*)uClassType::New("Fuse.Internal.ScalarBlender`1", options);
    type->fp_build_ = ScalarBlender_build;
    return type;
}

// protected generated ScalarBlender()
void ScalarBlender__ctor_1_fn(ScalarBlender* __this)
{
    __this->ctor_1();
}

// protected generated ScalarBlender() [instance]
void ScalarBlender::ctor_1()
{
    ctor_();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class Size2Blender
// {
static void Size2Blender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size2_typeof(), nullptr));
}

::g::Fuse::Internal::Blender_type* Size2Blender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.ObjectSize = sizeof(Size2Blender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.Size2Blender", options);
    type->fp_build_ = Size2Blender_build;
    type->fp_ctor_ = (void*)Size2Blender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))Size2Blender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))Size2Blender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))Size2Blender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))Size2Blender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))Size2Blender__get_Zero_fn;
    return type;
}

// public generated Size2Blender()
void Size2Blender__ctor_1_fn(Size2Blender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size2 Add(Uno.UX.Size2 a, Uno.UX.Size2 b)
void Size2Blender__Add_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size2 a)
void Size2Blender__Length_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    return *__retval = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit1(a_)), void();
}

// public override sealed Uno.UX.Size2 Lerp(Uno.UX.Size2 a, Uno.UX.Size2 b, double d)
void Size2Blender__Lerp_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, double* d, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size2__op_Addition(a_, ::g::Uno::UX::Size2__op_Multiply(::g::Uno::UX::Size2__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated Size2Blender New()
void Size2Blender__New1_fn(Size2Blender** __retval)
{
    *__retval = Size2Blender::New1();
}

// public override sealed Uno.UX.Size2 Sub(Uno.UX.Size2 a, Uno.UX.Size2 b)
void Size2Blender__Sub_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, ::g::Uno::UX::Size2* b, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    ::g::Uno::UX::Size2 b_ = *b;
    return *__retval = ::g::Uno::UX::Size2__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size2 ToUnit(Uno.UX.Size2 a, double& length)
void Size2Blender__ToUnit_fn(Size2Blender* __this, ::g::Uno::UX::Size2* a, double* length, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 a_ = *a;
    *length = (double)::g::Uno::Vector::Length(::g::Uno::UX::Size2__op_Explicit1(a_));
    ::g::Uno::Float2 v = ::g::Uno::Vector::Normalize(::g::Uno::UX::Size2__op_Explicit1(a_));
    ::g::Uno::UX::Size x = a_.X;
    ::g::Uno::UX::Size y = a_.Y;
    return *__retval = ::g::Uno::UX::Size2__New1(::g::Uno::UX::Size__New1(v.X, x.Unit), ::g::Uno::UX::Size__New1(v.Y, y.Unit)), void();
}

// public override sealed Uno.UX.Size2 Weight(Uno.UX.Size2 v, double w)
void Size2Blender__Weight_fn(Size2Blender* __this, ::g::Uno::UX::Size2* v, double* w, ::g::Uno::UX::Size2* __retval)
{
    ::g::Uno::UX::Size2 v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size2__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size2 get_Zero()
void Size2Blender__get_Zero_fn(Size2Blender* __this, ::g::Uno::UX::Size2* __retval)
{
    return *__retval = ::g::Uno::UX::Size2__op_Implicit1(::g::Uno::Float2__New2(0.0f, 0.0f)), void();
}

// public generated Size2Blender() [instance]
void Size2Blender::ctor_1()
{
    ctor_();
}

// public generated Size2Blender New() [static]
Size2Blender* Size2Blender::New1()
{
    Size2Blender* obj1 = (Size2Blender*)uNew(Size2Blender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Blender.uno
// ------------------------------------------------------------------------

// internal sealed class SizeBlender
// {
static void SizeBlender_build(uType* type)
{
    type->SetBase(::g::Fuse::Internal::Blender_typeof()->MakeType(::g::Uno::UX::Size_typeof(), nullptr));
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

::g::Fuse::Internal::Blender_type* SizeBlender_typeof()
{
    static uSStrong< ::g::Fuse::Internal::Blender_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Internal::Blender_typeof();
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SizeBlender);
    options.TypeSize = sizeof(::g::Fuse::Internal::Blender_type);
    type = (::g::Fuse::Internal::Blender_type*)uClassType::New("Fuse.Internal.SizeBlender", options);
    type->fp_build_ = SizeBlender_build;
    type->fp_ctor_ = (void*)SizeBlender__New1_fn;
    type->fp_Add = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Add_fn;
    type->fp_Length = (void(*)(::g::Fuse::Internal::Blender*, void*, double*))SizeBlender__Length_fn;
    type->fp_Lerp = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, double*, uTRef))SizeBlender__Lerp_fn;
    type->fp_Sub = (void(*)(::g::Fuse::Internal::Blender*, void*, void*, uTRef))SizeBlender__Sub_fn;
    type->fp_ToUnit = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__ToUnit_fn;
    type->fp_Weight = (void(*)(::g::Fuse::Internal::Blender*, void*, double*, uTRef))SizeBlender__Weight_fn;
    type->fp_get_Zero = (void(*)(::g::Fuse::Internal::Blender*, uTRef))SizeBlender__get_Zero_fn;
    return type;
}

// public generated SizeBlender()
void SizeBlender__ctor_1_fn(SizeBlender* __this)
{
    __this->ctor_1();
}

// public override sealed Uno.UX.Size Add(Uno.UX.Size a, Uno.UX.Size b)
void SizeBlender__Add_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, b_), void();
}

// public override sealed double Length(Uno.UX.Size a)
void SizeBlender__Length_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    return *__retval = (double)::g::Uno::Math::Abs1(a_.Value), void();
}

// public override sealed Uno.UX.Size Lerp(Uno.UX.Size a, Uno.UX.Size b, double d)
void SizeBlender__Lerp_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, double* d, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    double d_ = *d;
    return *__retval = ::g::Uno::UX::Size__op_Addition(a_, ::g::Uno::UX::Size__op_Multiply(::g::Uno::UX::Size__op_Subtraction(b_, a_), (float)d_)), void();
}

// public generated SizeBlender New()
void SizeBlender__New1_fn(SizeBlender** __retval)
{
    *__retval = SizeBlender::New1();
}

// public override sealed Uno.UX.Size Sub(Uno.UX.Size a, Uno.UX.Size b)
void SizeBlender__Sub_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, ::g::Uno::UX::Size* b, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    ::g::Uno::UX::Size b_ = *b;
    return *__retval = ::g::Uno::UX::Size__op_Subtraction(a_, b_), void();
}

// public override sealed Uno.UX.Size ToUnit(Uno.UX.Size a, double& length)
void SizeBlender__ToUnit_fn(SizeBlender* __this, ::g::Uno::UX::Size* a, double* length, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size a_ = *a;
    *length = (double)a_.Value;
    return *__retval = (a_.Value < 0.0f) ? ::g::Uno::UX::Size__New1(-1.0f, a_.Unit) : ::g::Uno::UX::Size__New1(1.0f, a_.Unit), void();
}

// public override sealed Uno.UX.Size Weight(Uno.UX.Size v, double w)
void SizeBlender__Weight_fn(SizeBlender* __this, ::g::Uno::UX::Size* v, double* w, ::g::Uno::UX::Size* __retval)
{
    ::g::Uno::UX::Size v_ = *v;
    double w_ = *w;
    return *__retval = ::g::Uno::UX::Size__op_Multiply(v_, (float)w_), void();
}

// public override sealed Uno.UX.Size get_Zero()
void SizeBlender__get_Zero_fn(SizeBlender* __this, ::g::Uno::UX::Size* __retval)
{
    return *__retval = ::g::Uno::UX::Size__op_Implicit1(0), void();
}

// public generated SizeBlender() [instance]
void SizeBlender::ctor_1()
{
    ctor_();
}

// public generated SizeBlender New() [static]
SizeBlender* SizeBlender::New1()
{
    SizeBlender* obj1 = (SizeBlender*)uNew(SizeBlender_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Internal/SizingContainer.uno
// ----------------------------------------------------------------------------------

// internal sealed class SizingContainer
// {
static void SizingContainer_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Fuse::Elements::StretchMode_typeof(), offsetof(SizingContainer, stretchMode), 0,
        ::g::Fuse::Elements::StretchDirection_typeof(), offsetof(SizingContainer, stretchDirection), 0,
        ::g::Fuse::Elements::Alignment_typeof(), offsetof(SizingContainer, align), 0,
        ::g::Fuse::Elements::StretchSizing_typeof(), offsetof(SizingContainer, stretchSizing), 0,
        ::g::Uno::Float4_typeof(), offsetof(SizingContainer, padding), 0,
        ::g::Uno::Float_typeof(), offsetof(SizingContainer, absoluteZoom), 0,
        ::g::Uno::Bool_typeof(), offsetof(SizingContainer, snapToPixels), 0);
}

uType* SizingContainer_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 7;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(SizingContainer);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Internal.SizingContainer", options);
    type->fp_build_ = SizingContainer_build;
    type->fp_ctor_ = (void*)SizingContainer__New1_fn;
    return type;
}

// public generated SizingContainer()
void SizingContainer__ctor__fn(SizingContainer* __this)
{
    __this->ctor_();
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize)
void SizingContainer__CalcClip_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float4* __retval)
{
    *__retval = __this->CalcClip(*availableSize, origin, contentActualSize);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize)
void SizingContainer__CalcContentSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Uno::Int2* pixelSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcContentSize(*size, *pixelSize);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize)
void SizingContainer__CalcOrigin_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* contentActualSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcOrigin(*availableSize, *contentActualSize);
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize)
void SizingContainer__CalcScale_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale(*availableSize, *desiredSize);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight)
void SizingContainer__CalcScale1_fn(SizingContainer* __this, ::g::Uno::Float2* availableSize, ::g::Uno::Float2* desiredSize, bool* autoWidth, bool* autoHeight, ::g::Uno::Float2* __retval)
{
    *__retval = __this->CalcScale1(*availableSize, *desiredSize, *autoWidth, *autoHeight);
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp)
void SizingContainer__ExpandFillSize_fn(SizingContainer* __this, ::g::Uno::Float2* size, ::g::Fuse::LayoutParams* lp, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ExpandFillSize(*size, *lp);
}

// public generated SizingContainer New()
void SizingContainer__New1_fn(SizingContainer** __retval)
{
    *__retval = SizingContainer::New1();
}

// private float get_PaddingHeight()
void SizingContainer__get_PaddingHeight_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingHeight();
}

// private float get_PaddingWidth()
void SizingContainer__get_PaddingWidth_fn(SizingContainer* __this, float* __retval)
{
    *__retval = __this->PaddingWidth();
}

// public bool SetAlignment(Fuse.Elements.Alignment a)
void SizingContainer__SetAlignment_fn(SizingContainer* __this, int32_t* a, bool* __retval)
{
    *__retval = __this->SetAlignment(*a);
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir)
void SizingContainer__SetStretchDirection_fn(SizingContainer* __this, int32_t* dir, bool* __retval)
{
    *__retval = __this->SetStretchDirection(*dir);
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode)
void SizingContainer__SetStretchMode_fn(SizingContainer* __this, int32_t* mode, bool* __retval)
{
    *__retval = __this->SetStretchMode(*mode);
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss)
void SizingContainer__SetStretchSizing_fn(SizingContainer* __this, int32_t* ss, bool* __retval)
{
    *__retval = __this->SetStretchSizing(*ss);
}

// private float2 SnapSize(float2 sz)
void SizingContainer__SnapSize_fn(SizingContainer* __this, ::g::Uno::Float2* sz, ::g::Uno::Float2* __retval)
{
    *__retval = __this->SnapSize(*sz);
}

// public generated SizingContainer() [instance]
void SizingContainer::ctor_()
{
    stretchMode = 5;
    align = 10;
    stretchSizing = 1;
    absoluteZoom = 1.0f;
}

// public float4 CalcClip(float2 availableSize, float2& origin, float2& contentActualSize) [instance]
::g::Uno::Float4 SizingContainer::CalcClip(::g::Uno::Float2 availableSize, ::g::Uno::Float2* origin, ::g::Uno::Float2* contentActualSize)
{
    ::g::Uno::Float4 ind1;
    ::g::Uno::Float4 ind2;

    if (((((*origin).X > availableSize.X) || (((*origin).X + (*contentActualSize).X) < 0.0f)) || ((*origin).Y > availableSize.Y)) || (((*origin).Y + (*contentActualSize).Y) < 0.0f))
    {
        *origin = ::g::Uno::Float2__New2(0.0f, 0.0f);
        *contentActualSize = ::g::Uno::Float2__New1(0.0f);
        return ::g::Uno::Float4__New2(0.0f, 0.0f, 1.0f, 1.0f);
    }

    ::g::Uno::Float2 tl = ::g::Uno::Math::Max3(::g::Uno::Float2__New1(0.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2((ind1 = padding, ::g::Uno::Float2__New2(ind1.X, ind1.Y)), *origin), *contentActualSize));
    ::g::Uno::Float2 br = ::g::Uno::Math::Min3(::g::Uno::Float2__New1(1.0f), ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(availableSize, *origin), (ind2 = padding, ::g::Uno::Float2__New2(ind2.Z, ind2.W))), *contentActualSize));
    float dx = padding.X - (*origin).X;

    if (dx > 0.0f)
    {
        (*contentActualSize).X = ((*contentActualSize).X - dx);
        (*origin).X = padding.X;
    }

    dx = (((*origin).X + (*contentActualSize).X) - availableSize.X) + padding.Z;

    if (dx > 0.0f)
        (*contentActualSize).X = ((*contentActualSize).X - dx);

    float dy = padding.Y - (*origin).Y;

    if (dy > 0.0f)
    {
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);
        (*origin).Y = padding.Y;
    }

    dy = (((*origin).Y + (*contentActualSize).Y) - availableSize.Y) + padding.W;

    if (dy > 0.0f)
        (*contentActualSize).Y = ((*contentActualSize).Y - dy);

    return ::g::Uno::Float4__New2(tl.X, tl.Y, br.X, br.Y);
}

// public float2 CalcContentSize(float2 size, int2 pixelSize) [instance]
::g::Uno::Float2 SizingContainer::CalcContentSize(::g::Uno::Float2 size, ::g::Uno::Int2 pixelSize)
{
    switch (stretchMode)
    {
        case 1:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            return ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
        }
        case 2:
        {
            if ((pixelSize.X == 0) || (pixelSize.Y == 0))
                return ::g::Uno::Float2__New1(0.0f);

            ::g::Uno::Float2 exact = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__New2((float)pixelSize.X, (float)pixelSize.Y), absoluteZoom);
            ::g::Uno::Float2 scale = ::g::Uno::Float2__op_Division2(size, exact);

            if (((double)scale.X > 0.75) && ((double)scale.X < 1.5))
                return exact;

            break;
        }
        default:
            break;
    }

    if (!snapToPixels)
        return size;

    return SnapSize(size);
}

// public float2 CalcOrigin(float2 availableSize, float2 contentActualSize) [instance]
::g::Uno::Float2 SizingContainer::CalcOrigin(::g::Uno::Float2 availableSize, ::g::Uno::Float2 contentActualSize)
{
    ::g::Uno::Float2 origin = ::g::Uno::Float2__New1(0.0f);

    switch (::g::Fuse::Elements::AlignmentHelpers::GetHorizontalAlign(align))
    {
        case 0:
        case 1:
        {
            origin.X = padding.Item(0);
            break;
        }
        case 2:
        {
            origin.X = (((((availableSize.X - padding.Item(0)) - padding.Item(2)) / 2.0f) - (contentActualSize.X / 2.0f)) + padding.Item(0));
            break;
        }
        case 3:
        {
            origin.X = ((availableSize.X - padding.Item(2)) - contentActualSize.X);
            break;
        }
    }

    switch (::g::Fuse::Elements::AlignmentHelpers::GetVerticalAlign(align))
    {
        case 0:
        case 4:
        {
            origin.Y = padding.Item(1);
            break;
        }
        case 8:
        {
            origin.Y = (((((availableSize.Y - padding.Item(1)) - padding.Item(3)) / 2.0f) - (contentActualSize.Y / 2.0f)) + padding.Item(1));
            break;
        }
        case 12:
        {
            origin.Y = ((availableSize.Y - padding.Item(3)) - contentActualSize.Y);
            break;
        }
    }

    if (snapToPixels)
        origin = SnapSize(origin);

    return origin;
}

// public float2 CalcScale(float2 availableSize, float2 desiredSize) [instance]
::g::Uno::Float2 SizingContainer::CalcScale(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize)
{
    return CalcScale1(availableSize, desiredSize, false, false);
}

// private float2 CalcScale(float2 availableSize, float2 desiredSize, bool autoWidth, bool autoHeight) [instance]
::g::Uno::Float2 SizingContainer::CalcScale1(::g::Uno::Float2 availableSize, ::g::Uno::Float2 desiredSize, bool autoWidth, bool autoHeight)
{
    ::g::Uno::Float2 d = availableSize;
    d.X = (d.X - PaddingWidth());
    d.Y = (d.Y - PaddingHeight());
    ::g::Uno::Float2 scale = ::g::Uno::Float2__New1(1.0f);
    float zeroTolerance = 1e-05f;

    if ((autoWidth && autoHeight) && !(((stretchMode == 0) || (stretchMode == 1)) || (stretchMode == 2)))
    {
        if (stretchSizing == 0)
            scale = ::g::Uno::Float2__New1(0.0f);
        else
            scale = ::g::Uno::Float2__New1(1.0f);
    }
    else
    {
        bool zeroX = desiredSize.X < 1e-05f;
        bool zeroY = desiredSize.Y < 1e-05f;
        ::g::Uno::Float2 s = ::g::Uno::Float2__New2(zeroX ? 0.0f : d.X / desiredSize.X, zeroY ? 0.0f : d.Y / desiredSize.Y);

        switch (stretchMode)
        {
            case 0:
            case 1:
            case 2:
            {
                scale = ::g::Uno::Float2__New1(1.0f);
                break;
            }
            case 4:
            case 3:
            {
                scale = autoWidth ? ::g::Uno::Float2__New1(s.Y) : autoHeight ? ::g::Uno::Float2__New1(s.X) : s;
                break;
            }
            case 5:
            {
                float sm = autoWidth ? s.Y : autoHeight ? s.X : zeroX ? s.Y : zeroY ? s.X : ::g::Uno::Math::Min1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm);
                break;
            }
            case 6:
            {
                float sm1 = autoWidth ? s.Y : autoHeight ? s.X : ::g::Uno::Math::Max1(s.X, s.Y);
                scale = ::g::Uno::Float2__New1(sm1);
                break;
            }
        }
    }

    switch (stretchDirection)
    {
        case 0:
            break;
        case 2:
        {
            scale.X = ::g::Uno::Math::Min1(scale.X, 1.0f);
            scale.Y = ::g::Uno::Math::Min1(scale.Y, 1.0f);
            break;
        }
        case 1:
        {
            scale.X = ::g::Uno::Math::Max1(1.0f, scale.X);
            scale.Y = ::g::Uno::Math::Max1(1.0f, scale.Y);
            break;
        }
    }

    if ((snapToPixels && (desiredSize.X > 1e-05f)) && (desiredSize.Y > 1e-05f))
        scale = ::g::Uno::Float2__op_Division2(SnapSize(::g::Uno::Float2__op_Multiply2(scale, desiredSize)), desiredSize);

    return scale;
}

// public float2 ExpandFillSize(float2 size, Fuse.LayoutParams lp) [instance]
::g::Uno::Float2 SizingContainer::ExpandFillSize(::g::Uno::Float2 size, ::g::Fuse::LayoutParams lp)
{
    bool autoWidth = !lp.HasX();
    bool autoHeight = !lp.HasY();
    ::g::Uno::Float2 scale = CalcScale1(lp.Size(), size, autoWidth, autoHeight);
    ::g::Uno::Float2 res = ::g::Uno::Float2__op_Multiply2(scale, size);
    bool recalc = false;

    if (lp.HasMaxX() && (res.X > lp.MaxX()))
    {
        res.X = lp.MaxX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMaxY() && (res.Y > lp.MaxY()))
    {
        res.Y = lp.MaxY();
        recalc = true;
        autoHeight = false;
    }

    if (lp.HasMinX() && (res.X < lp.MinX()))
    {
        res.X = lp.MinX();
        recalc = true;
        autoWidth = false;
    }

    if (lp.HasMinY() && (res.Y < lp.MinY()))
    {
        res.Y = lp.MinY();
        recalc = true;
        autoHeight = false;
    }

    if (recalc)
    {
        scale = CalcScale1(res, size, autoWidth, autoHeight);
        res = ::g::Uno::Float2__op_Multiply2(scale, size);
    }

    return res;
}

// private float get_PaddingHeight() [instance]
float SizingContainer::PaddingHeight()
{
    return padding.Item(1) + padding.Item(3);
}

// private float get_PaddingWidth() [instance]
float SizingContainer::PaddingWidth()
{
    return padding.Item(0) + padding.Item(2);
}

// public bool SetAlignment(Fuse.Elements.Alignment a) [instance]
bool SizingContainer::SetAlignment(int32_t a)
{
    if (a == align)
        return false;

    align = a;
    return true;
}

// public bool SetStretchDirection(Fuse.Elements.StretchDirection dir) [instance]
bool SizingContainer::SetStretchDirection(int32_t dir)
{
    if (dir == stretchDirection)
        return false;

    stretchDirection = dir;
    return true;
}

// public bool SetStretchMode(Fuse.Elements.StretchMode mode) [instance]
bool SizingContainer::SetStretchMode(int32_t mode)
{
    if (mode == stretchMode)
        return false;

    stretchMode = mode;
    return true;
}

// public bool SetStretchSizing(Fuse.Elements.StretchSizing ss) [instance]
bool SizingContainer::SetStretchSizing(int32_t ss)
{
    if (ss == stretchSizing)
        return false;

    stretchSizing = ss;
    return true;
}

// private float2 SnapSize(float2 sz) [instance]
::g::Uno::Float2 SizingContainer::SnapSize(::g::Uno::Float2 sz)
{
    return ::g::Uno::Float2__op_Division1(::g::Uno::Math::Floor2(::g::Uno::Float2__op_Addition1(::g::Uno::Float2__op_Multiply1(sz, absoluteZoom), 0.5f)), absoluteZoom);
}

// public generated SizingContainer New() [static]
SizingContainer* SizingContainer::New1()
{
    SizingContainer* obj3 = (SizingContainer*)uNew(SizingContainer_typeof());
    obj3->ctor_();
    return obj3;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/RectPacker.uno
// ---------------------------------------------------------------------------

// internal struct SkylineNode
// {
static void SkylineNode_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int2_typeof(), offsetof(SkylineNode, Position), 0,
        ::g::Uno::Int_typeof(), offsetof(SkylineNode, Width), 0);
}

uStructType* SkylineNode_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 2;
    options.Alignment = alignof(SkylineNode);
    options.ValueSize = sizeof(SkylineNode);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Internal.SkylineNode", options);
    type->fp_build_ = SkylineNode_build;
    return type;
}

// public SkylineNode(int2 position, int width)
void SkylineNode__ctor_1_fn(SkylineNode* __this, ::g::Uno::Int2* position, int32_t* width)
{
    __this->ctor_1(*position, *width);
}

// public SkylineNode New(int2 position, int width)
void SkylineNode__New1_fn(::g::Uno::Int2* position, int32_t* width, SkylineNode* __retval)
{
    *__retval = SkylineNode__New1(*position, *width);
}

// public SkylineNode(int2 position, int width) [instance]
void SkylineNode::ctor_1(::g::Uno::Int2 position, int32_t width)
{
    Position = position;
    Width = width;
}

// public SkylineNode New(int2 position, int width) [static]
SkylineNode SkylineNode__New1(::g::Uno::Int2 position, int32_t width)
{
    SkylineNode obj1;
    obj1.ctor_1(position, width);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/Statistics.uno
// ---------------------------------------------------------------------------

// public static class Statistics
// {
static void Statistics_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

uClassType* Statistics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.Statistics", options);
    type->fp_build_ = Statistics_build;
    return type;
}

// public static double ContinuousFilterAlpha(double elapsed, double period)
void Statistics__ContinuousFilterAlpha_fn(double* elapsed, double* period, double* __retval)
{
    *__retval = Statistics::ContinuousFilterAlpha(*elapsed, *period);
}

// public static double ContinuousFilterAlpha(double elapsed, double period) [static]
double Statistics::ContinuousFilterAlpha(double elapsed, double period)
{
    return 1.0 - ::g::Uno::Math::Pow(2.7182818284590451, -elapsed / period);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/SystemFont.uno
// ---------------------------------------------------------------------------

// internal static class SystemFont
// {
static void SystemFont_build(uType* type)
{
    ::TYPES[28] = ::g::Uno::String_typeof();
}

uClassType* SystemFont_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.SystemFont", options);
    type->fp_build_ = SystemFont_build;
    return type;
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default()
void SystemFont__get_Default_fn(::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::Default();
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight])
void SystemFont__Get_fn(uString* family, int32_t* style, int32_t* weight, ::g::Uno::Collections::List** __retval)
{
    *__retval = SystemFont::Get(family, *style, *weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> Get(string family, [Fuse.SystemFont.Style style], [Fuse.SystemFont.Weight weight]) [static]
::g::Uno::Collections::List* SystemFont::Get(uString* family, int32_t style, int32_t weight)
{
    return ::g::Fuse::Internal::AndroidSystemFont::Get1(::g::Uno::String::op_Equality(family, nullptr) ? uCast<uString*>(nullptr, ::TYPES[28/*string*/]) : (uString*)::g::Uno::String::ToLower(uPtr(family)), style, weight);
}

// public static Uno.Collections.List<Fuse.Internal.FontFaceDescriptor> get_Default() [static]
::g::Uno::Collections::List* SystemFont::Default()
{
    return ::g::Fuse::Internal::AndroidSystemFont::Default();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Common/Internal/VectorUtil.uno
// ---------------------------------------------------------------------------

// internal static class VectorUtil
// {
static void VectorUtil_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

uClassType* VectorUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Internal.VectorUtil", options);
    type->fp_build_ = VectorUtil_build;
    return type;
}

// public static float Angle(float2 a, float2 b)
void VectorUtil__Angle_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::Angle(*a, *b);
}

// public static float DistanceLine(float4 line, float2 p)
void VectorUtil__DistanceLine_fn(::g::Uno::Float4* line, ::g::Uno::Float2* p, float* __retval)
{
    *__retval = VectorUtil::DistanceLine(*line, *p);
}

// public static float NormRejection(float2 a, float2 b)
void VectorUtil__NormRejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::NormRejection(*a, *b);
}

// public static float2 Projection(float2 a, float2 b)
void VectorUtil__Projection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Projection(*a, *b);
}

// public static float2 Rejection(float2 a, float2 b)
void VectorUtil__Rejection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, ::g::Uno::Float2* __retval)
{
    *__retval = VectorUtil::Rejection(*a, *b);
}

// public static float ScalarProjection(float2 a, float2 b)
void VectorUtil__ScalarProjection_fn(::g::Uno::Float2* a, ::g::Uno::Float2* b, float* __retval)
{
    *__retval = VectorUtil::ScalarProjection(*a, *b);
}

// public static float Angle(float2 a, float2 b) [static]
float VectorUtil::Angle(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Math::Acos1(::g::Uno::Vector::Dot(a, b) / (::g::Uno::Vector::Length(a) * ::g::Uno::Vector::Length(b)));
}

// public static float DistanceLine(float4 line, float2 p) [static]
float VectorUtil::DistanceLine(::g::Uno::Float4 line, ::g::Uno::Float2 p)
{
    return ::g::Uno::Vector::Length(VectorUtil::Rejection(::g::Uno::Float2__op_Subtraction2(p, ::g::Uno::Float2__New2(line.X, line.Y)), ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__New2(line.Z, line.W), ::g::Uno::Float2__New2(line.X, line.Y))));
}

// public static float NormRejection(float2 a, float2 b) [static]
float VectorUtil::NormRejection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Vector::Length(VectorUtil::Rejection(a, b));
}

// public static float2 Projection(float2 a, float2 b) [static]
::g::Uno::Float2 VectorUtil::Projection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Float2__op_Multiply(::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Dot(b, b), b);
}

// public static float2 Rejection(float2 a, float2 b) [static]
::g::Uno::Float2 VectorUtil::Rejection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    ::g::Uno::Float2 a1 = VectorUtil::Projection(a, b);
    return ::g::Uno::Float2__op_Subtraction2(a, a1);
}

// public static float ScalarProjection(float2 a, float2 b) [static]
float VectorUtil::ScalarProjection(::g::Uno::Float2 a, ::g::Uno::Float2 b)
{
    return ::g::Uno::Vector::Dot(a, b) / ::g::Uno::Vector::Length(b);
}
// }

}}} // ::g::Fuse::Internal
