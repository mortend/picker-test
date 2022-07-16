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

public class CanvasViewGroup
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void InstallDrawlistener133(final UnoObject _this, final Object handle,final com.foreign.Uno.Action_Object callback)
    {
        com.fuse.android.views.CanvasViewGroup viewGroup = (com.fuse.android.views.CanvasViewGroup)handle;
        viewGroup.setWillNotDraw(false);
        viewGroup.invalidate();
        viewGroup.setDrawListener(new com.fuse.android.views.CanvasViewGroup.DrawListener() {
        	public void onDraw(android.graphics.Canvas canvas) {
        		callback.run(canvas);
        	}
        });
    }
    
    public static Object Instantiate134()
    {
        android.widget.FrameLayout frameLayout = new com.fuse.android.views.CanvasViewGroup(com.fuse.Activity.getRootActivity());
        frameLayout.setFocusable(true);
        frameLayout.setFocusableInTouchMode(true);
        frameLayout.setClipChildren(false);
        frameLayout.setClipToPadding(false);
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return frameLayout;
    }
    
}
