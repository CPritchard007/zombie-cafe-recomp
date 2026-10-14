package com.google.android.gms.internal;

import android.content.Context;
import android.media.MediaPlayer;
import android.text.TextUtils;
import android.view.MotionEvent;
import android.widget.FrameLayout;
import android.widget.MediaController;
import android.widget.VideoView;
import java.util.HashMap;
import java.util.Map;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public final class di extends FrameLayout implements MediaPlayer.OnCompletionListener, MediaPlayer.OnErrorListener, MediaPlayer.OnPreparedListener {

    /* renamed from: a, reason: collision with root package name */
    private final ii f330a;
    private final MediaController b;
    private final dj c;
    private final VideoView d;
    private long e;
    private String f;

    public di(Context context, ii iiVar) {
        super(context);
        this.f330a = iiVar;
        this.d = new VideoView(context);
        addView(this.d, new FrameLayout.LayoutParams(-1, -1, 17));
        this.b = new MediaController(context);
        this.c = new dj(this);
        this.c.b();
        this.d.setOnCompletionListener(this);
        this.d.setOnPreparedListener(this);
        this.d.setOnErrorListener(this);
    }

    private static void a(ii iiVar, String str) {
        a(iiVar, str, new HashMap(1));
    }

    public static void a(ii iiVar, String str, String str2) {
        boolean z = str2 == null;
        HashMap map = new HashMap(z ? 2 : 3);
        map.put("what", str);
        if (!z) {
            map.put("extra", str2);
        }
        a(iiVar, "error", map);
    }

    private static void a(ii iiVar, String str, String str2, String str3) {
        HashMap map = new HashMap(2);
        map.put(str2, str3);
        a(iiVar, str, map);
    }

    private static void a(ii iiVar, String str, Map map) {
        map.put("event", str);
        iiVar.a("onVideoEvent", map);
    }

    public void a() {
        this.c.a();
        this.d.stopPlayback();
    }

    public void a(int i) {
        this.d.seekTo(i);
    }

    public void a(MotionEvent motionEvent) {
        this.d.dispatchTouchEvent(motionEvent);
    }

    public void a(String str) {
        this.f = str;
    }

    public void a(boolean z) {
        if (z) {
            this.d.setMediaController(this.b);
        } else {
            this.b.hide();
            this.d.setMediaController(null);
        }
    }

    public void b() {
        if (TextUtils.isEmpty(this.f)) {
            a(this.f330a, "no_src", (String) null);
        } else {
            this.d.setVideoPath(this.f);
        }
    }

    public void c() {
        this.d.pause();
    }

    public void d() {
        this.d.start();
    }

    public void e() {
        long currentPosition = this.d.getCurrentPosition();
        if (this.e != currentPosition) {
            a(this.f330a, "timeupdate", "time", String.valueOf(currentPosition / 1000.0f));
            this.e = currentPosition;
        }
    }

    @Override // android.media.MediaPlayer.OnCompletionListener
    public void onCompletion(MediaPlayer mediaPlayer) {
        a(this.f330a, "ended");
    }

    @Override // android.media.MediaPlayer.OnErrorListener
    public boolean onError(MediaPlayer mediaPlayer, int i, int i2) {
        a(this.f330a, String.valueOf(i), String.valueOf(i2));
        return true;
    }

    @Override // android.media.MediaPlayer.OnPreparedListener
    public void onPrepared(MediaPlayer mediaPlayer) {
        a(this.f330a, "canplaythrough", "duration", String.valueOf(this.d.getDuration() / 1000.0f));
    }
}
