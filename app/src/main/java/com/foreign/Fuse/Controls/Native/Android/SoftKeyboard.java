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

public class SoftKeyboard
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static void HideKeyboard190(final Object hideKeyboardContext,final Object hideKeyboardWindowToken)
    {
        android.content.Context ctx = (android.content.Context)hideKeyboardContext;
        android.os.IBinder binder = (android.os.IBinder)hideKeyboardWindowToken;
        android.view.inputmethod.InputMethodManager imm = (android.view.inputmethod.InputMethodManager)ctx.getSystemService(android.content.Context.INPUT_METHOD_SERVICE);
        imm.hideSoftInputFromWindow(binder, 0);
    }
    
    public static void ShowKeyboard191(final Object viewHandle)
    {
        android.view.View view = (android.view.View)viewHandle;
        android.view.inputmethod.InputMethodManager imm = (android.view.inputmethod.InputMethodManager)view.getContext().getSystemService(android.content.Context.INPUT_METHOD_SERVICE);
        imm.showSoftInput(view, android.view.inputmethod.InputMethodManager.SHOW_FORCED);
    }
    
}
