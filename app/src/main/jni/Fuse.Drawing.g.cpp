// This file was generated based on '(multiple files)'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.FuseDrawing_bundle.h>
#include <_root.FuseElements_bundle.h>
#include <Android.Base.Wrappers.JWrapper.h>
#include <Android.Base.Wrappers-4c0b8613.h>
#include <Fuse.Common.Blitter.h>
#include <Fuse.Controls.Native.-dc7eb731.h>
#include <Fuse.Diagnostics.h>
#include <Fuse.DrawContext.h>
#include <Fuse.Drawing.AndroidCanvasPath.h>
#include <Fuse.Drawing.AndroidSurface.h>
#include <Fuse.Drawing.Brush.h>
#include <Fuse.Drawing.BrushConverter.h>
#include <Fuse.Drawing.Brushes.h>
#include <Fuse.Drawing.Colors.h>
#include <Fuse.Drawing.DashedColor.h>
#include <Fuse.Drawing.DrawObje-aefdefb6.h>
#include <Fuse.Drawing.DrawObjectWatcher.h>
#include <Fuse.Drawing.DynamicBrush.h>
#include <Fuse.Drawing.FillRule.h>
#include <Fuse.Drawing.GradientStop.h>
#include <Fuse.Drawing.GraphicsSurface.h>
#include <Fuse.Drawing.IDrawObj-13f8940.h>
#include <Fuse.Drawing.ImageFil-b905dd3.h>
#include <Fuse.Drawing.ImageFill.h>
#include <Fuse.Drawing.INativeS-e3ce3c6f.h>
#include <Fuse.Drawing.ISolidColor.h>
#include <Fuse.Drawing.ISurfaceDrawable.h>
#include <Fuse.Drawing.ISurfaceProvider.h>
#include <Fuse.Drawing.LinearGr-38187bf9.h>
#include <Fuse.Drawing.LinearGradient.h>
#include <Fuse.Drawing.LinearGr-fa27ec04.h>
#include <Fuse.Drawing.LineCap.h>
#include <Fuse.Drawing.LineJoin.h>
#include <Fuse.Drawing.LineMetrics.h>
#include <Fuse.Drawing.LineMetricsImpl.h>
#include <Fuse.Drawing.LineSegment.h>
#include <Fuse.Drawing.LineSegmentFlags.h>
#include <Fuse.Drawing.LineSegments.h>
#include <Fuse.Drawing.LineSegmentType.h>
#include <Fuse.Drawing.LineSpli-491045bd.h>
#include <Fuse.Drawing.LineSpli-964aa99d.h>
#include <Fuse.Drawing.LineSplitter.h>
#include <Fuse.Drawing.NativeSurface.h>
#include <Fuse.Drawing.RepeatBaker.h>
#include <Fuse.Drawing.ResampleMode.h>
#include <Fuse.Drawing.SolidColor.h>
#include <Fuse.Drawing.StaticBrush.h>
#include <Fuse.Drawing.StaticSolidColor.h>
#include <Fuse.Drawing.Stroke.h>
#include <Fuse.Drawing.StrokeAdjustment.h>
#include <Fuse.Drawing.StrokeAlignment.h>
#include <Fuse.Drawing.Surface.h>
#include <Fuse.Drawing.SurfaceManager.h>
#include <Fuse.Drawing.SurfacePath.h>
#include <Fuse.Drawing.SurfaceUtil.h>
#include <Fuse.Drawing.WrapMode.h>
#include <Fuse.Elements.Element.h>
#include <Fuse.FramebufferPool.h>
#include <Fuse.ICommonViewport.h>
#include <Fuse.ILoadingStatic.h>
#include <Fuse.Internal.Curves.h>
#include <Fuse.Internal.ImageContainer.h>
#include <Fuse.Internal.SizingContainer.h>
#include <Fuse.IViewport.h>
#include <Fuse.Marshal.h>
#include <Fuse.Node.h>
#include <Fuse.Resources.DisposalManager.h>
#include <Fuse.Resources.ImageS-e0decf16.h>
#include <Fuse.Resources.ImageSource.h>
#include <Fuse.Resources.MemoryPolicy.h>
#include <Fuse.Time.h>
#include <Fuse.Visual.h>
#include <Fuse.VisualBounds.h>
#include <Fuse.VisualContext.h>
#include <Java.Object.h>
#include <jni.h>
#include <OpenGL.GLTextureHandle.h>
#include <Uno.Action1-1.h>
#include <Uno.Bool.h>
#include <Uno.Byte.h>
#include <Uno.Collections.Dicti-5d5b73f.h>
#include <Uno.Collections.Dictionary-2.h>
#include <Uno.Collections.Enume-9e7bc8e0.h>
#include <Uno.Collections.ICollection-1.h>
#include <Uno.Collections.IEnumerable-1.h>
#include <Uno.Collections.IList-1.h>
#include <Uno.Collections.KeyValuePair-2.h>
#include <Uno.Collections.List-1.h>
#include <Uno.Collections.RootableList-1.h>
#include <Uno.Color.h>
#include <Uno.Compiler.ExportTa-2429dd1f.h>
#include <Uno.Double.h>
#include <Uno.Exception.h>
#include <Uno.Float.h>
#include <Uno.Float2.h>
#include <Uno.Float3.h>
#include <Uno.Float4.h>
#include <Uno.Float4x4.h>
#include <Uno.Graphics.BufferUsage.h>
#include <Uno.Graphics.Format.h>
#include <Uno.Graphics.Framebuffer.h>
#include <Uno.Graphics.OpenGL.GLProgram.h>
#include <Uno.Graphics.PolygonFace.h>
#include <Uno.Graphics.SamplerState.h>
#include <Uno.Graphics.Texture2D.h>
#include <Uno.Graphics.VertexAt-13489a6d.h>
#include <Uno.Graphics.VertexBuffer.h>
#include <Uno.Int.h>
#include <Uno.Int2.h>
#include <Uno.Math.h>
#include <Uno.NotSupportedException.h>
#include <Uno.Object.h>
#include <Uno.Rect.h>
#include <Uno.String.h>
#include <Uno.Type.h>
#include <Uno.UInt.h>
#include <Uno.UX.IPropertyListener.h>
#include <Uno.UX.PropertyObject.h>
#include <Uno.UX.Selector.h>
#include <Uno.Vector.h>
#include <Uno/JNIHelper.h>
#include <XliPlatform/GL.h>
static uString* STRINGS[37];
static uType* TYPES[30];

namespace g{
namespace Fuse{
namespace Drawing{

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Android/Surface.uno
// --------------------------------------------------------------------------------

// internal sealed extern class AndroidCanvasPath
// {
static void AndroidCanvasPath_build(uType* type)
{
    type->SetFields(0,
        ::g::Java::Object_typeof(), offsetof(AndroidCanvasPath, Path), 0,
        ::g::Fuse::Drawing::FillRule_typeof(), offsetof(AndroidCanvasPath, FillRule), 0);
}

uType* AndroidCanvasPath_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::SurfacePath_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(AndroidCanvasPath);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.AndroidCanvasPath", options);
    type->fp_build_ = AndroidCanvasPath_build;
    type->fp_ctor_ = (void*)AndroidCanvasPath__New1_fn;
    return type;
}

// public generated AndroidCanvasPath()
void AndroidCanvasPath__ctor_1_fn(AndroidCanvasPath* __this)
{
    __this->ctor_1();
}

// public generated AndroidCanvasPath New()
void AndroidCanvasPath__New1_fn(AndroidCanvasPath** __retval)
{
    *__retval = AndroidCanvasPath::New1();
}

// public generated AndroidCanvasPath() [instance]
void AndroidCanvasPath::ctor_1()
{
    ctor_();
}

// public generated AndroidCanvasPath New() [static]
AndroidCanvasPath* AndroidCanvasPath::New1()
{
    AndroidCanvasPath* obj1 = (AndroidCanvasPath*)uNew(AndroidCanvasPath_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Android/Surface.uno
// --------------------------------------------------------------------------------

// internal abstract extern class AndroidSurface
// {
static void AndroidSurface_build(uType* type)
{
    ::STRINGS[0] = uString::Const("Duplicate dispose of SurfacePath");
    ::STRINGS[1] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Android/Surface.uno");
    ::STRINGS[2] = uString::Const("DisposePath");
    ::STRINGS[3] = uString::Const("Unprepared LinearGradient");
    ::STRINGS[4] = uString::Const("DrawPath");
    ::STRINGS[5] = uString::Const("Unprepared ImageFill");
    ::STRINGS[6] = uString::Const("Unsupported brush");
    ::STRINGS[7] = uString::Const("Prepare");
    ::STRINGS[8] = uString::Const("Recieved an image with no width or height");
    ::STRINGS[9] = uString::Const("PrepareImageFill");
    ::STRINGS[10] = uString::Const("Object disposed");
    ::TYPES[0] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), ::g::Java::Object_typeof(), nullptr);
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    ::TYPES[4] = ::g::Uno::Collections::Dictionary__Enumerator_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), ::g::Java::Object_typeof(), nullptr);
    ::TYPES[5] = ::g::Uno::Collections::KeyValuePair_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof(), ::g::Java::Object_typeof(), nullptr);
    ::TYPES[6] = ::g::Fuse::Drawing::AndroidCanvasPath_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::ISolidColor_typeof();
    ::TYPES[8] = ::g::Fuse::Drawing::LinearGradient_typeof();
    ::TYPES[9] = ::g::Fuse::Drawing::ImageFill_typeof();
    ::TYPES[10] = ::g::Uno::Int_typeof()->Array();
    ::TYPES[11] = ::g::Uno::Float_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Color_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(AndroidSurface_type, interface0));
    type->SetFields(2,
        ::g::Java::Object_typeof(), offsetof(AndroidSurface, SurfaceContext), 0,
        ::g::Uno::Float_typeof(), offsetof(AndroidSurface, _pixelsPerPoint), 0,
        ::TYPES[0/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>*/], offsetof(AndroidSurface, _imageBrushes), 0,
        ::TYPES[1/*Uno.Collections.List<Fuse.Drawing.LineSegment>*/], offsetof(AndroidSurface, _temp), 0,
        ::TYPES[0/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>*/], offsetof(AndroidSurface, _gradientBrushes), 0);
}

AndroidSurface_type* AndroidSurface_typeof()
{
    static uSStrong<AndroidSurface_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Surface_typeof();
    options.FieldCount = 7;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(AndroidSurface);
    options.TypeSize = sizeof(AndroidSurface_type);
    type = (AndroidSurface_type*)uClassType::New("Fuse.Drawing.AndroidSurface", options);
    type->fp_build_ = AndroidSurface_build;
    type->fp_Begin = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::DrawContext*, ::g::Uno::Graphics::Framebuffer*, float*))AndroidSurface__Begin_fn;
    type->fp_CreatePath = (void(*)(::g::Fuse::Drawing::Surface*, uObject*, int32_t*, ::g::Fuse::Drawing::SurfacePath**))AndroidSurface__CreatePath_fn;
    type->fp_Dispose = (void(*)(::g::Fuse::Drawing::Surface*))AndroidSurface__Dispose_fn;
    type->fp_DisposePath = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*))AndroidSurface__DisposePath_fn;
    type->fp_FillPath = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*, ::g::Fuse::Drawing::Brush*))AndroidSurface__FillPath_fn;
    type->fp_PopTransform = (void(*)(::g::Fuse::Drawing::Surface*))AndroidSurface__PopTransform_fn;
    type->fp_Prepare = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::Brush*))AndroidSurface__Prepare_fn;
    type->fp_PushTransform = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Uno::Float4x4*))AndroidSurface__PushTransform_fn;
    type->fp_StrokePath = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::SurfacePath*, ::g::Fuse::Drawing::Stroke*))AndroidSurface__StrokePath_fn;
    type->fp_Unprepare = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::Drawing::Brush*))AndroidSurface__Unprepare_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))AndroidSurface__Dispose_fn;
    return type;
}

// public AndroidSurface()
void AndroidSurface__ctor_1_fn(AndroidSurface* __this)
{
    __this->ctor_1();
}

// private float2 AddSegments(Java.Object path, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments, float2 prevPoint)
void AndroidSurface__AddSegments_fn(AndroidSurface* __this, ::g::Java::Object* path, uObject* segments, ::g::Uno::Float2* prevPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->AddSegments(path, segments, *prevPoint);
}

// public override void Begin(Fuse.DrawContext dc, framebuffer fb, float pixelsPerPoint)
void AndroidSurface__Begin_fn(AndroidSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint)
{
    float pixelsPerPoint_ = *pixelsPerPoint;
    __this->_pixelsPerPoint = pixelsPerPoint_;
}

// private static void ConcatTransform(Java.Object cp, Java.Object m)
void AndroidSurface__ConcatTransform_fn(::g::Java::Object* cp, ::g::Java::Object* m)
{
    AndroidSurface::ConcatTransform(cp, m);
}

// private static Java.Object CreateFillPaint()
void AndroidSurface__CreateFillPaint_fn(::g::Java::Object** __retval)
{
    *__retval = AndroidSurface::CreateFillPaint();
}

// private static Java.Object CreateLinearGradient(int[] colors, float[] stops)
void AndroidSurface__CreateLinearGradient_fn(uArray* colors, uArray* stops, ::g::Java::Object** __retval)
{
    *__retval = AndroidSurface::CreateLinearGradient(colors, stops);
}

// private extern Java.Object CreateNativeImage(byte[] data)
void AndroidSurface__CreateNativeImage_fn(AndroidSurface* __this, uArray* data, ::g::Java::Object** __retval)
{
    *__retval = __this->CreateNativeImage(data);
}

// public override sealed Fuse.Drawing.SurfacePath CreatePath(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments, [Fuse.Drawing.FillRule fillRule])
void AndroidSurface__CreatePath_fn(AndroidSurface* __this, uObject* segments, int32_t* fillRule, ::g::Fuse::Drawing::SurfacePath** __retval)
{
    ::g::Fuse::Drawing::AndroidCanvasPath* collection2;
    int32_t fillRule_ = *fillRule;
    ::g::Java::Object* path = AndroidSurface::PathCreateMutable();
    __this->AddSegments(path, segments, ::g::Uno::Float2__New1(0.0f));
    return *__retval = (collection2 = ::g::Fuse::Drawing::AndroidCanvasPath::New1(), uPtr(collection2)->Path = path, uPtr(collection2)->FillRule = fillRule_, collection2), void();
}

// private static Java.Object CreateStrokedPaint(float width, int fjoin, int fcap, float miterLimit)
void AndroidSurface__CreateStrokedPaint_fn(float* width, int32_t* fjoin, int32_t* fcap, float* miterLimit, ::g::Java::Object** __retval)
{
    *__retval = AndroidSurface::CreateStrokedPaint(*width, *fjoin, *fcap, *miterLimit);
}

// public override sealed void Dispose()
void AndroidSurface__Dispose_fn(AndroidSurface* __this)
{
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Brush*>, uStrong< ::g::Java::Object*> > ret4;
    __this->SurfaceContext = nullptr;
    uPtr(__this->_gradientBrushes)->Clear();
    ::g::Uno::Collections::Dictionary__Enumerator<uStrong< ::g::Fuse::Drawing::Brush*>, uStrong< ::g::Java::Object*> > enum1 = (::g::Uno::Collections::Dictionary__GetEnumerator_fn(uPtr(__this->_imageBrushes), &ret4), ret4);

    {
        try
        {
            {
                while (enum1.MoveNext(::TYPES[4/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>.Enumerator*/]))
                {
                    ::g::Uno::Collections::KeyValuePair<uStrong< ::g::Fuse::Drawing::Brush*>, uStrong< ::g::Java::Object*> > item = enum1.Current(::TYPES[4/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>.Enumerator*/]);
                    AndroidSurface::recycleBitmap(item.Value(::TYPES[5/*Uno.Collections.KeyValuePair<Fuse.Drawing.Brush, Java.Object>*/]));
                }
            }
        }

        catch (const uThrowable& __t)
        {
            {
                enum1.Dispose(::TYPES[4/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>.Enumerator*/]);
            }
                        throw __t;
            goto __after_finally_0;
        }

        {
            enum1.Dispose(::TYPES[4/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>.Enumerator*/]);
        }
        __after_finally_0:;
    }

    uPtr(__this->_imageBrushes)->Clear();
}

// public override sealed void DisposePath(Fuse.Drawing.SurfacePath path)
void AndroidSurface__DisposePath_fn(AndroidSurface* __this, ::g::Fuse::Drawing::SurfacePath* path)
{
    ::g::Fuse::Drawing::AndroidCanvasPath* cgPath = uCast< ::g::Fuse::Drawing::AndroidCanvasPath*>(path, ::TYPES[6/*Fuse.Drawing.AndroidCanvasPath*/]);

    if (uPtr(cgPath)->Path == nullptr)
    {
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[0/*"Duplicate d...*/], path, ::STRINGS[1/*"/Users/mort...*/], 498, ::STRINGS[2/*"DisposePath"*/]);
        return;
    }

    uPtr(cgPath)->Path = nullptr;
}

// private void DrawPath(Java.Object path, Fuse.Drawing.Brush fill, Fuse.Drawing.FillRule fillRule, Java.Object paint)
void AndroidSurface__DrawPath_fn(AndroidSurface* __this, ::g::Java::Object* path, ::g::Fuse::Drawing::Brush* fill, int32_t* fillRule, ::g::Java::Object* paint)
{
    __this->DrawPath(path, fill, *fillRule, paint);
}

// public override sealed void FillPath(Fuse.Drawing.SurfacePath path, Fuse.Drawing.Brush fill)
void AndroidSurface__FillPath_fn(AndroidSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Brush* fill)
{
    ::g::Fuse::Drawing::AndroidCanvasPath* cgPath = uCast< ::g::Fuse::Drawing::AndroidCanvasPath*>(path, ::TYPES[6/*Fuse.Drawing.AndroidCanvasPath*/]);
    ::g::Java::Object* paint = AndroidSurface::CreateFillPaint();
    __this->DrawPath(uPtr(cgPath)->Path, fill, uPtr(cgPath)->FillRule, paint);
}

// private static void FillPathImage(Java.Object cp, Java.Object pathAsObject, Java.Object imageAsObject, float originX, float originY, float tileSizeX, float tileSizeY, float width, float height, bool eoFill, Java.Object paintAsObject)
void AndroidSurface__FillPathImage_fn(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, ::g::Java::Object* imageAsObject, float* originX, float* originY, float* tileSizeX, float* tileSizeY, float* width, float* height, bool* eoFill, ::g::Java::Object* paintAsObject)
{
    AndroidSurface::FillPathImage(cp, pathAsObject, imageAsObject, *originX, *originY, *tileSizeX, *tileSizeY, *width, *height, *eoFill, paintAsObject);
}

// private static void FillPathLinearGradient(Java.Object cp, Java.Object path, Java.Object gradientStore, float startX, float startY, float endX, float endY, bool eoFill, Java.Object pretendPaint)
void AndroidSurface__FillPathLinearGradient_fn(::g::Java::Object* cp, ::g::Java::Object* path, ::g::Java::Object* gradientStore, float* startX, float* startY, float* endX, float* endY, bool* eoFill, ::g::Java::Object* pretendPaint)
{
    AndroidSurface::FillPathLinearGradient(cp, path, gradientStore, *startX, *startY, *endX, *endY, *eoFill, pretendPaint);
}

// private static void FillPathSolidColor(Java.Object cp, Java.Object pathAsObject, int color, bool eoFill, Java.Object pretendPaint)
void AndroidSurface__FillPathSolidColor_fn(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, int32_t* color, bool* eoFill, ::g::Java::Object* pretendPaint)
{
    AndroidSurface::FillPathSolidColor(cp, pathAsObject, *color, *eoFill, pretendPaint);
}

// private static Java.Object NewContext()
void AndroidSurface__NewContext_fn(::g::Java::Object** __retval)
{
    *__retval = AndroidSurface::NewContext();
}

// private static void PathClose(Java.Object pathAsObject)
void AndroidSurface__PathClose_fn(::g::Java::Object* pathAsObject)
{
    AndroidSurface::PathClose(pathAsObject);
}

// private static Java.Object PathCreateMutable()
void AndroidSurface__PathCreateMutable_fn(::g::Java::Object** __retval)
{
    *__retval = AndroidSurface::PathCreateMutable();
}

// private static void PathCurveTo(Java.Object pathAsObject, float x, float y, float ax, float ay, float bx, float by)
void AndroidSurface__PathCurveTo_fn(::g::Java::Object* pathAsObject, float* x, float* y, float* ax, float* ay, float* bx, float* by)
{
    AndroidSurface::PathCurveTo(pathAsObject, *x, *y, *ax, *ay, *bx, *by);
}

// private static void PathLineTo(Java.Object pathAsObject, float x, float y)
void AndroidSurface__PathLineTo_fn(::g::Java::Object* pathAsObject, float* x, float* y)
{
    AndroidSurface::PathLineTo(pathAsObject, *x, *y);
}

// private static void PathMoveTo(Java.Object pathAsObject, float x, float y)
void AndroidSurface__PathMoveTo_fn(::g::Java::Object* pathAsObject, float* x, float* y)
{
    AndroidSurface::PathMoveTo(pathAsObject, *x, *y);
}

// private float2 PixelFromPoint(float2 point)
void AndroidSurface__PixelFromPoint_fn(AndroidSurface* __this, ::g::Uno::Float2* point, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PixelFromPoint(*point);
}

// public override sealed void PopTransform()
void AndroidSurface__PopTransform_fn(AndroidSurface* __this)
{
    __this->VerifyBegun();
    AndroidSurface::RestoreContextState(__this->SurfaceContext);
}

// public override sealed void Prepare(Fuse.Drawing.Brush brush)
void AndroidSurface__Prepare_fn(AndroidSurface* __this, ::g::Fuse::Drawing::Brush* brush)
{
    __this->VerifyCreated();
    __this->Unprepare(brush);

    if (uIs(brush, ::TYPES[7/*Fuse.Drawing.ISolidColor*/]))
        return;

    ::g::Fuse::Drawing::LinearGradient* linearGradient = uAs< ::g::Fuse::Drawing::LinearGradient*>(brush, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]);

    if (linearGradient != nullptr)
    {
        __this->PrepareLinearGradient(linearGradient);
        return;
    }

    ::g::Fuse::Drawing::ImageFill* imageFill = uAs< ::g::Fuse::Drawing::ImageFill*>(brush, ::TYPES[9/*Fuse.Drawing.ImageFill*/]);

    if (imageFill != nullptr)
    {
        __this->PrepareImageFill(imageFill);
        return;
    }

    ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"Unsupported...*/], brush, ::STRINGS[1/*"/Users/mort...*/], 392, ::STRINGS[7/*"Prepare"*/], nullptr);
}

// private void PrepareImageFill(Fuse.Drawing.ImageFill fill)
void AndroidSurface__PrepareImageFill_fn(AndroidSurface* __this, ::g::Fuse::Drawing::ImageFill* fill)
{
    __this->PrepareImageFill(fill);
}

// protected Java.Object PrepareImageFillImpl(Fuse.Drawing.ImageFill img)
void AndroidSurface__PrepareImageFillImpl_fn(AndroidSurface* __this, ::g::Fuse::Drawing::ImageFill* img, ::g::Java::Object** __retval)
{
    *__retval = __this->PrepareImageFillImpl(img);
}

// private void PrepareLinearGradient(Fuse.Drawing.LinearGradient lg)
void AndroidSurface__PrepareLinearGradient_fn(AndroidSurface* __this, ::g::Fuse::Drawing::LinearGradient* lg)
{
    __this->PrepareLinearGradient(lg);
}

// public override sealed void PushTransform(float4x4 t)
void AndroidSurface__PushTransform_fn(AndroidSurface* __this, ::g::Uno::Float4x4* t)
{
    ::g::Uno::Float4x4 t_ = *t;
    __this->VerifyBegun();
    AndroidSurface::SaveContextState(__this->SurfaceContext);
    AndroidSurface::ConcatTransform(__this->SurfaceContext, __this->ToMatrix1(t_, __this->_pixelsPerPoint));
}

// private static void recycleBitmap(Java.Object bit)
void AndroidSurface__recycleBitmap_fn(::g::Java::Object* bit)
{
    AndroidSurface::recycleBitmap(bit);
}

// private static void RestoreContextState(Java.Object cp)
void AndroidSurface__RestoreContextState_fn(::g::Java::Object* cp)
{
    AndroidSurface::RestoreContextState(cp);
}

// private static int SaveContextState(Java.Object cp)
void AndroidSurface__SaveContextState_fn(::g::Java::Object* cp, int32_t* __retval)
{
    *__retval = AndroidSurface::SaveContextState(cp);
}

// public override sealed void StrokePath(Fuse.Drawing.SurfacePath path, Fuse.Drawing.Stroke stroke)
void AndroidSurface__StrokePath_fn(AndroidSurface* __this, ::g::Fuse::Drawing::SurfacePath* path, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->VerifyBegun();
    ::g::Fuse::Drawing::AndroidCanvasPath* cgPath = uCast< ::g::Fuse::Drawing::AndroidCanvasPath*>(path, ::TYPES[6/*Fuse.Drawing.AndroidCanvasPath*/]);
    ::g::Java::Object* strokedPaint = AndroidSurface::CreateStrokedPaint(uPtr(stroke)->Width() * __this->_pixelsPerPoint, uPtr(stroke)->LineJoin(), uPtr(stroke)->LineCap(), uPtr(stroke)->LineJoinMiterLimit());
    __this->DrawPath(uPtr(cgPath)->Path, stroke->Brush(), 0, strokedPaint);
}

// private Java.Object ToMatrix(float[] matrix)
void AndroidSurface__ToMatrix_fn(AndroidSurface* __this, uArray* matrix, ::g::Java::Object** __retval)
{
    *__retval = __this->ToMatrix(matrix);
}

// private Java.Object ToMatrix(float4x4 transform, float pixelsPerPoint)
void AndroidSurface__ToMatrix1_fn(AndroidSurface* __this, ::g::Uno::Float4x4* transform, float* pixelsPerPoint, ::g::Java::Object** __retval)
{
    *__retval = __this->ToMatrix1(*transform, *pixelsPerPoint);
}

// public override sealed void Unprepare(Fuse.Drawing.Brush brush)
void AndroidSurface__Unprepare_fn(AndroidSurface* __this, ::g::Fuse::Drawing::Brush* brush)
{
    bool ret7;
    bool ret8;
    bool ret9;
    bool ret10;
    ::g::Java::Object* ip;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_gradientBrushes), brush, (void**)(&ip), &ret7), ret7))
    {
        __this->VerifyCreated();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_gradientBrushes), brush, &ret8);
    }

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(__this->_imageBrushes), brush, (void**)(&ip), &ret9), ret9))
    {
        __this->VerifyCreated();
        AndroidSurface::recycleBitmap(ip);
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(__this->_imageBrushes), brush, &ret10);
    }
}

// private void VerifyCreated()
void AndroidSurface__VerifyCreated_fn(AndroidSurface* __this)
{
    __this->VerifyCreated();
}

// public AndroidSurface() [instance]
void AndroidSurface::ctor_1()
{
    _imageBrushes = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>*/]));
    _temp = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Drawing.LineSegment>*/]));
    _gradientBrushes = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[0/*Uno.Collections.Dictionary<Fuse.Drawing.Brush, Java.Object>*/]));
    ctor_();
    SurfaceContext = AndroidSurface::NewContext();
}

// private float2 AddSegments(Java.Object path, Uno.Collections.IList<Fuse.Drawing.LineSegment> segments, float2 prevPoint) [instance]
::g::Uno::Float2 AndroidSurface::AddSegments(::g::Java::Object* path, uObject* segments, ::g::Uno::Float2 prevPoint)
{
    ::g::Fuse::Drawing::LineSegment ret3;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(segments), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/])); ++i)
    {
        ::g::Fuse::Drawing::LineSegment seg = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[3/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int32_t>(i), &ret3), ret3);
        ::g::Uno::Float2 to = PixelFromPoint(seg.To);

        switch (seg.Type)
        {
            case 0:
            {
                AndroidSurface::PathMoveTo(path, to.X, to.Y);
                break;
            }
            case 1:
            {
                AndroidSurface::PathLineTo(path, to.X, to.Y);
                break;
            }
            case 2:
            {
                ::g::Uno::Float2 a = PixelFromPoint(seg.A);
                ::g::Uno::Float2 b = PixelFromPoint(seg.B);
                AndroidSurface::PathCurveTo(path, to.X, to.Y, a.X, a.Y, b.X, b.Y);
                break;
            }
            case 3:
            {
                uPtr(_temp)->Clear();
                ::g::Fuse::Drawing::SurfaceUtil::EllipticArcToBezierCurve1(prevPoint, seg, (uObject*)_temp);
                prevPoint = AddSegments(path, (uObject*)_temp, prevPoint);
                break;
            }
            case 4:
            {
                AndroidSurface::PathClose(path);
                break;
            }
        }

        prevPoint = seg.To;
    }

    return prevPoint;
}

