package com.foreign.Fuse.Controls.Native.Android;

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

public class TextEdit
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void MakeItPlain203(final Object handle)
    {
        android.widget.TextView t = (android.widget.TextView)handle;
        t.setIncludeFontPadding(false);
        t.setBackgroundResource(0);
        t.setPadding(0, 0, 0, 0);
        if (android.os.Build.VERSION.SDK_INT >= 17)
        	t.setPaddingRelative(0, 0, 0, 0);
    }
    
}
