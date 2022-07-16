package com.foreign.Fuse.Text.Implementation;

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
import java.nio.ByteBuffer;
import java.text.BreakIterator;

public class JavaLineBreaks
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void CopyLineBreaks335(final String text,final Object outByteBufferHandle)
    {
        ByteBuffer outByteBuffer = (ByteBuffer)outByteBufferHandle;
        BreakIterator bi = BreakIterator.getLineInstance();
        bi.setText(text);
        
        final int bytesize = 8;
        
        int boundary = bi.first();
        while (boundary != BreakIterator.DONE)
        {
        	int i = boundary / bytesize;
        	byte mask = (byte)(1 << (boundary % bytesize));
        	outByteBuffer.put(i, (byte)(outByteBuffer.get(i) | mask));
        	boundary = bi.next();
        }
    }
    
}