// private extern Java.Object CreateNativeImage(byte[] data) [instance]
::g::Java::Object* AndroidSurface::CreateNativeImage(uArray* data)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateNativeImage310", "(Lcom/uno/UnoObject;Lcom/uno/ByteArray;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uArray* _udata=data;
        jobject _data = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box1(_udata);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_data);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_data!=nullptr) { U_JNIVAR->DeleteLocalRef(_data); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private void DrawPath(Java.Object path, Fuse.Drawing.Brush fill, Fuse.Drawing.FillRule fillRule, Java.Object paint) [instance]
void AndroidSurface::DrawPath(::g::Java::Object* path, ::g::Fuse::Drawing::Brush* fill, int32_t fillRule, ::g::Java::Object* paint)
{
    bool ret5;
    bool ret6;
    bool eoFill = fillRule == 1;
    uObject* solidColor = uAs<uObject*>(fill, ::TYPES[7/*Fuse.Drawing.ISolidColor*/]);

    if (solidColor != nullptr)
    {
        AndroidSurface::FillPathSolidColor(SurfaceContext, path, (int32_t)::g::Uno::Color::ToArgb(::g::Fuse::Drawing::ISolidColor::Color(uInterface(uPtr(solidColor), ::TYPES[7/*Fuse.Drawing.ISolidColor*/]))), eoFill, paint);
        return;
    }

    ::g::Fuse::Drawing::LinearGradient* linearGradient = uAs< ::g::Fuse::Drawing::LinearGradient*>(fill, ::TYPES[8/*Fuse.Drawing.LinearGradient*/]);

    if (linearGradient != nullptr)
    {
        ::g::Java::Object* gradient;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_gradientBrushes), fill, (void**)(&gradient), &ret5), ret5))
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[3/*"Unprepared ...*/], fill, ::STRINGS[1/*"/Users/mort...*/], 175, ::STRINGS[4/*"DrawPath"*/]);
            return;
        }

        ::g::Uno::Float4 ends = ::g::Uno::Float4__op_Multiply1(uPtr(linearGradient)->GetEffectiveEndPoints(ElementSize()), _pixelsPerPoint);
        AndroidSurface::FillPathLinearGradient(SurfaceContext, path, gradient, ends.Item(0), ends.Item(1), ends.Item(2), ends.Item(3), eoFill, paint);
        return;
    }

    ::g::Fuse::Drawing::ImageFill* imageFill = uAs< ::g::Fuse::Drawing::ImageFill*>(fill, ::TYPES[9/*Fuse.Drawing.ImageFill*/]);

    if (imageFill != nullptr)
    {
        ::g::Java::Object* image;

        if (!(::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(_imageBrushes), fill, (void**)(&image), &ret6), ret6))
        {
            ::g::Fuse::Diagnostics::InternalError(::STRINGS[5/*"Unprepared ...*/], fill, ::STRINGS[1/*"/Users/mort...*/], 191, ::STRINGS[4/*"DrawPath"*/]);
            return;
        }

        ::g::Fuse::Internal::SizingContainer* sizing = uPtr(imageFill)->SizingContainer();
        uPtr(sizing)->absoluteZoom = _pixelsPerPoint;
        ::g::Uno::Float2 imageSize = uPtr(imageFill->Source())->Size();
        ::g::Uno::Float2 scale = sizing->CalcScale(ElementSize(), imageSize);
        ::g::Uno::Float2 origin = sizing->CalcOrigin(ElementSize(), ::g::Uno::Float2__op_Multiply2(imageSize, scale));
        ::g::Uno::Float2 tileSize = ::g::Uno::Float2__op_Multiply2(::g::Uno::Float2__op_Multiply1(imageSize, _pixelsPerPoint), scale);
        ::g::Uno::Float2 pixelOrigin = ::g::Uno::Float2__op_Multiply1(origin, _pixelsPerPoint);
        AndroidSurface::FillPathImage(SurfaceContext, path, image, pixelOrigin.X, pixelOrigin.Y, tileSize.X, tileSize.Y, ElementSize().X * _pixelsPerPoint, ElementSize().Y * _pixelsPerPoint, eoFill, paint);
        return;
    }

    ::g::Fuse::Diagnostics::UserError(::STRINGS[6/*"Unsupported...*/], fill, ::STRINGS[1/*"/Users/mort...*/], 212, ::STRINGS[4/*"DrawPath"*/], nullptr);
}

// private float2 PixelFromPoint(float2 point) [instance]
::g::Uno::Float2 AndroidSurface::PixelFromPoint(::g::Uno::Float2 point)
{
    return ::g::Uno::Float2__op_Multiply1(point, _pixelsPerPoint);
}

// private void PrepareImageFill(Fuse.Drawing.ImageFill fill) [instance]
void AndroidSurface::PrepareImageFill(::g::Fuse::Drawing::ImageFill* fill)
{
    ::g::Fuse::Resources::ImageSource* src = uPtr(fill)->Source();

    if ((uPtr(src)->PixelSize().X == 0) || (uPtr(src)->PixelSize().Y == 0))
    {
        ::g::Fuse::Diagnostics::UserError(::STRINGS[8/*"Recieved an...*/], uBox(::g::Uno::Int2_typeof(), uPtr(src)->PixelSize()), ::STRINGS[1/*"/Users/mort...*/], 111, ::STRINGS[9/*"PrepareImag...*/], nullptr);
        return;
    }

    ::g::Uno::Graphics::Texture2D* tex = uPtr(src)->GetTexture();

    if (tex == nullptr)
        return;

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_imageBrushes), fill, PrepareImageFillImpl(fill));
}

// protected Java.Object PrepareImageFillImpl(Fuse.Drawing.ImageFill img) [instance]
::g::Java::Object* AndroidSurface::PrepareImageFillImpl(::g::Fuse::Drawing::ImageFill* img)
{
    ::g::Fuse::Resources::ImageSource* src = uPtr(img)->Source();
    ::g::Java::Object* imageRef = CreateNativeImage(uPtr(src)->GetBytes());
    return imageRef;
}

// private void PrepareLinearGradient(Fuse.Drawing.LinearGradient lg) [instance]
void AndroidSurface::PrepareLinearGradient(::g::Fuse::Drawing::LinearGradient* lg)
{
    uArray* stops = uPtr(lg)->SortedStops();
    uArray* colors = uArray::New(::TYPES[10/*int[]*/], uPtr(stops)->Length());
    uArray* offsets = uArray::New(::TYPES[11/*float[]*/], stops->Length());

    for (int32_t i = 0; i < stops->Length(); ++i)
    {
        ::g::Fuse::Drawing::GradientStop* stop = uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(i);
        uPtr(colors)->Item<int32_t>(i) = (int32_t)::g::Uno::Color::ToArgb(uPtr(stop)->Color());
        uPtr(offsets)->Item<float>(i) = stop->Offset();
    }

    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(_gradientBrushes), lg, AndroidSurface::CreateLinearGradient(colors, offsets));
}

// private Java.Object ToMatrix(float[] matrix) [instance]
::g::Java::Object* AndroidSurface::ToMatrix(uArray* matrix)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ToMatrix324", "(Lcom/uno/UnoObject;Lcom/uno/FloatArray;)Ljava/lang/Object;");
        uObject* _uthis=this;
        jobject _this_ = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box6(_uthis);
        uArray* _umatrix=matrix;
        jobject _matrix = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_umatrix);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_this_,_matrix);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_this_!=nullptr) { U_JNIVAR->DeleteLocalRef(_this_); }
        if (_matrix!=nullptr) { U_JNIVAR->DeleteLocalRef(_matrix); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private Java.Object ToMatrix(float4x4 transform, float pixelsPerPoint) [instance]
::g::Java::Object* AndroidSurface::ToMatrix1(::g::Uno::Float4x4 transform, float pixelsPerPoint)
{
    uArray* matrix = uArray::Init<double>(::TYPES[11/*float[]*/], 9, transform.M11, transform.M21, transform.M41 * pixelsPerPoint, transform.M12, transform.M22, transform.M42 * pixelsPerPoint, transform.M14, transform.M24, transform.M44);
    return ToMatrix(matrix);
}

// private void VerifyCreated() [instance]
void AndroidSurface::VerifyCreated()
{
    if (SurfaceContext == nullptr)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[10/*"Object disp...*/]));
}

// private static void ConcatTransform(Java.Object cp, Java.Object m) [static]
void AndroidSurface::ConcatTransform(::g::Java::Object* cp, ::g::Java::Object* m)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "ConcatTransform307", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _ucp=cp;
        jobject _cp = (_ucp==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucp, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _um=m;
        jobject _m = (_um==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_um, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_cp,_m);
        
        if (_cp!=nullptr) { U_JNIVAR->DeleteLocalRef(_cp); }
        if (_m!=nullptr) { U_JNIVAR->DeleteLocalRef(_m); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object CreateFillPaint() [static]
::g::Java::Object* AndroidSurface::CreateFillPaint()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateFillPaint308", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateLinearGradient(int[] colors, float[] stops) [static]
::g::Java::Object* AndroidSurface::CreateLinearGradient(uArray* colors, uArray* stops)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateLinearGradient309", "(Lcom/uno/IntArray;Lcom/uno/FloatArray;)Ljava/lang/Object;");
        uArray* _ucolors=colors;
        jobject _colors = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box4(_ucolors);
        uArray* _ustops=stops;
        jobject _stops = ::g::Uno::Compiler::ExportTargetInterop::Foreign::Android::JavaUnoObject::Box3(_ustops);
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_colors,_stops);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        if (_colors!=nullptr) { U_JNIVAR->DeleteLocalRef(_colors); }
        if (_stops!=nullptr) { U_JNIVAR->DeleteLocalRef(_stops); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static Java.Object CreateStrokedPaint(float width, int fjoin, int fcap, float miterLimit) [static]
::g::Java::Object* AndroidSurface::CreateStrokedPaint(float width, int32_t fjoin, int32_t fcap, float miterLimit)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "CreateStrokedPaint311", "(FIIF)Ljava/lang/Object;");
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        int32_t _ufjoin=fjoin;
        jint _fjoin = (jint)_ufjoin;
        int32_t _ufcap=fcap;
        jint _fcap = (jint)_ufcap;
        float _umiterLimit=miterLimit;
        jfloat _miterLimit = (jfloat)_umiterLimit;
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd,_width,_fjoin,_fcap,_miterLimit);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void FillPathImage(Java.Object cp, Java.Object pathAsObject, Java.Object imageAsObject, float originX, float originY, float tileSizeX, float tileSizeY, float width, float height, bool eoFill, Java.Object paintAsObject) [static]
void AndroidSurface::FillPathImage(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, ::g::Java::Object* imageAsObject, float originX, float originY, float tileSizeX, float tileSizeY, float width, float height, bool eoFill, ::g::Java::Object* paintAsObject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "FillPathImage312", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;FFFFFFZLjava/lang/Object;)V");
        ::g::Java::Object* _ucp=cp;
        jobject _cp = (_ucp==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucp, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _upathAsObject=pathAsObject;
        jobject _pathAsObject = (_upathAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upathAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _uimageAsObject=imageAsObject;
        jobject _imageAsObject = (_uimageAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_uimageAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _uoriginX=originX;
        jfloat _originX = (jfloat)_uoriginX;
        float _uoriginY=originY;
        jfloat _originY = (jfloat)_uoriginY;
        float _utileSizeX=tileSizeX;
        jfloat _tileSizeX = (jfloat)_utileSizeX;
        float _utileSizeY=tileSizeY;
        jfloat _tileSizeY = (jfloat)_utileSizeY;
        float _uwidth=width;
        jfloat _width = (jfloat)_uwidth;
        float _uheight=height;
        jfloat _height = (jfloat)_uheight;
        bool _ueoFill=eoFill;
        jboolean _eoFill = (jboolean)_ueoFill;
        ::g::Java::Object* _upaintAsObject=paintAsObject;
        jobject _paintAsObject = (_upaintAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upaintAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_cp,_pathAsObject,_imageAsObject,_originX,_originY,_tileSizeX,_tileSizeY,_width,_height,_eoFill,_paintAsObject);
        
        if (_cp!=nullptr) { U_JNIVAR->DeleteLocalRef(_cp); }
        if (_pathAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_pathAsObject); }
        if (_imageAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_imageAsObject); }
        
        
        
        
        
        
        
        if (_paintAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_paintAsObject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void FillPathLinearGradient(Java.Object cp, Java.Object path, Java.Object gradientStore, float startX, float startY, float endX, float endY, bool eoFill, Java.Object pretendPaint) [static]
void AndroidSurface::FillPathLinearGradient(::g::Java::Object* cp, ::g::Java::Object* path, ::g::Java::Object* gradientStore, float startX, float startY, float endX, float endY, bool eoFill, ::g::Java::Object* pretendPaint)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "FillPathLinearGradient313", "(Ljava/lang/Object;Ljava/lang/Object;Ljava/lang/Object;FFFFZLjava/lang/Object;)V");
        ::g::Java::Object* _ucp=cp;
        jobject _cp = (_ucp==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucp, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _upath=path;
        jobject _path = (_upath==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upath, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ugradientStore=gradientStore;
        jobject _gradientStore = (_ugradientStore==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ugradientStore, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ustartX=startX;
        jfloat _startX = (jfloat)_ustartX;
        float _ustartY=startY;
        jfloat _startY = (jfloat)_ustartY;
        float _uendX=endX;
        jfloat _endX = (jfloat)_uendX;
        float _uendY=endY;
        jfloat _endY = (jfloat)_uendY;
        bool _ueoFill=eoFill;
        jboolean _eoFill = (jboolean)_ueoFill;
        ::g::Java::Object* _upretendPaint=pretendPaint;
        jobject _pretendPaint = (_upretendPaint==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upretendPaint, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_cp,_path,_gradientStore,_startX,_startY,_endX,_endY,_eoFill,_pretendPaint);
        
        if (_cp!=nullptr) { U_JNIVAR->DeleteLocalRef(_cp); }
        if (_path!=nullptr) { U_JNIVAR->DeleteLocalRef(_path); }
        if (_gradientStore!=nullptr) { U_JNIVAR->DeleteLocalRef(_gradientStore); }
        
        
        
        
        
        if (_pretendPaint!=nullptr) { U_JNIVAR->DeleteLocalRef(_pretendPaint); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void FillPathSolidColor(Java.Object cp, Java.Object pathAsObject, int color, bool eoFill, Java.Object pretendPaint) [static]
void AndroidSurface::FillPathSolidColor(::g::Java::Object* cp, ::g::Java::Object* pathAsObject, int32_t color, bool eoFill, ::g::Java::Object* pretendPaint)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "FillPathSolidColor314", "(Ljava/lang/Object;Ljava/lang/Object;IZLjava/lang/Object;)V");
        ::g::Java::Object* _ucp=cp;
        jobject _cp = (_ucp==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucp, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _upathAsObject=pathAsObject;
        jobject _pathAsObject = (_upathAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upathAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _ucolor=color;
        jint _color = (jint)_ucolor;
        bool _ueoFill=eoFill;
        jboolean _eoFill = (jboolean)_ueoFill;
        ::g::Java::Object* _upretendPaint=pretendPaint;
        jobject _pretendPaint = (_upretendPaint==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upretendPaint, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_cp,_pathAsObject,_color,_eoFill,_pretendPaint);
        
        if (_cp!=nullptr) { U_JNIVAR->DeleteLocalRef(_cp); }
        if (_pathAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_pathAsObject); }
        
        
        if (_pretendPaint!=nullptr) { U_JNIVAR->DeleteLocalRef(_pretendPaint); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object NewContext() [static]
::g::Java::Object* AndroidSurface::NewContext()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "NewContext315", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void PathClose(Java.Object pathAsObject) [static]
void AndroidSurface::PathClose(::g::Java::Object* pathAsObject)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PathClose316", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _upathAsObject=pathAsObject;
        jobject _pathAsObject = (_upathAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upathAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_pathAsObject);
        
        if (_pathAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_pathAsObject); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static Java.Object PathCreateMutable() [static]
::g::Java::Object* AndroidSurface::PathCreateMutable()
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PathCreateMutable317", "()Ljava/lang/Object;");
        jobject __jresult = U_JNIVAR->CallStaticObjectMethod(__cls,__mtd);
        ::g::Java::Object* __result = (::g::Java::Object*)::g::Android::Base::Wrappers::JavaObjectHelper::JObjectToJWrapper(__jresult, false);
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}

// private static void PathCurveTo(Java.Object pathAsObject, float x, float y, float ax, float ay, float bx, float by) [static]
void AndroidSurface::PathCurveTo(::g::Java::Object* pathAsObject, float x, float y, float ax, float ay, float bx, float by)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PathCurveTo318", "(Ljava/lang/Object;FFFFFF)V");
        ::g::Java::Object* _upathAsObject=pathAsObject;
        jobject _pathAsObject = (_upathAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upathAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        float _uax=ax;
        jfloat _ax = (jfloat)_uax;
        float _uay=ay;
        jfloat _ay = (jfloat)_uay;
        float _ubx=bx;
        jfloat _bx = (jfloat)_ubx;
        float _uby=by;
        jfloat _by = (jfloat)_uby;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_pathAsObject,_x,_y,_ax,_ay,_bx,_by);
        
        if (_pathAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_pathAsObject); }
        
        
        
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void PathLineTo(Java.Object pathAsObject, float x, float y) [static]
void AndroidSurface::PathLineTo(::g::Java::Object* pathAsObject, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PathLineTo319", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _upathAsObject=pathAsObject;
        jobject _pathAsObject = (_upathAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upathAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_pathAsObject,_x,_y);
        
        if (_pathAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_pathAsObject); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void PathMoveTo(Java.Object pathAsObject, float x, float y) [static]
void AndroidSurface::PathMoveTo(::g::Java::Object* pathAsObject, float x, float y)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "PathMoveTo320", "(Ljava/lang/Object;FF)V");
        ::g::Java::Object* _upathAsObject=pathAsObject;
        jobject _pathAsObject = (_upathAsObject==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_upathAsObject, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        float _ux=x;
        jfloat _x = (jfloat)_ux;
        float _uy=y;
        jfloat _y = (jfloat)_uy;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_pathAsObject,_x,_y);
        
        if (_pathAsObject!=nullptr) { U_JNIVAR->DeleteLocalRef(_pathAsObject); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void recycleBitmap(Java.Object bit) [static]
void AndroidSurface::recycleBitmap(::g::Java::Object* bit)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "recycleBitmap321", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ubit=bit;
        jobject _bit = (_ubit==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ubit, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_bit);
        
        if (_bit!=nullptr) { U_JNIVAR->DeleteLocalRef(_bit); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void RestoreContextState(Java.Object cp) [static]
void AndroidSurface::RestoreContextState(::g::Java::Object* cp)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "RestoreContextState322", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ucp=cp;
        jobject _cp = (_ucp==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucp, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_cp);
        
        if (_cp!=nullptr) { U_JNIVAR->DeleteLocalRef(_cp); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static int SaveContextState(Java.Object cp) [static]
int32_t AndroidSurface::SaveContextState(::g::Java::Object* cp)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SaveContextState323", "(Ljava/lang/Object;)I");
        ::g::Java::Object* _ucp=cp;
        jobject _cp = (_ucp==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucp, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        jint __jresult = U_JNIVAR->CallStaticIntMethod(__cls,__mtd,_cp);
        int32_t __result = (int32_t)__jresult;
        if (_cp!=nullptr) { U_JNIVAR->DeleteLocalRef(_cp); }
        ::g::Android::Base::JNI::CheckException();
        return __result;
    }
    
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brush.uno
// --------------------------------------------------------------

// public abstract class Brush
// {
static void Brush_build(uType* type)
{
    ::STRINGS[11] = uString::Const("Brush is not pinned, preparation invalid");
    ::STRINGS[12] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brush.uno");
    ::STRINGS[7] = uString::Const("Prepare");
    type->SetFields(1,
        ::g::Uno::Int_typeof(), offsetof(Brush, _pinCount), 0);
}

Brush_type* Brush_typeof()
{
    static uSStrong<Brush_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(Brush);
    options.TypeSize = sizeof(Brush_type);
    type = (Brush_type*)uClassType::New("Fuse.Drawing.Brush", options);
    type->fp_build_ = Brush_build;
    type->fp_get_IsCompletelyTransparent = Brush__get_IsCompletelyTransparent_fn;
    type->fp_OnPinned = Brush__OnPinned_fn;
    type->fp_OnPrepare = Brush__OnPrepare_fn;
    type->fp_OnUnpinned = Brush__OnUnpinned_fn;
    return type;
}

// internal Brush()
void Brush__ctor_1_fn(Brush* __this)
{
    __this->ctor_1();
}

// public virtual bool get_IsCompletelyTransparent()
void Brush__get_IsCompletelyTransparent_fn(Brush* __this, bool* __retval)
{
    return *__retval = false, void();
}

// public bool get_IsPinned()
void Brush__get_IsPinned_fn(Brush* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// protected virtual void OnPinned()
void Brush__OnPinned_fn(Brush* __this)
{
}

// protected virtual void OnPrepare(Fuse.DrawContext dc, float2 canvasSize)
void Brush__OnPrepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
}

// protected virtual void OnUnpinned()
void Brush__OnUnpinned_fn(Brush* __this)
{
}

// public void Pin()
void Brush__Pin_fn(Brush* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize)
void Brush__Prepare_fn(Brush* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void Unpin()
void Brush__Unpin_fn(Brush* __this)
{
    __this->Unpin();
}

// internal Brush() [instance]
void Brush::ctor_1()
{
    ctor_();
}

// public bool get_IsPinned() [instance]
bool Brush::IsPinned()
{
    return _pinCount > 0;
}

// public void Pin() [instance]
void Brush::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance]
void Brush::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    if (!IsPinned())
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[11/*"Brush is no...*/], this, ::STRINGS[12/*"/Users/mort...*/], 69, ::STRINGS[7/*"Prepare"*/]);

    OnPrepare(dc, canvasSize);
}

// public void Unpin() [instance]
void Brush::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brush.uno
// --------------------------------------------------------------

// public sealed class BrushConverter
// {
// static BrushConverter()
static void BrushConverter__cctor__fn(uType* __type)
{
    ::g::Fuse::Marshal_typeof()->Init();
    ::g::Fuse::Marshal::AddConverter((uObject*)BrushConverter::New1());
}

static void BrushConverter_build(uType* type)
{
    ::TYPES[12] = ::g::Uno::Type_typeof();
    type->SetDependencies(
        ::g::Fuse::Marshal_typeof(),
        ::g::Uno::Type_typeof());
    type->SetInterfaces(
        ::g::Fuse::Marshal__IConverter_typeof(), offsetof(BrushConverter_type, interface0));
}

BrushConverter_type* BrushConverter_typeof()
{
    static uSStrong<BrushConverter_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(BrushConverter);
    options.TypeSize = sizeof(BrushConverter_type);
    type = (BrushConverter_type*)uClassType::New("Fuse.Drawing.BrushConverter", options);
    type->fp_build_ = BrushConverter_build;
    type->fp_ctor_ = (void*)BrushConverter__New1_fn;
    type->fp_cctor_ = BrushConverter__cctor__fn;
    type->interface0.fp_CanConvert = (void(*)(uObject*, uType*, bool*))BrushConverter__CanConvert_fn;
    type->interface0.fp_TryConvert = (void(*)(uObject*, uType*, uObject*, uObject**))BrushConverter__TryConvert_fn;
    return type;
}

// public generated BrushConverter()
void BrushConverter__ctor__fn(BrushConverter* __this)
{
    __this->ctor_();
}

// public bool CanConvert(Uno.Type t)
void BrushConverter__CanConvert_fn(BrushConverter* __this, uType* t, bool* __retval)
{
    *__retval = __this->CanConvert(t);
}

// public generated BrushConverter New()
void BrushConverter__New1_fn(BrushConverter** __retval)
{
    *__retval = BrushConverter::New1();
}

// public object TryConvert(Uno.Type t, object o)
void BrushConverter__TryConvert_fn(BrushConverter* __this, uType* t, uObject* o, uObject** __retval)
{
    *__retval = __this->TryConvert(t, o);
}

// public generated BrushConverter() [instance]
void BrushConverter::ctor_()
{
}

// public bool CanConvert(Uno.Type t) [instance]
bool BrushConverter::CanConvert(uType* t)
{
    return ::g::Uno::Type::op_Equality(t, ::g::Fuse::Drawing::Brush_typeof()) || ::g::Uno::Type::IsSubclassOf(uPtr(t), ::g::Fuse::Drawing::Brush_typeof());
}

// public object TryConvert(Uno.Type t, object o) [instance]
uObject* BrushConverter::TryConvert(uType* t, uObject* o)
{
    if (CanConvert(t))
    {
        ::g::Fuse::Drawing::SolidColor* b = ::g::Fuse::Drawing::SolidColor::New2();
        b->SetColor(::g::Fuse::Marshal::ToFloat43(o));
        return b;
    }

    return nullptr;
}

// public generated BrushConverter New() [static]
BrushConverter* BrushConverter::New1()
{
    BrushConverter* obj1 = (BrushConverter*)uNew(BrushConverter_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Colors.uno
// ---------------------------------------------------------------

// public static class Brushes
// {
// static generated Brushes()
static void Brushes__cctor__fn(uType* __type)
{
    ::g::Fuse::Drawing::Colors_typeof()->Init();
    Brushes::Transparent_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Black_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Black());
    Brushes::Silver_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Silver());
    Brushes::Gray_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Gray());
    Brushes::White_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::White());
    Brushes::Maroon_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Maroon());
    Brushes::Red_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Red());
    Brushes::Purple_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Purple());
    Brushes::Fuchsia_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Fuchsia());
    Brushes::Green_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Green());
    Brushes::Lime_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Lime());
    Brushes::Olive_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Olive());
    Brushes::Yellow_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Yellow());
    Brushes::Navy_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Navy());
    Brushes::Blue_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Blue());
    Brushes::Teal_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Teal());
    Brushes::Aqua_ = ::g::Fuse::Drawing::StaticSolidColor::New2(::g::Fuse::Drawing::Colors::Aqua());
}

static void Brushes_build(uType* type)
{
    type->SetFields(0,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Transparent_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Black_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Silver_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Gray_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::White_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Maroon_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Red_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Purple_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Fuchsia_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Green_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Lime_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Olive_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Yellow_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Navy_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Blue_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Teal_, uFieldFlagsStatic,
        ::g::Fuse::Drawing::StaticSolidColor_typeof(), (uintptr_t)&Brushes::Aqua_, uFieldFlagsStatic);
}

uClassType* Brushes_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Brushes", options);
    type->fp_build_ = Brushes_build;
    type->fp_cctor_ = Brushes__cctor__fn;
    return type;
}

uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Transparent_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Black_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Silver_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Gray_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::White_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Maroon_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Red_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Purple_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Fuchsia_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Green_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Lime_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Olive_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Yellow_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Navy_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Blue_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Teal_;
uSStrong< ::g::Fuse::Drawing::StaticSolidColor*> Brushes::Aqua_;
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Colors.uno
// ---------------------------------------------------------------

// public static class Colors
// {
// static generated Colors()
static void Colors__cctor__fn(uType* __type)
{
    ::g::Uno::Color_typeof()->Init();
    Colors::Transparent_ = ::g::Uno::Color::FromRgba(0U);
    Colors::Black_ = ::g::Uno::Color::FromRgba(255U);
    Colors::Silver_ = ::g::Uno::Color::FromRgba(3233857791U);
    Colors::Gray_ = ::g::Uno::Color::FromRgba(2155905279U);
    Colors::White_ = ::g::Uno::Color::FromRgba(4294967295U);
    Colors::Maroon_ = ::g::Uno::Color::FromRgba(2147483903U);
    Colors::Red_ = ::g::Uno::Color::FromRgba(4278190335U);
    Colors::Purple_ = ::g::Uno::Color::FromRgba(2147516671U);
    Colors::Fuchsia_ = ::g::Uno::Color::FromRgba(4278255615U);
    Colors::Green_ = ::g::Uno::Color::FromRgba(8388863U);
    Colors::Lime_ = ::g::Uno::Color::FromRgba(16711935U);
    Colors::Olive_ = ::g::Uno::Color::FromRgba(2155872511U);
    Colors::Yellow_ = ::g::Uno::Color::FromRgba(4294902015U);
    Colors::Navy_ = ::g::Uno::Color::FromRgba(33023U);
    Colors::Blue_ = ::g::Uno::Color::FromRgba(65535U);
    Colors::Teal_ = ::g::Uno::Color::FromRgba(8421631U);
    Colors::Aqua_ = ::g::Uno::Color::FromRgba(16777215U);
}

