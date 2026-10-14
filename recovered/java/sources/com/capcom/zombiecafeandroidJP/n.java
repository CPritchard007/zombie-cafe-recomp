package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class n extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    String f111a;
    String b;
    int c;

    public n(String str, String str2, int i) {
        this.b = "";
        this.f111a = str;
        this.b = str2;
        this.c = i;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) throws IOException {
        Log.d("inside message", "loadimage");
        ZombieCafeAndroid.t.a(this.f111a, this.b, this.c, (byte[]) null);
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
