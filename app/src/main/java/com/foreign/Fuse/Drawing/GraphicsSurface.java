package com.foreign.Fuse.Drawing;

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

// user defined imports
import android.graphics.Canvas;
import android.graphics.Bitmap;
import android.graphics.Shader;
import android.graphics.BitmapShader;
import android.graphics.drawable.BitmapDrawable;
import android.graphics.Rect;
import android.graphics.RectF;
import android.graphics.Path;
import android.opengl.GLUtils;
import android.opengl.GLES20;
import android.graphics.Paint;
import android.graphics.LinearGradient;
import android.graphics.Shader.TileMode;
import android.graphics.Color;
import android.graphics.PorterDuffXfermode;
import android.graphics.Matrix;
import android.graphics.PorterDuff.Mode;
import com.fuse.drawing.surface.LinearGradientStore;
import com.fuse.drawing.surface.GraphicsSurfaceContext;
import java.nio.ByteBuffer;
import java.nio.IntBuffer;
import java.nio.ByteOrder;
import java.nio.FloatBuffer;

public class GraphicsSurface
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void BeginImpl325(final Object _context,final int width,final int height,final int glTextureId)
    {
        GraphicsSurfaceContext context = (GraphicsSurfaceContext) _context;
        context.width = width;
        context.height = height;
        context.glTextureId = glTextureId;
    }
    
    public static void EndImpl326(final Object context)
    {
        GraphicsSurfaceContext realContext = (GraphicsSurfaceContext) context;
        
        GLES20.glBindTexture(GLES20.GL_TEXTURE_2D, realContext.glTextureId);
        
        // heat up the caches. not needed but good to have
        realContext.bitmap.prepareToDraw();
        
        GLUtils.texImage2D(GLES20.GL_TEXTURE_2D, 0, realContext.bitmap, 0);
        realContext.bitmap.recycle();
    }
    
    public static void LoadBitmap327(final Object context,final int width,final int height)
    {
        GraphicsSurfaceContext impl = (GraphicsSurfaceContext) context;
        Bitmap b = Bitmap.createBitmap(width, height, Bitmap.Config.ARGB_8888);
        
        Canvas canvas = impl.canvas;
        canvas.setBitmap(b);
        impl.bitmap = b;
        
        canvas.setMatrix(null);
        
        // invert our bitmap since the Android canvas is inversed when drawing
        canvas.translate(0.0f, (float)height);
        canvas.scale(1, -1);
    }
    
}