static void Colors_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Transparent_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Black_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Silver_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Gray_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::White_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Maroon_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Red_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Purple_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Fuchsia_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Green_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Lime_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Olive_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Yellow_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Navy_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Blue_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Teal_, uFieldFlagsStatic,
        ::g::Uno::Float4_typeof(), (uintptr_t)&Colors::Aqua_, uFieldFlagsStatic);
}

uClassType* Colors_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 17;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.Colors", options);
    type->fp_build_ = Colors_build;
    type->fp_cctor_ = Colors__cctor__fn;
    return type;
}

::g::Uno::Float4 Colors::Transparent_;
::g::Uno::Float4 Colors::Black_;
::g::Uno::Float4 Colors::Silver_;
::g::Uno::Float4 Colors::Gray_;
::g::Uno::Float4 Colors::White_;
::g::Uno::Float4 Colors::Maroon_;
::g::Uno::Float4 Colors::Red_;
::g::Uno::Float4 Colors::Purple_;
::g::Uno::Float4 Colors::Fuchsia_;
::g::Uno::Float4 Colors::Green_;
::g::Uno::Float4 Colors::Lime_;
::g::Uno::Float4 Colors::Olive_;
::g::Uno::Float4 Colors::Yellow_;
::g::Uno::Float4 Colors::Navy_;
::g::Uno::Float4 Colors::Blue_;
::g::Uno::Float4 Colors::Teal_;
::g::Uno::Float4 Colors::Aqua_;
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/DashedColor.uno
// ----------------------------------------------------------------------------

// public sealed class DashedColor
// {
// static generated DashedColor()
static void DashedColor__cctor_1_fn(uType* __type)
{
    DashedColor::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Color"*/]);
    DashedColor::_dashedSizeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"DashedSize"*/]);
}

static void DashedColor_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Color");
    ::STRINGS[14] = uString::Const("DashedSize");
    type->SetFields(3,
        ::g::Uno::Float4_typeof(), offsetof(DashedColor, _color), 0,
        ::g::Uno::Float_typeof(), offsetof(DashedColor, _dashedSize), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DashedColor::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DashedColor::_dashedSizeName_, uFieldFlagsStatic);
}

::g::Fuse::Drawing::Brush_type* DashedColor_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 7;
    options.ObjectSize = sizeof(DashedColor);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.DashedColor", options);
    type->fp_build_ = DashedColor_build;
    type->fp_cctor_ = DashedColor__cctor_1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DashedColor__get_IsCompletelyTransparent_fn;
    return type;
}

// public DashedColor(float4 color, float dashedSize)
void DashedColor__ctor_4_fn(DashedColor* __this, ::g::Uno::Float4* color, float* dashedSize)
{
    __this->ctor_4(*color, *dashedSize);
}

// public float4 get_Color()
void DashedColor__get_Color_fn(DashedColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void DashedColor__set_Color_fn(DashedColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_DashedSize()
void DashedColor__get_DashedSize_fn(DashedColor* __this, float* __retval)
{
    *__retval = __this->DashedSize();
}

// public void set_DashedSize(float value)
void DashedColor__set_DashedSize_fn(DashedColor* __this, float* value)
{
    __this->DashedSize(*value);
}

// public override sealed bool get_IsCompletelyTransparent()
void DashedColor__get_IsCompletelyTransparent_fn(DashedColor* __this, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public DashedColor New(float4 color, float dashedSize)
void DashedColor__New3_fn(::g::Uno::Float4* color, float* dashedSize, DashedColor** __retval)
{
    *__retval = DashedColor::New3(*color, *dashedSize);
}

::g::Uno::UX::Selector DashedColor::_colorName_;
::g::Uno::UX::Selector DashedColor::_dashedSizeName_;

// public DashedColor(float4 color, float dashedSize) [instance]
void DashedColor::ctor_4(::g::Uno::Float4 color, float dashedSize)
{
    _dashedSize = 0.0f;
    ctor_2();
    _color = color;
    _dashedSize = dashedSize;
}

// public float4 get_Color() [instance]
::g::Uno::Float4 DashedColor::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance]
void DashedColor::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(DashedColor::_colorName_);
    }
}

// public float get_DashedSize() [instance]
float DashedColor::DashedSize()
{
    return _dashedSize;
}

// public void set_DashedSize(float value) [instance]
void DashedColor::DashedSize(float value)
{
    if (_dashedSize != value)
    {
        _dashedSize = value;
        OnPropertyChanged(DashedColor::_dashedSizeName_);
    }
}

// public DashedColor New(float4 color, float dashedSize) [static]
DashedColor* DashedColor::New3(::g::Uno::Float4 color, float dashedSize)
{
    DashedColor* obj2 = (DashedColor*)uNew(DashedColor_typeof());
    obj2->ctor_4(color, dashedSize);
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/DrawObjectWatcher.uno
// ----------------------------------------------------------------------------------

// internal sealed class DrawObjectWatcher
// {
// static generated DrawObjectWatcher()
static void DrawObjectWatcher__cctor__fn(uType* __type)
{
    DrawObjectWatcher::ShadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Shading"*/]);
}

static void DrawObjectWatcher_build(uType* type)
{
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(DrawObjectWatcher_type, interface0));
    type->SetFields(0,
        ::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), offsetof(DrawObjectWatcher, _items), 0,
        ::g::Uno::Bool_typeof(), offsetof(DrawObjectWatcher, _rooted), 0,
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof(), offsetof(DrawObjectWatcher, _feedback), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DrawObjectWatcher::ShadingName_, uFieldFlagsStatic);
}

DrawObjectWatcher_type* DrawObjectWatcher_typeof()
{
    static uSStrong<DrawObjectWatcher_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(DrawObjectWatcher);
    options.TypeSize = sizeof(DrawObjectWatcher_type);
    type = (DrawObjectWatcher_type*)uClassType::New("Fuse.Drawing.DrawObjectWatcher", options);
    type->fp_build_ = DrawObjectWatcher_build;
    type->fp_ctor_ = (void*)DrawObjectWatcher__New1_fn;
    type->fp_cctor_ = DrawObjectWatcher__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))DrawObjectWatcher__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public generated DrawObjectWatcher()
void DrawObjectWatcher__ctor__fn(DrawObjectWatcher* __this)
{
    __this->ctor_();
}

// public void Add(Fuse.Drawing.Brush brush)
void DrawObjectWatcher__Add_fn(DrawObjectWatcher* __this, ::g::Fuse::Drawing::Brush* brush)
{
    __this->Add(brush);
}

// public void Add(Fuse.Drawing.Stroke stroke)
void DrawObjectWatcher__Add1_fn(DrawObjectWatcher* __this, ::g::Fuse::Drawing::Stroke* stroke)
{
    __this->Add1(stroke);
}

// private void AddObject(Uno.UX.PropertyObject drawObject)
void DrawObjectWatcher__AddObject_fn(DrawObjectWatcher* __this, ::g::Uno::UX::PropertyObject* drawObject)
{
    __this->AddObject(drawObject);
}

// public generated DrawObjectWatcher New()
void DrawObjectWatcher__New1_fn(DrawObjectWatcher** __retval)
{
    *__retval = DrawObjectWatcher::New1();
}

// public void OnRooted(Fuse.Drawing.IDrawObjectWatcherFeedback feedback)
void DrawObjectWatcher__OnRooted_fn(DrawObjectWatcher* __this, uObject* feedback)
{
    __this->OnRooted(feedback);
}

// public void OnUnrooted()
void DrawObjectWatcher__OnUnrooted_fn(DrawObjectWatcher* __this)
{
    __this->OnUnrooted();
}

// public void Reset()
void DrawObjectWatcher__Reset_fn(DrawObjectWatcher* __this)
{
    __this->Reset();
}

// public void Sync()
void DrawObjectWatcher__Sync_fn(DrawObjectWatcher* __this)
{
    __this->Sync();
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop)
void DrawObjectWatcher__UnoUXIPropertyListenerOnPropertyChanged_fn(DrawObjectWatcher* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    ::g::Uno::UX::Selector prop_ = *prop;

    if (::g::Uno::UX::Selector__op_Equality(prop_, DrawObjectWatcher::ShadingName_))
        return;

    for (int32_t i = 0; i < __this->_items.Count(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr)); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)__this->_items.Item(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i);

        if (uPtr(item)->DrawObject == obj)
        {
            uPtr(item)->Dirty = true;
            break;
        }
    }

    if (__this->_feedback != nullptr)
        ::g::Fuse::Drawing::IDrawObjectWatcherFeedback::Changed(uInterface(uPtr(__this->_feedback), ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof()), obj);
}

::g::Uno::UX::Selector DrawObjectWatcher::ShadingName_;

// public generated DrawObjectWatcher() [instance]
void DrawObjectWatcher::ctor_()
{
}

// public void Add(Fuse.Drawing.Brush brush) [instance]
void DrawObjectWatcher::Add(::g::Fuse::Drawing::Brush* brush)
{
    AddObject(brush);
}

// public void Add(Fuse.Drawing.Stroke stroke) [instance]
void DrawObjectWatcher::Add1(::g::Fuse::Drawing::Stroke* stroke)
{
    AddObject(stroke);
    AddObject(uPtr(stroke)->Brush());
}

// private void AddObject(Uno.UX.PropertyObject drawObject) [instance]
void DrawObjectWatcher::AddObject(::g::Uno::UX::PropertyObject* drawObject)
{
    DrawObjectWatcher__Item* collection1;

    if (drawObject == nullptr)
        return;

    for (int32_t i = 0; i < _items.Count(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr)); ++i)
        if (uPtr((DrawObjectWatcher__Item*)_items.Item(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i))->DrawObject == drawObject)
        {
            DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i);
            uPtr(item)->Used = true;
            return;
        }

    if (_rooted)
        uPtr(drawObject)->AddPropertyListener((uObject*)this);

    _items.Add(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), (collection1 = DrawObjectWatcher__Item::New1(), uPtr(collection1)->Used = true, uPtr(collection1)->DrawObject = drawObject, uPtr(collection1)->Listening = _rooted, uPtr(collection1)->Dirty = true, collection1));
}

// public void OnRooted(Fuse.Drawing.IDrawObjectWatcherFeedback feedback) [instance]
void DrawObjectWatcher::OnRooted(uObject* feedback)
{
    _feedback = feedback;
    _rooted = true;

    for (int32_t i = 0; i < _items.Count(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr)); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i);
        uPtr(item)->Dirty = true;
        item->Listening = true;
        uPtr(item->DrawObject)->AddPropertyListener((uObject*)this);
    }
}

// public void OnUnrooted() [instance]
void DrawObjectWatcher::OnUnrooted()
{
    Reset();
    Sync();
    _rooted = false;

    for (int32_t i = 0; i < _items.Count(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr)); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i);

        if (uPtr(item)->Listening)
            uPtr(uPtr(item)->DrawObject)->RemovePropertyListener((uObject*)this);
    }

    _feedback = nullptr;
}

// public void Reset() [instance]
void DrawObjectWatcher::Reset()
{
    for (int32_t i = 0; i < _items.Count(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr)); ++i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i);
        uPtr(item)->Used = false;
    }
}

// public void Sync() [instance]
void DrawObjectWatcher::Sync()
{
    if (!_rooted)
    {
        ::g::Fuse::Diagnostics::InternalError(uString::Const("Sync while not rooted"), this, uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/DrawObjectWatcher.uno"), 39, uString::Const("Sync"));
        return;
    }

    for (int32_t i = _items.Count(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr)) - 1; i >= 0; --i)
    {
        DrawObjectWatcher__Item* item = (DrawObjectWatcher__Item*)_items.Item(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i);

        if (uPtr(item)->Used)
        {
            if (!uPtr(item)->Prepared || uPtr(item)->Dirty)
            {
                ::g::Fuse::Drawing::IDrawObjectWatcherFeedback::Prepare(uInterface(uPtr(_feedback), ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof()), uPtr(item)->DrawObject);
                item->Dirty = false;
                item->Prepared = true;
            }
        }
        else
        {
            if (uPtr(item)->Prepared)
            {
                ::g::Fuse::Drawing::IDrawObjectWatcherFeedback::Unprepare(uInterface(uPtr(_feedback), ::g::Fuse::Drawing::IDrawObjectWatcherFeedback_typeof()), uPtr(item)->DrawObject);
                item->Prepared = false;
            }

            _items.RemoveAt(::g::Fuse::Internal::MiniList_typeof()->MakeType(DrawObjectWatcher__Item_typeof(), nullptr), i);
        }
    }
}

// public generated DrawObjectWatcher New() [static]
DrawObjectWatcher* DrawObjectWatcher::New1()
{
    DrawObjectWatcher* obj2 = (DrawObjectWatcher*)uNew(DrawObjectWatcher_typeof());
    obj2->ctor_();
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Drawing/ImageFill.uno
// ---------------------------------------------------------------------------

// public struct ImageFill.DrawParams
// {
static void ImageFill__DrawParams_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(ImageFill__DrawParams, Origin), 0,
        ::g::Uno::Float2_typeof(), offsetof(ImageFill__DrawParams, Size), 0,
        ::g::Uno::Float4_typeof(), offsetof(ImageFill__DrawParams, UVClip), 0,
        ::g::Uno::Graphics::Texture2D_typeof(), offsetof(ImageFill__DrawParams, Texture), 0,
        ::g::Uno::Float2_typeof(), offsetof(ImageFill__DrawParams, TexCoordBias1), 0,
        ::g::Uno::Float2_typeof(), offsetof(ImageFill__DrawParams, TexCoordBias2), 0,
        ::g::Uno::Float2_typeof(), offsetof(ImageFill__DrawParams, TexCoordScale1), 0,
        ::g::Uno::Float2_typeof(), offsetof(ImageFill__DrawParams, TexCoordScale2), 0,
        ::g::Uno::Graphics::SamplerState_typeof(), offsetof(ImageFill__DrawParams, SamplerState), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageFill__DrawParams, NeedFract), 0);
}

uStructType* ImageFill__DrawParams_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 10;
    options.Alignment = alignof(ImageFill__DrawParams);
    options.ValueSize = sizeof(ImageFill__DrawParams);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.ImageFill.DrawParams", options);
    type->fp_build_ = ImageFill__DrawParams_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brush.uno
// --------------------------------------------------------------

// public abstract class DynamicBrush
// {
// static generated DynamicBrush()
static void DynamicBrush__cctor__fn(uType* __type)
{
    DynamicBrush::_opacityName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[15/*"Opacity"*/]);
}

static void DynamicBrush_build(uType* type)
{
    ::STRINGS[15] = uString::Const("Opacity");
    type->SetFields(2,
        ::g::Uno::Float_typeof(), offsetof(DynamicBrush, _opacity), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&DynamicBrush::_opacityName_, uFieldFlagsStatic);
}

::g::Fuse::Drawing::Brush_type* DynamicBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Brush_typeof();
    options.FieldCount = 4;
    options.ObjectSize = sizeof(DynamicBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.DynamicBrush", options);
    type->fp_build_ = DynamicBrush_build;
    type->fp_cctor_ = DynamicBrush__cctor__fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))DynamicBrush__get_IsCompletelyTransparent_fn;
    return type;
}

// protected generated DynamicBrush()
void DynamicBrush__ctor_2_fn(DynamicBrush* __this)
{
    __this->ctor_2();
}

// public override bool get_IsCompletelyTransparent()
void DynamicBrush__get_IsCompletelyTransparent_fn(DynamicBrush* __this, bool* __retval)
{
    return *__retval = __this->Opacity() == 0.0f, void();
}

// public float get_Opacity()
void DynamicBrush__get_Opacity_fn(DynamicBrush* __this, float* __retval)
{
    *__retval = __this->Opacity();
}

// public void set_Opacity(float value)
void DynamicBrush__set_Opacity_fn(DynamicBrush* __this, float* value)
{
    __this->Opacity(*value);
}

::g::Uno::UX::Selector DynamicBrush::_opacityName_;

// protected generated DynamicBrush() [instance]
void DynamicBrush::ctor_2()
{
    _opacity = 1.0f;
    ctor_1();
}

// public float get_Opacity() [instance]
float DynamicBrush::Opacity()
{
    return _opacity;
}

// public void set_Opacity(float value) [instance]
void DynamicBrush::Opacity(float value)
{
    if (value == _opacity)
        return;

    _opacity = value;
    OnPropertyChanged(DynamicBrush::_opacityName_);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Enums.uno
// --------------------------------------------------------------

// public enum FillRule
uEnumType* FillRule_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.FillRule", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "NonZero", 0LL,
        "EvenOdd", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/LinearGradient.uno
// -------------------------------------------------------------------------------

// public sealed class GradientStop
// {
// static generated GradientStop()
static void GradientStop__cctor__fn(uType* __type)
{
    GradientStop::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Offset"*/]);
    GradientStop::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Color"*/]);
}

static void GradientStop_build(uType* type)
{
    ::STRINGS[16] = uString::Const("Offset");
    ::STRINGS[13] = uString::Const("Color");
    type->SetFields(1,
        ::g::Uno::Float_typeof(), offsetof(GradientStop, _offset), 0,
        ::g::Uno::Float4_typeof(), offsetof(GradientStop, _color), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&GradientStop::_offsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&GradientStop::_colorName_, uFieldFlagsStatic);
}

uType* GradientStop_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 5;
    options.ObjectSize = sizeof(GradientStop);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.GradientStop", options);
    type->fp_build_ = GradientStop_build;
    type->fp_cctor_ = GradientStop__cctor__fn;
    return type;
}

// public float4 get_Color()
void GradientStop__get_Color_fn(GradientStop* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void GradientStop__set_Color_fn(GradientStop* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_Offset()
void GradientStop__get_Offset_fn(GradientStop* __this, float* __retval)
{
    *__retval = __this->Offset();
}

// public void set_Offset(float value)
void GradientStop__set_Offset_fn(GradientStop* __this, float* value)
{
    __this->Offset(*value);
}

::g::Uno::UX::Selector GradientStop::_offsetName_;
::g::Uno::UX::Selector GradientStop::_colorName_;

// public float4 get_Color() [instance]
::g::Uno::Float4 GradientStop::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance]
void GradientStop::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(GradientStop::_colorName_);
    }
}

// public float get_Offset() [instance]
float GradientStop::Offset()
{
    return _offset;
}

// public void set_Offset(float value) [instance]
void GradientStop::Offset(float value)
{
    if (_offset != value)
    {
        _offset = value;
        OnPropertyChanged(GradientStop::_offsetName_);
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Android/GraphicsSurface.uno
// ----------------------------------------------------------------------------------------

// internal sealed extern class GraphicsSurface
// {
static void GraphicsSurface_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Canvas.Begin was not called");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Drawing::AndroidSurface_type, interface0));
    type->SetFields(7,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(GraphicsSurface, _buffer), 0,
        ::g::Uno::Float2_typeof(), offsetof(GraphicsSurface, _size), 0,
        ::g::Fuse::DrawContext_typeof(), offsetof(GraphicsSurface, _drawContext), 0);
}

::g::Fuse::Drawing::AndroidSurface_type* GraphicsSurface_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::AndroidSurface_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::AndroidSurface_typeof();
    options.FieldCount = 10;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(GraphicsSurface);
    options.TypeSize = sizeof(::g::Fuse::Drawing::AndroidSurface_type);
    type = (::g::Fuse::Drawing::AndroidSurface_type*)uClassType::New("Fuse.Drawing.GraphicsSurface", options);
    type->fp_build_ = GraphicsSurface_build;
    type->fp_ctor_ = (void*)GraphicsSurface__New1_fn;
    type->fp_Begin = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::DrawContext*, ::g::Uno::Graphics::Framebuffer*, float*))GraphicsSurface__Begin_fn;
    type->fp_End = (void(*)(::g::Fuse::Drawing::Surface*))GraphicsSurface__End_fn;
    type->fp_VerifyBegun = (void(*)(::g::Fuse::Drawing::AndroidSurface*))GraphicsSurface__VerifyBegun_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Drawing::AndroidSurface__Dispose_fn;
    return type;
}

// public generated GraphicsSurface()
void GraphicsSurface__ctor_2_fn(GraphicsSurface* __this)
{
    __this->ctor_2();
}

// public override sealed void Begin(Fuse.DrawContext dc, framebuffer fb, float pixelsPerPoint)
void GraphicsSurface__Begin_fn(GraphicsSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint)
{
    float pixelsPerPoint_ = *pixelsPerPoint;
    ::g::Fuse::Drawing::AndroidSurface__Begin_fn(__this, dc, fb, uCRef(pixelsPerPoint_));
    ::g::Java::Object* impl = __this->SurfaceContext;
    __this->_drawContext = dc;
    __this->_buffer = fb;
    __this->_size = ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(uPtr(fb)->Size()), pixelsPerPoint_);

    if ((fb->Size().X == 0) || (fb->Size().Y == 0))
        return;

    GraphicsSurface::LoadBitmap(impl, fb->Size().X, fb->Size().Y);
    GraphicsSurface::BeginImpl(impl, fb->Size().X, fb->Size().Y, ::g::OpenGL::GLTextureHandle::op_Explicit2(uPtr(fb->ColorBuffer())->GLTextureHandle()));
}

// private static void BeginImpl(Java.Object _context, int width, int height, int glTextureId)
void GraphicsSurface__BeginImpl_fn(::g::Java::Object* _context, int32_t* width, int32_t* height, int32_t* glTextureId)
{
    GraphicsSurface::BeginImpl(_context, *width, *height, *glTextureId);
}

// public override sealed void End()
void GraphicsSurface__End_fn(GraphicsSurface* __this)
{
    ::g::Java::Object* impl = __this->SurfaceContext;

    if (impl == nullptr)
        return;

    GraphicsSurface::EndImpl(impl);
}

// private static void EndImpl(Java.Object context)
void GraphicsSurface__EndImpl_fn(::g::Java::Object* context)
{
    GraphicsSurface::EndImpl(context);
}

// public static extern void LoadBitmap(Java.Object context, int width, int height)
void GraphicsSurface__LoadBitmap_fn(::g::Java::Object* context, int32_t* width, int32_t* height)
{
    GraphicsSurface::LoadBitmap(context, *width, *height);
}

// public generated GraphicsSurface New()
void GraphicsSurface__New1_fn(GraphicsSurface** __retval)
{
    *__retval = GraphicsSurface::New1();
}

// protected override sealed void VerifyBegun()
void GraphicsSurface__VerifyBegun_fn(GraphicsSurface* __this)
{
    if (__this->_buffer == nullptr)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[17/*"Canvas.Begi...*/]));
}

// public generated GraphicsSurface() [instance]
void GraphicsSurface::ctor_2()
{
    ctor_1();
}

// private static void BeginImpl(Java.Object _context, int width, int height, int glTextureId) [static]
void GraphicsSurface::BeginImpl(::g::Java::Object* _context, int32_t width, int32_t height, int32_t glTextureId)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "BeginImpl325", "(Ljava/lang/Object;III)V");
        ::g::Java::Object* __u_context=_context;
        jobject ___context = (__u_context==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)__u_context, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t __uwidth=width;
        jint __width = (jint)__uwidth;
        int32_t __uheight=height;
        jint __height = (jint)__uheight;
        int32_t __uglTextureId=glTextureId;
        jint __glTextureId = (jint)__uglTextureId;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,___context,__width,__height,__glTextureId);
        
        if (___context!=nullptr) { U_JNIVAR->DeleteLocalRef(___context); }
        
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// private static void EndImpl(Java.Object context) [static]
void GraphicsSurface::EndImpl(::g::Java::Object* context)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "EndImpl326", "(Ljava/lang/Object;)V");
        ::g::Java::Object* _ucontext=context;
        jobject _context = (_ucontext==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_context);
        
        if (_context!=nullptr) { U_JNIVAR->DeleteLocalRef(_context); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public static extern void LoadBitmap(Java.Object context, int width, int height) [static]
void GraphicsSurface::LoadBitmap(::g::Java::Object* context, int32_t width, int32_t height)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "LoadBitmap327", "(Ljava/lang/Object;II)V");
        ::g::Java::Object* _ucontext=context;
        jobject _context = (_ucontext==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        int32_t _uwidth=width;
        jint _width = (jint)_uwidth;
        int32_t _uheight=height;
        jint _height = (jint)_uheight;
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_context,_width,_height);
        
        if (_context!=nullptr) { U_JNIVAR->DeleteLocalRef(_context); }
        
        
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}

// public generated GraphicsSurface New() [static]
GraphicsSurface* GraphicsSurface::New1()
{
    GraphicsSurface* obj1 = (GraphicsSurface*)uNew(GraphicsSurface_typeof());
    obj1->ctor_2();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/DrawObjectWatcher.uno
// ----------------------------------------------------------------------------------

// internal abstract interface IDrawObjectWatcherFeedback
// {
uInterfaceType* IDrawObjectWatcherFeedback_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Drawing.IDrawObjectWatcherFeedback", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Drawing/ImageFill.uno
// ---------------------------------------------------------------------------

// public sealed class ImageFill
// {
// static generated ImageFill()
static void ImageFill__cctor_1_fn(uType* __type)
{
    ImageFill::_sourceName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Source"));
    ImageFill::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Color"*/]);
    ImageFill::_wrapModeName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("WrapMode"));
    ImageFill::_paramName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Param"));
    ImageFill::_sizingName_ = ::g::Uno::UX::Selector__op_Implicit(uString::Const("Sizing"));
}

static void ImageFill_build(uType* type)
{
    type->SetDependencies(
        ::g::Fuse::Resources::DisposalManager_typeof(),
        ::g::Fuse::ILoadingStatic_typeof(),
        ::g::Fuse::Drawing::RepeatBaker_typeof());
    type->SetInterfaces(
        ::g::Fuse::ILoading_typeof(), offsetof(ImageFill_type, interface0),
        ::g::Fuse::Internal::IImageContainerOwner_typeof(), offsetof(ImageFill_type, interface1),
        ::g::Fuse::Resources::IMemoryResource_typeof(), offsetof(ImageFill_type, interface2));
    type->SetFields(3,
        ::g::Uno::Float4_typeof(), offsetof(ImageFill, _color), 0,
        ImageFill__DrawParams_typeof(), offsetof(ImageFill, _drawParams), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(ImageFill, _tempTexture), 0,
        ::g::Fuse::Internal::ImageContainer_typeof(), offsetof(ImageFill, _container), 0,
        ::g::Fuse::Drawing::WrapMode_typeof(), offsetof(ImageFill, _wrapMode), 0,
        ::g::Uno::Double_typeof(), offsetof(ImageFill, _lastUsed), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageFill, _isLoaded), 0,
        ::g::Uno::Bool_typeof(), offsetof(ImageFill, _autoLoad), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ImageFill::_sourceName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ImageFill::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ImageFill::_wrapModeName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ImageFill::_paramName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&ImageFill::_sizingName_, uFieldFlagsStatic);
}

ImageFill_type* ImageFill_typeof()
{
    static uSStrong<ImageFill_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 16;
    options.InterfaceCount = 3;
    options.DependencyCount = 3;
    options.ObjectSize = sizeof(ImageFill);
    options.TypeSize = sizeof(ImageFill_type);
    type = (ImageFill_type*)uClassType::New("Fuse.Drawing.ImageFill", options);
    type->fp_build_ = ImageFill_build;
    type->fp_cctor_ = ImageFill__cctor_1_fn;
    type->fp_OnPinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnPinned_fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))ImageFill__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))ImageFill__OnUnpinned_fn;
    type->interface1.fp_OnSourceChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn;
    type->interface1.fp_OnParamChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn;
    type->interface1.fp_OnSizingChanged = (void(*)(uObject*))ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn;
    type->interface2.fp_SoftDispose = (void(*)(uObject*))ImageFill__FuseResourcesIMemoryResourceSoftDispose_fn;
    type->interface0.fp_get_IsLoading = (void(*)(uObject*, bool*))ImageFill__FuseILoadingget_IsLoading_fn;
    type->interface2.fp_get_MemoryPolicy = (void(*)(uObject*, ::g::Fuse::Resources::MemoryPolicy**))ImageFill__FuseResourcesIMemoryResourceget_MemoryPolicy_fn;
    type->interface2.fp_get_IsPinned = (void(*)(uObject*, bool*))ImageFill__FuseResourcesIMemoryResourceget_IsPinned_fn;
    type->interface2.fp_get_LastUsed = (void(*)(uObject*, double*))ImageFill__FuseResourcesIMemoryResourceget_LastUsed_fn;
    return type;
}

