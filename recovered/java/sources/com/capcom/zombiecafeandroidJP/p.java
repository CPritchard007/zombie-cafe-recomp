package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class p extends AsyncTask {

    /* renamed from: a, reason: collision with root package name */
    String f112a;

    public p(String str) {
        this.f112a = str;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) throws IOException {
        ZombieCafeAndroid.t.a(this.f112a);
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
