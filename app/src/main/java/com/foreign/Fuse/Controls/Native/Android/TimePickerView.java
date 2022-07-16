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

public class TimePickerView
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object Create236()
    {
        android.widget.FrameLayout frameLayout = new android.widget.FrameLayout(com.fuse.Activity.getRootActivity());
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return frameLayout;
    }
    
    public static long GetTimeInMsSince1970InUtc237(final UnoObject _this, final Object timePickerHandle)
    {
        android.widget.TimePicker timePicker = (android.widget.TimePicker)timePickerHandle;
        
        int hour, minute;
        
        if (android.os.Build.VERSION.SDK_INT >= 23) {
        	hour = timePicker.getHour();
        	minute = timePicker.getMinute();
        } else {
        	hour = timePicker.getCurrentHour();
        	minute = timePicker.getCurrentMinute();
        }
        
        // Remove date offsets so we only express the time in UTC
        java.util.Calendar cal = java.util.Calendar.getInstance(java.util.TimeZone.getTimeZone("UTC"), java.util.Locale.getDefault());
        
        cal.set(java.util.Calendar.YEAR, 1970);
        cal.set(java.util.Calendar.MONTH, 0); // Android month starts at 0
        cal.set(java.util.Calendar.DAY_OF_MONTH, 1);
        
        cal.set(java.util.Calendar.AM_PM, java.util.Calendar.AM);
        cal.set(java.util.Calendar.HOUR, hour);
        cal.set(java.util.Calendar.MINUTE, minute);
        cal.set(java.util.Calendar.SECOND, 0);
        cal.set(java.util.Calendar.MILLISECOND, 0);
        
        return cal.getTimeInMillis();
    }
    
    public static void SetIs24HourView238(final UnoObject _this, final Object timePickerHandle,final boolean value)
    {
        android.widget.TimePicker timePicker = (android.widget.TimePicker)timePickerHandle;
        
        timePicker.setIs24HourView(value);
    }
    
    public static void SetStyle239(final UnoObject _this, final Object handle,final int style)
    {
        java.util.Calendar cal = java.util.Calendar.getInstance(java.util.TimeZone.getTimeZone("UTC"), java.util.Locale.getDefault());
        
        int hour = cal.get(java.util.Calendar.HOUR);
        if (cal.get(java.util.Calendar.AM_PM) == java.util.Calendar.PM)
        	hour += 12;
        int minute = cal.get(java.util.Calendar.MINUTE);
        
        android.widget.FrameLayout frameLayout = (android.widget.FrameLayout)handle;
        frameLayout.removeAllViews();
        if (style == 1) {
        	final com.fuse.android.widget.FuseTimePickerDialog pickerDialog = new com.fuse.android.widget.FuseTimePickerDialog(com.fuse.Activity.getRootActivity(), null, hour, minute, false);
        	android.widget.TextView textview = new android.widget.TextView(com.fuse.Activity.getRootActivity());
        	textview.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP,16);
        	textview.setTextColor(android.graphics.Color.parseColor("#555555"));
        	textview.setOnClickListener(new android.view.View.OnClickListener() {
        		@Override
        		public void onClick(android.view.View v) {
        			pickerDialog.show();
        		}
        	});
        	frameLayout.addView(textview);
        	ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TimePickerView__timePickerSet240(_this,pickerDialog.getTimePicker(),UnoHelper.GetUnoObjectRef(pickerDialog.getTimePicker()));
        	ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TimePickerView__timeLabelSet241(_this,textview,UnoHelper.GetUnoObjectRef(textview));
        }
        else {
        	android.widget.TimePicker timePicker = new android.widget.TimePicker(com.fuse.Activity.getRootActivity());
        	if (android.os.Build.VERSION.SDK_INT >= 23) {
        		timePicker.setHour(hour);
        		timePicker.setMinute(minute);
        	} else {
        		timePicker.setCurrentHour(hour);
        		timePicker.setCurrentMinute(minute);
        	}
        	ExternedBlockHost.callUno_Fuse_Controls_Native_Android_TimePickerView__timePickerSet240(_this,timePicker,UnoHelper.GetUnoObjectRef(timePicker));
        	frameLayout.addView(timePicker);
        }
    }
    
    public static void SetTime242(final UnoObject _this, final Object timePickerHandle,final Object timeLabelHandle,final long msSince1970InUtc)
    {
        java.util.Calendar cal = java.util.Calendar.getInstance(java.util.TimeZone.getTimeZone("UTC"), java.util.Locale.getDefault());
        cal.setTimeInMillis(msSince1970InUtc);
        
        int hour = cal.get(java.util.Calendar.HOUR);
        if (cal.get(java.util.Calendar.AM_PM) == java.util.Calendar.PM)
        	hour += 12;
        int minute = cal.get(java.util.Calendar.MINUTE);
        
        android.widget.TimePicker timePicker = (android.widget.TimePicker)timePickerHandle;
        if (android.os.Build.VERSION.SDK_INT >= 23) {
        	timePicker.setHour(hour);
        	timePicker.setMinute(minute);
        } else {
        	timePicker.setCurrentHour(hour);
        	timePicker.setCurrentMinute(minute);
        }
        android.widget.TextView textview = (android.widget.TextView)timeLabelHandle;
        if (textview != null) {
        	String pattern = timePicker.is24HourView() ? "HH:mm" : "hh:mm";
        	java.text.SimpleDateFormat simpleDateFormat = new java.text.SimpleDateFormat(pattern);
        	textview.setText(simpleDateFormat.format(cal.getTime()));
        }
    }
    
}