// public bool get_AutoLoad()
void ImageFill__get_AutoLoad_fn(ImageFill* __this, bool* __retval)
{
    *__retval = __this->AutoLoad();
}

// public void set_AutoLoad(bool value)
void ImageFill__set_AutoLoad_fn(ImageFill* __this, bool* value)
{
    __this->AutoLoad(*value);
}

// private void CleanTempTexture()
void ImageFill__CleanTempTexture_fn(ImageFill* __this)
{
    __this->CleanTempTexture();
}

// public float4 get_Color()
void ImageFill__get_Color_fn(ImageFill* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void ImageFill__set_Color_fn(ImageFill* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// private bool Fuse.ILoading.get_IsLoading()
void ImageFill__FuseILoadingget_IsLoading_fn(ImageFill* __this, bool* __retval)
{
    ::g::Fuse::Resources::ImageSource* src = uPtr(__this->_container)->Source();

    if (src == nullptr)
        return *__retval = false, void();

    return *__retval = (uPtr(src)->State() == 2) || (uPtr(src)->State() == 0), void();
}

// private void Fuse.Internal.IImageContainerOwner.OnParamChanged()
void ImageFill__FuseInternalIImageContainerOwnerOnParamChanged_fn(ImageFill* __this)
{
    __this->OnPropertyChanged(ImageFill::_paramName_);
}

// private void Fuse.Internal.IImageContainerOwner.OnSizingChanged()
void ImageFill__FuseInternalIImageContainerOwnerOnSizingChanged_fn(ImageFill* __this)
{
    __this->OnPropertyChanged(ImageFill::_sizingName_);
}

// private void Fuse.Internal.IImageContainerOwner.OnSourceChanged()
void ImageFill__FuseInternalIImageContainerOwnerOnSourceChanged_fn(ImageFill* __this)
{
    if (__this->IsLoaded())
    {
        __this->CleanTempTexture();
        __this->OnPropertyChanged(ImageFill::_sourceName_);
        __this->OnPropertyChanged(::g::Fuse::ILoadingStatic::IsLoadingName());
        __this->LoadNow();
    }
}

// private bool Fuse.Resources.IMemoryResource.get_IsPinned()
void ImageFill__FuseResourcesIMemoryResourceget_IsPinned_fn(ImageFill* __this, bool* __retval)
{
    return *__retval = uPtr(__this->_container)->IsRooted(), void();
}

// private double Fuse.Resources.IMemoryResource.get_LastUsed()
void ImageFill__FuseResourcesIMemoryResourceget_LastUsed_fn(ImageFill* __this, double* __retval)
{
    return *__retval = __this->_lastUsed, void();
}

// private Fuse.Resources.MemoryPolicy Fuse.Resources.IMemoryResource.get_MemoryPolicy()
void ImageFill__FuseResourcesIMemoryResourceget_MemoryPolicy_fn(ImageFill* __this, ::g::Fuse::Resources::MemoryPolicy** __retval)
{
    return *__retval = uPtr(__this->_container)->MemoryPolicy(), void();
}

// private void Fuse.Resources.IMemoryResource.SoftDispose()
void ImageFill__FuseResourcesIMemoryResourceSoftDispose_fn(ImageFill* __this)
{
    __this->CleanTempTexture();
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size)
void ImageFill__GetDrawParams_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* size, ImageFill__DrawParams* __retval)
{
    *__retval = __this->GetDrawParams(dc, *size);
}

// private float2 GetSize()
void ImageFill__GetSize_fn(ImageFill* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetSize();
}

// public bool get_IsLoaded()
void ImageFill__get_IsLoaded_fn(ImageFill* __this, bool* __retval)
{
    *__retval = __this->IsLoaded();
}

// public void Load()
void ImageFill__Load_fn(ImageFill* __this)
{
    __this->Load();
}

// private void LoadNow()
void ImageFill__LoadNow_fn(ImageFill* __this)
{
    __this->LoadNow();
}

// protected override sealed void OnPinned()
void ImageFill__OnPinned_fn(ImageFill* __this)
{
    ::g::Fuse::Drawing::Brush__OnPinned_fn(__this);
    uPtr(__this->_container)->IsRooted(true);
    __this->LoadNow();
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize)
void ImageFill__OnPrepare_fn(ImageFill* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    ::g::Uno::Float2 canvasSize_ = *canvasSize;
    uPtr(uPtr(__this->_container)->Sizing)->absoluteZoom = ((dc == nullptr) ? 1.0f : uPtr(dc)->ViewportPixelsPerPoint());
    ::g::Uno::Float2 contentDesiredSize = __this->GetSize();
    ::g::Uno::Float2 scale = uPtr(uPtr(__this->_container)->Sizing)->CalcScale(canvasSize_, contentDesiredSize);
    ::g::Uno::Float2 origin = uPtr(uPtr(__this->_container)->Sizing)->CalcOrigin(canvasSize_, ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale));
    ImageFill__DrawParams dp = uDefault<ImageFill__DrawParams>();
    dp.Origin = origin;
    dp.Size = ::g::Uno::Float2__op_Multiply2(contentDesiredSize, scale);
    dp.UVClip = uPtr(uPtr(__this->_container)->Sizing)->CalcClip(canvasSize_, &dp.Origin, &dp.Size);

    if (__this->IsLoaded())
        dp.Texture = uPtr(__this->_container)->GetTexture();

    if ((((dp.Texture != nullptr) && !uPtr(dp.Texture)->IsPow2()) && (__this->WrapMode() == 0)) && !::g::Uno::Graphics::Texture2D::HaveNonPow2Support())
    {
        if (__this->_tempTexture == nullptr)
        {
            ::g::Uno::Int2 size = ::g::Uno::Int2__New2(uPtr(dp.Texture)->Size().X + 1, uPtr(dp.Texture)->Size().Y + 1);
            __this->_tempTexture = ::g::Fuse::FramebufferPool::Lock1(size, 3, false);
            ::g::Fuse::Resources::DisposalManager::Add((uObject*)__this);
            uPtr(::g::Fuse::Drawing::RepeatBaker::Singleton())->FillBuffer(dc, dp.Texture, __this->_tempTexture);
        }

        dp.TexCoordBias1 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_UnaryNegation(::g::Uno::Float2__New1(0.5f)), ::g::Uno::Float2__op_Implicit1(uPtr(dp.Texture)->Size()));
        dp.TexCoordScale1 = ::g::Uno::Float2__New1(1.0f);
        dp.TexCoordBias2 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__New1(0.5f), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(__this->_tempTexture)->ColorBuffer())->Size()));
        dp.TexCoordScale2 = ::g::Uno::Float2__op_Division2(::g::Uno::Float2__op_Implicit1(uPtr(dp.Texture)->Size()), ::g::Uno::Float2__op_Implicit1(uPtr(uPtr(__this->_tempTexture)->ColorBuffer())->Size()));
        dp.Texture = uPtr(__this->_tempTexture)->ColorBuffer();
        dp.SamplerState = ::g::Uno::Graphics::SamplerState__LinearClamp();
        dp.NeedFract = true;
    }
    else
    {
        __this->CleanTempTexture();
        dp.TexCoordBias1 = ::g::Uno::Float2__New1(0.0f);
        dp.TexCoordScale1 = ::g::Uno::Float2__New1(1.0f);
        dp.TexCoordBias2 = ::g::Uno::Float2__New1(0.0f);
        dp.TexCoordScale2 = ::g::Uno::Float2__New1(1.0f);
        dp.SamplerState = ((__this->WrapMode() == 0) ? ::g::Uno::Graphics::SamplerState__LinearWrap() : ::g::Uno::Graphics::SamplerState__LinearClamp());
        dp.NeedFract = false;
    }

    __this->_drawParams = dp;
    __this->_lastUsed = ::g::Fuse::Time::FrameTime();
}

// protected override sealed void OnUnpinned()
void ImageFill__OnUnpinned_fn(ImageFill* __this)
{
    __this->CleanTempTexture();
    uPtr(__this->_container)->IsRooted(false);
    ::g::Fuse::Drawing::Brush__OnUnpinned_fn(__this);
}

// internal Fuse.Internal.SizingContainer get_SizingContainer()
void ImageFill__get_SizingContainer_fn(ImageFill* __this, ::g::Fuse::Internal::SizingContainer** __retval)
{
    *__retval = __this->SizingContainer();
}

// public Fuse.Resources.ImageSource get_Source()
void ImageFill__get_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource** __retval)
{
    *__retval = __this->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value)
void ImageFill__set_Source_fn(ImageFill* __this, ::g::Fuse::Resources::ImageSource* value)
{
    __this->Source(value);
}

// public Fuse.Drawing.WrapMode get_WrapMode()
void ImageFill__get_WrapMode_fn(ImageFill* __this, int32_t* __retval)
{
    *__retval = __this->WrapMode();
}

// public void set_WrapMode(Fuse.Drawing.WrapMode value)
void ImageFill__set_WrapMode_fn(ImageFill* __this, int32_t* value)
{
    __this->WrapMode(*value);
}

::g::Uno::UX::Selector ImageFill::_sourceName_;
::g::Uno::UX::Selector ImageFill::_colorName_;
::g::Uno::UX::Selector ImageFill::_wrapModeName_;
::g::Uno::UX::Selector ImageFill::_paramName_;
::g::Uno::UX::Selector ImageFill::_sizingName_;

// public bool get_AutoLoad() [instance]
bool ImageFill::AutoLoad()
{
    return _autoLoad;
}

// public void set_AutoLoad(bool value) [instance]
void ImageFill::AutoLoad(bool value)
{
    _autoLoad = value;
    _isLoaded = _autoLoad;
    CleanTempTexture();
    LoadNow();
}

// private void CleanTempTexture() [instance]
void ImageFill::CleanTempTexture()
{
    if (_tempTexture != nullptr)
    {
        ::g::Fuse::Resources::DisposalManager::Remove((uObject*)this);
        ::g::Fuse::FramebufferPool::Release(_tempTexture);
        _tempTexture = nullptr;
    }
}

// public float4 get_Color() [instance]
::g::Uno::Float4 ImageFill::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance]
void ImageFill::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(ImageFill::_colorName_);
    }
}

// public Fuse.Drawing.ImageFill.DrawParams GetDrawParams(Fuse.DrawContext dc, float2 size) [instance]
ImageFill__DrawParams ImageFill::GetDrawParams(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 size)
{
    return _drawParams;
}

// private float2 GetSize() [instance]
::g::Uno::Float2 ImageFill::GetSize()
{
    if ((Source() != nullptr) && IsLoaded())
        return uPtr(uPtr(_container)->Sizing)->CalcContentSize(uPtr(Source())->Size(), uPtr(Source())->PixelSize());

    return ::g::Uno::Float2__New1(0.0f);
}

// public bool get_IsLoaded() [instance]
bool ImageFill::IsLoaded()
{
    return _isLoaded;
}

// public void Load() [instance]
void ImageFill::Load()
{
    if (Source() != nullptr)
    {
        uPtr(Source())->Load();
        _isLoaded = true;
    }
}

// private void LoadNow() [instance]
void ImageFill::LoadNow()
{
    if (uPtr(_container)->IsRooted() && IsLoaded())
        uPtr(_container)->GetTexture();
}

// internal Fuse.Internal.SizingContainer get_SizingContainer() [instance]
::g::Fuse::Internal::SizingContainer* ImageFill::SizingContainer()
{
    return uPtr(_container)->Sizing;
}

// public Fuse.Resources.ImageSource get_Source() [instance]
::g::Fuse::Resources::ImageSource* ImageFill::Source()
{
    return uPtr(_container)->Source();
}

// public void set_Source(Fuse.Resources.ImageSource value) [instance]
void ImageFill::Source(::g::Fuse::Resources::ImageSource* value)
{
    uPtr(_container)->Source(value);
}

// public Fuse.Drawing.WrapMode get_WrapMode() [instance]
int32_t ImageFill::WrapMode()
{
    return _wrapMode;
}

// public void set_WrapMode(Fuse.Drawing.WrapMode value) [instance]
void ImageFill::WrapMode(int32_t value)
{
    if (_wrapMode != value)
    {
        _wrapMode = value;
        OnPropertyChanged(ImageFill::_wrapModeName_);
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/SurfaceManager.uno
// -------------------------------------------------------------------------------

// internal abstract interface INativeSurfaceOwner
// {
uInterfaceType* INativeSurfaceOwner_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Drawing.INativeSurfaceOwner", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/SolidColor.uno
// ---------------------------------------------------------------------------

// public abstract interface ISolidColor
// {
uInterfaceType* ISolidColor_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISolidColor", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Surface.uno
// ------------------------------------------------------------------------

// public abstract interface ISurfaceDrawable
// {
uInterfaceType* ISurfaceDrawable_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISurfaceDrawable", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/SurfaceManager.uno
// -------------------------------------------------------------------------------

// internal abstract interface ISurfaceProvider
// {
uInterfaceType* ISurfaceProvider_typeof()
{
    static uSStrong<uInterfaceType*> type;
    if (type != nullptr) return type;

    type = uInterfaceType::New("Fuse.Drawing.ISurfaceProvider", 0, 0);
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/DrawObjectWatcher.uno
// ----------------------------------------------------------------------------------

// private sealed class DrawObjectWatcher.Item
// {
static void DrawObjectWatcher__Item_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Bool_typeof(), offsetof(DrawObjectWatcher__Item, Prepared), 0,
        ::g::Uno::Bool_typeof(), offsetof(DrawObjectWatcher__Item, Used), 0,
        ::g::Uno::Bool_typeof(), offsetof(DrawObjectWatcher__Item, Listening), 0,
        ::g::Uno::Bool_typeof(), offsetof(DrawObjectWatcher__Item, Dirty), 0,
        ::g::Uno::UX::PropertyObject_typeof(), offsetof(DrawObjectWatcher__Item, DrawObject), 0);
}

uType* DrawObjectWatcher__Item_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 5;
    options.ObjectSize = sizeof(DrawObjectWatcher__Item);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.DrawObjectWatcher.Item", options);
    type->fp_build_ = DrawObjectWatcher__Item_build;
    type->fp_ctor_ = (void*)DrawObjectWatcher__Item__New1_fn;
    return type;
}

// public generated Item()
void DrawObjectWatcher__Item__ctor__fn(DrawObjectWatcher__Item* __this)
{
    __this->ctor_();
}

// public generated Item New()
void DrawObjectWatcher__Item__New1_fn(DrawObjectWatcher__Item** __retval)
{
    *__retval = DrawObjectWatcher__Item::New1();
}

// public generated Item() [instance]
void DrawObjectWatcher__Item::ctor_()
{
}

// public generated Item New() [static]
DrawObjectWatcher__Item* DrawObjectWatcher__Item::New1()
{
    DrawObjectWatcher__Item* obj1 = (DrawObjectWatcher__Item*)uNew(DrawObjectWatcher__Item_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/LinearGradient.uno
// -------------------------------------------------------------------------------

// public sealed class LinearGradient
// {
// static LinearGradient()
static void LinearGradient__cctor_1_fn(uType* __type)
{
    ::g::Uno::Math_typeof()->Init();
    LinearGradient::_stopsName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[18/*"Stops"*/]);
    LinearGradient::_stopOffsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Offset"*/]);
    LinearGradient::_stopColorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Color"*/]);
    LinearGradient::_interpolationName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[19/*"Interpolation"*/]);
    LinearGradient::_emptySortedStops_ = uArray::New(::TYPES[13/*Fuse.Drawing.GradientStop[]*/], 0);
    LinearGradient::_startPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[20/*"StartPoint"*/]);
    LinearGradient::_endPointName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[21/*"EndPoint"*/]);
    LinearGradient::_angleName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[22/*"Angle"*/]);
    LinearGradient::_gradientSize_ = 256;
    LinearGradient::_gradientSize_ = ::g::Uno::Math::Min8(1028, ::g::Uno::Graphics::Texture2D::MaxSize());
}

static void LinearGradient_build(uType* type)
{
    ::STRINGS[18] = uString::Const("Stops");
    ::STRINGS[16] = uString::Const("Offset");
    ::STRINGS[13] = uString::Const("Color");
    ::STRINGS[19] = uString::Const("Interpolation");
    ::STRINGS[20] = uString::Const("StartPoint");
    ::STRINGS[21] = uString::Const("EndPoint");
    ::STRINGS[22] = uString::Const("Angle");
    ::STRINGS[23] = uString::Const("Gradient stop offsets must be in order! Expected something bigger or equal to {0}, but got {1}!");
    ::TYPES[13] = ::g::Fuse::Drawing::GradientStop_typeof()->Array();
    ::TYPES[14] = ::g::Uno::Action1_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), nullptr);
    ::TYPES[15] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), nullptr);
    ::TYPES[16] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), nullptr);
    ::TYPES[17] = uObject_typeof()->Array();
    ::TYPES[18] = ::g::Uno::Collections::EnumerableExtensions_typeof()->MakeMethod(5/*ToArray<Fuse.Drawing.GradientStop>*/, ::g::Fuse::Drawing::GradientStop_typeof(), nullptr);
    type->SetDependencies(
        ::g::Fuse::Drawing::LinearGradientDrawable_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(LinearGradient_type, interface0));
    type->SetFields(3,
        ::g::Uno::Collections::RootableList_typeof()->MakeType(::g::Fuse::Drawing::GradientStop_typeof(), nullptr), offsetof(LinearGradient, _stops), 0,
        ::g::Uno::Float2_typeof(), offsetof(LinearGradient, _startPoint), 0,
        ::g::Uno::Float2_typeof(), offsetof(LinearGradient, _endPoint), 0,
        ::g::Uno::Float_typeof(), offsetof(LinearGradient, _angle), 0,
        ::g::Uno::Bool_typeof(), offsetof(LinearGradient, _hasAngle), 0,
        ::g::Fuse::Drawing::LinearGradientInterpolation_typeof(), offsetof(LinearGradient, _interpolation), 0,
        ::g::Uno::Graphics::Framebuffer_typeof(), offsetof(LinearGradient, _gradientBuffer), 0,
        ::g::Uno::Float2_typeof(), offsetof(LinearGradient, _gradientStart), 0,
        ::g::Uno::Bool_typeof(), offsetof(LinearGradient, _invalid), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LinearGradient::_stopsName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LinearGradient::_stopOffsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LinearGradient::_stopColorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LinearGradient::_interpolationName_, uFieldFlagsStatic,
        ::TYPES[13/*Fuse.Drawing.GradientStop[]*/], (uintptr_t)&LinearGradient::_emptySortedStops_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LinearGradient::_startPointName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LinearGradient::_endPointName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&LinearGradient::_angleName_, uFieldFlagsStatic,
        ::g::Uno::Int_typeof(), (uintptr_t)&LinearGradient::_gradientSize_, uFieldFlagsStatic);
}

LinearGradient_type* LinearGradient_typeof()
{
    static uSStrong<LinearGradient_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LinearGradient);
    options.TypeSize = sizeof(LinearGradient_type);
    type = (LinearGradient_type*)uClassType::New("Fuse.Drawing.LinearGradient", options);
    type->fp_build_ = LinearGradient_build;
    type->fp_cctor_ = LinearGradient__cctor_1_fn;
    type->fp_OnPinned = (void(*)(::g::Fuse::Drawing::Brush*))LinearGradient__OnPinned_fn;
    type->fp_OnPrepare = (void(*)(::g::Fuse::Drawing::Brush*, ::g::Fuse::DrawContext*, ::g::Uno::Float2*))LinearGradient__OnPrepare_fn;
    type->fp_OnUnpinned = (void(*)(::g::Fuse::Drawing::Brush*))LinearGradient__OnUnpinned_fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public float get_Angle()
void LinearGradient__get_Angle_fn(LinearGradient* __this, float* __retval)
{
    *__retval = __this->Angle();
}

// public void set_Angle(float value)
void LinearGradient__set_Angle_fn(LinearGradient* __this, float* value)
{
    __this->Angle(*value);
}

// public float2 get_EndPoint()
void LinearGradient__get_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->EndPoint();
}

// public void set_EndPoint(float2 value)
void LinearGradient__set_EndPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->EndPoint(*value);
}

// public float4 GetEffectiveEndPoints(float2 size)
void LinearGradient__GetEffectiveEndPoints_fn(LinearGradient* __this, ::g::Uno::Float2* size, ::g::Uno::Float4* __retval)
{
    *__retval = __this->GetEffectiveEndPoints(*size);
}

// public bool get_HasAngle()
void LinearGradient__get_HasAngle_fn(LinearGradient* __this, bool* __retval)
{
    *__retval = __this->HasAngle();
}

// public Fuse.Drawing.LinearGradientInterpolation get_Interpolation()
void LinearGradient__get_Interpolation_fn(LinearGradient* __this, int32_t* __retval)
{
    *__retval = __this->Interpolation();
}

// public void set_Interpolation(Fuse.Drawing.LinearGradientInterpolation value)
void LinearGradient__set_Interpolation_fn(LinearGradient* __this, int32_t* value)
{
    __this->Interpolation(*value);
}

// private void OnAdded(Fuse.Drawing.GradientStop gs)
void LinearGradient__OnAdded_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs)
{
    __this->OnAdded(gs);
}

// protected override sealed void OnPinned()
void LinearGradient__OnPinned_fn(LinearGradient* __this)
{
    ::g::Fuse::Drawing::Brush__OnPinned_fn(__this);
    uPtr(__this->_stops)->RootSubscribe(uDelegate::New(::TYPES[14/*Uno.Action<Fuse.Drawing.GradientStop>*/], (void*)LinearGradient__OnAdded_fn, __this), uDelegate::New(::TYPES[14/*Uno.Action<Fuse.Drawing.GradientStop>*/], (void*)LinearGradient__OnRemoved_fn, __this));
}

// protected override sealed void OnPrepare(Fuse.DrawContext dc, float2 canvasSize)
void LinearGradient__OnPrepare_fn(LinearGradient* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    if (__this->_gradientBuffer == nullptr)
    {
        __this->_gradientBuffer = ::g::Fuse::FramebufferPool::Lock1(::g::Uno::Int2__New2(LinearGradient::_gradientSize_, 1), 3, false);
        __this->_invalid = true;
    }

    if (__this->_invalid)
    {
        __this->_gradientStart = uPtr(::g::Fuse::Drawing::LinearGradientDrawable::Singleton())->FillBuffer(dc, __this, __this->_gradientBuffer);
        __this->_invalid = false;
    }
}

// private void OnRemoved(Fuse.Drawing.GradientStop gs)
void LinearGradient__OnRemoved_fn(LinearGradient* __this, ::g::Fuse::Drawing::GradientStop* gs)
{
    __this->OnRemoved(gs);
}

// protected override sealed void OnUnpinned()
void LinearGradient__OnUnpinned_fn(LinearGradient* __this)
{
    uPtr(__this->_stops)->RootUnsubscribe();

    if (__this->_gradientBuffer != nullptr)
    {
        ::g::Fuse::FramebufferPool::Release(__this->_gradientBuffer);
        __this->_gradientBuffer = nullptr;
        __this->_invalid = true;
    }

    ::g::Fuse::Drawing::Brush__OnUnpinned_fn(__this);
}

// public Fuse.Drawing.GradientStop[] get_SortedStops()
void LinearGradient__get_SortedStops_fn(LinearGradient* __this, uArray** __retval)
{
    *__retval = __this->SortedStops();
}

// public float2 get_StartPoint()
void LinearGradient__get_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->StartPoint();
}

// public void set_StartPoint(float2 value)
void LinearGradient__set_StartPoint_fn(LinearGradient* __this, ::g::Uno::Float2* value)
{
    __this->StartPoint(*value);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject sender, Uno.UX.Selector property)
void LinearGradient__UnoUXIPropertyListenerOnPropertyChanged_fn(LinearGradient* __this, ::g::Uno::UX::PropertyObject* sender, ::g::Uno::UX::Selector* property)
{
    ::g::Uno::UX::Selector property_ = *property;

    if (::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopOffsetName_) || ::g::Uno::UX::Selector__op_Equality(property_, LinearGradient::_stopColorName_))
        __this->_invalid = true;

    __this->OnPropertyChanged(LinearGradient::_stopsName_);
}

// private static void ValidateStopsSorted(Uno.Collections.IList<Fuse.Drawing.GradientStop> stops)
void LinearGradient__ValidateStopsSorted_fn(uObject* stops)
{
    LinearGradient::ValidateStopsSorted(stops);
}

::g::Uno::UX::Selector LinearGradient::_stopsName_;
::g::Uno::UX::Selector LinearGradient::_stopOffsetName_;
::g::Uno::UX::Selector LinearGradient::_stopColorName_;
::g::Uno::UX::Selector LinearGradient::_interpolationName_;
uSStrong<uArray*> LinearGradient::_emptySortedStops_;
::g::Uno::UX::Selector LinearGradient::_startPointName_;
::g::Uno::UX::Selector LinearGradient::_endPointName_;
::g::Uno::UX::Selector LinearGradient::_angleName_;
int32_t LinearGradient::_gradientSize_;

// public float get_Angle() [instance]
float LinearGradient::Angle()
{
    return _angle;
}

// public void set_Angle(float value) [instance]
void LinearGradient::Angle(float value)
{
    if ((_angle != value) || !_hasAngle)
    {
        _angle = value;
        _hasAngle = true;
        OnPropertyChanged(LinearGradient::_angleName_);
    }
}

// public float2 get_EndPoint() [instance]
::g::Uno::Float2 LinearGradient::EndPoint()
{
    return _endPoint;
}

// public void set_EndPoint(float2 value) [instance]
void LinearGradient::EndPoint(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2__op_Inequality(_endPoint, value))
    {
        _endPoint = value;
        OnPropertyChanged(LinearGradient::_endPointName_);
    }
}

// public float4 GetEffectiveEndPoints(float2 size) [instance]
::g::Uno::Float4 LinearGradient::GetEffectiveEndPoints(::g::Uno::Float2 size)
{
    if (!HasAngle())
        return ::g::Uno::Float4__New7(::g::Uno::Float2__op_Multiply2(StartPoint(), size), ::g::Uno::Float2__op_Multiply2(EndPoint(), size));

    float angleLen = ::g::Uno::Math::Abs1(size.X * ::g::Uno::Math::Cos1(Angle())) + ::g::Uno::Math::Abs1(size.Y * ::g::Uno::Math::Sin1(Angle()));
    ::g::Uno::Float2 angleSlope = ::g::Uno::Float2__New2(::g::Uno::Math::Cos1(Angle()), ::g::Uno::Math::Sin1(Angle()));
    ::g::Uno::Float2 angleStartPoint = ::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Division1(size, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope, angleLen), 2.0f));
    ::g::Uno::Float2 angleEndPoint = ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Division1(size, 2.0f), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Multiply1(angleSlope, angleLen), 2.0f));
    return ::g::Uno::Float4__New7(angleStartPoint, angleEndPoint);
}

// public bool get_HasAngle() [instance]
bool LinearGradient::HasAngle()
{
    return _hasAngle;
}

// public Fuse.Drawing.LinearGradientInterpolation get_Interpolation() [instance]
int32_t LinearGradient::Interpolation()
{
    return _interpolation;
}

// public void set_Interpolation(Fuse.Drawing.LinearGradientInterpolation value) [instance]
void LinearGradient::Interpolation(int32_t value)
{
    if (_interpolation == value)
        return;

    _interpolation = value;
    OnPropertyChanged(LinearGradient::_interpolationName_);
}

// private void OnAdded(Fuse.Drawing.GradientStop gs) [instance]
void LinearGradient::OnAdded(::g::Fuse::Drawing::GradientStop* gs)
{
    uPtr(gs)->AddPropertyListener((uObject*)this);
    _invalid = true;

    if (IsPinned())
    {
        OnPropertyChanged(LinearGradient::_stopsName_);
        LinearGradient::ValidateStopsSorted((uObject*)_stops);
    }
}

// private void OnRemoved(Fuse.Drawing.GradientStop gs) [instance]
void LinearGradient::OnRemoved(::g::Fuse::Drawing::GradientStop* gs)
{
    uPtr(gs)->RemovePropertyListener((uObject*)this);
    _invalid = true;

    if (IsPinned())
        OnPropertyChanged(LinearGradient::_stopsName_);
}

// public Fuse.Drawing.GradientStop[] get_SortedStops() [instance]
uArray* LinearGradient::SortedStops()
{
    uArray* ind4;
    ind4 = (uArray*)::g::Uno::Collections::EnumerableExtensions::ToArray(::TYPES[18/*Uno.Collections.EnumerableExtensions.ToArray<Fuse.Drawing.GradientStop>*/], (uObject*)_stops);
    return (ind4 != nullptr) ? ind4 : (uArray*)LinearGradient::_emptySortedStops_;
}

