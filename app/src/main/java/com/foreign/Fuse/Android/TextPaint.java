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

public class TextPaint
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object Create382()
    {
        return new android.text.TextPaint();
    }
    
    public static void GetTextBounds383(final Object handle,final String text,final int start,final int end,final com.uno.IntArray r)
    {
        android.graphics.Rect rect = new android.graphics.Rect();
        ((android.text.TextPaint)handle).getTextBounds(text, start, end, rect);
        r.set(0, rect.left);
        r.set(1, rect.top);
        r.set(2, rect.right);
        r.set(3, rect.bottom);
    }
    
    public static void SetAntiAlias384(final Object handle,final boolean value)
    {
        ((android.text.TextPaint)handle).setAntiAlias(value);
    }
    
    public static void SetColor385(final Object handle,final int color)
    {
        ((android.text.TextPaint)handle).setColor(color);
    }
    
    public static void SetTextSize386(final Object handle,final float textSize)
    {
        ((android.text.TextPaint)handle).setTextSize(textSize);
    }
    
    public static void SetTypeface387(final Object paintHandle,final Object typefaceHandle)
    {
        ((android.text.TextPaint)paintHandle).setTypeface(((android.graphics.Typeface)typefaceHandle));
    }
    
}
