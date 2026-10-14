package com.capcom.zombiecafeandroidJP;

import android.os.AsyncTask;
import android.util.Log;
import java.io.IOException;

/* loaded from: /Users/curtispritchard/Workspace/recomp/zombie-cafe/recovered/apk/classes.dex */
class q extends AsyncTask {
    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public Void doInBackground(String... strArr) throws IllegalStateException, IOException, IllegalArgumentException {
        Log.d("----", "----");
        Log.d("ASYNCH MUSIC TASK", "INSIDE BG THREAD");
        Log.d("---", "---");
        CC_Android cC_Android = ZombieCafeAndroid.ac;
        CC_Android.fromNative_loadMusic(0, ZombieCafeAndroid.x.GetMusicFilename(ZombieCafeAndroid.x.ai));
        CC_Android cC_Android2 = ZombieCafeAndroid.ac;
        CC_Android.fromNative_startMusic(0);
        return null;
    }

    /* JADX INFO: Access modifiers changed from: protected */
    @Override // android.os.AsyncTask
    /* renamed from: a, reason: merged with bridge method [inline-methods] */
    public void onPostExecute(Void r3) {
        Log.d("======", "======");
        Log.d("Music Task Returned", "I hope");
        Log.d("======", "======");
    }

    @Override // android.os.AsyncTask
    protected void onPreExecute() {
    }
}
