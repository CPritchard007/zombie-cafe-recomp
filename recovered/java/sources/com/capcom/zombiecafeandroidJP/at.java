package com.capcom.zombiecafeandroidJP;

import android.os.Debug;
import android.os.Environment;
import android.util.Log;
import java.io.File;
import java.io.IOException;
import java.lang.Thread;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class at implements Thread.UncaughtExceptionHandler {

    /* renamed from: a, reason: collision with root package name */
    final /* synthetic */ ZombieCafeAndroid f95a;

    at(ZombieCafeAndroid zombieCafeAndroid) {
        this.f95a = zombieCafeAndroid;
    }

    @Override // java.lang.Thread.UncaughtExceptionHandler
    public void uncaughtException(Thread thread, Throwable th) throws IOException {
        try {
            String absolutePath = new File(Environment.getExternalStorageDirectory(), "error.hprof").getAbsolutePath();
            Debug.dumpHprofData(absolutePath);
            Log.d("error", "HREF dumped to " + absolutePath);
            th.printStackTrace();
        } catch (IOException e) {
            Log.d("error", "Huh?", e);
        }
    }
}
