package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class v extends AsyncTask {
    public v() {
        Log.d("Sound Task", "Load Sounds");
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        if (ZombieCafeAndroid.ag == null) {
            return null;
        }
        ZombieCafeAndroid.ah = true;
        ZombieCafeAndroid.ag.a(ZombieCafeAndroid.w);
        if (ZombieCafeAndroid.ag != null) {
            ZombieCafeAndroid.addSounds();
            ZombieCafeAndroid.ag.a();
        }
        ZombieCafeAndroid.ah = false;
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
