package com.foreign.Fuse.Controls;

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

public class Shadow
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void AddDecorationInternalAndroid303(final Object viewHandle,final int color,final float size,final float offsetX,final float offsetY)
    {
        android.view.View view = (android.view.View)viewHandle;
        android.view.ViewGroup parentView = (android.view.ViewGroup)view.getParent();
        if (parentView != null)
        	parentView.setClipToPadding(false);
        float scale = com.fuse.Activity.getRootActivity().getResources().getDisplayMetrics().density;
        float elevationSize = (size * scale + 0.5f);
        view.setOutlineProvider(android.view.ViewOutlineProvider.PADDED_BOUNDS);
        view.setElevation(elevationSize);
        view.setTranslationX(offsetX);
        view.setTranslationY(offsetY);
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.P) {
        	view.setOutlineAmbientShadowColor(color);
        	view.setOutlineSpotShadowColor(color);
        }
    }
    
    public static void RemoveDecorationInternal304(final Object viewHandle)
    {
        android.view.View view = (android.view.View)viewHandle;
        android.view.ViewGroup parentView = (android.view.ViewGroup)view.getParent();
        if (parentView != null)
        	parentView.setClipToPadding(true);
        view.setOutlineProvider(android.view.ViewOutlineProvider.BACKGROUND);
        view.setElevation(0);
        view.setTranslationX(0);
        view.setTranslationY(0);
        if (android.os.Build.VERSION.SDK_INT >= android.os.Build.VERSION_CODES.P) {
        	view.setOutlineAmbientShadowColor(android.graphics.Color.TRANSPARENT);
        	view.setOutlineSpotShadowColor(android.graphics.Color.TRANSPARENT);
        }
    }
    
}
