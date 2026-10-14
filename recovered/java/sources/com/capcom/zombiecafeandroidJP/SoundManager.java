package com.capcom.zombiecafeandroidJP;

import android.content.Context;
import android.media.AudioManager;
import android.media.SoundPool;
import android.os.Build;
import android.util.Log;
import java.util.HashMap;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class SoundManager extends Thread {

    /* renamed from: a, reason: collision with root package name */
    public SoundPool f72a;
    public boolean b;
    public float c = 1.0f;
    private HashMap d;
    private boolean[] e;
    private AudioManager f;
    private Context g;

    public void a() {
        this.b = true;
        start();
    }

    public void a(Context context) {
        this.g = context;
        if (Build.MANUFACTURER == "samsung") {
            Log.d("FOUND A SAMSUNG DEVICE", "CREATING 1 SOUNDS STREAMS");
            this.f72a = new SoundPool(1, 3, 0);
        } else {
            Log.d("NOT A SAMSUNG DEVICE", "CREATING 5 SOUNDS STREAMS");
            this.f72a = new SoundPool(5, 3, 0);
        }
        this.d = new HashMap();
        this.e = new boolean[256];
        for (int i = 0; i < 256; i++) {
            this.e[i] = false;
        }
        this.f = (AudioManager) this.g.getSystemService("audio");
    }

    public native void setEnabled(boolean z);
}
