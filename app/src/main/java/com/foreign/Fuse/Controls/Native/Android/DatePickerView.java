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

public class DatePickerView
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object Create135()
    {
        android.widget.FrameLayout frameLayout = new android.widget.FrameLayout(com.fuse.Activity.getRootActivity());
        frameLayout.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        return frameLayout;
    }
    
    public static long GetDateInMsSince1970InUtc136(final UnoObject _this, final Object datePickerHandle)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        
        // Remove time/zone/dst offsets and set time to midnight so we only express the date in UTC
        java.util.Calendar cal = java.util.Calendar.getInstance(java.util.TimeZone.getTimeZone("UTC"), java.util.Locale.getDefault());
        
        cal.set(java.util.Calendar.YEAR, datePicker.getYear());
        cal.set(java.util.Calendar.MONTH, datePicker.getMonth());
        cal.set(java.util.Calendar.DAY_OF_MONTH, datePicker.getDayOfMonth());
        
        cal.set(java.util.Calendar.AM_PM, java.util.Calendar.AM);
        cal.set(java.util.Calendar.HOUR, 0);
        cal.set(java.util.Calendar.MINUTE, 0);
        cal.set(java.util.Calendar.SECOND, 0);
        cal.set(java.util.Calendar.MILLISECOND, 0);
        
        return cal.getTimeInMillis();
    }
    
    public static void SetDate137(final UnoObject _this, final Object datePickerHandle,final Object dateLabelHandle,final long msSince1970InUtc)
    {
        java.util.Calendar cal = java.util.Calendar.getInstance(java.util.TimeZone.getTimeZone("UTC"), java.util.Locale.getDefault());
        cal.setTimeInMillis(msSince1970InUtc);
        
        int y = cal.get(java.util.Calendar.YEAR);
        int m = cal.get(java.util.Calendar.MONTH);
        int d = cal.get(java.util.Calendar.DAY_OF_MONTH);
        
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        datePicker.updateDate(y, m, d);
        android.widget.TextView textview = (android.widget.TextView)dateLabelHandle;
        if (textview != null) {
        	java.text.DateFormat dateFormat = android.text.format.DateFormat.getMediumDateFormat(com.fuse.Activity.getRootActivity());
        	textview.setText(dateFormat.format(cal.getTime()));
        }
    }
    
    public static void SetMaxValue138(final UnoObject _this, final Object datePickerHandle,final long msSince1970InUtc)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        
        // setMinDate and setMaxDate take in milliseconds since midnight, January 1, 1970, _in getDefault()
        //  time zone_, not necessarily UTC. To compensate for this, we need to offset the incoming
        //  UTC-relative ticks by subtracting the default time zone offset. Note that the time zone offset
        //  actually depends on the incoming UTC time, as different dates will have different time offsets.
        
        long timezoneRelativeOffset = java.util.TimeZone.getDefault().getOffset(msSince1970InUtc);
        long javaTicksInDefaultTimezone = msSince1970InUtc - timezoneRelativeOffset;
        
        datePicker.setMaxDate(javaTicksInDefaultTimezone);
    }
    
    public static void SetMinValue139(final UnoObject _this, final Object datePickerHandle,final long msSince1970InUtc)
    {
        android.widget.DatePicker datePicker = (android.widget.DatePicker)datePickerHandle;
        
        // setMinDate and setMaxDate take in milliseconds since midnight, January 1, 1970, _in getDefault()
        //  time zone_, not necessarily UTC. To compensate for this, we need to offset the incoming
        //  UTC-relative ticks by subtracting the default time zone offset. Note that the time zone offset
        //  actually depends on the incoming UTC time, as different dates will have different time offsets.
        
        long timezoneRelativeOffset = java.util.TimeZone.getDefault().getOffset(msSince1970InUtc);
        long javaTicksInDefaultTimezone = msSince1970InUtc - timezoneRelativeOffset;
        
        datePicker.setMinDate(javaTicksInDefaultTimezone);
    }
    
    public static void SetStyle140(final UnoObject _this, final Object handle,final int style)
    {
        android.widget.FrameLayout frameLayout = (android.widget.FrameLayout)handle;
        frameLayout.removeAllViews();
        // Use local calendar to get default year/month/day
        java.util.Calendar cal = java.util.Calendar.getInstance();
        
        int y = cal.get(java.util.Calendar.YEAR);
        int m = cal.get(java.util.Calendar.MONTH);
        int d = cal.get(java.util.Calendar.DAY_OF_MONTH);
        
        if (style == 1) { // compact
        	final android.app.DatePickerDialog pickerDialog = new android.app.DatePickerDialog(com.fuse.Activity.getRootActivity());
        
        	java.text.DateFormat dateFormat = android.text.format.DateFormat.getMediumDateFormat(com.fuse.Activity.getRootActivity());
        	android.widget.TextView textview = new android.widget.TextView(com.fuse.Activity.getRootActivity());
        	textview.setTextSize(android.util.TypedValue.COMPLEX_UNIT_SP,16);
        	textview.setTextColor(android.graphics.Color.parseColor("#555555"));
        	textview.setText(dateFormat.format(cal.getTime()));
        	textview.setOnClickListener(new android.view.View.OnClickListener() {
        		@Override
        		public void onClick(android.view.View v) {
        			pickerDialog.show();
        		}
        	});
        	frameLayout.addView(textview);
        	ExternedBlockHost.callUno_Fuse_Controls_Native_Android_DatePickerView__datePickerSet141(_this,pickerDialog.getDatePicker(),UnoHelper.GetUnoObjectRef(pickerDialog.getDatePicker()));
        	ExternedBlockHost.callUno_Fuse_Controls_Native_Android_DatePickerView__dateLabelSet142(_this,textview,UnoHelper.GetUnoObjectRef(textview));
        } else {
        	android.widget.DatePicker datePicker = new android.widget.DatePicker(com.fuse.Activity.getRootActivity());
        	datePicker.setLayoutParams(new android.widget.FrameLayout.LayoutParams(android.view.ViewGroup.LayoutParams.MATCH_PARENT, android.view.ViewGroup.LayoutParams.MATCH_PARENT));
        	datePicker.init(y, m, d, null);
        	ExternedBlockHost.callUno_Fuse_Controls_Native_Android_DatePickerView__datePickerSet141(_this,datePicker,UnoHelper.GetUnoObjectRef(datePicker));
        	frameLayout.addView(datePicker);
        }
    }
    
}