// public float2 get_StartPoint() [instance]
::g::Uno::Float2 LinearGradient::StartPoint()
{
    return _startPoint;
}

// public void set_StartPoint(float2 value) [instance]
void LinearGradient::StartPoint(::g::Uno::Float2 value)
{
    if (::g::Uno::Float2__op_Inequality(_startPoint, value))
    {
        _startPoint = value;
        OnPropertyChanged(LinearGradient::_startPointName_);
    }
}

// private static void ValidateStopsSorted(Uno.Collections.IList<Fuse.Drawing.GradientStop> stops) [static]
void LinearGradient::ValidateStopsSorted(uObject* stops)
{
    LinearGradient_typeof()->Init();
    ::g::Fuse::Drawing::GradientStop* ret7;
    ::g::Fuse::Drawing::GradientStop* ret8;
    ::g::Fuse::Drawing::GradientStop* ret9;
    ::g::Fuse::Drawing::GradientStop* ret10;

    for (int32_t i = 1; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(stops), ::TYPES[15/*Uno.Collections.ICollection<Fuse.Drawing.GradientStop>*/])); ++i)
        if (uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[16/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int32_t>(i), &ret7), ret7))->Offset() < uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[16/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int32_t>(i - 1), &ret8), ret8))->Offset())
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::Format(::STRINGS[23/*"Gradient st...*/], uArray::Init<uObject*>(::TYPES[17/*object[]*/], 2, uBox(::g::Uno::Float_typeof(), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[16/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int32_t>(i - 1), &ret9), ret9))->Offset()), uBox(::g::Uno::Float_typeof(), uPtr((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(stops), ::TYPES[16/*Uno.Collections.IList<Fuse.Drawing.GradientStop>*/]), uCRef<int32_t>(i), &ret10), ret10))->Offset())))));
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/LinearGradient.uno
// -------------------------------------------------------------------------------

// internal sealed class LinearGradientDrawable
// {
// static generated LinearGradientDrawable()
static void LinearGradientDrawable__cctor__fn(uType* __type)
{
    LinearGradientDrawable::Singleton_ = LinearGradientDrawable::New1();
}

static void LinearGradientDrawable_build(uType* type)
{
    ::TYPES[19] = ::g::Uno::Float4_typeof()->Array();
    ::TYPES[11] = ::g::Uno::Float_typeof()->Array();
    ::TYPES[20] = ::g::Uno::Float2_typeof()->Array();
    type->SetDependencies(
        ::g::FuseDrawing_bundle_typeof(),
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(LinearGradientDrawable, FillBuffer_TexCoord_631333bf_1_1_1), 0,
        ::TYPES[20/*float2[]*/], offsetof(LinearGradientDrawable, FillBuffer_Vertices_631333bf_1_0_9), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(LinearGradientDrawable, _draw_631333bf), 0,
        type, (uintptr_t)&LinearGradientDrawable::Singleton_, uFieldFlagsStatic);
}

uType* LinearGradientDrawable_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(LinearGradientDrawable);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LinearGradientDrawable", options);
    type->fp_build_ = LinearGradientDrawable_build;
    type->fp_ctor_ = (void*)LinearGradientDrawable__New1_fn;
    type->fp_cctor_ = LinearGradientDrawable__cctor__fn;
    return type;
}

// public generated LinearGradientDrawable()
void LinearGradientDrawable__ctor__fn(LinearGradientDrawable* __this)
{
    __this->ctor_();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb)
void LinearGradientDrawable__FillBuffer_fn(LinearGradientDrawable* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb, ::g::Uno::Float2* __retval)
{
    *__retval = __this->FillBuffer(dc, lg, fb);
}

// private static generated float4[] FillBuffer_Colors_631333bf_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5)
void LinearGradientDrawable__FillBuffer_Colors_631333bf_1_6_6_fn(int32_t* Colors_1_6_4, uArray* Colors_1_6_5, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Colors_631333bf_1_6_6(*Colors_1_6_4, Colors_1_6_5);
}

// private static generated float[] FillBuffer_Offsets_631333bf_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2)
void LinearGradientDrawable__FillBuffer_Offsets_631333bf_1_5_4_fn(int32_t* Offsets_1_5_1, uArray* Offsets_1_5_2, uArray** __retval)
{
    *__retval = LinearGradientDrawable::FillBuffer_Offsets_631333bf_1_5_4(*Offsets_1_5_1, Offsets_1_5_2);
}

// private generated void init_DrawCalls()
void LinearGradientDrawable__init_DrawCalls_fn(LinearGradientDrawable* __this)
{
    __this->init_DrawCalls();
}

// public generated LinearGradientDrawable New()
void LinearGradientDrawable__New1_fn(LinearGradientDrawable** __retval)
{
    *__retval = LinearGradientDrawable::New1();
}

uSStrong<LinearGradientDrawable*> LinearGradientDrawable::Singleton_;

// public generated LinearGradientDrawable() [instance]
void LinearGradientDrawable::ctor_()
{
    init_DrawCalls();
}

// public float2 FillBuffer(Fuse.DrawContext dc, Fuse.Drawing.LinearGradient lg, framebuffer fb) [instance]
::g::Uno::Float2 LinearGradientDrawable::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Fuse::Drawing::LinearGradient* lg, ::g::Uno::Graphics::Framebuffer* fb)
{
    uArray* stops = uPtr(lg)->SortedStops();

    if (uPtr(stops)->Length() < 2)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float length = uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(uPtr(stops)->Length() - 1))->Offset() - uPtr(uPtr(stops)->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset();
    uPtr(dc)->PushRenderTarget(fb);
    bool smooth = lg->Interpolation() == 1;
    uArray* Offsets_631333bf_1_5_5 = LinearGradientDrawable::FillBuffer_Offsets_631333bf_1_5_4(stops->Length(), stops);
    uArray* Colors_631333bf_1_6_7 = LinearGradientDrawable::FillBuffer_Colors_631333bf_1_6_6(stops->Length(), stops);
    _draw_631333bf.DepthTestEnabled(false);
    _draw_631333bf.Const1(0, uPtr(Offsets_631333bf_1_5_5)->Length());
    _draw_631333bf.Const1(1, uPtr(Colors_631333bf_1_6_7)->Length());
    _draw_631333bf.Const(2, smooth);
    _draw_631333bf.Use();
    _draw_631333bf.Attrib1(3, 2, FillBuffer_TexCoord_631333bf_1_1_1, 8, 0);
    _draw_631333bf.Uniform1(4, Offsets_631333bf_1_5_5);
    _draw_631333bf.Uniform(5, length);
    _draw_631333bf.Uniform11(6, Colors_631333bf_1_6_7);
    _draw_631333bf.DrawArrays(uPtr(FillBuffer_Vertices_631333bf_1_0_9)->Length());
    dc->PopRenderTarget();
    return ::g::Uno::Float2__New2(uPtr(stops->Strong< ::g::Fuse::Drawing::GradientStop*>(0))->Offset(), length);
}

// private generated void init_DrawCalls() [instance]
void LinearGradientDrawable::init_DrawCalls()
{
    uArray* Vertices_631333bf_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[20/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_TexCoord_631333bf_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_631333bf_1_0_0, 0);
    FillBuffer_Vertices_631333bf_1_0_9 = Vertices_631333bf_1_0_0;
    _draw_631333bf = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseDrawing_bundle::LinearGradientDrawablee64f68c7());
}

// private static generated float4[] FillBuffer_Colors_631333bf_1_6_6(int Colors_1_6_4, Fuse.Drawing.GradientStop[] Colors_1_6_5) [static]
uArray* LinearGradientDrawable::FillBuffer_Colors_631333bf_1_6_6(int32_t Colors_1_6_4, uArray* Colors_1_6_5)
{
    LinearGradientDrawable_typeof()->Init();
    uArray* cols = uArray::New(::TYPES[19/*float4[]*/], ::g::Uno::Math::Max8(Colors_1_6_4, 1));

    for (int32_t i = 0; i < Colors_1_6_4; i++)
        uPtr(cols)->Item< ::g::Uno::Float4>(i) = uPtr(uPtr(Colors_1_6_5)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Color();

    return cols;
}

// private static generated float[] FillBuffer_Offsets_631333bf_1_5_4(int Offsets_1_5_1, Fuse.Drawing.GradientStop[] Offsets_1_5_2) [static]
uArray* LinearGradientDrawable::FillBuffer_Offsets_631333bf_1_5_4(int32_t Offsets_1_5_1, uArray* Offsets_1_5_2)
{
    LinearGradientDrawable_typeof()->Init();
    uArray* ofs = uArray::New(::TYPES[11/*float[]*/], ::g::Uno::Math::Max8(Offsets_1_5_1, 1));

    for (int32_t i = 0; i < Offsets_1_5_1; i++)
        uPtr(ofs)->Item<float>(i) = uPtr(uPtr(Offsets_1_5_2)->Strong< ::g::Fuse::Drawing::GradientStop*>(i))->Offset();

    return ofs;
}

// public generated LinearGradientDrawable New() [static]
LinearGradientDrawable* LinearGradientDrawable::New1()
{
    LinearGradientDrawable* obj1 = (LinearGradientDrawable*)uNew(LinearGradientDrawable_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/LinearGradient.uno
// -------------------------------------------------------------------------------

// public enum LinearGradientInterpolation
uEnumType* LinearGradientInterpolation_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.LinearGradientInterpolation", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Linear", 0LL,
        "Smooth", 1LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Enums.uno
// --------------------------------------------------------------

// public enum LineCap
uEnumType* LineCap_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.LineCap", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Butt", 0LL,
        "Round", 1LL,
        "Square", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Enums.uno
// --------------------------------------------------------------

// public enum LineJoin
uEnumType* LineJoin_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.LineJoin", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Miter", 0LL,
        "Round", 1LL,
        "Bevel", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineMetrics.uno
// ----------------------------------------------------------------------------

// public static class LineMetrics
// {
static void LineMetrics_build(uType* type)
{
}

uClassType* LineMetrics_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.LineMetrics", options);
    type->fp_build_ = LineMetrics_build;
    return type;
}

// public static Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments)
void LineMetrics__GetBounds_fn(uObject* segments, ::g::Uno::Rect* __retval)
{
    *__retval = LineMetrics::GetBounds(segments);
}

// public static Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [static]
::g::Uno::Rect LineMetrics::GetBounds(uObject* segments)
{
    return ::g::Fuse::Drawing::LineMetricsImpl::New1()->GetBounds(segments);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineMetrics.uno
// ----------------------------------------------------------------------------

// internal sealed class LineMetricsImpl
// {
static void LineMetricsImpl_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    ::TYPES[3] = ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Rect_typeof(), offsetof(LineMetricsImpl, _bounds), 0,
        ::g::Uno::Bool_typeof(), offsetof(LineMetricsImpl, _hasInit), 0,
        ::g::Uno::Float2_typeof(), offsetof(LineMetricsImpl, _curPos), 0);
}

uType* LineMetricsImpl_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LineMetricsImpl);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LineMetricsImpl", options);
    type->fp_build_ = LineMetricsImpl_build;
    type->fp_ctor_ = (void*)LineMetricsImpl__New1_fn;
    return type;
}

// public generated LineMetricsImpl()
void LineMetricsImpl__ctor__fn(LineMetricsImpl* __this)
{
    __this->ctor_();
}

// private void AddPoint(float2 pt)
void LineMetricsImpl__AddPoint_fn(LineMetricsImpl* __this, ::g::Uno::Float2* pt)
{
    __this->AddPoint(*pt);
}

// private void BezierBounds(float2 s, float2 e, float2 c1, float2 c2)
void LineMetricsImpl__BezierBounds_fn(LineMetricsImpl* __this, ::g::Uno::Float2* s, ::g::Uno::Float2* e, ::g::Uno::Float2* c1, ::g::Uno::Float2* c2)
{
    __this->BezierBounds(*s, *e, *c1, *c2);
}

// private static float2 BezierMinMax(float p0, float p1, float p2, float p3)
void LineMetricsImpl__BezierMinMax_fn(float* p0, float* p1, float* p2, float* p3, ::g::Uno::Float2* __retval)
{
    *__retval = LineMetricsImpl::BezierMinMax(*p0, *p1, *p2, *p3);
}

// private void EllipticBounds(float2 from, Fuse.Drawing.LineSegment seg)
void LineMetricsImpl__EllipticBounds_fn(LineMetricsImpl* __this, ::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* seg)
{
    __this->EllipticBounds(*from, *seg);
}

// public Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments)
void LineMetricsImpl__GetBounds_fn(LineMetricsImpl* __this, uObject* segments, ::g::Uno::Rect* __retval)
{
    *__retval = __this->GetBounds(segments);
}

// public generated LineMetricsImpl New()
void LineMetricsImpl__New1_fn(LineMetricsImpl** __retval)
{
    *__retval = LineMetricsImpl::New1();
}

// public generated LineMetricsImpl() [instance]
void LineMetricsImpl::ctor_()
{
    _curPos = ::g::Uno::Float2__New1(0.0f);
}

// private void AddPoint(float2 pt) [instance]
void LineMetricsImpl::AddPoint(::g::Uno::Float2 pt)
{
    if (!_hasInit)
    {
        _bounds.Minimum(pt);
        _bounds.Maximum(pt);
        _hasInit = true;
        return;
    }

    _bounds.Minimum(::g::Uno::Math::Min3(_bounds.Minimum(), pt));
    _bounds.Maximum(::g::Uno::Math::Max3(_bounds.Maximum(), pt));
}

// private void BezierBounds(float2 s, float2 e, float2 c1, float2 c2) [instance]
void LineMetricsImpl::BezierBounds(::g::Uno::Float2 s, ::g::Uno::Float2 e, ::g::Uno::Float2 c1, ::g::Uno::Float2 c2)
{
    ::g::Uno::Float2 x = LineMetricsImpl::BezierMinMax(s.X, c1.X, c2.X, e.X);
    ::g::Uno::Float2 y = LineMetricsImpl::BezierMinMax(s.Y, c1.Y, c2.Y, e.Y);
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, x.Item(0)));
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, x.Item(1)));
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, y.Item(0)));
    AddPoint(::g::Fuse::Internal::Curves::CalcBezierAt(s, c1, c2, e, y.Item(1)));
}

// private void EllipticBounds(float2 from, Fuse.Drawing.LineSegment seg) [instance]
void LineMetricsImpl::EllipticBounds(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment seg)
{
    if (::g::Fuse::Drawing::SurfaceUtil::EllipticArcOutOfRange(from, seg))
    {
        AddPoint(from);
        AddPoint(seg.To);
        return;
    }

    ::g::Uno::Float2 c, angles;
    ::g::Uno::Float2 radius = seg.A;
    float xAngle = seg.B.X;
    ::g::Fuse::Drawing::SurfaceUtil::EndpointToCenterArcParams(from, seg.To, &radius, xAngle, (seg.Flags & 1) == 1, (seg.Flags & 2) == 2, &c, &angles);
    ::g::Uno::Float4 ts = ::g::Uno::Float4__New1(0.0f);
    ts.Item(0, ::g::Uno::Math::Atan22(-radius.Y * ::g::Uno::Math::Sin1(xAngle), radius.X * ::g::Uno::Math::Cos1(xAngle)));
    ts.Item(1, ts.Item(0) + 3.14159274f);
    ts.Item(2, ::g::Uno::Math::Atan22(radius.Y * ::g::Uno::Math::Cos1(xAngle), radius.X * ::g::Uno::Math::Sin1(xAngle)));
    ts.Item(3, ts.Item(2) + 3.14159274f);

    for (int32_t i = 0; i < 4; ++i)
    {
        float t = ts.Item(i);

        if (::g::Fuse::Drawing::SurfaceUtil::AngleInRange(t, angles.Item(0), angles.Item(0) + angles.Item(1)))
            AddPoint(::g::Fuse::Drawing::SurfaceUtil::EllipticArcPoint(c, radius, xAngle, t));
    }

    AddPoint(::g::Fuse::Drawing::SurfaceUtil::EllipticArcPoint(c, radius, xAngle, angles.Item(0)));
    AddPoint(::g::Fuse::Drawing::SurfaceUtil::EllipticArcPoint(c, radius, xAngle, angles.Item(0) + angles.Item(1)));
}

// public Uno.Rect GetBounds(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [instance]
::g::Uno::Rect LineMetricsImpl::GetBounds(uObject* segments)
{
    ::g::Fuse::Drawing::LineSegment ret2;

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(segments), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/])); ++i)
    {
        ::g::Fuse::Drawing::LineSegment cur = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[3/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int32_t>(i), &ret2), ret2);

        switch (cur.Type)
        {
            case 0:
            {
                _curPos = cur.To;
                break;
            }
            case 4:
                break;
            case 1:
            {
                AddPoint(cur.To);
                AddPoint(_curPos);
                _curPos = cur.To;
                break;
            }
            case 2:
            {
                BezierBounds(_curPos, cur.To, cur.A, cur.B);
                _curPos = cur.To;
                break;
            }
            case 3:
            {
                EllipticBounds(_curPos, cur);
                _curPos = cur.To;
                break;
            }
        }
    }

    return _bounds;
}

// private static float2 BezierMinMax(float p0, float p1, float p2, float p3) [static]
::g::Uno::Float2 LineMetricsImpl::BezierMinMax(float p0, float p1, float p2, float p3)
{
    float b = ((2.0f * p0) - (4.0f * p1)) + (2.0f * p2);
    float a = ((-p0 + (3.0f * p1)) - (3.0f * p2)) + p3;
    float c = p1 - p0;
    float zeroTolerance = 1e-05f;

    if (::g::Uno::Math::Abs1(a) < 1e-05f)
    {
        if (::g::Uno::Math::Abs1(b) > 1e-05f)
        {
            float cb = -c / b;

            if ((cb > 0.0f) && (cb < 1.0f))
                return ::g::Uno::Float2__New2(cb, cb);
        }

        return ::g::Uno::Float2__New2(0.0f, 1.0f);
    }

    float sqr = (b * b) - ((4.0f * a) * c);

    if (sqr < 0.0f)
        return ::g::Uno::Float2__New2(0.0f, 1.0f);

    float rt = ::g::Uno::Math::Sqrt1(sqr);
    float t1 = (-b + rt) / (2.0f * a);
    float t2 = (-b - rt) / (2.0f * a);
    return ::g::Uno::Float2__New2(::g::Uno::Math::Clamp1(t1, 0.0f, 1.0f), ::g::Uno::Math::Clamp1(t2, 0.0f, 1.0f));
}

// public generated LineMetricsImpl New() [static]
LineMetricsImpl* LineMetricsImpl::New1()
{
    LineMetricsImpl* obj1 = (LineMetricsImpl*)uNew(LineMetricsImpl_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineSegment.uno
// ----------------------------------------------------------------------------

// public struct LineSegment
// {
static void LineSegment_build(uType* type)
{
    ::STRINGS[24] = uString::Const("Unsupport type for length: ");
    ::STRINGS[25] = uString::Const("Unsupported type for splitting: ");
    ::TYPES[20] = ::g::Uno::Float2_typeof()->Array();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(LineSegment, To), 0,
        ::g::Uno::Float2_typeof(), offsetof(LineSegment, A), 0,
        ::g::Uno::Float2_typeof(), offsetof(LineSegment, B), 0,
        ::g::Fuse::Drawing::LineSegmentFlags_typeof(), offsetof(LineSegment, Flags), 0,
        ::g::Fuse::Drawing::LineSegmentType_typeof(), offsetof(LineSegment, Type), 0);
}

uStructType* LineSegment_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 5;
    options.DependencyCount = 1;
    options.Alignment = alignof(LineSegment);
    options.ValueSize = sizeof(LineSegment);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.LineSegment", options);
    type->fp_build_ = LineSegment_build;
    return type;
}

// private static float2[] deCasteljau(float2[] pts, float t)
void LineSegment__deCasteljau_fn(uArray* pts, float* t, uArray** __retval)
{
    *__retval = LineSegment::deCasteljau(pts, *t);
}

// internal float2 DirectionAtTime(float2 from, float t)
void LineSegment__DirectionAtTime_fn(LineSegment* __this, ::g::Uno::Float2* from, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DirectionAtTime(*from, *t);
}

// internal float EstimateLength(float2 from)
void LineSegment__EstimateLength_fn(LineSegment* __this, ::g::Uno::Float2* from, float* __retval)
{
    *__retval = __this->EstimateLength(*from);
}

// public bool get_HasTo()
void LineSegment__get_HasTo_fn(LineSegment* __this, bool* __retval)
{
    *__retval = __this->HasTo();
}

// internal bool get_IsDrawing()
void LineSegment__get_IsDrawing_fn(LineSegment* __this, bool* __retval)
{
    *__retval = __this->IsDrawing();
}

// internal float2 PointAtTime(float2 from, float t)
void LineSegment__PointAtTime_fn(LineSegment* __this, ::g::Uno::Float2* from, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointAtTime(*from, *t);
}

// public void Scale(float2 factor)
void LineSegment__Scale_fn(LineSegment* __this, ::g::Uno::Float2* factor)
{
    __this->Scale(*factor);
}

// internal void SplitAtTime(float2 from, float t, Fuse.Drawing.LineSegment& left, Fuse.Drawing.LineSegment& right)
void LineSegment__SplitAtTime_fn(LineSegment* __this, ::g::Uno::Float2* from, float* t, LineSegment* left, LineSegment* right)
{
    __this->SplitAtTime(*from, *t, left, right);
}

// public void Translate(float2 offset)
void LineSegment__Translate_fn(LineSegment* __this, ::g::Uno::Float2* offset)
{
    __this->Translate(*offset);
}

// internal float2 DirectionAtTime(float2 from, float t) [instance]
::g::Uno::Float2 LineSegment::DirectionAtTime(::g::Uno::Float2 from, float t)
{
    switch (Type)
    {
        case 1:
            return ::g::Uno::Float2__op_Subtraction2(To, from);
        case 2:
            return ::g::Fuse::Drawing::SurfaceUtil::BezierCurveDerivative(from, A, B, To, t);
        default:
            return ::g::Uno::Float2__New1(0.0f);
    }
}

// internal float EstimateLength(float2 from) [instance]
float LineSegment::EstimateLength(::g::Uno::Float2 from)
{
    switch (Type)
    {
        case 1:
            return ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(To, from));
        case 2:
        {
            float a = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(To, from));
            float b = (::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(A, from)) + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(B, A))) + ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(To, B));
            return (a + b) / 2.0f;
        }
        case 0:
        case 4:
            return 0.0f;
        case 3:
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[24/*"Unsupport t...*/], uBox<int32_t>(::g::Fuse::Drawing::LineSegmentType_typeof(), Type))));
    }

    return 0.0f;
}

// public bool get_HasTo() [instance]
bool LineSegment::HasTo()
{
    return Type != 4;
}

// internal bool get_IsDrawing() [instance]
bool LineSegment::IsDrawing()
{
    return (Type != 0) && (Type != 4);
}

// internal float2 PointAtTime(float2 from, float t) [instance]
::g::Uno::Float2 LineSegment::PointAtTime(::g::Uno::Float2 from, float t)
{
    switch (Type)
    {
        case 1:
            return ::g::Uno::Math::Lerp2(from, To, t);
        case 2:
            return ::g::Fuse::Internal::Curves::CalcBezierAt(from, A, B, To, t);
        default:
            return from;
    }
}

// public void Scale(float2 factor) [instance]
void LineSegment::Scale(::g::Uno::Float2 factor)
{
    if (Type != 4)
        To = ::g::Uno::Float2__op_Multiply2(To, factor);

    if (Type == 2)
    {
        A = ::g::Uno::Float2__op_Multiply2(A, factor);
        B = ::g::Uno::Float2__op_Multiply2(B, factor);
    }
    else if (Type == 3)
        A = ::g::Uno::Float2__op_Multiply2(A, factor);
}

// internal void SplitAtTime(float2 from, float t, Fuse.Drawing.LineSegment& left, Fuse.Drawing.LineSegment& right) [instance]
void LineSegment::SplitAtTime(::g::Uno::Float2 from, float t, LineSegment* left, LineSegment* right)
{
    LineSegment collection1;
    LineSegment collection2;
    LineSegment collection3;
    LineSegment collection4;

    switch (Type)
    {
        case 2:
        {
            uArray* p4 = uArray::Init< ::g::Uno::Float2>(::TYPES[20/*float2[]*/], 4, from, A, B, To);
            uArray* p3 = LineSegment::deCasteljau(p4, t);
            uArray* p2 = LineSegment::deCasteljau(p3, t);
            uArray* p1 = LineSegment::deCasteljau(p2, t);
            *left = (collection1 = uDefault<LineSegment>(), collection1.Type = 2, collection1.A = uPtr(p3)->Item< ::g::Uno::Float2>(0), collection1.B = uPtr(p2)->Item< ::g::Uno::Float2>(0), collection1.To = uPtr(p1)->Item< ::g::Uno::Float2>(0), collection1);
            *right = (collection2 = uDefault<LineSegment>(), collection2.Type = 2, collection2.A = p2->Item< ::g::Uno::Float2>(1), collection2.B = p3->Item< ::g::Uno::Float2>(2), collection2.To = p4->Item< ::g::Uno::Float2>(3), collection2);
            break;
        }
        case 1:
        {
            *left = (collection3 = uDefault<LineSegment>(), collection3.Type = 1, collection3.To = ::g::Uno::Math::Lerp2(from, To, t), collection3);
            *right = (collection4 = uDefault<LineSegment>(), collection4.Type = 1, collection4.To = To, collection4);
            break;
        }
        case 3:
        default:
            U_THROW(::g::Uno::Exception::New2(::g::Uno::String::op_Addition1(::STRINGS[25/*"Unsupported...*/], uBox<int32_t>(::g::Fuse::Drawing::LineSegmentType_typeof(), Type))));
    }
}

// public void Translate(float2 offset) [instance]
void LineSegment::Translate(::g::Uno::Float2 offset)
{
    if (Type != 4)
        To = ::g::Uno::Float2__op_Addition2(To, offset);

    if (Type == 2)
    {
        A = ::g::Uno::Float2__op_Addition2(A, offset);
        B = ::g::Uno::Float2__op_Addition2(B, offset);
    }
}

// private static float2[] deCasteljau(float2[] pts, float t) [static]
uArray* LineSegment::deCasteljau(uArray* pts, float t)
{
    uArray* next = uArray::New(::TYPES[20/*float2[]*/], uPtr(pts)->Length() - 1);

    for (int32_t i = 0; i < (pts->Length() - 1); ++i)
        uPtr(next)->Item< ::g::Uno::Float2>(i) = ::g::Uno::Math::Lerp2(uPtr(pts)->Item< ::g::Uno::Float2>(i), uPtr(pts)->Item< ::g::Uno::Float2>(i + 1), t);

    return next;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineSegment.uno
// ----------------------------------------------------------------------------

// public enum LineSegmentFlags
uEnumType* LineSegmentFlags_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.LineSegmentFlags", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "None", 0LL,
        "EllipticArcLarge", 1LL,
        "EllipticArcSweep", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineSegments.uno
// -----------------------------------------------------------------------------

// public sealed class LineSegments
// {
static void LineSegments_build(uType* type)
{
    ::TYPES[1] = ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    type->SetFields(0,
        ::g::Uno::Float2_typeof(), offsetof(LineSegments, _curPos), 0,
        ::g::Uno::Collections::IList_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr), offsetof(LineSegments, _Segments), 0);
}

uType* LineSegments_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.ObjectSize = sizeof(LineSegments);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LineSegments", options);
    type->fp_build_ = LineSegments_build;
    type->fp_ctor_ = (void*)LineSegments__New1_fn;
    return type;
}

// public LineSegments()
void LineSegments__ctor__fn(LineSegments* __this)
{
    __this->ctor_();
}

// private void Add(Fuse.Drawing.LineSegment seg)
void LineSegments__Add_fn(LineSegments* __this, ::g::Fuse::Drawing::LineSegment* seg)
{
    __this->Add(*seg);
}

// public void BezierCurveTo(float2 pt, float2 controlA, float2 controlB)
void LineSegments__BezierCurveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* controlA, ::g::Uno::Float2* controlB)
{
    __this->BezierCurveTo(*pt, *controlA, *controlB);
}

// public void Clear()
void LineSegments__Clear_fn(LineSegments* __this)
{
    __this->Clear();
}

// public void ClosePath()
void LineSegments__ClosePath_fn(LineSegments* __this)
{
    __this->ClosePath();
}

// public int get_Count()
void LineSegments__get_Count_fn(LineSegments* __this, int32_t* __retval)
{
    *__retval = __this->Count();
}

