package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class MouseTask extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    float f69a;
    float b;

    public MouseTask(float f, float f2) {
        this.f69a = f;
        this.b = f2;
    }

    public static native void mouseUp(float f, float f2, int i);

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        Log.d("ASYNCH MOUSE TASK", "INSIDE BG THREAD");
        ZombieCafeAndroid.mouseUp(this.f69a, this.b, 0);
        return null;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Void r5) {
        ZombieCafeAndroid.Y = false;
    }

    @Override // android.os.AsyncTask
    protected void onPreExecute() {
    }
}
