package com.foreign.Fuse.Resources;

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

public class ImageBackgroundLoad
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static com.uno.ByteArray AndroidResizeImage122(final com.uno.ByteArray imageData,final int desiredWidth,final int desiredHeight)
    {
        byte[] bitmapdata = imageData.copyArray();
        android.graphics.BitmapFactory.Options options = new android.graphics.BitmapFactory.Options();
        options.inJustDecodeBounds = true;
        android.graphics.BitmapFactory.decodeByteArray(bitmapdata, 0, bitmapdata.length, options);
        String lowerCaseType = options.outMimeType.toLowerCase();
        float width = options.outWidth;
        float height = options.outHeight;
        
        if (width == desiredWidth && height == desiredHeight)
        	return imageData;
        
        options = new android.graphics.BitmapFactory.Options();
        android.graphics.Bitmap sourceBitmap = android.graphics.BitmapFactory.decodeByteArray(bitmapdata, 0, bitmapdata.length, options);
        options.inScaled = true;
        if (width < height) {
        	options.inDensity = (int)height;
        	options.inTargetDensity = desiredHeight;
        } else {
        	options.inDensity = (int)width;
        	options.inTargetDensity = desiredWidth;
        }
        float ratio = 1.0f;
        if (width > desiredWidth) {
        	ratio = desiredWidth / width;
        	width *= ratio;
        	height *= ratio;
        }
        if (height > desiredHeight) {
        	ratio = desiredHeight / height;
        	width *= ratio;
        	height *= ratio;
        }
        
        android.graphics.Bitmap resultBitmap = android.graphics.Bitmap.createScaledBitmap(
        			sourceBitmap,
        			(int)width,
        			(int)height,
        			true);
        
        android.graphics.Bitmap.CompressFormat fmt;
        if (lowerCaseType.contains("png"))
        	fmt = android.graphics.Bitmap.CompressFormat.PNG;
        else
        	fmt = android.graphics.Bitmap.CompressFormat.JPEG;
        java.io.ByteArrayOutputStream stream = new java.io.ByteArrayOutputStream();
        resultBitmap.compress(fmt, 100, stream);
        byte[] byteArray = stream.toByteArray();
        
        sourceBitmap.recycle();
        resultBitmap.recycle();
        bitmapdata = null;
        
        return new ByteArray(byteArray);
    }
    
}
