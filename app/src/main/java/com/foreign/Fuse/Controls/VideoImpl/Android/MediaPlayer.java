package com.foreign.Fuse.Controls.VideoImpl.Android;

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

public class MediaPlayer
{
    @Deprecated
    static void debug_log(Object message)
    {
        android.util.Log.d("app", (message==null ? "null" : message.toString()));
    }

    public static Object CreateMediaPlayer280(final UnoObject _this, final Object surfaceHandle)
    {
        android.media.MediaPlayer player = new android.media.MediaPlayer();
        player.setAudioStreamType(android.media.AudioManager.STREAM_MUSIC);
        player.setOnPreparedListener(new android.media.MediaPlayer.OnPreparedListener() {
        	public void onPrepared(android.media.MediaPlayer mp) {
        		ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnPrepared281((UnoObject)_this);
        	}
        });
        player.setOnCompletionListener(new android.media.MediaPlayer.OnCompletionListener() {
        	public void onCompletion(android.media.MediaPlayer mp) {
        		ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnCompletion282((UnoObject)_this);
        	}
        });
        player.setOnErrorListener(new android.media.MediaPlayer.OnErrorListener() {
        	public boolean onError(android.media.MediaPlayer mp, int what, int extra) {
        		ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnError283((UnoObject)_this,(int)what,(int)extra);
        		return false;
        	}
        });
        player.setOnBufferingUpdateListener(new android.media.MediaPlayer.OnBufferingUpdateListener() {
        	public void onBufferingUpdate(android.media.MediaPlayer mp, int percent) {
        		ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnBuffer284((UnoObject)_this,(int)percent);
        	}
        });
        player.setSurface(((android.view.Surface)surfaceHandle));
        return player;
    }
    
    public static Object CreateSurface285(final UnoObject _this, final Object surfaceTexture)
    {
        return new android.view.Surface(((android.graphics.SurfaceTexture)surfaceTexture));
    }
    
    public static Object CreateSurfaceTexture286(final UnoObject _this, final int glHandle)
    {
        android.graphics.SurfaceTexture surfaceTexture = new android.graphics.SurfaceTexture(glHandle);
        surfaceTexture.setOnFrameAvailableListener(new android.graphics.SurfaceTexture.OnFrameAvailableListener() {
        	public void onFrameAvailable(android.graphics.SurfaceTexture surfaceTexture) {
        		ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnFrameAvailable287((UnoObject)_this);
        	}
        });
        return surfaceTexture;
    }
    
