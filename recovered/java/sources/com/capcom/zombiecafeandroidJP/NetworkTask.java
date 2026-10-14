package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class NetworkTask extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    boolean f70a;
    int b;
    byte[] c;
    int d;

    public NetworkTask(boolean z, byte[] bArr, int i, int i2) {
        Log.d("Run Long NetworkTask With", "Passed Data");
        this.f70a = z;
        this.c = bArr;
        this.b = i;
        this.d = i2;
    }

    public static native void NewRequestServerCallback(boolean z, byte[] bArr, int i, int i2);

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        Log.d("ASYNCH TASK", "INSIDE BG THREAD");
        NewRequestServerCallback(this.f70a, this.c, this.b, this.d);
        return null;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Void r1) {
    }

    @Override // android.os.AsyncTask
    protected void onPreExecute() {
    }
}
