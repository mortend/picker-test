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

public class Switch
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void AddCallback199(final UnoObject _this, final Object handle)
    {
        ((android.widget.Switch)handle).setOnCheckedChangeListener(new android.widget.CompoundButton.OnCheckedChangeListener() {
        	public void onCheckedChanged(android.widget.CompoundButton buttonView, boolean isChecked) {
        		ExternedBlockHost.callUno_Fuse_Controls_Native_Android_Switch_OnToggleChanged200((UnoObject)_this,(boolean)isChecked);
        	}
        });
    }
    
    public static Object Create201()
    {
        return new android.widget.Switch(com.fuse.Activity.getRootActivity());
    }
    
    public static void SetValue202(final Object handle,final boolean value)
    {
        ((android.widget.Switch)handle).setChecked(value);
    }
    
}
