package com.capcom.zombiecafeandroidJP;

import android.app.Application;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
public class MyApplication extends Application {
    @Override // android.app.Application
    public void onCreate() {
        super.onCreate();
    }

    @Override // android.app.Application, android.content.ComponentCallbacks
    public void onLowMemory() {
        Log.d("OH OH!", "WE GOT A LOW MEMORY WARNING!!!");
    }
}