// public void EllipticArcTo(float2 pt, float2 radius, float xAngle, bool large, bool sweep)
void LineSegments__EllipticArcTo_fn(LineSegments* __this, ::g::Uno::Float2* pt, ::g::Uno::Float2* radius, float* xAngle, bool* large, bool* sweep)
{
    __this->EllipticArcTo(*pt, *radius, *xAngle, *large, *sweep);
}

// public void LineTo(float2 pt)
void LineSegments__LineTo_fn(LineSegments* __this, ::g::Uno::Float2* pt)
{
    __this->LineTo(*pt);
}

// public void MoveTo(float2 pt)
void LineSegments__MoveTo_fn(LineSegments* __this, ::g::Uno::Float2* pt)
{
    __this->MoveTo(*pt);
}

// public LineSegments New()
void LineSegments__New1_fn(LineSegments** __retval)
{
    *__retval = LineSegments::New1();
}

// public generated Uno.Collections.IList<Fuse.Drawing.LineSegment> get_Segments()
void LineSegments__get_Segments_fn(LineSegments* __this, uObject** __retval)
{
    *__retval = __this->Segments();
}

// private generated void set_Segments(Uno.Collections.IList<Fuse.Drawing.LineSegment> value)
void LineSegments__set_Segments_fn(LineSegments* __this, uObject* value)
{
    __this->Segments(value);
}

// public LineSegments() [instance]
void LineSegments::ctor_()
{
    Segments((uObject*)((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Drawing.LineSegment>*/])));
    _curPos = ::g::Uno::Float2__New1(0.0f);
}

// private void Add(Fuse.Drawing.LineSegment seg) [instance]
void LineSegments::Add(::g::Fuse::Drawing::LineSegment seg)
{
    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(Segments()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef(seg));

    if (seg.HasTo())
        _curPos = seg.To;
}

// public void BezierCurveTo(float2 pt, float2 controlA, float2 controlB) [instance]
void LineSegments::BezierCurveTo(::g::Uno::Float2 pt, ::g::Uno::Float2 controlA, ::g::Uno::Float2 controlB)
{
    ::g::Fuse::Drawing::LineSegment collection3;
    Add((collection3 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection3.Type = 2, collection3.To = pt, collection3.A = controlA, collection3.B = controlB, collection3));
}

// public void Clear() [instance]
void LineSegments::Clear()
{
    ::g::Uno::Collections::ICollection::Clear(uInterface(uPtr(Segments()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]));
    _curPos = ::g::Uno::Float2__New1(0.0f);
}

// public void ClosePath() [instance]
void LineSegments::ClosePath()
{
    ::g::Fuse::Drawing::LineSegment collection4;
    Add((collection4 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection4.Type = 4, collection4));
}

// public int get_Count() [instance]
int32_t LineSegments::Count()
{
    return ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(Segments()), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]));
}

// public void EllipticArcTo(float2 pt, float2 radius, float xAngle, bool large, bool sweep) [instance]
void LineSegments::EllipticArcTo(::g::Uno::Float2 pt, ::g::Uno::Float2 radius, float xAngle, bool large, bool sweep)
{
    ::g::Fuse::Drawing::LineSegment collection5;
    Add((collection5 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection5.Type = 3, collection5.To = pt, collection5.A = radius, collection5.B = ::g::Uno::Float2__New2(xAngle, 0.0f), collection5.Flags = ((large ? 1 : 0) | (sweep ? 2 : 0)), collection5));
}

// public void LineTo(float2 pt) [instance]
void LineSegments::LineTo(::g::Uno::Float2 pt)
{
    ::g::Fuse::Drawing::LineSegment collection2;
    Add((collection2 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection2.Type = 1, collection2.To = pt, collection2));
}

// public void MoveTo(float2 pt) [instance]
void LineSegments::MoveTo(::g::Uno::Float2 pt)
{
    ::g::Fuse::Drawing::LineSegment collection1;
    Add((collection1 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection1.Type = 0, collection1.To = pt, collection1));
}

// public generated Uno.Collections.IList<Fuse.Drawing.LineSegment> get_Segments() [instance]
uObject* LineSegments::Segments()
{
    return _Segments;
}

// private generated void set_Segments(Uno.Collections.IList<Fuse.Drawing.LineSegment> value) [instance]
void LineSegments::Segments(uObject* value)
{
    _Segments = value;
}

// public LineSegments New() [static]
LineSegments* LineSegments::New1()
{
    LineSegments* obj6 = (LineSegments*)uNew(LineSegments_typeof());
    obj6->ctor_();
    return obj6;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineSegment.uno
// ----------------------------------------------------------------------------

// public enum LineSegmentType
uEnumType* LineSegmentType_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.LineSegmentType", ::g::Uno::Int_typeof(), 5);
    type->SetLiterals(
        "Move", 0LL,
        "Straight", 1LL,
        "BezierCurve", 2LL,
        "EllipticArc", 3LL,
        "Close", 4LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineSplitter.uno
// -----------------------------------------------------------------------------

// internal sealed class LineSplitter
// {
static void LineSplitter_build(uType* type)
{
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetFields(0,
        ::g::Uno::Collections::List_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr), offsetof(LineSplitter, _segments), 0,
        ::g::Uno::Collections::List_typeof()->MakeType(LineSplitter__LSInfo_typeof(), nullptr), offsetof(LineSplitter, _info), 0);
}

uType* LineSplitter_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(LineSplitter);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.LineSplitter", options);
    type->fp_build_ = LineSplitter_build;
    return type;
}

// public LineSplitter(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments)
void LineSplitter__ctor__fn(LineSplitter* __this, uObject* segments)
{
    __this->ctor_(segments);
}

// private void CalcInfo()
void LineSplitter__CalcInfo_fn(LineSplitter* __this)
{
    __this->CalcInfo();
}

// public float2 DirectionAtTime(float time)
void LineSplitter__DirectionAtTime_fn(LineSplitter* __this, float* time, ::g::Uno::Float2* __retval)
{
    *__retval = __this->DirectionAtTime(*time);
}

// public float DistanceToTime(float distance)
void LineSplitter__DistanceToTime_fn(LineSplitter* __this, float* distance, float* __retval)
{
    *__retval = __this->DistanceToTime(*distance);
}

// private Fuse.Drawing.LineSplitter.SegmentAt GetSegmentAtTime(float time)
void LineSplitter__GetSegmentAtTime_fn(LineSplitter* __this, float* time, LineSplitter__SegmentAt* __retval)
{
    *__retval = __this->GetSegmentAtTime(*time);
}

// public LineSplitter New(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments)
void LineSplitter__New1_fn(uObject* segments, LineSplitter** __retval)
{
    *__retval = LineSplitter::New1(segments);
}

// public float2 PointAtTime(float time)
void LineSplitter__PointAtTime_fn(LineSplitter* __this, float* time, ::g::Uno::Float2* __retval)
{
    *__retval = __this->PointAtTime(*time);
}

// public void SplitTime(float start, float end, Uno.Collections.IList<Fuse.Drawing.LineSegment> to)
void LineSplitter__SplitTime_fn(LineSplitter* __this, float* start, float* end, uObject* to)
{
    __this->SplitTime(*start, *end, to);
}

// public LineSplitter(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [instance]
void LineSplitter::ctor_(uObject* segments)
{
    ::g::Fuse::Drawing::LineSegment collection1;
    ::g::Fuse::Drawing::LineSegment ret7;
    ::g::Fuse::Drawing::LineSegment ret8;
    ::g::Fuse::Drawing::LineSegment ret9;
    ::g::Fuse::Drawing::LineSegment ret10;
    ::g::Fuse::Drawing::LineSegment ret11;
    _segments = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::TYPES[1/*Uno.Collections.List<Fuse.Drawing.LineSegment>*/]));
    ::g::Uno::Float2 from = ::g::Uno::Float2__New1(0.0f);

    for (int32_t i = 0; i < ::g::Uno::Collections::ICollection::Count(uInterface(uPtr(segments), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/])); ++i)
    {
        if ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[3/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int32_t>(i), &ret7), ret7).Type == 4)
            ;
        else if ((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[3/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int32_t>(i), &ret8), ret8).Type != 3)
            ::g::Uno::Collections::List__Add_fn(uPtr(_segments), uCRef((::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[3/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int32_t>(i), &ret9), ret9)));
        else
            ::g::Fuse::Drawing::SurfaceUtil::EllipticArcToBezierCurve1(from, (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[3/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int32_t>(i), &ret10), ret10), (uObject*)_segments);

        from = (::g::Uno::Collections::IList::get_Item_ex(uInterface(uPtr(segments), ::TYPES[3/*Uno.Collections.IList<Fuse.Drawing.LineSegment>*/]), uCRef<int32_t>(i), &ret11), ret11).To;
    }

    if (uPtr(_segments)->Count() == 0)
        ::g::Uno::Collections::List__Add_fn(uPtr(_segments), uCRef((collection1 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection1.Type = 4, collection1.To = ::g::Uno::Float2__New1(0.0f), collection1)));

    CalcInfo();
}

// private void CalcInfo() [instance]
void LineSplitter::CalcInfo()
{
    ::g::Fuse::Drawing::LineSegment ret12;
    ::g::Fuse::Drawing::LineSegment ret13;
    ::g::Fuse::Drawing::LineSegment ret14;
    LineSplitter__LSInfo ret15;
    _info = ((::g::Uno::Collections::List*)::g::Uno::Collections::List::New1(::g::Uno::Collections::List_typeof()->MakeType(LineSplitter__LSInfo_typeof(), nullptr)));
    int32_t t = 0;
    ::g::Uno::Float2 from = ::g::Uno::Float2__New1(0.0f);
    float distance = 0.0f;

    for (int32_t i = 0; i < uPtr(_segments)->Count(); ++i)
    {
        LineSplitter__LSInfo lsi;
        lsi.StartT = (float)t;

        if ((::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(i), &ret12), ret12).IsDrawing())
            t = t + 1;

        lsi.EndT = (float)t;
        float length = (::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(i), &ret13), ret13).EstimateLength(from);
        lsi.StartDistance = distance;
        distance = distance + length;
        lsi.EndDistance = distance;
        ::g::Uno::Collections::List__Add_fn(uPtr(_info), uCRef(lsi));
        from = (::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(i), &ret14), ret14).To;
    }

    for (int32_t i1 = 0; i1 < uPtr(_info)->Count(); ++i1)
    {
        LineSplitter__LSInfo lsi1 = (::g::Uno::Collections::List__get_Item_fn(uPtr(_info), uCRef<int32_t>(i1), &ret15), ret15);
        lsi1.StartT = (lsi1.StartT / (float)t);
        lsi1.EndT = (lsi1.EndT / (float)t);
        lsi1.StartDistance = (lsi1.StartDistance / distance);
        lsi1.EndDistance = (lsi1.EndDistance / distance);
        ::g::Uno::Collections::List__set_Item_fn(uPtr(_info), uCRef<int32_t>(i1), uCRef(lsi1));
    }
}

// public float2 DirectionAtTime(float time) [instance]
::g::Uno::Float2 LineSplitter::DirectionAtTime(float time)
{
    ::g::Fuse::Drawing::LineSegment ret16;
    LineSplitter__SegmentAt sa = GetSegmentAtTime(time);
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(sa.Index), &ret16), ret16).DirectionAtTime(sa.From, sa.Relative);
}

// public float DistanceToTime(float distance) [instance]
float LineSplitter::DistanceToTime(float distance)
{
    LineSplitter__LSInfo ret17;
    float adjust = 0.0f;

    if ((distance < 0.0f) || (distance > 1.0f))
    {
        adjust = ::g::Uno::Math::Floor1(distance);
        distance = distance - adjust;
    }

    float accumZero = 0.0f;
    float found = 0.0f;

    for (int32_t i = 0; i < uPtr(_segments)->Count(); ++i)
    {
        LineSplitter__LSInfo lsi = (::g::Uno::Collections::List__get_Item_fn(uPtr(_info), uCRef<int32_t>(i), &ret17), ret17);

        if (lsi.EndDistance < distance)
            continue;

        float length = (lsi.EndDistance - lsi.StartDistance) + accumZero;

        if ((double)length < 1e-05)
        {
            accumZero = accumZero + length;
            continue;
        }

        float off = (distance - lsi.StartDistance) / length;
        found = (off * (lsi.EndT - lsi.StartT)) + lsi.StartT;
        break;
    }

    return found + adjust;
}

// private Fuse.Drawing.LineSplitter.SegmentAt GetSegmentAtTime(float time) [instance]
LineSplitter__SegmentAt LineSplitter::GetSegmentAtTime(float time)
{
    LineSplitter__SegmentAt collection4;
    LineSplitter__SegmentAt collection5;
    ::g::Fuse::Drawing::LineSegment ret18;
    LineSplitter__LSInfo ret19;
    time = time - ::g::Uno::Math::Floor1(time);
    ::g::Uno::Float2 from = ::g::Uno::Float2__New1(0.0f);

    for (int32_t i = 0; i < uPtr(_segments)->Count(); ++i)
    {
        ::g::Fuse::Drawing::LineSegment seg = (::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(i), &ret18), ret18);
        LineSplitter__LSInfo lsi = (::g::Uno::Collections::List__get_Item_fn(uPtr(_info), uCRef<int32_t>(i), &ret19), ret19);
        float length = lsi.EndT - lsi.StartT;

        if ((lsi.EndT >= time) && ((double)length > 1e-05))
        {
            float relT = (time - lsi.StartT) / length;
            collection4 = uDefault<LineSplitter__SegmentAt>();
            collection4.Index = i;
            collection4.Relative = relT;
            collection4.From = from;
            return collection4;
        }

        from = seg.To;
    }

    collection5 = uDefault<LineSplitter__SegmentAt>();
    collection5.Index = 0;
    collection5.Relative = 0.0f;
    collection5.From = from;
    return collection5;
}

// public float2 PointAtTime(float time) [instance]
::g::Uno::Float2 LineSplitter::PointAtTime(float time)
{
    ::g::Fuse::Drawing::LineSegment ret20;
    LineSplitter__SegmentAt sa = GetSegmentAtTime(time);
    return (::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(sa.Index), &ret20), ret20).PointAtTime(sa.From, sa.Relative);
}

// public void SplitTime(float start, float end, Uno.Collections.IList<Fuse.Drawing.LineSegment> to) [instance]
void LineSplitter::SplitTime(float start, float end, uObject* to)
{
    ::g::Fuse::Drawing::LineSegment collection2;
    ::g::Fuse::Drawing::LineSegment collection3;
    ::g::Fuse::Drawing::LineSegment ret21;
    LineSplitter__LSInfo ret22;
    ::g::Fuse::Drawing::LineSegment ret23;

    if ((((start < 0.0f) || (start > 1.0f)) || (end < start)) || ((end - start) > 1.0f))
        U_THROW(::g::Uno::Exception::New2(uString::Const("Invalid SplitTime arguments")));

    bool hasLocation = false;

    while (end > 0.0f)
    {
        for (int32_t i = 0; i < uPtr(_segments)->Count(); ++i)
        {
            ::g::Fuse::Drawing::LineSegment seg = (::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(i), &ret21), ret21);
            LineSplitter__LSInfo lsi = (::g::Uno::Collections::List__get_Item_fn(uPtr(_info), uCRef<int32_t>(i), &ret22), ret22);

            if (lsi.StartT > end)
                break;

            if (lsi.EndT < start)
                continue;

            if (seg.Type == 0)
                hasLocation = true;
            else if (seg.Type == 4)
                hasLocation = false;

            ::g::Uno::Float2 lastPos = (i > 0) ? (::g::Uno::Collections::List__get_Item_fn(uPtr(_segments), uCRef<int32_t>(i - 1), &ret23), ret23).To : ::g::Uno::Float2__New1(0.0f);
            bool fullStart = start <= lsi.StartT;
            bool fullEnd = end >= lsi.EndT;

            if (!seg.IsDrawing())
                ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(to), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef(seg));
            else if (fullStart && fullEnd)
            {
                if (!hasLocation)
                {
                    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(to), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection2 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection2.To = lastPos, collection2.Type = 0, collection2)));
                    hasLocation = true;
                }

                ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(to), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef(seg));
            }
            else
            {
                ::g::Fuse::Drawing::LineSegment left, right;
                float t = ((fullStart ? end : start) - lsi.StartT) / (lsi.EndT - lsi.StartT);
                seg.SplitAtTime(lastPos, t, &left, &right);

                if (fullStart)
                    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(to), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef(left));
                else
                {
                    ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(to), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection3 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection3.To = left.To, collection3.Type = 0, collection3)));
                    hasLocation = true;

                    if (fullEnd)
                        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(to), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef(right));
                    else
                    {
                        float nt = (end - start) / (lsi.EndT - start);
                        ::g::Fuse::Drawing::LineSegment nleft, nright;
                        right.SplitAtTime(left.To, nt, &nleft, &nright);
                        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(to), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef(nleft));
                    }
                }
            }
        }

        end = end - 1.0f;
        start = start - 1.0f;
    }
}

// public LineSplitter New(Uno.Collections.IList<Fuse.Drawing.LineSegment> segments) [static]
LineSplitter* LineSplitter::New1(uObject* segments)
{
    LineSplitter* obj6 = (LineSplitter*)uNew(LineSplitter_typeof());
    obj6->ctor_(segments);
    return obj6;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineSplitter.uno
// -----------------------------------------------------------------------------

// private struct LineSplitter.LSInfo
// {
static void LineSplitter__LSInfo_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Float_typeof(), offsetof(LineSplitter__LSInfo, StartT), 0,
        ::g::Uno::Float_typeof(), offsetof(LineSplitter__LSInfo, EndT), 0,
        ::g::Uno::Float_typeof(), offsetof(LineSplitter__LSInfo, StartDistance), 0,
        ::g::Uno::Float_typeof(), offsetof(LineSplitter__LSInfo, EndDistance), 0);
}

uStructType* LineSplitter__LSInfo_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 4;
    options.Alignment = alignof(LineSplitter__LSInfo);
    options.ValueSize = sizeof(LineSplitter__LSInfo);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.LineSplitter.LSInfo", options);
    type->fp_build_ = LineSplitter__LSInfo_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Android/NativeSurface.uno
// --------------------------------------------------------------------------------------

// internal sealed extern class NativeSurface
// {
static void NativeSurface_build(uType* type)
{
    ::STRINGS[17] = uString::Const("Canvas.Begin was not called");
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(::g::Fuse::Drawing::AndroidSurface_type, interface0));
    type->SetFields(7,
        ::g::Java::Object_typeof(), offsetof(NativeSurface, _canvas), 0);
}

::g::Fuse::Drawing::AndroidSurface_type* NativeSurface_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::AndroidSurface_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::AndroidSurface_typeof();
    options.FieldCount = 8;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(NativeSurface);
    options.TypeSize = sizeof(::g::Fuse::Drawing::AndroidSurface_type);
    type = (::g::Fuse::Drawing::AndroidSurface_type*)uClassType::New("Fuse.Drawing.NativeSurface", options);
    type->fp_build_ = NativeSurface_build;
    type->fp_ctor_ = (void*)NativeSurface__New1_fn;
    type->fp_Begin = (void(*)(::g::Fuse::Drawing::Surface*, ::g::Fuse::DrawContext*, ::g::Uno::Graphics::Framebuffer*, float*))NativeSurface__Begin_fn;
    type->fp_End = (void(*)(::g::Fuse::Drawing::Surface*))NativeSurface__End_fn;
    type->fp_VerifyBegun = (void(*)(::g::Fuse::Drawing::AndroidSurface*))NativeSurface__VerifyBegun_fn;
    type->interface0.fp_Dispose = (void(*)(uObject*))::g::Fuse::Drawing::AndroidSurface__Dispose_fn;
    return type;
}

// public generated NativeSurface()
void NativeSurface__ctor_2_fn(NativeSurface* __this)
{
    __this->ctor_2();
}

// public override sealed void Begin(Fuse.DrawContext dc, framebuffer fb, float pixelsPerPoint)
void NativeSurface__Begin_fn(NativeSurface* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Framebuffer* fb, float* pixelsPerPoint)
{
    U_THROW(::g::Uno::NotSupportedException::New4());
}

// public void Begin(Java.Object canvas, float pixelsPerPoint)
void NativeSurface__Begin1_fn(NativeSurface* __this, ::g::Java::Object* canvas, float* pixelsPerPoint)
{
    __this->Begin1(canvas, *pixelsPerPoint);
}

// public override sealed void End()
void NativeSurface__End_fn(NativeSurface* __this)
{
    NativeSurface::SetCanvas(__this->SurfaceContext, nullptr);
    __this->_canvas = nullptr;
}

// public generated NativeSurface New()
void NativeSurface__New1_fn(NativeSurface** __retval)
{
    *__retval = NativeSurface::New1();
}

// private static void SetCanvas(Java.Object context, Java.Object canvas)
void NativeSurface__SetCanvas_fn(::g::Java::Object* context, ::g::Java::Object* canvas)
{
    NativeSurface::SetCanvas(context, canvas);
}

// protected override sealed void VerifyBegun()
void NativeSurface__VerifyBegun_fn(NativeSurface* __this)
{
    if (__this->_canvas == nullptr)
        U_THROW(::g::Uno::Exception::New2(::STRINGS[17/*"Canvas.Begi...*/]));
}

// public generated NativeSurface() [instance]
void NativeSurface::ctor_2()
{
    ctor_1();
}

// public void Begin(Java.Object canvas, float pixelsPerPoint) [instance]
void NativeSurface::Begin1(::g::Java::Object* canvas, float pixelsPerPoint)
{
    NativeSurface::SetCanvas(SurfaceContext, canvas);
    _pixelsPerPoint = pixelsPerPoint;
    _canvas = canvas;
}

// public generated NativeSurface New() [static]
NativeSurface* NativeSurface::New1()
{
    NativeSurface* obj1 = (NativeSurface*)uNew(NativeSurface_typeof());
    obj1->ctor_2();
    return obj1;
}

// private static void SetCanvas(Java.Object context, Java.Object canvas) [static]
void NativeSurface::SetCanvas(::g::Java::Object* context, ::g::Java::Object* canvas)
{
    {
        INIT_JNI;
        jclass __cls = JniHelper::GetNativeExternClass();
        WITH_STATIC_JAVA_METHOD(__mtd, __cls, "SetCanvas328", "(Ljava/lang/Object;Ljava/lang/Object;)V");
        ::g::Java::Object* _ucontext=context;
        jobject _context = (_ucontext==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucontext, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        ::g::Java::Object* _ucanvas=canvas;
        jobject _canvas = (_ucanvas==nullptr ? nullptr : U_JNIVAR->NewLocalRef(::g::Android::Base::Wrappers::IJWrapper::_GetJavaObject(uInterface((uObject*)_ucanvas, ::g::Android::Base::Wrappers::IJWrapper_typeof()))));
        U_JNIVAR->CallStaticVoidMethod(__cls,__mtd,_context,_canvas);
        
        if (_context!=nullptr) { U_JNIVAR->DeleteLocalRef(_context); }
        if (_canvas!=nullptr) { U_JNIVAR->DeleteLocalRef(_canvas); }
        ::g::Android::Base::JNI::CheckException();
        
    }
    
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Elements/Drawing/ImageFill.uno
// ---------------------------------------------------------------------------

// internal sealed class RepeatBaker
// {
// static generated RepeatBaker()
static void RepeatBaker__cctor__fn(uType* __type)
{
    RepeatBaker::Singleton_ = RepeatBaker::New1();
}

static void RepeatBaker_build(uType* type)
{
    ::TYPES[20] = ::g::Uno::Float2_typeof()->Array();
    type->SetDependencies(
        ::g::FuseElements_bundle_typeof());
    type->SetFields(0,
        ::g::Uno::Graphics::VertexBuffer_typeof(), offsetof(RepeatBaker, FillBuffer_VertexPosition_56d66b39_1_1_1), 0,
        ::TYPES[20/*float2[]*/], offsetof(RepeatBaker, FillBuffer_Vertices_56d66b39_1_0_6), 0,
        ::g::Uno::Graphics::OpenGL::GLDrawCall_typeof(), offsetof(RepeatBaker, _draw_56d66b39), 0,
        type, (uintptr_t)&RepeatBaker::Singleton_, uFieldFlagsStatic);
}

uType* RepeatBaker_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 4;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(RepeatBaker);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.RepeatBaker", options);
    type->fp_build_ = RepeatBaker_build;
    type->fp_ctor_ = (void*)RepeatBaker__New1_fn;
    type->fp_cctor_ = RepeatBaker__cctor__fn;
    return type;
}

// public generated RepeatBaker()
void RepeatBaker__ctor__fn(RepeatBaker* __this)
{
    __this->ctor_();
}

// public void FillBuffer(Fuse.DrawContext dc, texture2D tex, framebuffer fb)
void RepeatBaker__FillBuffer_fn(RepeatBaker* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb)
{
    __this->FillBuffer(dc, tex, fb);
}

// private generated void init_DrawCalls()
void RepeatBaker__init_DrawCalls_fn(RepeatBaker* __this)
{
    __this->init_DrawCalls();
}

// public generated RepeatBaker New()
void RepeatBaker__New1_fn(RepeatBaker** __retval)
{
    *__retval = RepeatBaker::New1();
}

uSStrong<RepeatBaker*> RepeatBaker::Singleton_;

// public generated RepeatBaker() [instance]
void RepeatBaker::ctor_()
{
    init_DrawCalls();
}

// public void FillBuffer(Fuse.DrawContext dc, texture2D tex, framebuffer fb) [instance]
void RepeatBaker::FillBuffer(::g::Fuse::DrawContext* dc, ::g::Uno::Graphics::Texture2D* tex, ::g::Uno::Graphics::Framebuffer* fb)
{
    uPtr(dc)->PushRenderTarget(fb);
    _draw_56d66b39.DepthTestEnabled(false);
    _draw_56d66b39.CullFace(0);
    _draw_56d66b39.Use();
    _draw_56d66b39.Attrib1(0, 2, FillBuffer_VertexPosition_56d66b39_1_1_1, 8, 0);
    _draw_56d66b39.Uniform2(1, ::g::Uno::Float2__op_Implicit1(uPtr(fb)->Size()));
    _draw_56d66b39.Uniform2(2, ::g::Uno::Float2__op_Implicit1(uPtr(tex)->Size()));
    _draw_56d66b39.Sampler3(3, tex, ::g::Uno::Graphics::SamplerState__NearestClamp());
    _draw_56d66b39.DrawArrays(uPtr(FillBuffer_Vertices_56d66b39_1_0_6)->Length());
    dc->PopRenderTarget();
}

// private generated void init_DrawCalls() [instance]
void RepeatBaker::init_DrawCalls()
{
    uArray* Vertices_56d66b39_1_0_0 = uArray::Init< ::g::Uno::Float2>(::TYPES[20/*float2[]*/], 6, ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(0.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(0.0f, 0.0f), ::g::Uno::Float2__New2(1.0f, 1.0f), ::g::Uno::Float2__New2(1.0f, 0.0f));
    FillBuffer_VertexPosition_56d66b39_1_1_1 = ::g::Uno::Graphics::VertexBuffer::New3(Vertices_56d66b39_1_0_0, 0);
    FillBuffer_Vertices_56d66b39_1_0_6 = Vertices_56d66b39_1_0_0;
    _draw_56d66b39 = ::g::Uno::Graphics::OpenGL::GLDrawCall__New1(::g::FuseElements_bundle::RepeatBaker794c9b5a());
}

// public generated RepeatBaker New() [static]
RepeatBaker* RepeatBaker::New1()
{
    RepeatBaker* obj1 = (RepeatBaker*)uNew(RepeatBaker_typeof());
    obj1->ctor_();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Enums.uno
// --------------------------------------------------------------

// public enum ResampleMode
uEnumType* ResampleMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.ResampleMode", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Nearest", 0LL,
        "Linear", 1LL,
        "Mipmap", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/LineSplitter.uno
// -----------------------------------------------------------------------------

// private struct LineSplitter.SegmentAt
// {
static void LineSplitter__SegmentAt_build(uType* type)
{
    type->SetFields(0,
        ::g::Uno::Int_typeof(), offsetof(LineSplitter__SegmentAt, Index), 0,
        ::g::Uno::Float_typeof(), offsetof(LineSplitter__SegmentAt, Relative), 0,
        ::g::Uno::Float2_typeof(), offsetof(LineSplitter__SegmentAt, From), 0);
}

uStructType* LineSplitter__SegmentAt_typeof()
{
    static uSStrong<uStructType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::ValueType_typeof();
    options.FieldCount = 3;
    options.Alignment = alignof(LineSplitter__SegmentAt);
    options.ValueSize = sizeof(LineSplitter__SegmentAt);
    options.TypeSize = sizeof(uStructType);
    type = uStructType::New("Fuse.Drawing.LineSplitter.SegmentAt", options);
    type->fp_build_ = LineSplitter__SegmentAt_build;
    return type;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/SolidColor.uno
// ---------------------------------------------------------------------------

// public sealed class SolidColor
// {
// static generated SolidColor()
static void SolidColor__cctor_1_fn(uType* __type)
{
    SolidColor::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Color"*/]);
}

static void SolidColor_build(uType* type)
{
    ::STRINGS[13] = uString::Const("Color");
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(SolidColor_type, interface0));
    type->SetFields(3,
        ::g::Uno::Float4_typeof(), offsetof(SolidColor, _color), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&SolidColor::_colorName_, uFieldFlagsStatic);
}

SolidColor_type* SolidColor_typeof()
{
    static uSStrong<SolidColor_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::DynamicBrush_typeof();
    options.FieldCount = 5;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(SolidColor);
    options.TypeSize = sizeof(SolidColor_type);
    type = (SolidColor_type*)uClassType::New("Fuse.Drawing.SolidColor", options);
    type->fp_build_ = SolidColor_build;
    type->fp_ctor_ = (void*)SolidColor__New2_fn;
    type->fp_cctor_ = SolidColor__cctor_1_fn;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))SolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))SolidColor__get_Color_fn;
    return type;
}