    public static void Dispose1288(final Object mediaplayerHandle,final Object surfaceHandle,final Object surfaceTextureHandle)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)mediaplayerHandle;
        player.reset();
        player.release();
        
        android.view.Surface surface = (android.view.Surface)surfaceHandle;
        surface.release();
        
        android.graphics.SurfaceTexture surfaceTexture = (android.graphics.SurfaceTexture)surfaceTextureHandle;
        surfaceTexture.release();
    }
    
    public static int GetCurrentPosition289(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getCurrentPosition();
    }
    
    public static int GetDuration290(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getDuration();
    }
    
    public static int GetHeight291(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getVideoHeight();
    }
    
    public static int GetOrientation292(final Object handle,final String dataSorucePath)
    {
        /*
        	Nasty code to check for rotation metadata on a video
        
        	This code probes for orientation as the soruce might not have it.
        */
        if (dataSorucePath != null)
        {
        	try
        	{
        		android.media.MediaMetadataRetriever mmr = new android.media.MediaMetadataRetriever();
        		mmr.setDataSource(dataSorucePath);
        		String rotation = mmr.extractMetadata(android.media.MediaMetadataRetriever.METADATA_KEY_VIDEO_ROTATION);
        		if (rotation != null) {
        			return java.lang.Integer.parseInt(rotation);
        		}
        	}
        	catch(Exception e) { /* We do not care if this fails */ }
        
        	try
        	{
        		android.content.res.AssetFileDescriptor afd = com.fuse.Activity.getRootActivity()
        			.getAssets()
        			.openFd(dataSorucePath);
        
        		android.media.MediaMetadataRetriever mmr = new android.media.MediaMetadataRetriever();
        		mmr.setDataSource(afd.getFileDescriptor(), afd.getStartOffset(), afd.getLength());
        		String rotation = mmr.extractMetadata(android.media.MediaMetadataRetriever.METADATA_KEY_VIDEO_ROTATION);
        		if (rotation != null) {
        			return java.lang.Integer.parseInt(rotation);
        		}
        	}
        	catch (Exception e) { /* We do not care if this fails */ }
        }
        
        if (android.os.Build.VERSION.SDK_INT < 19) // we need API level 19 to call MediaPlayer.TrackInfo.getFormat()
        	return 0;
        
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        android.media.MediaPlayer.TrackInfo[] tracks = player.getTrackInfo();
        for (int i = 0; i < tracks.length; i++)
        {
        	android.media.MediaPlayer.TrackInfo track = tracks[i];
        	if (track.getTrackType() == android.media.MediaPlayer.TrackInfo.MEDIA_TRACK_TYPE_VIDEO)
        	{
        		android.media.MediaFormat format = track.getFormat();
        		if (format != null)
        		{
        			if (format.getFeatureEnabled(android.media.MediaFormat.KEY_ROTATION))
        			{
        				return format.getInteger(android.media.MediaFormat.KEY_ROTATION);
        			}
        		}
        	}
        }
        return 0;
    }
    
    public static int GetWidth293(final Object handle)
    {
        return ((android.media.MediaPlayer)handle).getVideoWidth();
    }
    
    public static boolean IsHardwareAccelerated294()
    {
        android.view.Window window = com.fuse.Activity.getRootActivity().getWindow();
        
        if (window != null) {
        	if ((window.getAttributes().flags & android.view.WindowManager.LayoutParams.FLAG_HARDWARE_ACCELERATED) != 0) {
        		return true;
        	}
        }
        
        try
        {
        	android.content.pm.ActivityInfo info = com.fuse.Activity.getRootActivity().getPackageManager().getActivityInfo(com.fuse.Activity.getRootActivity().getComponentName(), 0);
        	if ((info.flags & android.content.pm.ActivityInfo.FLAG_HARDWARE_ACCELERATED) != 0) {
        		return true;
        	}
        }
        catch (android.content.pm.PackageManager.NameNotFoundException e)
        {
        
        }
        
        return false;
    }
    
    public static void LoadAsyncAsset295(final UnoObject _this, final Object handle,final String assetName)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        android.content.res.AssetFileDescriptor afd = null;
        try
        {
        	afd = com.fuse.Activity.getRootActivity()
        		.getAssets()
        		.openFd(assetName);
        }
        catch (Exception e)
        {
        	// checked exceptions suck (???????????)??????????????????/
        	android.util.Log.e("Fuse.Video", e.getMessage());
        	ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred296((UnoObject)_this,(String)e.getMessage());
        }
        
        /// AAAAAAAAAA JAVA
        if (afd == null)
        {
        	// (???????????)??????????????????/
        	return;
        }
        
        player.reset();
        try
        {
        	// (???????????)??????????????????/
        	player.setDataSource(afd.getFileDescriptor(), afd.getStartOffset(), afd.getLength());
        }
        // (???????????)??????????????????/
        catch (Exception e)
        {
        	// (???????????)??????????????????/
        	android.util.Log.e("Fuse.Video", e.getMessage());
        	ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred296((UnoObject)_this,(String)e.getMessage());
        }
        
        player.prepareAsync();
    }
    
    public static void LoadAsyncUrl297(final UnoObject _this, final Object handle,final String url)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        player.reset();
        try
        {
        	player.setDataSource(url);
        }
        catch(Exception e)
        {
        	android.util.Log.e("Fuse.Video", e.getMessage());
        	ExternedBlockHost.callUno_Fuse_Controls_VideoImpl_Android_MediaPlayer_OnErrorOccurred296((UnoObject)_this,(String)e.getMessage());
        }
        player.prepareAsync();
    }
    
    public static void Pause1298(final Object handle)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        if (player.isPlaying())
        {
        	android.media.AudioManager am = (android.media.AudioManager)com.fuse.Activity.getRootActivity().getSystemService(android.content.Context.AUDIO_SERVICE);
        	am.abandonAudioFocus(null);
        	player.pause();
        }
    }
    
    public static void Play1299(final Object handle)
    {
        android.media.MediaPlayer player = (android.media.MediaPlayer)handle;
        if (!player.isPlaying())
        {
        	android.media.AudioManager am = (android.media.AudioManager)com.fuse.Activity.getRootActivity().getSystemService(android.content.Context.AUDIO_SERVICE);
        	am.requestAudioFocus(null, android.media.AudioManager.STREAM_MUSIC, android.media.AudioManager.AUDIOFOCUS_GAIN);
        	player.start();
        }
    }
    
    public static void SeekTo300(final Object handle,final int position)
    {
        ((android.media.MediaPlayer)handle).seekTo(position);
    }
    
    public static void SetVolume301(final Object handle,final float left,final float right)
    {
        ((android.media.MediaPlayer)handle).setVolume(left, right);
    }
    
    public static void UpdateTexture1302(final Object surfaceTextureHandle)
    {
        ((android.graphics.SurfaceTexture)surfaceTextureHandle).updateTexImage();
    }
    
}
