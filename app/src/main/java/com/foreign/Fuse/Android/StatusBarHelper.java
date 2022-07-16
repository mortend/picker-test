package com.foreign.Fuse.Android;

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
import android.os.Build;
import android.view.View;
import android.view.ViewTreeObserver;
import android.view.Window;

public class StatusBarHelper
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void InstallGlobalListener380()
    {
        Window window = com.fuse.Activity.getRootActivity().getWindow();
        window.getDecorView().getViewTreeObserver().addOnGlobalFocusChangeListener(
        	new ViewTreeObserver.OnGlobalFocusChangeListener() {
        		boolean _focusWasEditText;
        		public void onGlobalFocusChanged(View oldFocus, View newFocus) {
        			if (_focusWasEditText)
        				ExternedBlockHost.callUno_Fuse_Android_StatusBarConfig_UpdateStatusBar381();
        
        			_focusWasEditText = newFocus instanceof android.widget.EditText;
        		}
        	}
        );
    }
    
}
