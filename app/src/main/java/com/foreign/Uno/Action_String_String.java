package com.foreign.Uno;
import com.foreign.*;
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
import com.uno.UnoObject;

public class Action_String_String extends com.uno.UnoObject
{
    public Action_String_String(long ptr) { super(ptr); }
    public void run(final String arg1, final String arg2) {
        ExternedBlockHost.callUno_Action_String_String(this,arg1,arg2);
    }
}
