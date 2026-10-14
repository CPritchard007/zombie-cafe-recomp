package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class o extends AsyncTask {
    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) {
        Log.d("----", "----");
        Log.d("ZombieCafeAndroid::InitFBTask", "INSIDE BG THREAD");
        Log.d("----", "----");
        ZombieCafeAndroid.ak = new com.capcom.a.f("305409282881599");
        ZombieCafeAndroid.V = new CapcomFacebook(ZombieCafeAndroid.ak);
        return null;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Void r3) {
        Log.d("======", "======");
        Log.d("SnoopysStreetFairActivity::InitFBTaskTask::onPostExecute", "Returned I hope");
        Log.d("======", "======");
    }

    @Override // android.os.AsyncTask
    protected void onPreExecute() {
    }
}
