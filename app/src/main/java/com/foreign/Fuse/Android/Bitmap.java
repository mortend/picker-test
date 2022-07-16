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

public class Bitmap
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object CreateBitmapARGB8888Impl362(final int width,final int height)
    {
        return android.graphics.Bitmap.createBitmap(width, height, android.graphics.Bitmap.Config.ARGB_8888);
    }
    
    public static void EraseColor1363(final Object handle,final int color)
    {
        ((android.graphics.Bitmap)handle).eraseColor(color);
    }
    
    public static void Recycle1364(final Object handle)
    {
        ((android.graphics.Bitmap)handle).recycle();
    }
    
}
