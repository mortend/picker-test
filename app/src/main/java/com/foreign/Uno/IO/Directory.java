package com.foreign.Uno.IO;

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

public class Directory
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static String GetUserConfigDirectory53()
    {
        android.content.Context context = com.fuse.Activity.getRootActivity();
        java.io.File dir = context.getExternalFilesDir(null);
        return dir.getAbsolutePath();
    }
    
    public static String GetUserDataDirectory54()
    {
        android.content.Context context = com.fuse.Activity.getRootActivity();
        java.io.File dir = context.getFilesDir();
        return dir.getAbsolutePath();
    }
    
}
