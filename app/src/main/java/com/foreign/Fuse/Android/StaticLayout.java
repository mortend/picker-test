package com.foreign.Fuse.Android;

// fuse defined imports
import com.uno.UnoObject;
import com.uno.BoolArray;
import com.uno.ByteArray;
import com.uno.CharArray;
import com.uno.DoubleArray;
import com.uno.FloatArray;
import com.uno.IntArray;
import com.uno.LongArray;
import com.uno.ObjectArray;
import com.uno.ShortArray;
import com.uno.StringArray;
import com.foreign.UnoHelper;
import com.foreign.UnoWrapped;
import com.foreign.ExternedBlockHost;

public class StaticLayout
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object Create368(final String text,final int bufStart,final int bufEnd,final Object paintHandle,final int outerWidth,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int truncateAt,final int ellipsizedWith)
    {
        // Be careful, doing stupid enum conversion
        android.text.Layout.Alignment alignment = android.text.Layout.Alignment.ALIGN_CENTER;
        if (align == 1) alignment = android.text.Layout.Alignment.ALIGN_NORMAL;
        else if (align == 2) alignment = android.text.Layout.Alignment.ALIGN_OPPOSITE;
        
        // Be careful, doing stupid enum conversion
        android.text.TextUtils.TruncateAt truncate = android.text.TextUtils.TruncateAt.END;
        if (truncateAt == 1) truncate = android.text.TextUtils.TruncateAt.MARQUEE;
        else if (truncateAt == 2) truncate = android.text.TextUtils.TruncateAt.MIDDLE;
        else if (truncateAt == 3) truncate = android.text.TextUtils.TruncateAt.START;
        
        android.text.TextPaint paint = (android.text.TextPaint)paintHandle;
        
        return new android.text.StaticLayout(text, bufStart, bufEnd, paint, outerWidth, alignment, spacingMult, spacingAdd, includePad, truncate, ellipsizedWith);
    }
    
    public static Object Create1369(final String text,final Object paintHandle,final int width,final int align,final float spacingMult,final float spacingAdd,final boolean includePad,final int maxLines)
    {
        // Be careful, doing stupid enum conversion
        android.text.Layout.Alignment alignment = android.text.Layout.Alignment.ALIGN_CENTER;
        if (align == 1) alignment = android.text.Layout.Alignment.ALIGN_NORMAL;
        else if (align == 2) alignment = android.text.Layout.Alignment.ALIGN_OPPOSITE;
        
        android.text.TextPaint paint = (android.text.TextPaint)paintHandle;
        
        if (android.os.Build.VERSION.SDK_INT < 23)
        	return com.fuse.android.text.StaticLayoutBuilder.create(text, 0, text.length(), paint, width, alignment, spacingMult, spacingAdd, includePad, android.text.TextUtils.TruncateAt.END, width, maxLines == 0 ? Integer.MAX_VALUE : maxLines);
        
        android.text.StaticLayout.Builder builder = android.text.StaticLayout.Builder.obtain(text, 0, text.length(), paint, width);
        return builder.setMaxLines(maxLines == 0 ? Integer.MAX_VALUE : maxLines)
        	.setAlignment(alignment)
        	.setIncludePad(includePad)
        	.setLineSpacing(spacingAdd, spacingMult)
        	.setEllipsize(android.text.TextUtils.TruncateAt.END)
        	.build();
    }
    
    public static void Draw1370(final Object layoutHandle,final Object canvasHandle)
    {
        ((android.text.StaticLayout)layoutHandle).draw(((android.graphics.Canvas)canvasHandle));
    }
    
    public static float GetDesiredWidthImpl371(final String text,final Object paintHandle)
    {
        android.text.TextPaint paint = (android.text.TextPaint)paintHandle;
        return android.text.StaticLayout.getDesiredWidth(text, paint);
    }
    
    public static int GetEllipsizedWidth372(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getEllipsizedWidth();
    }
    
    public static int GetHeight373(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getHeight();
    }
    
    public static int GetLineBaseline1374(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineBaseline(line);
    }
    
    public static int GetLineCount375(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getLineCount();
    }
    
    public static int GetLineEnd1376(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineEnd(line);
    }
    
    public static float GetLineLeft1377(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineLeft(line);
    }
    
    public static int GetLineStart1378(final Object handle,final int line)
    {
        return ((android.text.StaticLayout)handle).getLineStart(line);
    }
    
    public static int GetWidth379(final Object handle)
    {
        return ((android.text.StaticLayout)handle).getWidth();
    }
    
}
