package com.foreign.Fuse.Controls.Native;

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

public class ImageLoader
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object LoadFile251(final String filePath)
    {
        android.graphics.Bitmap bitmap = null;
        try
        {
        	bitmap = android.graphics.BitmapFactory.decodeFile(filePath);
        	return bitmap;
        }
        catch (Exception e)
        {
        	android.util.Log.e("Fuse.Controls.Native.Android.ImageView", e.getMessage());
        }
        return null;
    }
    
    public static Object LoadUri252(final String uri)
    {
        android.graphics.Bitmap bitmap = null;
        try
        {
        	java.io.InputStream stream = com.fuse.Activity.getRootActivity()
        		.getAssets()
        		.open(uri);
        	bitmap = android.graphics.BitmapFactory.decodeStream(stream);
        	stream.close();
        	return bitmap;
        }
        catch (Exception e)
        {
        	android.util.Log.e("Fuse.Controls.Native.Android.ImageView", e.getMessage());
        }
        return null;
    }
    
    public static void Release253(final Object bitmap)
    {
        ((android.graphics.Bitmap)bitmap).recycle();
    }
    
    
    public static class ImageHandlePromise
    {
        public static Object Download1250(final String url)
        {
            try
            {
            	java.net.URL javaUrl = new java.net.URL(url);
            	java.net.HttpURLConnection connection = (java.net.HttpURLConnection)javaUrl.openConnection();
            	connection.setDoInput(true);
            	connection.connect();
            	java.io.InputStream input = connection.getInputStream();
            	android.graphics.Bitmap bitmap = android.graphics.BitmapFactory.decodeStream(input);
            	return bitmap;
            }
            catch(java.io.IOException e)
            {
            	return null;
            }
        }
        
    }
    
}
