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

public class ScrollView
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object Create181()
    {
        return new com.fuse.android.views.FuseScrollView(com.fuse.Activity.getRootActivity());
    }
    
    public static void InstallCallback182(final UnoObject _this, final Object handle,final com.foreign.Uno.Action_int_int_int_int callback)
    {
        ((com.fuse.android.views.FuseScrollView)handle).setScrollEventHandler(
        	new com.fuse.android.views.ScrollEventHandler() {
        		public void onScrollChanged(int x, int y, int oldX, int oldY) {
        			callback.run(x, y, oldX, oldY);
        		}
        	});
    }
    
    public static void SetClipToBounds1183(final Object handle,final boolean clipToBounds)
    {
        android.view.ViewGroup viewGroup = (android.view.ViewGroup)handle;
        viewGroup.setClipChildren(clipToBounds);
        viewGroup.setClipToPadding(clipToBounds);
    }
    
    public static void SetIsHorizontal184(final UnoObject _this, final Object handle,final boolean isHorizontal)
    {
        ((com.fuse.android.views.FuseScrollView)handle).setIsHorizontal(isHorizontal);
    }
    
    public static void SetScrollPosition185(final Object handle,final int x,final int y)
    {
        android.view.View sv = (android.view.View)handle;
        sv.setScrollX(x);
        sv.setScrollY(y);
    }
    
}