// public SolidColor()
void SolidColor__ctor_3_fn(SolidColor* __this)
{
    __this->ctor_3();
}

// public SolidColor(float4 color)
void SolidColor__ctor_4_fn(SolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_4(*color);
}

// public float4 get_Color()
void SolidColor__get_Color_fn(SolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void SolidColor__set_Color_fn(SolidColor* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public override sealed bool get_IsCompletelyTransparent()
void SolidColor__get_IsCompletelyTransparent_fn(SolidColor* __this, bool* __retval)
{
    bool ret3;
    return *__retval = (::g::Fuse::Drawing::DynamicBrush__get_IsCompletelyTransparent_fn(__this, &ret3), ret3) || (__this->Color().W == 0.0f), void();
}

// public SolidColor New()
void SolidColor__New2_fn(SolidColor** __retval)
{
    *__retval = SolidColor::New2();
}

// public SolidColor New(float4 color)
void SolidColor__New3_fn(::g::Uno::Float4* color, SolidColor** __retval)
{
    *__retval = SolidColor::New3(*color);
}

// internal void SetColor(float4 c)
void SolidColor__SetColor_fn(SolidColor* __this, ::g::Uno::Float4* c)
{
    __this->SetColor(*c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin)
void SolidColor__SetColor1_fn(SolidColor* __this, ::g::Uno::Float4* c, uObject* origin)
{
    __this->SetColor1(*c, origin);
}

::g::Uno::UX::Selector SolidColor::_colorName_;

// public SolidColor() [instance]
void SolidColor::ctor_3()
{
    ctor_2();
    _color = ::g::Uno::Float4__New1(1.0f);
}

// public SolidColor(float4 color) [instance]
void SolidColor::ctor_4(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance]
::g::Uno::Float4 SolidColor::Color()
{
    return _color;
}

// public void set_Color(float4 value) [instance]
void SolidColor::Color(::g::Uno::Float4 value)
{
    if (::g::Uno::Float4__op_Inequality(_color, value))
    {
        _color = value;
        OnPropertyChanged(SolidColor::_colorName_);
    }
}

// internal void SetColor(float4 c) [instance]
void SolidColor::SetColor(::g::Uno::Float4 c)
{
    Color(c);
}

// public void SetColor(float4 c, Uno.UX.IPropertyListener origin) [instance]
void SolidColor::SetColor1(::g::Uno::Float4 c, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(_color, c))
    {
        _color = c;
        OnPropertyChanged1(SolidColor::_colorName_, origin);
    }
}

// public SolidColor New() [static]
SolidColor* SolidColor::New2()
{
    SolidColor* obj1 = (SolidColor*)uNew(SolidColor_typeof());
    obj1->ctor_3();
    return obj1;
}

// public SolidColor New(float4 color) [static]
SolidColor* SolidColor::New3(::g::Uno::Float4 color)
{
    SolidColor* obj2 = (SolidColor*)uNew(SolidColor_typeof());
    obj2->ctor_4(color);
    return obj2;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brush.uno
// --------------------------------------------------------------

// public abstract class StaticBrush
// {
static void StaticBrush_build(uType* type)
{
    type->SetFields(2);
}

::g::Fuse::Drawing::Brush_type* StaticBrush_typeof()
{
    static uSStrong< ::g::Fuse::Drawing::Brush_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::Brush_typeof();
    options.FieldCount = 2;
    options.ObjectSize = sizeof(StaticBrush);
    options.TypeSize = sizeof(::g::Fuse::Drawing::Brush_type);
    type = (::g::Fuse::Drawing::Brush_type*)uClassType::New("Fuse.Drawing.StaticBrush", options);
    type->fp_build_ = StaticBrush_build;
    return type;
}

// protected generated StaticBrush()
void StaticBrush__ctor_2_fn(StaticBrush* __this)
{
    __this->ctor_2();
}

// protected generated StaticBrush() [instance]
void StaticBrush::ctor_2()
{
    ctor_1();
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Brushes/SolidColor.uno
// ---------------------------------------------------------------------------

// public sealed class StaticSolidColor
// {
static void StaticSolidColor_build(uType* type)
{
    type->SetInterfaces(
        ::g::Fuse::Drawing::ISolidColor_typeof(), offsetof(StaticSolidColor_type, interface0));
    type->SetFields(2,
        ::g::Uno::Float4_typeof(), offsetof(StaticSolidColor, _color), 0);
}

StaticSolidColor_type* StaticSolidColor_typeof()
{
    static uSStrong<StaticSolidColor_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Fuse::Drawing::StaticBrush_typeof();
    options.FieldCount = 3;
    options.InterfaceCount = 1;
    options.ObjectSize = sizeof(StaticSolidColor);
    options.TypeSize = sizeof(StaticSolidColor_type);
    type = (StaticSolidColor_type*)uClassType::New("Fuse.Drawing.StaticSolidColor", options);
    type->fp_build_ = StaticSolidColor_build;
    type->fp_get_IsCompletelyTransparent = (void(*)(::g::Fuse::Drawing::Brush*, bool*))StaticSolidColor__get_IsCompletelyTransparent_fn;
    type->interface0.fp_get_Color = (void(*)(uObject*, ::g::Uno::Float4*))StaticSolidColor__get_Color_fn;
    return type;
}

// public StaticSolidColor(float4 color)
void StaticSolidColor__ctor_3_fn(StaticSolidColor* __this, ::g::Uno::Float4* color)
{
    __this->ctor_3(*color);
}

// public float4 get_Color()
void StaticSolidColor__get_Color_fn(StaticSolidColor* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public override sealed bool get_IsCompletelyTransparent()
void StaticSolidColor__get_IsCompletelyTransparent_fn(StaticSolidColor* __this, bool* __retval)
{
    bool ret2;
    return *__retval = (::g::Fuse::Drawing::Brush__get_IsCompletelyTransparent_fn(__this, &ret2), ret2) || (__this->Color().W == 0.0f), void();
}

// public StaticSolidColor New(float4 color)
void StaticSolidColor__New2_fn(::g::Uno::Float4* color, StaticSolidColor** __retval)
{
    *__retval = StaticSolidColor::New2(*color);
}

// public StaticSolidColor(float4 color) [instance]
void StaticSolidColor::ctor_3(::g::Uno::Float4 color)
{
    ctor_2();
    _color = color;
}

// public float4 get_Color() [instance]
::g::Uno::Float4 StaticSolidColor::Color()
{
    return _color;
}

// public StaticSolidColor New(float4 color) [static]
StaticSolidColor* StaticSolidColor::New2(::g::Uno::Float4 color)
{
    StaticSolidColor* obj1 = (StaticSolidColor*)uNew(StaticSolidColor_typeof());
    obj1->ctor_3(color);
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Stroke.uno
// ---------------------------------------------------------------

// public sealed class Stroke
// {
// static generated Stroke()
static void Stroke__cctor__fn(uType* __type)
{
    Stroke::_shadingName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[26/*"Shading"*/]);
    Stroke::_dashedSizeName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[14/*"DashedSize"*/]);
    Stroke::_brushName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[27/*"Brush"*/]);
    Stroke::_colorName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[13/*"Color"*/]);
    Stroke::_widthName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[28/*"Width"*/]);
    Stroke::_offsetName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[16/*"Offset"*/]);
    Stroke::_adjustmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[29/*"Adjustment"*/]);
    Stroke::_alignmentName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[30/*"Alignment"*/]);
    Stroke::_lineCapName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[31/*"LineCap"*/]);
    Stroke::_lineJoinName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[32/*"LineJoin"*/]);
    Stroke::_lineJoinMiterLimitName_ = ::g::Uno::UX::Selector__op_Implicit(::STRINGS[33/*"LineJoinMit...*/]);
}

static void Stroke_build(uType* type)
{
    ::STRINGS[26] = uString::Const("Shading");
    ::STRINGS[14] = uString::Const("DashedSize");
    ::STRINGS[27] = uString::Const("Brush");
    ::STRINGS[13] = uString::Const("Color");
    ::STRINGS[28] = uString::Const("Width");
    ::STRINGS[16] = uString::Const("Offset");
    ::STRINGS[29] = uString::Const("Adjustment");
    ::STRINGS[30] = uString::Const("Alignment");
    ::STRINGS[31] = uString::Const("LineCap");
    ::STRINGS[32] = uString::Const("LineJoin");
    ::STRINGS[33] = uString::Const("LineJoinMiterLimit");
    ::TYPES[21] = ::g::Fuse::Drawing::DynamicBrush_typeof();
    ::TYPES[22] = ::g::Fuse::Drawing::DashedColor_typeof();
    ::TYPES[23] = ::g::Fuse::Drawing::SolidColor_typeof();
    ::TYPES[7] = ::g::Fuse::Drawing::ISolidColor_typeof();
    type->SetDependencies(
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::UX::IPropertyListener_typeof(), offsetof(Stroke_type, interface0));
    type->SetFields(1,
        ::g::Fuse::Drawing::Brush_typeof(), offsetof(Stroke, _brush), 0,
        ::g::Uno::Float_typeof(), offsetof(Stroke, _width), 0,
        ::g::Uno::Float_typeof(), offsetof(Stroke, _offset), 0,
        ::g::Fuse::Drawing::StrokeAdjustment_typeof(), offsetof(Stroke, _adjustment), 0,
        ::g::Fuse::Drawing::StrokeAlignment_typeof(), offsetof(Stroke, _alignment), 0,
        ::g::Fuse::Drawing::LineCap_typeof(), offsetof(Stroke, _lineCap), 0,
        ::g::Fuse::Drawing::LineJoin_typeof(), offsetof(Stroke, _lineJoin), 0,
        ::g::Uno::Float_typeof(), offsetof(Stroke, _lineJoinMiterLimit), 0,
        ::g::Uno::Int_typeof(), offsetof(Stroke, _pinCount), 0,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_shadingName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_dashedSizeName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_brushName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_colorName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_widthName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_offsetName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_adjustmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_alignmentName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_lineCapName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_lineJoinName_, uFieldFlagsStatic,
        ::g::Uno::UX::Selector_typeof(), (uintptr_t)&Stroke::_lineJoinMiterLimitName_, uFieldFlagsStatic);
}

Stroke_type* Stroke_typeof()
{
    static uSStrong<Stroke_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.BaseDefinition = ::g::Uno::UX::PropertyObject_typeof();
    options.FieldCount = 21;
    options.InterfaceCount = 1;
    options.DependencyCount = 1;
    options.ObjectSize = sizeof(Stroke);
    options.TypeSize = sizeof(Stroke_type);
    type = (Stroke_type*)uClassType::New("Fuse.Drawing.Stroke", options);
    type->fp_build_ = Stroke_build;
    type->fp_ctor_ = (void*)Stroke__New2_fn;
    type->fp_cctor_ = Stroke__cctor__fn;
    type->interface0.fp_OnPropertyChanged = (void(*)(uObject*, ::g::Uno::UX::PropertyObject*, ::g::Uno::UX::Selector*))Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn;
    return type;
}

// public Stroke()
void Stroke__ctor_1_fn(Stroke* __this)
{
    __this->ctor_1();
}

// private float Adjust(float w, float ppi)
void Stroke__Adjust_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->Adjust(*w, *ppi);
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment()
void Stroke__get_Adjustment_fn(Stroke* __this, int32_t* __retval)
{
    *__retval = __this->Adjustment();
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value)
void Stroke__set_Adjustment_fn(Stroke* __this, int32_t* value)
{
    __this->Adjustment(*value);
}

// private float AdjustPosition(float w, float ppi)
void Stroke__AdjustPosition_fn(Stroke* __this, float* w, float* ppi, float* __retval)
{
    *__retval = __this->AdjustPosition(*w, *ppi);
}

// public Fuse.Drawing.StrokeAlignment get_Alignment()
void Stroke__get_Alignment_fn(Stroke* __this, int32_t* __retval)
{
    *__retval = __this->Alignment();
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value)
void Stroke__set_Alignment_fn(Stroke* __this, int32_t* value)
{
    __this->Alignment(*value);
}

// public Fuse.Drawing.Brush get_Brush()
void Stroke__get_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    *__retval = __this->Brush();
}

// public void set_Brush(Fuse.Drawing.Brush value)
void Stroke__set_Brush_fn(Stroke* __this, ::g::Fuse::Drawing::Brush* value)
{
    __this->Brush(value);
}

// public float4 get_Color()
void Stroke__get_Color_fn(Stroke* __this, ::g::Uno::Float4* __retval)
{
    *__retval = __this->Color();
}

// public void set_Color(float4 value)
void Stroke__set_Color_fn(Stroke* __this, ::g::Uno::Float4* value)
{
    __this->Color(*value);
}

// public float get_DashedSize()
void Stroke__get_DashedSize_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->DashedSize();
}

// public void set_DashedSize(float value)
void Stroke__set_DashedSize_fn(Stroke* __this, float* value)
{
    __this->DashedSize(*value);
}

// public float2 GetDeviceAdjusted(float pixelsPerPoint)
void Stroke__GetDeviceAdjusted_fn(Stroke* __this, float* pixelsPerPoint, ::g::Uno::Float2* __retval)
{
    *__retval = __this->GetDeviceAdjusted(*pixelsPerPoint);
}

// public bool get_IsPinned()
void Stroke__get_IsPinned_fn(Stroke* __this, bool* __retval)
{
    *__retval = __this->IsPinned();
}

// public Fuse.Drawing.LineCap get_LineCap()
void Stroke__get_LineCap_fn(Stroke* __this, int32_t* __retval)
{
    *__retval = __this->LineCap();
}

// public void set_LineCap(Fuse.Drawing.LineCap value)
void Stroke__set_LineCap_fn(Stroke* __this, int32_t* value)
{
    __this->LineCap(*value);
}

// public Fuse.Drawing.LineJoin get_LineJoin()
void Stroke__get_LineJoin_fn(Stroke* __this, int32_t* __retval)
{
    *__retval = __this->LineJoin();
}

// public void set_LineJoin(Fuse.Drawing.LineJoin value)
void Stroke__set_LineJoin_fn(Stroke* __this, int32_t* value)
{
    __this->LineJoin(*value);
}

// public float get_LineJoinMiterLimit()
void Stroke__get_LineJoinMiterLimit_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->LineJoinMiterLimit();
}

// public void set_LineJoinMiterLimit(float value)
void Stroke__set_LineJoinMiterLimit_fn(Stroke* __this, float* value)
{
    __this->LineJoinMiterLimit(*value);
}

// public Stroke New()
void Stroke__New2_fn(Stroke** __retval)
{
    *__retval = Stroke::New2();
}

// protected void OnPinned()
void Stroke__OnPinned_fn(Stroke* __this)
{
    __this->OnPinned();
}

// protected void OnUnpinned()
void Stroke__OnUnpinned_fn(Stroke* __this)
{
    __this->OnUnpinned();
}

// public void Pin()
void Stroke__Pin_fn(Stroke* __this)
{
    __this->Pin();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize)
void Stroke__Prepare_fn(Stroke* __this, ::g::Fuse::DrawContext* dc, ::g::Uno::Float2* canvasSize)
{
    __this->Prepare(dc, *canvasSize);
}

// public void SetColor(float4 color, Uno.UX.IPropertyListener origin)
void Stroke__SetColor_fn(Stroke* __this, ::g::Uno::Float4* color, uObject* origin)
{
    __this->SetColor(*color, origin);
}

// public void SetDashedSize(float dashedSize, Uno.UX.IPropertyListener origin)
void Stroke__SetDashedSize_fn(Stroke* __this, float* dashedSize, uObject* origin)
{
    __this->SetDashedSize(*dashedSize, origin);
}

// private void Uno.UX.IPropertyListener.OnPropertyChanged(Uno.UX.PropertyObject obj, Uno.UX.Selector prop)
void Stroke__UnoUXIPropertyListenerOnPropertyChanged_fn(Stroke* __this, ::g::Uno::UX::PropertyObject* obj, ::g::Uno::UX::Selector* prop)
{
    if (obj == __this->Brush())
        __this->OnPropertyChanged(Stroke::_shadingName_);
}

// public void Unpin()
void Stroke__Unpin_fn(Stroke* __this)
{
    __this->Unpin();
}

// public float get_Width()
void Stroke__get_Width_fn(Stroke* __this, float* __retval)
{
    *__retval = __this->Width();
}

// public void set_Width(float value)
void Stroke__set_Width_fn(Stroke* __this, float* value)
{
    __this->Width(*value);
}

::g::Uno::UX::Selector Stroke::_shadingName_;
::g::Uno::UX::Selector Stroke::_dashedSizeName_;
::g::Uno::UX::Selector Stroke::_brushName_;
::g::Uno::UX::Selector Stroke::_colorName_;
::g::Uno::UX::Selector Stroke::_widthName_;
::g::Uno::UX::Selector Stroke::_offsetName_;
::g::Uno::UX::Selector Stroke::_adjustmentName_;
::g::Uno::UX::Selector Stroke::_alignmentName_;
::g::Uno::UX::Selector Stroke::_lineCapName_;
::g::Uno::UX::Selector Stroke::_lineJoinName_;
::g::Uno::UX::Selector Stroke::_lineJoinMiterLimitName_;

// public Stroke() [instance]
void Stroke::ctor_1()
{
    _width = 1.0f;
    _adjustment = 2;
    _alignment = 1;
    _lineJoinMiterLimit = 1.0f;
    ctor_();
}

// private float Adjust(float w, float ppi) [instance]
float Stroke::Adjust(float w, float ppi)
{
    w = AdjustPosition(w, ppi);
    w = ::g::Uno::Math::Max1(w, 1.0f / ppi);
    return w;
}

// public Fuse.Drawing.StrokeAdjustment get_Adjustment() [instance]
int32_t Stroke::Adjustment()
{
    return _adjustment;
}

// public void set_Adjustment(Fuse.Drawing.StrokeAdjustment value) [instance]
void Stroke::Adjustment(int32_t value)
{
    if (_adjustment != value)
    {
        _adjustment = value;
        OnPropertyChanged(Stroke::_adjustmentName_);
    }
}

// private float AdjustPosition(float w, float ppi) [instance]
float Stroke::AdjustPosition(float w, float ppi)
{
    switch (Adjustment())
    {
        case 0:
            return w;
        case 1:
        {
            w = ::g::Uno::Math::Ceil1(w * ppi) / ppi;
            break;
        }
        case 2:
        {
            w = ::g::Uno::Math::Floor1((w * ppi) + 0.5f) / ppi;
            break;
        }
        case 3:
        {
            w = ::g::Uno::Math::Floor1(w * ppi) / ppi;
            break;
        }
    }

    return w;
}

// public Fuse.Drawing.StrokeAlignment get_Alignment() [instance]
int32_t Stroke::Alignment()
{
    return _alignment;
}

// public void set_Alignment(Fuse.Drawing.StrokeAlignment value) [instance]
void Stroke::Alignment(int32_t value)
{
    if (_alignment != value)
    {
        _alignment = value;
        OnPropertyChanged(Stroke::_alignmentName_);
    }
}

// public Fuse.Drawing.Brush get_Brush() [instance]
::g::Fuse::Drawing::Brush* Stroke::Brush()
{
    return _brush;
}

// public void set_Brush(Fuse.Drawing.Brush value) [instance]
void Stroke::Brush(::g::Fuse::Drawing::Brush* value)
{
    if (value == _brush)
        return;

    if (IsPinned() && (_brush != nullptr))
        uPtr(_brush)->Unpin();

    if (IsPinned() && uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[21/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[21/*Fuse.Drawing.DynamicBrush*/]))->RemovePropertyListener((uObject*)this);

    _brush = value;

    if (IsPinned() && uIs((::g::Fuse::Drawing::Brush*)_brush, ::TYPES[21/*Fuse.Drawing.DynamicBrush*/]))
        uPtr(uCast< ::g::Fuse::Drawing::DynamicBrush*>(_brush, ::TYPES[21/*Fuse.Drawing.DynamicBrush*/]))->AddPropertyListener((uObject*)this);

    if (IsPinned() && (_brush != nullptr))
        uPtr(_brush)->Pin();

    OnPropertyChanged(Stroke::_brushName_);
}

// public float4 get_Color() [instance]
::g::Uno::Float4 Stroke::Color()
{
    if (uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[7/*Fuse.Drawing.ISolidColor*/]))
        return ::g::Fuse::Drawing::ISolidColor::Color(uInterface(uPtr((uObject*)Brush()), ::TYPES[7/*Fuse.Drawing.ISolidColor*/]));

    if (uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))
        return uPtr(uCast< ::g::Fuse::Drawing::DashedColor*>(Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))->Color();

    return ::g::Uno::Float4__New1(0.0f);
}

// public void set_Color(float4 value) [instance]
void Stroke::Color(::g::Uno::Float4 value)
{
    SetColor(value, (uObject*)this);
}

// public float get_DashedSize() [instance]
float Stroke::DashedSize()
{
    if (uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))
        return uPtr(uCast< ::g::Fuse::Drawing::DashedColor*>(Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))->DashedSize();

    return 0.0f;
}

// public void set_DashedSize(float value) [instance]
void Stroke::DashedSize(float value)
{
    SetDashedSize(value, (uObject*)this);
}

// public float2 GetDeviceAdjusted(float pixelsPerPoint) [instance]
::g::Uno::Float2 Stroke::GetDeviceAdjusted(float pixelsPerPoint)
{
    float ppi = pixelsPerPoint;
    float lo = 0.0f, hi = 0.0f;

    switch (Alignment())
    {
        case 2:
        {
            lo = ::g::Uno::Math::Ceil1((_offset - 0.5f) * ppi) / ppi;
            hi = lo + Adjust(_width, ppi);
            break;
        }
        case 1:
        {
            hi = ::g::Uno::Math::Floor1((_offset + 0.5f) * ppi) / ppi;
            lo = hi - Adjust(_width, ppi);
            break;
        }
        case 0:
        {
            lo = AdjustPosition(_offset - (_width / 2.0f), ppi);
            hi = lo + Adjust(_width, ppi);
            break;
        }
    }

    ::g::Uno::Float2 r = ::g::Uno::Float2__New2(hi - lo, (hi + lo) / 2.0f);
    return r;
}

// public bool get_IsPinned() [instance]
bool Stroke::IsPinned()
{
    return _pinCount > 0;
}

// public Fuse.Drawing.LineCap get_LineCap() [instance]
int32_t Stroke::LineCap()
{
    return _lineCap;
}

// public void set_LineCap(Fuse.Drawing.LineCap value) [instance]
void Stroke::LineCap(int32_t value)
{
    if (value == _lineCap)
        return;

    _lineCap = value;
    OnPropertyChanged(Stroke::_lineCapName_);
}

// public Fuse.Drawing.LineJoin get_LineJoin() [instance]
int32_t Stroke::LineJoin()
{
    return _lineJoin;
}

// public void set_LineJoin(Fuse.Drawing.LineJoin value) [instance]
void Stroke::LineJoin(int32_t value)
{
    if (value == _lineJoin)
        return;

    _lineJoin = value;
    OnPropertyChanged(Stroke::_lineJoinName_);
}

// public float get_LineJoinMiterLimit() [instance]
float Stroke::LineJoinMiterLimit()
{
    return _lineJoinMiterLimit;
}

// public void set_LineJoinMiterLimit(float value) [instance]
void Stroke::LineJoinMiterLimit(float value)
{
    if (value == _lineJoinMiterLimit)
        return;

    _lineJoinMiterLimit = value;
    OnPropertyChanged(Stroke::_lineJoinMiterLimitName_);
}

// protected void OnPinned() [instance]
void Stroke::OnPinned()
{
    if (Brush() != nullptr)
    {
        uPtr(Brush())->Pin();
        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(Brush(), ::TYPES[21/*Fuse.Drawing.DynamicBrush*/]);

        if (db != nullptr)
            uPtr(db)->AddPropertyListener((uObject*)this);
    }
}

// protected void OnUnpinned() [instance]
void Stroke::OnUnpinned()
{
    if (Brush() != nullptr)
    {
        uPtr(Brush())->Unpin();
        ::g::Fuse::Drawing::DynamicBrush* db = uAs< ::g::Fuse::Drawing::DynamicBrush*>(Brush(), ::TYPES[21/*Fuse.Drawing.DynamicBrush*/]);

        if (db != nullptr)
            uPtr(db)->RemovePropertyListener((uObject*)this);
    }
}

// public void Pin() [instance]
void Stroke::Pin()
{
    _pinCount++;

    if (_pinCount == 1)
        OnPinned();
}

// public void Prepare(Fuse.DrawContext dc, float2 canvasSize) [instance]
void Stroke::Prepare(::g::Fuse::DrawContext* dc, ::g::Uno::Float2 canvasSize)
{
    if (Brush() != nullptr)
        uPtr(Brush())->Prepare(dc, canvasSize);
}

// public void SetColor(float4 color, Uno.UX.IPropertyListener origin) [instance]
void Stroke::SetColor(::g::Uno::Float4 color, uObject* origin)
{
    if (::g::Uno::Float4__op_Inequality(color, Color()))
    {
        if (DashedSize() > 0.0f)
        {
            if (!uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))
                Brush(::g::Fuse::Drawing::DashedColor::New3(Color(), DashedSize()));
            else
                uPtr(uCast< ::g::Fuse::Drawing::DashedColor*>(Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))->Color(color);
        }
        else
        {
            if (!uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[23/*Fuse.Drawing.SolidColor*/]))
                Brush(::g::Fuse::Drawing::SolidColor::New3(color));
            else
                uPtr(uCast< ::g::Fuse::Drawing::SolidColor*>(Brush(), ::TYPES[23/*Fuse.Drawing.SolidColor*/]))->Color(color);
        }

        OnPropertyChanged1(Stroke::_colorName_, origin);
    }
}

// public void SetDashedSize(float dashedSize, Uno.UX.IPropertyListener origin) [instance]
void Stroke::SetDashedSize(float dashedSize, uObject* origin)
{
    if ((dashedSize != DashedSize()) && (dashedSize > 0.0f))
    {
        if (!uIs((::g::Fuse::Drawing::Brush*)Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))
            Brush(::g::Fuse::Drawing::DashedColor::New3(Color(), dashedSize));
        else
            uPtr(uCast< ::g::Fuse::Drawing::DashedColor*>(Brush(), ::TYPES[22/*Fuse.Drawing.DashedColor*/]))->DashedSize(dashedSize);
    }
    else
        Brush(::g::Fuse::Drawing::SolidColor::New3(Color()));

    OnPropertyChanged1(Stroke::_dashedSizeName_, origin);
}

// public void Unpin() [instance]
void Stroke::Unpin()
{
    _pinCount--;

    if (_pinCount == 0)
        OnUnpinned();
}

// public float get_Width() [instance]
float Stroke::Width()
{
    return _width;
}

// public void set_Width(float value) [instance]
void Stroke::Width(float value)
{
    _width = value;
    OnPropertyChanged(Stroke::_widthName_);
}

