package com.foreign.Fuse.Storage;

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
import com.fuse.Activity;
import android.content.SharedPreferences;
import android.preference.PreferenceManager;

public class AndroidUserSettingsImpl
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void Clear394()
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(com.fuse.Activity.getRootActivity());
        SharedPreferences.Editor editor = preferences.edit();
        editor.clear();
        editor.commit();
    }
    
    public static boolean GetBooleanValue395(final String key)
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(Activity.getRootActivity());
        return preferences.getBoolean(key, false);
    }
    
    public static double GetNumberValue396(final String key)
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(Activity.getRootActivity());
        return preferences.getFloat(key, -1f);
    }
    
    public static String GetStringValue397(final String key)
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(Activity.getRootActivity());
        return preferences.getString(key, "");
    }
    
    public static void Remove398(final String key)
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(com.fuse.Activity.getRootActivity());
        SharedPreferences.Editor editor = preferences.edit();
        editor.remove(key);
        editor.commit();
    }
    
    public static void SetBooleanValue399(final String key,final boolean value)
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(com.fuse.Activity.getRootActivity());
        SharedPreferences.Editor editor = preferences.edit();
        editor.putBoolean(key, value);
        editor.commit();
    }
    
    public static void SetNumberValue400(final String key,final double value)
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(Activity.getRootActivity());
        SharedPreferences.Editor editor = preferences.edit();
        editor.putFloat(key, (float)value);
        editor.commit();
    }
    
    public static void SetStringValue401(final String key,final String value)
    {
        SharedPreferences preferences = PreferenceManager.getDefaultSharedPreferences(Activity.getRootActivity());
        SharedPreferences.Editor editor = preferences.edit();
        editor.putString(key, value);
        editor.commit();
    }
    
}
