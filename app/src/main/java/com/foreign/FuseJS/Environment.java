package com.foreign.FuseJS;

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

public class Environment
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static String GetCurrentLocale411()
    {
        java.util.Locale loc = java.util.Locale.getDefault();
        
        final char separator = '-';
        String language = loc.getLanguage();
        String region = loc.getCountry();
        String variant = loc.getVariant();
        
        if (language.isEmpty() || !language.matches("\\p{Alpha}{2,8}")) {
        	language = "und"; // "und" for Undetermined
        } else if (language.equals("in")) {
        	language = "id";  // correct deprecated "Indonesian"
        }
        
        StringBuilder bcp47Tag = new StringBuilder(language);
        if (!region.isEmpty()) {
        	bcp47Tag.append(separator).append(region);
        }
        
        if (!variant.isEmpty()) {
        	bcp47Tag.append(separator).append(variant);
        }
        
        return bcp47Tag.toString();
    }
    
}