// public Stroke New() [static]
Stroke* Stroke::New2()
{
    Stroke* obj1 = (Stroke*)uNew(Stroke_typeof());
    obj1->ctor_1();
    return obj1;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Stroke.uno
// ---------------------------------------------------------------

// public enum StrokeAdjustment
uEnumType* StrokeAdjustment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAdjustment", ::g::Uno::Int_typeof(), 4);
    type->SetLiterals(
        "None", 0LL,
        "PixelCeil", 1LL,
        "PixelNear", 2LL,
        "PixelFloor", 3LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Stroke.uno
// ---------------------------------------------------------------

// public enum StrokeAlignment
uEnumType* StrokeAlignment_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.StrokeAlignment", ::g::Uno::Int_typeof(), 3);
    type->SetLiterals(
        "Center", 0LL,
        "Inside", 1LL,
        "Outside", 2LL);
    return type;
}

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Surface.uno
// ------------------------------------------------------------------------

// public abstract class Surface
// {
static void Surface_build(uType* type)
{
    ::STRINGS[34] = uString::Const("GLDraw called with mismatched elements");
    ::STRINGS[35] = uString::Const("/Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Surface.uno");
    ::STRINGS[36] = uString::Const("Draw");
    ::TYPES[24] = ::g::Fuse::ICommonViewport_typeof();
    ::TYPES[25] = ::g::Fuse::Drawing::ISurfaceDrawable_typeof();
    type->SetDependencies(
        ::g::Fuse::Common::Blitter_typeof(),
        ::g::Uno::Math_typeof());
    type->SetInterfaces(
        ::g::Uno::IDisposable_typeof(), offsetof(Surface_type, interface0));
    type->SetFields(0,
        uObject_typeof(), offsetof(Surface, Owner), 0,
        ::g::Uno::Float2_typeof(), offsetof(Surface, _ElementSize), 0);
}

Surface_type* Surface_typeof()
{
    static uSStrong<Surface_type*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 2;
    options.InterfaceCount = 1;
    options.DependencyCount = 2;
    options.ObjectSize = sizeof(Surface);
    options.TypeSize = sizeof(Surface_type);
    type = (Surface_type*)uClassType::New("Fuse.Drawing.Surface", options);
    type->fp_build_ = Surface_build;
    return type;
}

// internal Surface()
void Surface__ctor__fn(Surface* __this)
{
    __this->ctor_();
}

// public void Draw(Fuse.DrawContext dc, Fuse.Elements.Element elm, Fuse.Drawing.ISurfaceDrawable drawable)
void Surface__Draw_fn(Surface* __this, ::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* elm, uObject* drawable)
{
    __this->Draw(dc, elm, drawable);
}

// public void DrawLocal(Fuse.Drawing.ISurfaceDrawable drawable)
void Surface__DrawLocal_fn(Surface* __this, uObject* drawable)
{
    __this->DrawLocal(drawable);
}

// protected generated float2 get_ElementSize()
void Surface__get_ElementSize_fn(Surface* __this, ::g::Uno::Float2* __retval)
{
    *__retval = __this->ElementSize();
}

// private generated void set_ElementSize(float2 value)
void Surface__set_ElementSize_fn(Surface* __this, ::g::Uno::Float2* value)
{
    __this->ElementSize(*value);
}

// public void SetElementSize(float2 size)
void Surface__SetElementSize_fn(Surface* __this, ::g::Uno::Float2* size)
{
    __this->SetElementSize(*size);
}

// internal Surface() [instance]
void Surface::ctor_()
{
}

// public void Draw(Fuse.DrawContext dc, Fuse.Elements.Element elm, Fuse.Drawing.ISurfaceDrawable drawable) [instance]
void Surface::Draw(::g::Fuse::DrawContext* dc, ::g::Fuse::Elements::Element* elm, uObject* drawable)
{
    ::g::Uno::Float3 ind1;
    ::g::Uno::Float3 ind2;

    if (elm != drawable)
        ::g::Fuse::Diagnostics::InternalError(::STRINGS[34/*"GLDraw call...*/], this, ::STRINGS[35/*"/Users/mort...*/], 119, ::STRINGS[36/*"Draw"*/]);

    float pixelsPerPoint = ::g::Fuse::ICommonViewport::PixelsPerPoint(uInterface(uPtr(uPtr(elm)->Viewport()), ::TYPES[24/*Fuse.ICommonViewport*/]));
    ::g::Fuse::VisualBounds* bounds = elm->RenderBoundsWithoutEffects();
    float zeroTolerance = 1e-05f;
    ::g::Uno::Int2 pixelSize = ::g::Uno::Int2__op_Explicit1(::g::Uno::Math::Ceil2(::g::Uno::Float2__op_Subtraction1(::g::Uno::Float2__op_Multiply1((ind1 = uPtr(bounds)->Size(), ::g::Uno::Float2__New2(ind1.X, ind1.Y)), pixelsPerPoint), 1e-05f)));
    ::g::Uno::Graphics::Framebuffer* fb = ::g::Fuse::FramebufferPool::Lock(pixelSize.X, pixelSize.Y, 3, true);
    Begin(dc, fb, pixelsPerPoint);
    ::g::Uno::Float4x4 m = ::g::Uno::Float4x4__Identity();
    m.M41 = -bounds->AxisMin().X;
    m.M42 = -bounds->AxisMin().Y;
    PushTransform(m);
    DrawLocal(drawable);
    End();
    uPtr(::g::Fuse::Common::Blitter::Singleton())->Blit1(uPtr(fb)->ColorBuffer(), ::g::Uno::Rect__New2((ind2 = bounds->AxisMin(), ::g::Uno::Float2__New2(ind2.X, ind2.Y)), ::g::Uno::Float2__op_Division1(::g::Uno::Float2__op_Implicit1(pixelSize), pixelsPerPoint)), uPtr(dc)->GetLocalToClipTransform(elm), 1.0f, true, 0);
    ::g::Fuse::FramebufferPool::Release(fb);
}

// public void DrawLocal(Fuse.Drawing.ISurfaceDrawable drawable) [instance]
void Surface::DrawLocal(uObject* drawable)
{
    SetElementSize(::g::Fuse::Drawing::ISurfaceDrawable::ElementSize(uInterface(uPtr(drawable), ::TYPES[25/*Fuse.Drawing.ISurfaceDrawable*/])));
    ::g::Fuse::Drawing::ISurfaceDrawable::Draw(uInterface(drawable, ::TYPES[25/*Fuse.Drawing.ISurfaceDrawable*/]), this);
}

// protected generated float2 get_ElementSize() [instance]
::g::Uno::Float2 Surface::ElementSize()
{
    return _ElementSize;
}

// private generated void set_ElementSize(float2 value) [instance]
void Surface::ElementSize(::g::Uno::Float2 value)
{
    _ElementSize = value;
}

// public void SetElementSize(float2 size) [instance]
void Surface::SetElementSize(::g::Uno::Float2 size)
{
    ElementSize(size);
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/SurfaceManager.uno
// -------------------------------------------------------------------------------

// public static class SurfaceManager
// {
// static generated SurfaceManager()
static void SurfaceManager__cctor__fn(uType* __type)
{
    SurfaceManager::_owners_ = ((::g::Uno::Collections::Dictionary*)::g::Uno::Collections::Dictionary::New1(::TYPES[26/*Uno.Collections.Dictionary<object, Fuse.Drawing.Surface>*/]));
}

static void SurfaceManager_build(uType* type)
{
    ::TYPES[26] = ::g::Uno::Collections::Dictionary_typeof()->MakeType(uObject_typeof(), ::g::Fuse::Drawing::Surface_typeof(), nullptr);
    ::TYPES[27] = ::g::Fuse::Visual_typeof();
    ::TYPES[28] = ::g::Fuse::Drawing::INativeSurfaceOwner_typeof();
    ::TYPES[29] = ::g::Fuse::Drawing::ISurfaceProvider_typeof();
    ::TYPES[25] = ::g::Fuse::Drawing::ISurfaceDrawable_typeof();
    type->SetFields(0,
        ::TYPES[26/*Uno.Collections.Dictionary<object, Fuse.Drawing.Surface>*/], (uintptr_t)&SurfaceManager::_owners_, uFieldFlagsStatic);
}

uClassType* SurfaceManager_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.FieldCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.SurfaceManager", options);
    type->fp_build_ = SurfaceManager_build;
    type->fp_cctor_ = SurfaceManager__cctor__fn;
    return type;
}

// public static Fuse.Drawing.Surface Create(object owner)
void SurfaceManager__Create_fn(uObject* owner, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::Create(owner);
}

// public static Fuse.Drawing.Surface Find(Fuse.Node source)
void SurfaceManager__Find_fn(::g::Fuse::Node* source, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::Find(source);
}

// private static Fuse.Drawing.Surface FindImpl(Fuse.Node source, bool create)
void SurfaceManager__FindImpl_fn(::g::Fuse::Node* source, bool* create, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::FindImpl(source, *create);
}

// public static Fuse.Drawing.Surface FindOrCreate(Fuse.Node source)
void SurfaceManager__FindOrCreate_fn(::g::Fuse::Node* source, ::g::Fuse::Drawing::Surface** __retval)
{
    *__retval = SurfaceManager::FindOrCreate(source);
}

// public static void Release(object owner, Fuse.Drawing.Surface c)
void SurfaceManager__Release_fn(uObject* owner, ::g::Fuse::Drawing::Surface* c)
{
    SurfaceManager::Release(owner, c);
}

uSStrong< ::g::Uno::Collections::Dictionary*> SurfaceManager::_owners_;

// public static Fuse.Drawing.Surface Create(object owner) [static]
::g::Fuse::Drawing::Surface* SurfaceManager::Create(uObject* owner)
{
    SurfaceManager_typeof()->Init();
    ::g::Fuse::Drawing::Surface* c = nullptr;
    ::g::Fuse::Visual* v = uAs< ::g::Fuse::Visual*>(owner, ::TYPES[27/*Fuse.Visual*/]);

    if ((v != nullptr) && (uPtr(v)->VisualContext() == 2))
    {
        uObject* nativeOwner = uAs<uObject*>(uPtr(v)->ViewHandle(), ::TYPES[28/*Fuse.Drawing.INativeSurfaceOwner*/]);

        if (nativeOwner != nullptr)
            c = ::g::Fuse::Drawing::INativeSurfaceOwner::GetSurface(uInterface(uPtr(nativeOwner), ::TYPES[28/*Fuse.Drawing.INativeSurfaceOwner*/]));
    }

    if (c == nullptr)
        c = ::g::Fuse::Drawing::GraphicsSurface::New1();

    uPtr(c)->Owner = owner;
    return c;
}

// public static Fuse.Drawing.Surface Find(Fuse.Node source) [static]
::g::Fuse::Drawing::Surface* SurfaceManager::Find(::g::Fuse::Node* source)
{
    SurfaceManager_typeof()->Init();
    return SurfaceManager::FindImpl(source, false);
}

// private static Fuse.Drawing.Surface FindImpl(Fuse.Node source, bool create) [static]
::g::Fuse::Drawing::Surface* SurfaceManager::FindImpl(::g::Fuse::Node* source, bool create)
{
    SurfaceManager_typeof()->Init();
    uObject* ind1;
    bool ret2;
    uObject* provider = nullptr;
    ::g::Fuse::Node* from = source;

    while (from != nullptr)
    {
        if (uIs(from, ::TYPES[29/*Fuse.Drawing.ISurfaceProvider*/]) && (from != source))
            provider = uAs<uObject*>(from, ::TYPES[29/*Fuse.Drawing.ISurfaceProvider*/]);

        if (uIs(from, ::TYPES[25/*Fuse.Drawing.ISurfaceDrawable*/]))
            from = uPtr(from)->Parent();
        else
            break;
    }

    ind1 = provider;
    uObject* owner = (ind1 != nullptr) ? ind1 : source;
    ::g::Fuse::Drawing::Surface* cur;

    if ((::g::Uno::Collections::Dictionary__TryGetValue_fn(uPtr(SurfaceManager::_owners_), owner, (void**)(&cur), &ret2), ret2))
        return cur;

    if (!create && (provider == nullptr))
        return nullptr;

    cur = SurfaceManager::Create(owner);
    ::g::Uno::Collections::Dictionary__set_Item_fn(uPtr(SurfaceManager::_owners_), owner, cur);
    return cur;
}

// public static Fuse.Drawing.Surface FindOrCreate(Fuse.Node source) [static]
::g::Fuse::Drawing::Surface* SurfaceManager::FindOrCreate(::g::Fuse::Node* source)
{
    SurfaceManager_typeof()->Init();
    return SurfaceManager::FindImpl(source, true);
}

// public static void Release(object owner, Fuse.Drawing.Surface c) [static]
void SurfaceManager::Release(uObject* owner, ::g::Fuse::Drawing::Surface* c)
{
    SurfaceManager_typeof()->Init();
    bool ret3;

    if (uPtr(c)->Owner == owner)
    {
        uPtr(c)->Dispose();
        ::g::Uno::Collections::Dictionary__Remove_fn(uPtr(SurfaceManager::_owners_), owner, &ret3);
    }
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/Surface.uno
// ------------------------------------------------------------------------

// public abstract class SurfacePath
// {
static void SurfacePath_build(uType* type)
{
}

uType* SurfacePath_typeof()
{
    static uSStrong<uType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.ObjectSize = sizeof(SurfacePath);
    options.TypeSize = sizeof(uType);
    type = uClassType::New("Fuse.Drawing.SurfacePath", options);
    type->fp_build_ = SurfacePath_build;
    return type;
}

// protected generated SurfacePath()
void SurfacePath__ctor__fn(SurfacePath* __this)
{
    __this->ctor_();
}

// protected generated SurfacePath() [instance]
void SurfacePath::ctor_()
{
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing.Surface/SurfaceUtil.uno
// ----------------------------------------------------------------------------

// public static class SurfaceUtil
// {
static void SurfaceUtil_build(uType* type)
{
    ::TYPES[2] = ::g::Uno::Collections::ICollection_typeof()->MakeType(::g::Fuse::Drawing::LineSegment_typeof(), nullptr);
    type->SetDependencies(
        ::g::Uno::Math_typeof());
}

uClassType* SurfaceUtil_typeof()
{
    static uSStrong<uClassType*> type;
    if (type != nullptr) return type;

    uTypeOptions options;
    options.DependencyCount = 1;
    options.TypeSize = sizeof(uClassType);
    type = uClassType::New("Fuse.Drawing.SurfaceUtil", options);
    type->fp_build_ = SurfaceUtil_build;
    return type;
}

// public static bool AngleInRange(float angle, float start, float end)
void SurfaceUtil__AngleInRange_fn(float* angle, float* start, float* end, bool* __retval)
{
    *__retval = SurfaceUtil::AngleInRange(*angle, *start, *end);
}

// public static float2 BezierCurveDerivative(float2 p0, float2 p1, float2 p2, float2 p3, float t)
void SurfaceUtil__BezierCurveDerivative_fn(::g::Uno::Float2* p0, ::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* p3, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = SurfaceUtil::BezierCurveDerivative(*p0, *p1, *p2, *p3, *t);
}

// public static float2 EllipticArcDerivative(float2 c, float2 r, float xAngle, float t)
void SurfaceUtil__EllipticArcDerivative_fn(::g::Uno::Float2* c, ::g::Uno::Float2* r, float* xAngle, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = SurfaceUtil::EllipticArcDerivative(*c, *r, *xAngle, *t);
}

// internal static bool EllipticArcOutOfRange(float2 from, Fuse.Drawing.LineSegment arc)
void SurfaceUtil__EllipticArcOutOfRange_fn(::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* arc, bool* __retval)
{
    *__retval = SurfaceUtil::EllipticArcOutOfRange(*from, *arc);
}

// public static float2 EllipticArcPoint(float2 c, float2 r, float xAngle, float t)
void SurfaceUtil__EllipticArcPoint_fn(::g::Uno::Float2* c, ::g::Uno::Float2* r, float* xAngle, float* t, ::g::Uno::Float2* __retval)
{
    *__retval = SurfaceUtil::EllipticArcPoint(*c, *r, *xAngle, *t);
}

// public static void EllipticArcToBezierCurve(float2 center, float2 radius, float xAngle, float startAngle, float deltaAngle, bool moveToStart, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves)
void SurfaceUtil__EllipticArcToBezierCurve_fn(::g::Uno::Float2* center, ::g::Uno::Float2* radius, float* xAngle, float* startAngle, float* deltaAngle, bool* moveToStart, uObject* curves)
{
    SurfaceUtil::EllipticArcToBezierCurve(*center, *radius, *xAngle, *startAngle, *deltaAngle, *moveToStart, curves);
}

// public static void EllipticArcToBezierCurve(float2 from, Fuse.Drawing.LineSegment arc, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves)
void SurfaceUtil__EllipticArcToBezierCurve1_fn(::g::Uno::Float2* from, ::g::Fuse::Drawing::LineSegment* arc, uObject* curves)
{
    SurfaceUtil::EllipticArcToBezierCurve1(*from, *arc, curves);
}

// internal static void EndpointToCenterArcParams(float2 p1, float2 p2, float2& r_, float xAngle, bool flagA, bool flagS, float2& c, float2& angles)
void SurfaceUtil__EndpointToCenterArcParams_fn(::g::Uno::Float2* p1, ::g::Uno::Float2* p2, ::g::Uno::Float2* r_, float* xAngle, bool* flagA, bool* flagS, ::g::Uno::Float2* c, ::g::Uno::Float2* angles)
{
    SurfaceUtil::EndpointToCenterArcParams(*p1, *p2, r_, *xAngle, *flagA, *flagS, c, angles);
}

// private static float svgAngle(double ux, double uy, double vx, double vy)
void SurfaceUtil__svgAngle_fn(double* ux, double* uy, double* vx, double* vy, float* __retval)
{
    *__retval = SurfaceUtil::svgAngle(*ux, *uy, *vx, *vy);
}

// public static bool AngleInRange(float angle, float start, float end) [static]
bool SurfaceUtil::AngleInRange(float angle, float start, float end)
{
    if (end < start)
    {
        float t = end;
        end = start;
        start = t;
    }

    float delta = end - start;

    if (delta >= 6.28318548f)
        return true;

    angle = ::g::Uno::Math::Mod1(angle, 6.28318548f);
    float pStartAngle = ::g::Uno::Math::Mod1(start, 6.28318548f);
    float pEndAngle = pStartAngle + delta;

    if ((angle >= pStartAngle) && (angle <= pEndAngle))
        return true;

    if (angle <= (pEndAngle - 6.28318548f))
        return true;

    return false;
}

// public static float2 BezierCurveDerivative(float2 p0, float2 p1, float2 p2, float2 p3, float t) [static]
::g::Uno::Float2 SurfaceUtil::BezierCurveDerivative(::g::Uno::Float2 p0, ::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2 p3, float t)
{
    float t2 = t * t;
    return ::g::Uno::Float2__op_Multiply(3.0f, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_UnaryNegation(::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(::g::Uno::Float2__op_Subtraction2(p0, ::g::Uno::Float2__op_Multiply(3.0f, p1)), p3), ::g::Uno::Float2__op_Multiply(3.0f, p2))), t2), ::g::Uno::Float2__op_Multiply1(::g::Uno::Float2__op_Multiply(2.0f, ::g::Uno::Float2__op_Addition2(::g::Uno::Float2__op_Subtraction2(p0, ::g::Uno::Float2__op_Multiply(2.0f, p1)), p2)), t)), p0), p1));
}

// public static float2 EllipticArcDerivative(float2 c, float2 r, float xAngle, float t) [static]
::g::Uno::Float2 SurfaceUtil::EllipticArcDerivative(::g::Uno::Float2 c, ::g::Uno::Float2 r, float xAngle, float t)
{
    return ::g::Uno::Float2__New2(((-r.X * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Sin1(t)) - ((r.Y * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Cos1(t)), ((-r.X * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Sin1(t)) + ((r.Y * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Cos1(t)));
}

// internal static bool EllipticArcOutOfRange(float2 from, Fuse.Drawing.LineSegment arc) [static]
bool SurfaceUtil::EllipticArcOutOfRange(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment arc)
{
    float len = ::g::Uno::Vector::Length(::g::Uno::Float2__op_Subtraction2(arc.To, from));

    if (len < 1e-05f)
        return true;

    ::g::Uno::Float2 radius = ::g::Uno::Math::Abs2(arc.A);

    if ((radius.X < 1e-05f) || (radius.Y < 1e-05f))
        return true;

    return false;
}

// public static float2 EllipticArcPoint(float2 c, float2 r, float xAngle, float t) [static]
::g::Uno::Float2 SurfaceUtil::EllipticArcPoint(::g::Uno::Float2 c, ::g::Uno::Float2 r, float xAngle, float t)
{
    return ::g::Uno::Float2__New2((c.X + ((r.X * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Cos1(t))) - ((r.Y * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Sin1(t)), (c.Y + ((r.X * ::g::Uno::Math::Sin1(xAngle)) * ::g::Uno::Math::Cos1(t))) + ((r.Y * ::g::Uno::Math::Cos1(xAngle)) * ::g::Uno::Math::Sin1(t)));
}

// public static void EllipticArcToBezierCurve(float2 center, float2 radius, float xAngle, float startAngle, float deltaAngle, bool moveToStart, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves) [static]
void SurfaceUtil::EllipticArcToBezierCurve(::g::Uno::Float2 center, ::g::Uno::Float2 radius, float xAngle, float startAngle, float deltaAngle, bool moveToStart, uObject* curves)
{
    ::g::Fuse::Drawing::LineSegment collection2;
    ::g::Fuse::Drawing::LineSegment collection3;
    float s = startAngle;
    float e = s + deltaAngle;
    bool neg = e < s;
    float sign = (float)(neg ? -1 : 1);
    float remain = ::g::Uno::Math::Abs1(e - s);
    ::g::Uno::Float2 prev = SurfaceUtil::EllipticArcPoint(center, radius, xAngle, s);

    if (moveToStart)
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(curves), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection2 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection2.Type = 0, collection2.To = prev, collection2)));

    while (remain > 1e-05f)
    {
        float step = ::g::Uno::Math::Min1(remain, 0.7853982f);
        float signStep = step * sign;
        ::g::Uno::Float2 p1 = prev;
        ::g::Uno::Float2 p2 = SurfaceUtil::EllipticArcPoint(center, radius, xAngle, s + signStep);
        float alphaT = ::g::Uno::Math::Tan1(signStep / 2.0f);
        float alpha = (::g::Uno::Math::Sin1(signStep) * (::g::Uno::Math::Sqrt1(4.0f + ((3.0f * alphaT) * alphaT)) - 1.0f)) / 3.0f;
        ::g::Uno::Float2 q1 = ::g::Uno::Float2__op_Addition2(p1, ::g::Uno::Float2__op_Multiply(alpha, SurfaceUtil::EllipticArcDerivative(center, radius, xAngle, s)));
        ::g::Uno::Float2 q2 = ::g::Uno::Float2__op_Subtraction2(p2, ::g::Uno::Float2__op_Multiply(alpha, SurfaceUtil::EllipticArcDerivative(center, radius, xAngle, s + signStep)));
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(curves), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection3 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection3.Type = 2, collection3.To = p2, collection3.A = q1, collection3.B = q2, collection3)));
        s = s + signStep;
        remain = remain - step;
        prev = p2;
    }
}

// public static void EllipticArcToBezierCurve(float2 from, Fuse.Drawing.LineSegment arc, Uno.Collections.IList<Fuse.Drawing.LineSegment> curves) [static]
void SurfaceUtil::EllipticArcToBezierCurve1(::g::Uno::Float2 from, ::g::Fuse::Drawing::LineSegment arc, uObject* curves)
{
    ::g::Fuse::Drawing::LineSegment collection1;

    if (SurfaceUtil::EllipticArcOutOfRange(from, arc))
    {
        ::g::Uno::Collections::ICollection::Add_ex(uInterface(uPtr(curves), ::TYPES[2/*Uno.Collections.ICollection<Fuse.Drawing.LineSegment>*/]), uCRef((collection1 = uDefault< ::g::Fuse::Drawing::LineSegment>(), collection1.Type = 1, collection1.To = arc.To, collection1)));
        return;
    }

    ::g::Uno::Float2 radius = ::g::Uno::Math::Abs2(arc.A);
    float xAngle = arc.B.X;
    ::g::Uno::Float2 center = ::g::Uno::Float2__New1(0.0f);
    ::g::Uno::Float2 angles = ::g::Uno::Float2__New1(0.0f);
    SurfaceUtil::EndpointToCenterArcParams(from, arc.To, &radius, xAngle, (arc.Flags & 1) == 1, (arc.Flags & 2) == 2, &center, &angles);
    SurfaceUtil::EllipticArcToBezierCurve(center, radius, xAngle, angles.Item(0), angles.Item(1), false, curves);
}

// internal static void EndpointToCenterArcParams(float2 p1, float2 p2, float2& r_, float xAngle, bool flagA, bool flagS, float2& c, float2& angles) [static]
void SurfaceUtil::EndpointToCenterArcParams(::g::Uno::Float2 p1, ::g::Uno::Float2 p2, ::g::Uno::Float2* r_, float xAngle, bool flagA, bool flagS, ::g::Uno::Float2* c, ::g::Uno::Float2* angles)
{
    double rX = (double)::g::Uno::Math::Abs1((*r_).X);
    double rY = (double)::g::Uno::Math::Abs1((*r_).Y);
    double dx2 = (double)(p1.X - p2.X) / 2.0;
    double dy2 = (double)(p1.Y - p2.Y) / 2.0;
    double x1p = ((double)::g::Uno::Math::Cos1(xAngle) * dx2) + ((double)::g::Uno::Math::Sin1(xAngle) * dy2);
    double y1p = ((double)-::g::Uno::Math::Sin1(xAngle) * dx2) + ((double)::g::Uno::Math::Cos1(xAngle) * dy2);
    double rxs = rX * rX;
    double rys = rY * rY;
    double x1ps = x1p * x1p;
    double y1ps = y1p * y1p;
    double cr = (x1ps / rxs) + (y1ps / rys);

    if (cr > 1.0)
    {
        double s = ::g::Uno::Math::Sqrt(cr);
        rX = s * rX;
        rY = s * rY;
        rxs = rX * rX;
        rys = rY * rY;
    }

    double dq = (rxs * y1ps) + (rys * x1ps);
    double pq = ((rxs * rys) - dq) / dq;
    double q = ::g::Uno::Math::Sqrt(::g::Uno::Math::Max(0.0, pq));

    if (flagA == flagS)
        q = -q;

    double cxp = ((q * rX) * y1p) / rY;
    double cyp = ((-q * rY) * x1p) / rX;
    double cx = (((double)::g::Uno::Math::Cos1(xAngle) * cxp) - ((double)::g::Uno::Math::Sin1(xAngle) * cyp)) + (double)((p1.X + p2.X) / 2.0f);
    double cy = (((double)::g::Uno::Math::Sin1(xAngle) * cxp) + ((double)::g::Uno::Math::Cos1(xAngle) * cyp)) + (double)((p1.Y + p2.Y) / 2.0f);
    double theta = (double)SurfaceUtil::svgAngle(1.0, 0.0, (x1p - cxp) / rX, (y1p - cyp) / rY);
    double delta = (double)SurfaceUtil::svgAngle((x1p - cxp) / rX, (y1p - cyp) / rY, (-x1p - cxp) / rX, (-y1p - cyp) / rY);
    delta = ::g::Uno::Math::Mod(delta, 6.2831854820251465);

    if (!flagS)
        delta = delta - 6.2831854820251465;

    *r_ = ::g::Uno::Float2__New2((float)rX, (float)rY);
    *c = ::g::Uno::Float2__New2((float)cx, (float)cy);
    *angles = ::g::Uno::Float2__New2((float)theta, (float)delta);
}

// private static float svgAngle(double ux, double uy, double vx, double vy) [static]
float SurfaceUtil::svgAngle(double ux, double uy, double vx, double vy)
{
    ::g::Uno::Float2 u = ::g::Uno::Float2__New2((float)ux, (float)uy);
    ::g::Uno::Float2 v = ::g::Uno::Float2__New2((float)vx, (float)vy);
    float dot = ::g::Uno::Vector::Dot(u, v);
    float len = ::g::Uno::Vector::Length(u) * ::g::Uno::Vector::Length(v);
    float ang = ::g::Uno::Math::Acos1(::g::Uno::Math::Clamp1(dot / len, -1.0f, 1.0f));

    if (((u.X * v.Y) - (u.Y * v.X)) < 0.0f)
        ang = -ang;

    return ang;
}
// }

// /Users/morten/fuse-open/fuselibs/Source/Fuse.Drawing/Enums.uno
// --------------------------------------------------------------

// public enum WrapMode
uEnumType* WrapMode_typeof()
{
    static uSStrong<uEnumType*> type;
    if (type != nullptr) return type;

    type = uEnumType::New("Fuse.Drawing.WrapMode", ::g::Uno::Int_typeof(), 2);
    type->SetLiterals(
        "Repeat", 0LL,
        "ClampToEdge", 1LL);
    return type;
}

}}} // ::g::Fuse::Drawing
