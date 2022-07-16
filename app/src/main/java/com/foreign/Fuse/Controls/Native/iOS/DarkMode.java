package com.foreign.Fuse.Controls.Native.iOS;

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
import java.lang.Runnable;
import android.content.res.Configuration;
import android.app.Activity;

public class DarkMode
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void checkForDarkThemeChange128()
    {
        switch (com.fuse.Activity.getRootActivity().getResources().getConfiguration().uiMode & android.content.res.Configuration.UI_MODE_NIGHT_MASK) {
        	case android.content.res.Configuration.UI_MODE_NIGHT_YES:
        		ExternedBlockHost.callUno_Fuse_Controls_Native_iOS_DarkMode_changeDarkMode129((String)"Dark");
        		break;
        	case android.content.res.Configuration.UI_MODE_NIGHT_NO:
        		ExternedBlockHost.callUno_Fuse_Controls_Native_iOS_DarkMode_changeDarkMode129((String)"Light");
        		break;
        	case android.content.res.Configuration.UI_MODE_NIGHT_UNDEFINED:
        		ExternedBlockHost.callUno_Fuse_Controls_Native_iOS_DarkMode_changeDarkMode129((String)"Unspecified");
        		break;
        }
    }
    
    public static void SetupAndroidListener130(final UnoObject _this)
    {
        com.foreign.Fuse.Controls.Native.iOS.DarkMode.checkForDarkThemeChange128();
        
        com.fuse.Activity.SubscribeToLifecycleChange(new com.fuse.Activity.ActivityListener()
        {
        	@Override public void onStop() {}
        	@Override public void onStart() {}
        	@Override public void onWindowFocusChanged(boolean hasFocus) {}
        	@Override public void onPause() {}
        	@Override public void onResume() {}
        	@Override public void onDestroy() {}
        
        	@Override public void onConfigurationChanged(android.content.res.Configuration config)
        	{
        		com.foreign.Fuse.Controls.Native.iOS.DarkMode.checkForDarkThemeChange128();
        	}
        });
    }
    
}
