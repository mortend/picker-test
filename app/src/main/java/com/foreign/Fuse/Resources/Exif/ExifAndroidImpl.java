package com.foreign.Fuse.Resources.Exif;

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
import java.io.ByteArrayInputStream;
import java.io.InputStream;
import java.io.IOException;
import com.drew.imaging.ImageMetadataReader;
import com.drew.imaging.ImageProcessingException;
import com.drew.metadata.Metadata;
import com.drew.metadata.MetadataException;
import com.drew.metadata.exif.ExifIFD0Directory;

public class ExifAndroidImpl
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static int GetOrientation120(final Object stream)
    {
        InputStream s = (InputStream)stream;
        try {
        	Metadata metadata = ImageMetadataReader.readMetadata(s);
        	ExifIFD0Directory directory = metadata.getFirstDirectoryOfType(ExifIFD0Directory.class);
        
        	if (directory != null && directory.containsTag(ExifIFD0Directory.TAG_ORIENTATION)) {
        		return directory.getInt(ExifIFD0Directory.TAG_ORIENTATION);
        	}
        }
        catch (Exception e) {
        	e.printStackTrace();
        }
        return -1;
    }
    
    public static Object InputStreamFromByteArray121(final Object buf)
    {
        return new com.fuse.android.ByteBufferInputStream((com.uno.UnoBackedByteBuffer)buf);
    }
    
}
